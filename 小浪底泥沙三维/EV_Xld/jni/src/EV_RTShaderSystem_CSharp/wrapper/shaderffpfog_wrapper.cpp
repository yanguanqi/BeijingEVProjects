/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderffpfog.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CFFPFogProxy : public EarthView::World::Graphic::RTShaderSystem::CFFPFog
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CFFPFogProxy(EarthView::World::Core::CNameValuePairList *pList) : CFFPFog(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFFPFog::getType();
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CFFPFog::getExecutionOrder();
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CFFPFog::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CFFPFog::copyFrom(rhs);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CFFPFog::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPFog::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPFog::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPFog::addFunctionInvocations(programSet);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPFog::createCpuSubPrograms(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CFFPFogProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::getExecutionOrder();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getExecutionOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_getExecutionOrder_int_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::getExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::updateGpuProgramsParams(rend, pass, source, pLightList);
					else
						ptrNativeObject->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::preAddToRenderState(renderState, srcPass, dstPass);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_setFogProperties_void_FogMode_CColourValue_float_float_float(void *pObjectXXXX, _in int fogMode, _in const void* fogColour, _in float fogStart, _in float fogEnd, _in float fogDensity )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					ptrNativeObject->setFogProperties((EarthView::World::Graphic::FogMode)fogMode, *(EarthView::World::Graphic::CColourValue*)fogColour, fogStart, fogEnd, fogDensity);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_setCalcMode_void_CalcMode(void *pObjectXXXX, _in int calcMode )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					ptrNativeObject->setCalcMode((EarthView::World::Graphic::RTShaderSystem::CFFPFog::CalcMode)calcMode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_getCalcMode_CalcMode(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFFPFog::CalcMode objXXXX = ptrNativeObject->getCalcMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPFog_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CFFPFog::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPFog_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CFFPFog::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					if (dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFog_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFog* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFog::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CFFPFogProxy* ptr = dynamic_cast<CFFPFogProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFog*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFog_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback)();
				class CFFPFogFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback;
				public:
					CFFPFogFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CFFPFogFactory(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFFPFogFactory::getType();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback(compiler, prop, pass, translator);
							return returnValue;
						}
						else
							return this->CFFPFogFactory::createInstance(compiler, prop, pass, translator);
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback(ser, subRenderState, srcPass, dstPass);
						}
						else
							return this->CFFPFogFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CFFPFogFactory::createInstanceImpl();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback(translator);
							return returnValue;
						}
						else
							return this->CFFPFogFactory::createOrRetrieveInstance(translator);
					}
					virtual void destroyInstance(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback(subRenderState);
						}
						else
							return this->CFFPFogFactory::destroyInstance(subRenderState);
					}
					virtual void destroyAllInstances()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback();
						}
						else
							return this->CFFPFogFactory::destroyAllInstances();
					}
				};
				REGISTER_FACTORY_CLASS(CFFPFogFactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::createInstance(compiler, prop, pass, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					else
						ptrNativeObject->writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::createInstanceImpl();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstanceImpl();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstanceImpl_CSubRenderState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory::createInstanceImpl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyInstance_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_destroyAllInstances_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback )
				{
					CFFPFogFactoryProxy* ptr = dynamic_cast<CFFPFogFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPFogFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPFogFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(pCallback);
					}
				}
			}
		}
	}
}
