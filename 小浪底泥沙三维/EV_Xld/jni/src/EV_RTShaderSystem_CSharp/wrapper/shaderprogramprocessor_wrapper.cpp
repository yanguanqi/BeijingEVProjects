/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderprogramprocessor.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback)();
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CFunction* vsMain, _in EarthView::World::Graphic::RTShaderSystem::CFunction* fsMain);
				class CProgramProcessorProxy : public EarthView::World::Graphic::RTShaderSystem::CProgramProcessor
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback* m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback;
				public:
					CProgramProcessorProxy(EarthView::World::Core::CNameValuePairList *pList) : CProgramProcessor(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString(EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction(EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback = pCallback;
					}
					virtual EVString getTargetLanguage() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback();
							return returnValue;
						}
						else
							return this->CProgramProcessor::getTargetLanguage();
					}
					virtual bool preCreateGpuPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CProgramProcessor::preCreateGpuPrograms(programSet);
					}
					virtual bool postCreateGpuPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CProgramProcessor::postCreateGpuPrograms(programSet);
					}
					virtual bool compactVsOutputs(_in EarthView::World::Graphic::RTShaderSystem::CFunction* vsMain, _in EarthView::World::Graphic::RTShaderSystem::CFunction* fsMain)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback(vsMain, fsMain);
							return returnValue;
						}
						else
							return this->CProgramProcessor::compactVsOutputs(vsMain, fsMain);
					}
				};
				REGISTER_FACTORY_CLASS(CProgramProcessorProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					if (dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::getTargetLanguage();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getTargetLanguage();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_Callback* pCallback )
				{
					CProgramProcessorProxy* ptr = dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_getTargetLanguage_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::getTargetLanguage();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					if (dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::preCreateGpuPrograms(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preCreateGpuPrograms(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CProgramProcessorProxy* ptr = dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_preCreateGpuPrograms_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::preCreateGpuPrograms(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					if (dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::postCreateGpuPrograms(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->postCreateGpuPrograms(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CProgramProcessorProxy* ptr = dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_postCreateGpuPrograms_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::postCreateGpuPrograms(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* vsMain, _in EarthView::World::Graphic::RTShaderSystem::CFunction* fsMain )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					if (dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::compactVsOutputs(vsMain, fsMain);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->compactVsOutputs(vsMain, fsMain);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_Callback* pCallback )
				{
					CProgramProcessorProxy* ptr = dynamic_cast<CProgramProcessorProxy*>((EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CProgramProcessor_compactVsOutputs_bool_CFunction_CFunction_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* vsMain, _in EarthView::World::Graphic::RTShaderSystem::CFunction* fsMain )
				{
					EarthView::World::Graphic::RTShaderSystem::CProgramProcessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CProgramProcessor*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CProgramProcessor::compactVsOutputs(vsMain, fsMain);
					return objXXXX;
				}
			}
		}
	}
}
