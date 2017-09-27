/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexdualquaternionskinning.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* hardSkin);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CDualQuaternionSkinningProxy : public EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback* m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback;
					EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CDualQuaternionSkinningProxy(EarthView::World::Core::CNameValuePairList *pList) : CDualQuaternionSkinning(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique(EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CDualQuaternionSkinning::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CDualQuaternionSkinning::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CDualQuaternionSkinning::addFunctionInvocations(programSet);
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* hardSkin)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback(hardSkin);
						}
						else
							return this->CDualQuaternionSkinning::copyFrom(hardSkin);
					}
				};
				REGISTER_FACTORY_CLASS(CDualQuaternionSkinningProxy);
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX;
					if (dynamic_cast<CDualQuaternionSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CDualQuaternionSkinningProxy* ptr = dynamic_cast<CDualQuaternionSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX;
					if (dynamic_cast<CDualQuaternionSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CDualQuaternionSkinningProxy* ptr = dynamic_cast<CDualQuaternionSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX;
					if (dynamic_cast<CDualQuaternionSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CDualQuaternionSkinningProxy* ptr = dynamic_cast<CDualQuaternionSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique_Callback* pCallback )
				{
					CDualQuaternionSkinningProxy* ptr = dynamic_cast<CDualQuaternionSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CDualQuaternionSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CDualQuaternionSkinning_copyFrom_void_CHardwareSkinningTechnique(pCallback);
					}
				}
			}
		}
	}
}
