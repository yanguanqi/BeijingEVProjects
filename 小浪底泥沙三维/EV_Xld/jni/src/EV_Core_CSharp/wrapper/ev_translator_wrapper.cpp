/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_translator.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef char*  ( _stdcall EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback)(_in const ev_char* sourceText, _in const ev_char* context, _in const ev_char* comment);
			class CEvTranslatorProxy : public EarthView::World::Core::CEvTranslator
			{
			private:
				EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback* m_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback;
			public:
				CEvTranslatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEvTranslator(pList)
				{
					m_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char(EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback* pCallback)
				{
					m_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback = pCallback;
				}
				virtual EVString translate(_in const ev_char* sourceText, _in const ev_char* context, _in const ev_char* comment) const
				{
					if(m_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback(sourceText, context, comment);
						return returnValue;
					}
					else
						return this->CEvTranslator::translate(sourceText, context, comment);
				}
			};
			REGISTER_FACTORY_CLASS(CEvTranslatorProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEvTranslator_isEmpty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CEvTranslator* ptrNativeObject = (EarthView::World::Core::CEvTranslator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEmpty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEvTranslator_load_ev_bool_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::CEvTranslator* ptrNativeObject = (EarthView::World::Core::CEvTranslator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->load(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CEvTranslator_load_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* directory, _in const char* suffix )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string directory1 = directory;
				EarthView::World::Core::ev_string suffix1 = suffix;
				EarthView::World::Core::CEvTranslator* ptrNativeObject = (EarthView::World::Core::CEvTranslator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->load(filename1, directory1, suffix1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char(void *pObjectXXXX, _in const ev_char* sourceText, _in const ev_char* context, _in const ev_char* comment )
			{
				const EarthView::World::Core::CEvTranslator* ptrNativeObject = (EarthView::World::Core::CEvTranslator*) pObjectXXXX;
				if (dynamic_cast<CEvTranslatorProxy*>((EarthView::World::Core::CEvTranslator*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CEvTranslator::translate(sourceText, context, comment);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->translate(sourceText, context, comment);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char( void *pObjectXXXX, EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_Callback* pCallback )
			{
				CEvTranslatorProxy* ptr = dynamic_cast<CEvTranslatorProxy*>((EarthView::World::Core::CEvTranslator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_NoVirtual(void *pObjectXXXX, _in const ev_char* sourceText, _in const ev_char* context, _in const ev_char* comment )
			{
				const EarthView::World::Core::CEvTranslator* ptrNativeObject = (EarthView::World::Core::CEvTranslator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CEvTranslator::translate(sourceText, context, comment);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CEvTranslator_translate_EVString_ev_char_ev_char_ev_char_ev_int32(void *pObjectXXXX, _in const ev_char* sourceText, _in const ev_char* context, _in const ev_char* comment, _in ev_int32 n )
			{
				const EarthView::World::Core::CEvTranslator* ptrNativeObject = (EarthView::World::Core::CEvTranslator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->translate(sourceText, context, comment, n);
				return objXXXX.makeBuffer();
			}
			typedef void  ( _stdcall EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback)();
			class CEvTranslatorListenerProxy : public EarthView::World::Core::CEvTranslatorListener
			{
			private:
				EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback* m_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback;
			public:
				CEvTranslatorListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CEvTranslatorListener(pList)
				{
					m_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void(EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback = pCallback;
				}
				virtual void changeLanguage()
				{
					if(m_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback();
					}
					else
						return this->CEvTranslatorListener::changeLanguage();
				}
			};
			REGISTER_FACTORY_CLASS(CEvTranslatorListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorListener_changeLanguage_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CEvTranslatorListener* ptrNativeObject = (EarthView::World::Core::CEvTranslatorListener*) pObjectXXXX;
				if (dynamic_cast<CEvTranslatorListenerProxy*>((EarthView::World::Core::CEvTranslatorListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CEvTranslatorListener::changeLanguage();
				else
					ptrNativeObject->changeLanguage();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void( void *pObjectXXXX, EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_Callback* pCallback )
			{
				CEvTranslatorListenerProxy* ptr = dynamic_cast<CEvTranslatorListenerProxy*>((EarthView::World::Core::CEvTranslatorListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CEvTranslatorListener_changeLanguage_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorListener_changeLanguage_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CEvTranslatorListener* ptrNativeObject = (EarthView::World::Core::CEvTranslatorListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CEvTranslatorListener::changeLanguage();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorManager_installTranslator_void_CEvTranslator(void *pObjectXXXX, _in EarthView::World::Core::CEvTranslator* pTranslator )
			{
				EarthView::World::Core::CEvTranslatorManager* ptrNativeObject = (EarthView::World::Core::CEvTranslatorManager*) pObjectXXXX;
				ptrNativeObject->installTranslator(pTranslator);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorManager_removeTranslator_void_CEvTranslator(void *pObjectXXXX, _in EarthView::World::Core::CEvTranslator* pTranslator )
			{
				EarthView::World::Core::CEvTranslatorManager* ptrNativeObject = (EarthView::World::Core::CEvTranslatorManager*) pObjectXXXX;
				ptrNativeObject->removeTranslator(pTranslator);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorManager_setCurrentLanguage_void_EvLanguageType(void *pObjectXXXX, _in int currLanguage )
			{
				EarthView::World::Core::CEvTranslatorManager* ptrNativeObject = (EarthView::World::Core::CEvTranslatorManager*) pObjectXXXX;
				ptrNativeObject->setCurrentLanguage((EarthView::World::Core::CEvTranslatorManager::EvLanguageType)currLanguage);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_CEvTranslatorManager_getCurrentLanguage_EvLanguageType(void *pObjectXXXX )
			{
				EarthView::World::Core::CEvTranslatorManager* ptrNativeObject = (EarthView::World::Core::CEvTranslatorManager*) pObjectXXXX;
				EarthView::World::Core::CEvTranslatorManager::EvLanguageType objXXXX = ptrNativeObject->getCurrentLanguage();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CEvTranslatorManager_translate_EVString_ev_char_ev_char_ev_char(void *pObjectXXXX, _in const ev_char* sourceText, _in const ev_char* context, _in const ev_char* comment )
			{
				EarthView::World::Core::CEvTranslatorManager* ptrNativeObject = (EarthView::World::Core::CEvTranslatorManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->translate(sourceText, context, comment);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CEvTranslatorManager*  _stdcall EarthView_World_Core_CEvTranslatorManager_getSingletonPtr_CEvTranslatorManager( )
			{
				EarthView::World::Core::CEvTranslatorManager* objXXXX = EarthView::World::Core::CEvTranslatorManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorManager_releaseSingletonPtr_void( )
			{
				EarthView::World::Core::CEvTranslatorManager::releaseSingletonPtr();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorManager_addTranslatorListener_void_CEvTranslatorListener(void *pObjectXXXX, _in EarthView::World::Core::CEvTranslatorListener* newListener )
			{
				EarthView::World::Core::CEvTranslatorManager* ptrNativeObject = (EarthView::World::Core::CEvTranslatorManager*) pObjectXXXX;
				ptrNativeObject->addTranslatorListener(newListener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CEvTranslatorManager_removeTranslatorListener_void_CEvTranslatorListener(void *pObjectXXXX, _in EarthView::World::Core::CEvTranslatorListener* oldListener )
			{
				EarthView::World::Core::CEvTranslatorManager* ptrNativeObject = (EarthView::World::Core::CEvTranslatorManager*) pObjectXXXX;
				ptrNativeObject->removeTranslatorListener(oldListener);
			}
		}
	}
}
