/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexnormalmaplighting.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CNormalMapLightingProxy : public EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CNormalMapLightingProxy(EarthView::World::Core::CNameValuePairList *pList) : CNormalMapLighting(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNormalMapLighting::getType();
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CNormalMapLighting::getExecutionOrder();
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CNormalMapLighting::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CNormalMapLighting::copyFrom(rhs);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CNormalMapLighting::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CNormalMapLighting::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CNormalMapLighting::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CNormalMapLighting::addFunctionInvocations(programSet);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CNormalMapLighting::createCpuSubPrograms(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CNormalMapLightingProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::getExecutionOrder();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getExecutionOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getExecutionOrder_int_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::getExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::updateGpuProgramsParams(rend, pass, source, pLightList);
					else
						ptrNativeObject->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::preAddToRenderState(renderState, srcPass, dstPass);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setTexCoordIndex_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->setTexCoordIndex(index);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getTexCoordIndex_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTexCoordIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapSpace_void_NormalMapSpace(void *pObjectXXXX, _in int normalMapSpace )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->setNormalMapSpace((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::NormalMapSpace)normalMapSpace);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapSpace_NormalMapSpace(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::NormalMapSpace objXXXX = ptrNativeObject->getNormalMapSpace();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapTextureName_void_EVString(void *pObjectXXXX, _in const char* textureName )
				{
					EarthView::World::Core::ev_string textureName1 = textureName;
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->setNormalMapTextureName(textureName1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapTextureName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getNormalMapTextureName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapFiltering_void_FilterOptions_FilterOptions_FilterOptions(void *pObjectXXXX, _in const int minFilter, _in const int magFilter, _in const int mipFilter )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->setNormalMapFiltering((EarthView::World::Graphic::FilterOptions)minFilter, (EarthView::World::Graphic::FilterOptions)magFilter, (EarthView::World::Graphic::FilterOptions)mipFilter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapFiltering_void_FilterOptions_FilterOptions_FilterOptions(void *pObjectXXXX, _inout int& minFilter, _inout int& magFilter, _inout int& mipFilter )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->getNormalMapFiltering((EarthView::World::Graphic::FilterOptions&)minFilter, (EarthView::World::Graphic::FilterOptions&)magFilter, (EarthView::World::Graphic::FilterOptions&)mipFilter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapAnisotropy_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 anisotropy )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->setNormalMapAnisotropy(anisotropy);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapAnisotropy_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getNormalMapAnisotropy();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_setNormalMapMipBias_void_Real(void *pObjectXXXX, _in Real mipBias )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					ptrNativeObject->setNormalMapMipBias(mipBias);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_getNormalMapMipBias_Real(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getNormalMapMipBias();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CNormalMapLightingProxy* ptr = dynamic_cast<CNormalMapLightingProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLighting*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLighting_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback)();
				class CNormalMapLightingFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback;
				public:
					CNormalMapLightingFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CNormalMapLightingFactory(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNormalMapLightingFactory::getType();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback(compiler, prop, pass, translator);
							return returnValue;
						}
						else
							return this->CNormalMapLightingFactory::createInstance(compiler, prop, pass, translator);
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback(ser, subRenderState, srcPass, dstPass);
						}
						else
							return this->CNormalMapLightingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CNormalMapLightingFactory::createInstanceImpl();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback(translator);
							return returnValue;
						}
						else
							return this->CNormalMapLightingFactory::createOrRetrieveInstance(translator);
					}
					virtual void destroyInstance(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback(subRenderState);
						}
						else
							return this->CNormalMapLightingFactory::destroyInstance(subRenderState);
					}
					virtual void destroyAllInstances()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback();
						}
						else
							return this->CNormalMapLightingFactory::destroyAllInstances();
					}
				};
				REGISTER_FACTORY_CLASS(CNormalMapLightingFactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::createInstance(compiler, prop, pass, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					else
						ptrNativeObject->writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					if (dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::createInstanceImpl();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstanceImpl();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstanceImpl_CSubRenderState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory::createInstanceImpl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyInstance_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_destroyAllInstances_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback )
				{
					CNormalMapLightingFactoryProxy* ptr = dynamic_cast<CNormalMapLightingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CNormalMapLightingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CNormalMapLightingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(pCallback);
					}
				}
			}
		}
	}
}
