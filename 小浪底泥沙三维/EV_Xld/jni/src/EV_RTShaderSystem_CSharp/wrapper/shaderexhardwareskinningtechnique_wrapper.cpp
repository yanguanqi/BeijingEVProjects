/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexhardwareskinningtechnique.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* hardSkin);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CHardwareSkinningTechniqueProxy : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CHardwareSkinningTechniqueProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareSkinningTechnique(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* hardSkin)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback(hardSkin);
						}
						else
							return this->CHardwareSkinningTechnique::copyFrom(hardSkin);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CHardwareSkinningTechnique::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CHardwareSkinningTechnique::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CHardwareSkinningTechnique::addFunctionInvocations(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CHardwareSkinningTechniqueProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* hardSkin )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::copyFrom(hardSkin);
					else
						ptrNativeObject->copyFrom(hardSkin);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_Callback* pCallback )
				{
					CHardwareSkinningTechniqueProxy* ptr = dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_copyFrom_void_CHardwareSkinningTechnique_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* hardSkin )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::copyFrom(hardSkin);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_setHardwareSkinningParam_void_ev_uint16_ev_uint16_bool_bool(void *pObjectXXXX, _in ev_uint16 boneCount, _in ev_uint16 weightCount, _in bool correctAntipodalityHandling, _in bool scalingShearingSupport )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					ptrNativeObject->setHardwareSkinningParam(boneCount, weightCount, correctAntipodalityHandling, scalingShearingSupport);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_setHardwareSkinningParam_void_ev_uint16_ev_uint16_bool(void *pObjectXXXX, _in ev_uint16 boneCount, _in ev_uint16 weightCount, _in bool correctAntipodalityHandling )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					ptrNativeObject->setHardwareSkinningParam(boneCount, weightCount, correctAntipodalityHandling);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_setHardwareSkinningParam_void_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 boneCount, _in ev_uint16 weightCount )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					ptrNativeObject->setHardwareSkinningParam(boneCount, weightCount);
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_getBoneCount_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getBoneCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_getWeightCount_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getWeightCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_hasCorrectAntipodalityHandling_bool(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasCorrectAntipodalityHandling();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_hasScalingShearingSupport_bool(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasScalingShearingSupport();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_setDoBoneCalculations_void_bool(void *pObjectXXXX, _in bool doBoneCalculations )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					ptrNativeObject->setDoBoneCalculations(doBoneCalculations);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CHardwareSkinningTechniqueProxy* ptr = dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CHardwareSkinningTechniqueProxy* ptr = dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CHardwareSkinningTechniqueProxy* ptr = dynamic_cast<CHardwareSkinningTechniqueProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningTechnique_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningTechnique::addFunctionInvocations(programSet);
					return objXXXX;
				}
			}
		}
	}
}
