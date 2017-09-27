/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particlesystemmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef const void*  ( _stdcall EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& groupName);
			typedef Real  ( _stdcall EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback)();
			class CParticleSystemManagerProxy : public EarthView::World::Graphic::CParticleSystemManager
			{
			private:
				EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback* m_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback;
				EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback* m_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback;
			public:
				CParticleSystemManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemManager(pList)
				{
					m_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector(EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString(EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real(EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback = pCallback;
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Core::StringVector& returnValue = *(EarthView::World::Core::StringVector*)m_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemManager::getScriptPatterns();
				}
				virtual void parseScript(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback(&stream, groupName_Char);
					}
					else
						return this->CParticleSystemManager::parseScript(stream, groupName);
				}
				virtual Real getLoadingOrder() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemManager::getLoadingOrder();
				}
			};
			REGISTER_FACTORY_CLASS(CParticleSystemManagerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_push_ev_bool_EVString_CParticleSystem(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CParticleSystem*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_OperatorIndex_CParticleSystem_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap& objYYYY = *(EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_get_CParticleSystem_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleTemplateMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_push_ev_bool_EVString_CParticleAffectorFactory(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CParticleAffectorFactory*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffectorFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_OperatorIndex_CParticleAffectorFactory_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap& objYYYY = *(EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffectorFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_get_CParticleAffectorFactory_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjectXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_push_ev_bool_EVString_CParticleEmitterFactory(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CParticleEmitterFactory*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitterFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_OperatorIndex_CParticleEmitterFactory_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap& objYYYY = *(EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitterFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_get_CParticleEmitterFactory_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjectXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_push_ev_bool_EVString_CParticleSystemRendererFactory(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CParticleSystemRendererFactory*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRendererFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_OperatorIndex_CParticleSystemRendererFactory_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap& objYYYY = *(EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRendererFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_get_CParticleSystemRendererFactory_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemRendererFactoryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_addEmitterFactory_void_CParticleEmitterFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleEmitterFactory* ref_factory )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->addEmitterFactory(ref_factory);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_addAffectorFactory_void_CParticleAffectorFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleAffectorFactory* ref_factory )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->addAffectorFactory(ref_factory);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_addRendererFactory_void_CParticleSystemRendererFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystemRendererFactory* ref_factory )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->addRendererFactory(ref_factory);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_addTemplate_void_EVString_CParticleSystem(void *pObjectXXXX, _in const char* name, _in EarthView::World::Graphic::CParticleSystem* ref_sysTemplate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->addTemplate(name1, ref_sysTemplate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_removeTemplate_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool deleteTemplate )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->removeTemplate(name1, deleteTemplate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_removeTemplate_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->removeTemplate(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_removeAllTemplates_void_ev_bool(void *pObjectXXXX, _in ev_bool deleteTemplate )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->removeAllTemplates(deleteTemplate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_removeAllTemplates_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->removeAllTemplates();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_removeTemplatesByResourceGroup_void_EVString(void *pObjectXXXX, _in const char* resourceGroup )
			{
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->removeTemplatesByResourceGroup(resourceGroup1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall EarthView_World_Graphic_CParticleSystemManager_createTemplate_CParticleSystem_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* resourceGroup )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = ptrNativeObject->createTemplate(name1, resourceGroup1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getTemplate_CParticleSystem_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = ptrNativeObject->getTemplate(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitter*  _stdcall EarthView_World_Graphic_CParticleSystemManager__createEmitter_CParticleEmitter_EVString_CParticleSystem(void *pObjectXXXX, _in const char* emitterType, _in EarthView::World::Graphic::CParticleSystem* psys )
			{
				EarthView::World::Core::ev_string emitterType1 = emitterType;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleEmitter* objXXXX = ptrNativeObject->_createEmitter(emitterType1, psys);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager__destroyEmitter_void_CParticleEmitter(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleEmitter* emitter )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->_destroyEmitter(emitter);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffector*  _stdcall EarthView_World_Graphic_CParticleSystemManager__createAffector_CParticleAffector_EVString_CParticleSystem(void *pObjectXXXX, _in const char* affectorType, _in EarthView::World::Graphic::CParticleSystem* psys )
			{
				EarthView::World::Core::ev_string affectorType1 = affectorType;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleAffector* objXXXX = ptrNativeObject->_createAffector(affectorType1, psys);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager__destroyAffector_void_CParticleAffector(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleAffector* affector )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->_destroyAffector(affector);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRenderer*  _stdcall EarthView_World_Graphic_CParticleSystemManager__createRenderer_CParticleSystemRenderer_EVString(void *pObjectXXXX, _in const char* rendererType )
			{
				EarthView::World::Core::ev_string rendererType1 = rendererType;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRenderer* objXXXX = ptrNativeObject->_createRenderer(rendererType1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager__destroyRenderer_void_CParticleSystemRenderer(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystemRenderer* renderer )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->_destroyRenderer(renderer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager__initialise_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->_initialise();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemManagerProxy*>((EarthView::World::Graphic::CParticleSystemManager*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemManager::getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->getScriptPatterns();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_Callback* pCallback )
			{
				CParticleSystemManagerProxy* ptr = dynamic_cast<CParticleSystemManagerProxy*>((EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getScriptPatterns_StringVector_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemManager::getScriptPatterns();
				const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemManagerProxy*>((EarthView::World::Graphic::CParticleSystemManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemManager::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
				else
					ptrNativeObject->parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				CParticleSystemManagerProxy* ptr = dynamic_cast<CParticleSystemManagerProxy*>((EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_parseScript_void_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _inout void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemManager::parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemManagerProxy*>((EarthView::World::Graphic::CParticleSystemManager*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemManager::getLoadingOrder();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getLoadingOrder();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_Callback* pCallback )
			{
				CParticleSystemManagerProxy* ptr = dynamic_cast<CParticleSystemManagerProxy*>((EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CParticleSystemManager_getLoadingOrder_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemManager::getLoadingOrder();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleAffectorFactoryPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleAffectorFactoryPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffectorFactory*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleAffectorFactoryPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*) pObjectXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleAffectorFactoryPair_second( void *pObjectXXXX, EarthView::World::Graphic::CParticleAffectorFactory*  value )
			{
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffectorFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_nextValue_CParticleAffectorFactory(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffectorFactory**  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_nextValuePtr_CParticleAffectorFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleAffectorFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_next_CParticleAffectorFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleAffectorFactory* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_getBegin_StringParticleAffectorFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_getEnd_StringParticleAffectorFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleAffectorFactoryIterator_getCurrent_StringParticleAffectorFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleEmitterFactoryPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleEmitterFactoryPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitterFactory*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleEmitterFactoryPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*) pObjectXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleEmitterFactoryPair_second( void *pObjectXXXX, EarthView::World::Graphic::CParticleEmitterFactory*  value )
			{
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitterFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_nextValue_CParticleEmitterFactory(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitterFactory**  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_nextValuePtr_CParticleEmitterFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleEmitterFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_next_CParticleEmitterFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleEmitterFactory* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_getBegin_StringParticleEmitterFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_getEnd_StringParticleEmitterFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleEmitterFactoryIterator_getCurrent_StringParticleEmitterFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleSystemRendererFactoryPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleSystemRendererFactoryPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRendererFactory*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleSystemRendererFactoryPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleSystemRendererFactoryPair_second( void *pObjectXXXX, EarthView::World::Graphic::CParticleSystemRendererFactory*  value )
			{
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRendererFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_nextValue_CParticleSystemRendererFactory(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRendererFactory**  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_nextValuePtr_CParticleSystemRendererFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemRendererFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_next_CParticleSystemRendererFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemRendererFactory* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_getBegin_StringParticleSystemRendererFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_getEnd_StringParticleSystemRendererFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleRendererFactoryIterator_getCurrent_StringParticleSystemRendererFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getAffectorFactoryIterator_ParticleAffectorFactoryIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator objXXXX = ptrNativeObject->getAffectorFactoryIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator *pXXXX = new EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getEmitterFactoryIterator_ParticleEmitterFactoryIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator objXXXX = ptrNativeObject->getEmitterFactoryIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator *pXXXX = new EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getRendererFactoryIterator_ParticleRendererFactoryIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator objXXXX = ptrNativeObject->getRendererFactoryIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator *pXXXX = new EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleTemplateMapPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleTemplateMapPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall Get_EarthView_World_Graphic_CParticleSystemManager_StringParticleTemplateMapPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemManager_StringParticleTemplateMapPair_second( void *pObjectXXXX, EarthView::World::Graphic::CParticleSystem*  value )
			{
				((EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_nextValue_CParticleSystem(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem**  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_nextValuePtr_CParticleSystem(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystem*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_next_CParticleSystem(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystem* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_getBegin_StringParticleTemplateMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_getEnd_StringParticleTemplateMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_ParticleSystemTemplateIterator_getCurrent_StringParticleTemplateMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getTemplateIterator_ParticleSystemTemplateIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator objXXXX = ptrNativeObject->getTemplateIterator();
				EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator *pXXXX = new EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemFactory*  _stdcall EarthView_World_Graphic_CParticleSystemManager__getFactory_CParticleSystemFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleSystemManager* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemManager*) pObjectXXXX;
				EarthView::World::Graphic::CParticleSystemFactory* objXXXX = ptrNativeObject->_getFactory();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getSingleton_CParticleSystemManager( )
			{
				EarthView::World::Graphic::CParticleSystemManager& objXXXX = EarthView::World::Graphic::CParticleSystemManager::getSingleton();
				EarthView::World::Graphic::CParticleSystemManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticleSystemManager*  _stdcall EarthView_World_Graphic_CParticleSystemManager_getSingletonPtr_CParticleSystemManager( )
			{
				EarthView::World::Graphic::CParticleSystemManager* objXXXX = EarthView::World::Graphic::CParticleSystemManager::getSingletonPtr();
				return objXXXX;
			}
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback)(_in char*& name, _in const EarthView::World::Core::CommonStringPairList* params);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback)();
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback)(_in char*& name, _in EarthView::World::Graphic::CSceneManager* ref_manager, _in const EarthView::World::Core::CommonStringPairList* params);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback)(_in char*& name, _in EarthView::World::Graphic::CSceneManager* ref_manager);
			typedef void  ( _stdcall EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* obj);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback)();
			class CParticleSystemFactoryProxy : public EarthView::World::Graphic::CParticleSystemFactory
			{
			private:
				EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback* m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback;
				EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback* m_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback;
				EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback* m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback;
				EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback* m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback;
				EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback* m_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback;
				EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback* m_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback;
			public:
				CParticleSystemFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleSystemFactory(pList)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList(EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString(EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString(EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList(EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager(EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject(EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool(EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CMovableObject* createInstanceImpl(_in const EVString& name, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback(name_Char, params);
						return returnValue;
					}
					else
						return this->CParticleSystemFactory::createInstanceImpl(name, params);
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemFactory::getType();
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CMovableObject* obj)
				{
					if(m_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback(obj);
					}
					else
						return this->CParticleSystemFactory::destroyInstance(obj);
				}
				virtual EarthView::World::Graphic::CMovableObject* createInstance(_in const EVString& name, _in EarthView::World::Graphic::CSceneManager* ref_manager, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback(name_Char, ref_manager, params);
						return returnValue;
					}
					else
						return this->CParticleSystemFactory::createInstance(name, ref_manager, params);
				}
				virtual EarthView::World::Graphic::CMovableObject* createInstance(_in const EVString& name, _in EarthView::World::Graphic::CSceneManager* ref_manager)
				{
					if(m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback(name_Char, ref_manager);
						return returnValue;
					}
					else
						return this->CParticleSystemFactory::createInstance(name, ref_manager);
				}
				virtual ev_bool requestTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CParticleSystemFactory::requestTypeFlags();
				}
			};
			REGISTER_FACTORY_CLASS(CParticleSystemFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Core::CommonStringPairList* params )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemFactory::createInstanceImpl(name1, params);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->createInstanceImpl(name1, params);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_Callback* pCallback )
			{
				CParticleSystemFactoryProxy* ptr = dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Core::CommonStringPairList* params )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CParticleSystemFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemFactory::createInstanceImpl(name1, params);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CParticleSystemFactory_FACTORY_TYPE_NAME()
			{
				EVString objXXXX = EarthView::World::Graphic::CParticleSystemFactory::FACTORY_TYPE_NAME;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CParticleSystemFactory_FACTORY_TYPE_NAME( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CParticleSystemFactory::FACTORY_TYPE_NAME = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemFactory_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemFactory::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_Callback* pCallback )
			{
				CParticleSystemFactoryProxy* ptr = dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemFactory_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CParticleSystemFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CParticleSystemFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CParticleSystemFactory::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CParticleSystemFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX;
				if (dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CParticleSystemFactory::destroyInstance(obj);
				else
					ptrNativeObject->destroyInstance(obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_Callback* pCallback )
			{
				CParticleSystemFactoryProxy* ptr = dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CParticleSystemFactory_destroyInstance_void_CMovableObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObject* obj )
			{
				EarthView::World::Graphic::CParticleSystemFactory* ptrNativeObject = (EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CParticleSystemFactory::destroyInstance(obj);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString_Callback* pCallback )
			{
				CParticleSystemFactoryProxy* ptr = dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstanceImpl_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList_Callback* pCallback )
			{
				CParticleSystemFactoryProxy* ptr = dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager_Callback* pCallback )
			{
				CParticleSystemFactoryProxy* ptr = dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemFactory_createInstance_CMovableObject_EVString_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool_Callback* pCallback )
			{
				CParticleSystemFactoryProxy* ptr = dynamic_cast<CParticleSystemFactoryProxy*>((EarthView::World::Graphic::CParticleSystemFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CParticleSystemFactory_requestTypeFlags_ev_bool(pCallback);
				}
			}
		}
	}
}
