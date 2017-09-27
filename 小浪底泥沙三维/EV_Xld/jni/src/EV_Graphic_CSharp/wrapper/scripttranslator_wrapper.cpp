/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scripttranslator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback)();
			class CScriptTranslatorProxy : public EarthView::World::Graphic::CScriptTranslator
			{
			private:
				EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback;
			public:
				CScriptTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptTranslator(pList)
				{
					m_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CScriptTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CScriptTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CScriptTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslator*) pObjectXXXX;
				if (dynamic_cast<CScriptTranslatorProxy*>((EarthView::World::Graphic::CScriptTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CScriptTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CScriptTranslatorProxy* ptr = dynamic_cast<CScriptTranslatorProxy*>((EarthView::World::Graphic::CScriptTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CScriptTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CScriptTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslator*) pObjectXXXX;
				if (dynamic_cast<CScriptTranslatorProxy*>((EarthView::World::Graphic::CScriptTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CScriptTranslatorProxy* ptr = dynamic_cast<CScriptTranslatorProxy*>((EarthView::World::Graphic::CScriptTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CScriptTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CScriptTranslator* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptTranslator::clone();
				return objXXXX;
			}
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback)();
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback)(_in const void* nodes);
			class CScriptTranslatorManagerProxy : public EarthView::World::Graphic::CScriptTranslatorManager
			{
			private:
				EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* m_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback;
				EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback;
			public:
				CScriptTranslatorManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptTranslatorManager(pList)
				{
					m_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t(EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback = pCallback;
				}
				virtual ev_size_t getNumTranslators() const
				{
					if(m_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CScriptTranslatorManager::getNumTranslators();
				}
				virtual EarthView::World::Graphic::CScriptTranslator* getTranslator(_in const EarthView::World::Graphic::AbstractNodePtr& nodes)
				{
					if(m_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback(&nodes);
						return returnValue;
					}
					else
						return this->CScriptTranslatorManager::getTranslator(nodes);
				}
			};
			REGISTER_FACTORY_CLASS(CScriptTranslatorManagerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getSingleton_CScriptTranslatorManager( )
			{
				EarthView::World::Graphic::CScriptTranslatorManager& objXXXX = EarthView::World::Graphic::CScriptTranslatorManager::getSingleton();
				EarthView::World::Graphic::CScriptTranslatorManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslatorManager*  _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getSingletonPtr_CScriptTranslatorManager( )
			{
				EarthView::World::Graphic::CScriptTranslatorManager* objXXXX = EarthView::World::Graphic::CScriptTranslatorManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjectXXXX;
				if (dynamic_cast<CScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CScriptTranslatorManager*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptTranslatorManager::getNumTranslators();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getNumTranslators();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* pCallback )
			{
				CScriptTranslatorManagerProxy* ptr = dynamic_cast<CScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CScriptTranslatorManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptTranslatorManager::getNumTranslators();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(void *pObjectXXXX, _in const void* nodes )
			{
				EarthView::World::Graphic::CScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjectXXXX;
				if (dynamic_cast<CScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CScriptTranslatorManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptTranslatorManager::getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)nodes);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)nodes);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* pCallback )
			{
				CScriptTranslatorManagerProxy* ptr = dynamic_cast<CScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CScriptTranslatorManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in const void* nodes )
			{
				EarthView::World::Graphic::CScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CScriptTranslatorManager*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CScriptTranslatorManager::getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)nodes);
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback)();
			class CMaterialTranslatorProxy : public EarthView::World::Graphic::CMaterialTranslator
			{
			private:
				EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback;
			public:
				CMaterialTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CMaterialTranslator(pList)
				{
					m_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CMaterialTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CMaterialTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CMaterialTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CMaterialTranslator* ptrNativeObject = (EarthView::World::Graphic::CMaterialTranslator*) pObjectXXXX;
				if (dynamic_cast<CMaterialTranslatorProxy*>((EarthView::World::Graphic::CMaterialTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterialTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CMaterialTranslatorProxy* ptr = dynamic_cast<CMaterialTranslatorProxy*>((EarthView::World::Graphic::CMaterialTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CMaterialTranslator* ptrNativeObject = (EarthView::World::Graphic::CMaterialTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterialTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterialTranslator* ptrNativeObject = (EarthView::World::Graphic::CMaterialTranslator*) pObjectXXXX;
				if (dynamic_cast<CMaterialTranslatorProxy*>((EarthView::World::Graphic::CMaterialTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMaterialTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CMaterialTranslatorProxy* ptr = dynamic_cast<CMaterialTranslatorProxy*>((EarthView::World::Graphic::CMaterialTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CMaterialTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterialTranslator* ptrNativeObject = (EarthView::World::Graphic::CMaterialTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMaterialTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback)();
			class CTechniqueTranslatorProxy : public EarthView::World::Graphic::CTechniqueTranslator
			{
			private:
				EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback;
			public:
				CTechniqueTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTechniqueTranslator(pList)
				{
					m_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CTechniqueTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CTechniqueTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CTechniqueTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CTechniqueTranslator*) pObjectXXXX;
				if (dynamic_cast<CTechniqueTranslatorProxy*>((EarthView::World::Graphic::CTechniqueTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTechniqueTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CTechniqueTranslatorProxy* ptr = dynamic_cast<CTechniqueTranslatorProxy*>((EarthView::World::Graphic::CTechniqueTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CTechniqueTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTechniqueTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CTechniqueTranslator*) pObjectXXXX;
				if (dynamic_cast<CTechniqueTranslatorProxy*>((EarthView::World::Graphic::CTechniqueTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTechniqueTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CTechniqueTranslatorProxy* ptr = dynamic_cast<CTechniqueTranslatorProxy*>((EarthView::World::Graphic::CTechniqueTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CTechniqueTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CTechniqueTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTechniqueTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback)();
			class CPassTranslatorProxy : public EarthView::World::Graphic::CPassTranslator
			{
			private:
				EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback;
			public:
				CPassTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CPassTranslator(pList)
				{
					m_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CPassTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CPassTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CPassTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CPassTranslator*) pObjectXXXX;
				if (dynamic_cast<CPassTranslatorProxy*>((EarthView::World::Graphic::CPassTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPassTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CPassTranslatorProxy* ptr = dynamic_cast<CPassTranslatorProxy*>((EarthView::World::Graphic::CPassTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CPassTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPassTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CPassTranslator*) pObjectXXXX;
				if (dynamic_cast<CPassTranslatorProxy*>((EarthView::World::Graphic::CPassTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CPassTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CPassTranslatorProxy* ptr = dynamic_cast<CPassTranslatorProxy*>((EarthView::World::Graphic::CPassTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CPassTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CPassTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CPassTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback)();
			class CTextureUnitTranslatorProxy : public EarthView::World::Graphic::CTextureUnitTranslator
			{
			private:
				EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback;
			public:
				CTextureUnitTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureUnitTranslator(pList)
				{
					m_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CTextureUnitTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CTextureUnitTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CTextureUnitTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CTextureUnitTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjectXXXX;
				if (dynamic_cast<CTextureUnitTranslatorProxy*>((EarthView::World::Graphic::CTextureUnitTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureUnitTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CTextureUnitTranslatorProxy* ptr = dynamic_cast<CTextureUnitTranslatorProxy*>((EarthView::World::Graphic::CTextureUnitTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CTextureUnitTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureUnitTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjectXXXX;
				if (dynamic_cast<CTextureUnitTranslatorProxy*>((EarthView::World::Graphic::CTextureUnitTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureUnitTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CTextureUnitTranslatorProxy* ptr = dynamic_cast<CTextureUnitTranslatorProxy*>((EarthView::World::Graphic::CTextureUnitTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CTextureUnitTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureUnitTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback)();
			class CTextureSourceTranslatorProxy : public EarthView::World::Graphic::CTextureSourceTranslator
			{
			private:
				EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback;
			public:
				CTextureSourceTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureSourceTranslator(pList)
				{
					m_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CTextureSourceTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CTextureSourceTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CTextureSourceTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CTextureSourceTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjectXXXX;
				if (dynamic_cast<CTextureSourceTranslatorProxy*>((EarthView::World::Graphic::CTextureSourceTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureSourceTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CTextureSourceTranslatorProxy* ptr = dynamic_cast<CTextureSourceTranslatorProxy*>((EarthView::World::Graphic::CTextureSourceTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureSourceTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CTextureSourceTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureSourceTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureSourceTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjectXXXX;
				if (dynamic_cast<CTextureSourceTranslatorProxy*>((EarthView::World::Graphic::CTextureSourceTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureSourceTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CTextureSourceTranslatorProxy* ptr = dynamic_cast<CTextureSourceTranslatorProxy*>((EarthView::World::Graphic::CTextureSourceTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CTextureSourceTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureSourceTranslator* ptrNativeObject = (EarthView::World::Graphic::CTextureSourceTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureSourceTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback)();
			class CGpuProgramTranslatorProxy : public EarthView::World::Graphic::CGpuProgramTranslator
			{
			private:
				EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback;
			public:
				CGpuProgramTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CGpuProgramTranslator(pList)
				{
					m_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CGpuProgramTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CGpuProgramTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CGpuProgramTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CGpuProgramTranslator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramTranslatorProxy*>((EarthView::World::Graphic::CGpuProgramTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CGpuProgramTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CGpuProgramTranslatorProxy* ptr = dynamic_cast<CGpuProgramTranslatorProxy*>((EarthView::World::Graphic::CGpuProgramTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CGpuProgramTranslator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CGpuProgramTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramTranslator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjectXXXX;
				if (dynamic_cast<CGpuProgramTranslatorProxy*>((EarthView::World::Graphic::CGpuProgramTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgramTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CGpuProgramTranslatorProxy* ptr = dynamic_cast<CGpuProgramTranslatorProxy*>((EarthView::World::Graphic::CGpuProgramTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CGpuProgramTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CGpuProgramTranslator* ptrNativeObject = (EarthView::World::Graphic::CGpuProgramTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CGpuProgramTranslator::clone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CGpuProgramTranslator_translateProgramParameters_void_CScriptCompiler_GpuProgramParametersSharedPtr_CObjectAbstractNode(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in void* parameters, _in EarthView::World::Graphic::CObjectAbstractNode* obj )
			{
				EarthView::World::Graphic::CGpuProgramTranslator::translateProgramParameters(compiler, *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)parameters, obj);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback)();
			class CSharedParamsTranslatorProxy : public EarthView::World::Graphic::CSharedParamsTranslator
			{
			private:
				EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback;
			public:
				CSharedParamsTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CSharedParamsTranslator(pList)
				{
					m_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CSharedParamsTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CSharedParamsTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CSharedParamsTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CSharedParamsTranslator* ptrNativeObject = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjectXXXX;
				if (dynamic_cast<CSharedParamsTranslatorProxy*>((EarthView::World::Graphic::CSharedParamsTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSharedParamsTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CSharedParamsTranslatorProxy* ptr = dynamic_cast<CSharedParamsTranslatorProxy*>((EarthView::World::Graphic::CSharedParamsTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSharedParamsTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CSharedParamsTranslator* ptrNativeObject = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSharedParamsTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSharedParamsTranslator* ptrNativeObject = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjectXXXX;
				if (dynamic_cast<CSharedParamsTranslatorProxy*>((EarthView::World::Graphic::CSharedParamsTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSharedParamsTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CSharedParamsTranslatorProxy* ptr = dynamic_cast<CSharedParamsTranslatorProxy*>((EarthView::World::Graphic::CSharedParamsTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CSharedParamsTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSharedParamsTranslator* ptrNativeObject = (EarthView::World::Graphic::CSharedParamsTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSharedParamsTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback)();
			class CParticleSystemTranslatorProxy : public EarthView::World::Graphic::CParticleSystemTranslator
			{
			private:
				EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback;
			public:
				CParticleSystemTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemTranslator(pList)
				{
					m_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CParticleSystemTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CParticleSystemTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CParticleSystemTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemTranslatorProxy*>((EarthView::World::Graphic::CParticleSystemTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CParticleSystemTranslatorProxy* ptr = dynamic_cast<CParticleSystemTranslatorProxy*>((EarthView::World::Graphic::CParticleSystemTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CParticleSystemTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemTranslatorProxy*>((EarthView::World::Graphic::CParticleSystemTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CParticleSystemTranslatorProxy* ptr = dynamic_cast<CParticleSystemTranslatorProxy*>((EarthView::World::Graphic::CParticleSystemTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CParticleSystemTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback)();
			class CParticleEmitterTranslatorProxy : public EarthView::World::Graphic::CParticleEmitterTranslator
			{
			private:
				EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback;
			public:
				CParticleEmitterTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleEmitterTranslator(pList)
				{
					m_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CParticleEmitterTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CParticleEmitterTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CParticleEmitterTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CParticleEmitterTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjectXXXX;
				if (dynamic_cast<CParticleEmitterTranslatorProxy*>((EarthView::World::Graphic::CParticleEmitterTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleEmitterTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CParticleEmitterTranslatorProxy* ptr = dynamic_cast<CParticleEmitterTranslatorProxy*>((EarthView::World::Graphic::CParticleEmitterTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleEmitterTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CParticleEmitterTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleEmitterTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleEmitterTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjectXXXX;
				if (dynamic_cast<CParticleEmitterTranslatorProxy*>((EarthView::World::Graphic::CParticleEmitterTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleEmitterTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CParticleEmitterTranslatorProxy* ptr = dynamic_cast<CParticleEmitterTranslatorProxy*>((EarthView::World::Graphic::CParticleEmitterTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CParticleEmitterTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleEmitterTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleEmitterTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleEmitterTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback)();
			class CParticleAffectorTranslatorProxy : public EarthView::World::Graphic::CParticleAffectorTranslator
			{
			private:
				EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback;
			public:
				CParticleAffectorTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleAffectorTranslator(pList)
				{
					m_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CParticleAffectorTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CParticleAffectorTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CParticleAffectorTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CParticleAffectorTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjectXXXX;
				if (dynamic_cast<CParticleAffectorTranslatorProxy*>((EarthView::World::Graphic::CParticleAffectorTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleAffectorTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CParticleAffectorTranslatorProxy* ptr = dynamic_cast<CParticleAffectorTranslatorProxy*>((EarthView::World::Graphic::CParticleAffectorTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleAffectorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CParticleAffectorTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleAffectorTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleAffectorTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjectXXXX;
				if (dynamic_cast<CParticleAffectorTranslatorProxy*>((EarthView::World::Graphic::CParticleAffectorTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleAffectorTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CParticleAffectorTranslatorProxy* ptr = dynamic_cast<CParticleAffectorTranslatorProxy*>((EarthView::World::Graphic::CParticleAffectorTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CParticleAffectorTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleAffectorTranslator* ptrNativeObject = (EarthView::World::Graphic::CParticleAffectorTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleAffectorTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback)();
			class CCompositorTranslatorProxy : public EarthView::World::Graphic::CCompositorTranslator
			{
			private:
				EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback;
			public:
				CCompositorTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorTranslator(pList)
				{
					m_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CCompositorTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CCompositorTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CCompositorTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositorTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositorTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositorTranslatorProxy*>((EarthView::World::Graphic::CCompositorTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CCompositorTranslatorProxy* ptr = dynamic_cast<CCompositorTranslatorProxy*>((EarthView::World::Graphic::CCompositorTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositorTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositorTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositorTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositorTranslatorProxy*>((EarthView::World::Graphic::CCompositorTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositorTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CCompositorTranslatorProxy* ptr = dynamic_cast<CCompositorTranslatorProxy*>((EarthView::World::Graphic::CCompositorTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositorTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositorTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositorTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback)();
			class CCompositionTechniqueTranslatorProxy : public EarthView::World::Graphic::CCompositionTechniqueTranslator
			{
			private:
				EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback;
			public:
				CCompositionTechniqueTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionTechniqueTranslator(pList)
				{
					m_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CCompositionTechniqueTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CCompositionTechniqueTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CCompositionTechniqueTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionTechniqueTranslatorProxy*>((EarthView::World::Graphic::CCompositionTechniqueTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositionTechniqueTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CCompositionTechniqueTranslatorProxy* ptr = dynamic_cast<CCompositionTechniqueTranslatorProxy*>((EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechniqueTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositionTechniqueTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionTechniqueTranslatorProxy*>((EarthView::World::Graphic::CCompositionTechniqueTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionTechniqueTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CCompositionTechniqueTranslatorProxy* ptr = dynamic_cast<CCompositionTechniqueTranslatorProxy*>((EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionTechniqueTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechniqueTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechniqueTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionTechniqueTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback)();
			class CCompositionTargetPassTranslatorProxy : public EarthView::World::Graphic::CCompositionTargetPassTranslator
			{
			private:
				EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback;
			public:
				CCompositionTargetPassTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionTargetPassTranslator(pList)
				{
					m_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CCompositionTargetPassTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CCompositionTargetPassTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CCompositionTargetPassTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionTargetPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionTargetPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionTargetPassTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositionTargetPassTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CCompositionTargetPassTranslatorProxy* ptr = dynamic_cast<CCompositionTargetPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTargetPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionTargetPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositionTargetPassTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionTargetPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionTargetPassTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionTargetPassTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CCompositionTargetPassTranslatorProxy* ptr = dynamic_cast<CCompositionTargetPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionTargetPassTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTargetPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTargetPassTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionTargetPassTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback)();
			class CCompositionPassTranslatorProxy : public EarthView::World::Graphic::CCompositionPassTranslator
			{
			private:
				EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback;
			public:
				CCompositionPassTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionPassTranslator(pList)
				{
					m_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CCompositionPassTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CCompositionPassTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CCompositionPassTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositionPassTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CCompositionPassTranslatorProxy* ptr = dynamic_cast<CCompositionPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPassTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositionPassTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionPassTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CCompositionPassTranslatorProxy* ptr = dynamic_cast<CCompositionPassTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionPassTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPassTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionPassTranslator::clone();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node);
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback)();
			class CCompositionPassStencilTranslatorProxy : public EarthView::World::Graphic::CCompositionPassStencilTranslator
			{
			private:
				EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback;
				EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback* m_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback;
			public:
				CCompositionPassStencilTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionPassStencilTranslator(pList)
				{
					m_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = NULL;
					m_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr(EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator(EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback = pCallback;
				}
				virtual void translate(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback(compiler, &node);
					}
					else
						return this->CCompositionPassStencilTranslator::translate(compiler, node);
				}
				virtual EarthView::World::Graphic::CScriptTranslator* clone()
				{
					if(m_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback();
						return returnValue;
					}
					else
						return this->CCompositionPassStencilTranslator::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CCompositionPassStencilTranslatorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionPassStencilTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionPassStencilTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassStencilTranslator*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositionPassStencilTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
				else
					ptrNativeObject->translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_Callback* pCallback )
			{
				CCompositionPassStencilTranslatorProxy* ptr = dynamic_cast<CCompositionPassStencilTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionPassStencilTranslator_translate_void_CScriptCompiler_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in const void* node )
			{
				EarthView::World::Graphic::CCompositionPassStencilTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositionPassStencilTranslator::translate(compiler, *(EarthView::World::Graphic::AbstractNodePtr*)node);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPassStencilTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjectXXXX;
				if (dynamic_cast<CCompositionPassStencilTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassStencilTranslator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionPassStencilTranslator::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_Callback* pCallback )
			{
				CCompositionPassStencilTranslatorProxy* ptr = dynamic_cast<CCompositionPassStencilTranslatorProxy*>((EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CCompositionPassStencilTranslator_clone_CScriptTranslator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionPassStencilTranslator* ptrNativeObject = (EarthView::World::Graphic::CCompositionPassStencilTranslator*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionPassStencilTranslator::clone();
				return objXXXX;
			}
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback)();
			typedef EarthView::World::Graphic::CScriptTranslator*  ( _stdcall EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback)(_in const void* nodes);
			class CBuiltinScriptTranslatorManagerProxy : public EarthView::World::Graphic::CBuiltinScriptTranslatorManager
			{
			private:
				EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback;
				EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback;
			public:
				CBuiltinScriptTranslatorManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBuiltinScriptTranslatorManager(pList)
				{
					m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t(EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback = pCallback;
				}
				virtual ev_size_t getNumTranslators() const
				{
					if(m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CBuiltinScriptTranslatorManager::getNumTranslators();
				}
				virtual EarthView::World::Graphic::CScriptTranslator* getTranslator(_in const EarthView::World::Graphic::AbstractNodePtr& node)
				{
					if(m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CScriptTranslator* returnValue = m_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback(&node);
						return returnValue;
					}
					else
						return this->CBuiltinScriptTranslatorManager::getTranslator(node);
				}
			};
			REGISTER_FACTORY_CLASS(CBuiltinScriptTranslatorManagerProxy);
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBuiltinScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjectXXXX;
				if (dynamic_cast<CBuiltinScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CBuiltinScriptTranslatorManager*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getNumTranslators();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getNumTranslators();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_Callback* pCallback )
			{
				CBuiltinScriptTranslatorManagerProxy* ptr = dynamic_cast<CBuiltinScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getNumTranslators_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBuiltinScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getNumTranslators();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(void *pObjectXXXX, _in const void* node )
			{
				EarthView::World::Graphic::CBuiltinScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjectXXXX;
				if (dynamic_cast<CBuiltinScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CBuiltinScriptTranslatorManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)node);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)node);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr( void *pObjectXXXX, EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_Callback* pCallback )
			{
				CBuiltinScriptTranslatorManagerProxy* ptr = dynamic_cast<CBuiltinScriptTranslatorManagerProxy*>((EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptTranslator*  _stdcall EarthView_World_Graphic_CBuiltinScriptTranslatorManager_getTranslator_CScriptTranslator_AbstractNodePtr_NoVirtual(void *pObjectXXXX, _in const void* node )
			{
				EarthView::World::Graphic::CBuiltinScriptTranslatorManager* ptrNativeObject = (EarthView::World::Graphic::CBuiltinScriptTranslatorManager*) pObjectXXXX;
				EarthView::World::Graphic::CScriptTranslator* objXXXX = ptrNativeObject->EarthView::World::Graphic::CBuiltinScriptTranslatorManager::getTranslator(*(EarthView::World::Graphic::AbstractNodePtr*)node);
				return objXXXX;
			}
		}
	}
}
