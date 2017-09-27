/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/archivefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			typedef char*  ( _stdcall EarthView_World_Core_CArchiveFactory_getType_EVString_Callback)();
			typedef EarthView::World::Core::CArchive*  ( _stdcall EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback)(_in EarthView::World::Core::CArchive* ptr);
			class CArchiveFactoryProxy : public EarthView::World::Core::CArchiveFactory
			{
			private:
				EarthView_World_Core_CArchiveFactory_getType_EVString_Callback* m_EarthView_World_Core_CArchiveFactory_getType_EVString_Callback;
				EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback* m_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback;
				EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback* m_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback;
			public:
				CArchiveFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CArchiveFactory(pList)
				{
					m_EarthView_World_Core_CArchiveFactory_getType_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CArchiveFactory_getType_EVString(EarthView_World_Core_CArchiveFactory_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchiveFactory_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString(EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive(EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback = pCallback;
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Core_CArchiveFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Core_CArchiveFactory_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CArchiveFactory::getType();
				}
				virtual EarthView::World::Core::CArchive* createInstance(_in const EVString& name)
				{
					if(m_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Core::CArchive* returnValue = m_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CArchiveFactory::createInstance(name);
				}
				virtual void destroyInstance(_in EarthView::World::Core::CArchive* ptr)
				{
					if(m_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback(ptr);
					}
					else
						return this->CArchiveFactory::destroyInstance(ptr);
				}
			};
			REGISTER_FACTORY_CLASS(CArchiveFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CArchiveFactory_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveFactory* ptrNativeObject = (EarthView::World::Core::CArchiveFactory*) pObjectXXXX;
				if (dynamic_cast<CArchiveFactoryProxy*>((EarthView::World::Core::CArchiveFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Core::CArchiveFactory::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Core_CArchiveFactory_getType_EVString_Callback* pCallback )
			{
				CArchiveFactoryProxy* ptr = dynamic_cast<CArchiveFactoryProxy*>((EarthView::World::Core::CArchiveFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchiveFactory_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CArchiveFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveFactory* ptrNativeObject = (EarthView::World::Core::CArchiveFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Core::CArchiveFactory::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::CArchiveFactory* ptrNativeObject = (EarthView::World::Core::CArchiveFactory*) pObjectXXXX;
				if (dynamic_cast<CArchiveFactoryProxy*>((EarthView::World::Core::CArchiveFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->EarthView::World::Core::CArchiveFactory::createInstance(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->createInstance(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString( void *pObjectXXXX, EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_Callback* pCallback )
			{
				CArchiveFactoryProxy* ptr = dynamic_cast<CArchiveFactoryProxy*>((EarthView::World::Core::CArchiveFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Core_CArchiveFactory_createInstance_CArchive_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::CArchiveFactory* ptrNativeObject = (EarthView::World::Core::CArchiveFactory*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->EarthView::World::Core::CArchiveFactory::createInstance(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive(void *pObjectXXXX, _in EarthView::World::Core::CArchive* ptr )
			{
				EarthView::World::Core::CArchiveFactory* ptrNativeObject = (EarthView::World::Core::CArchiveFactory*) pObjectXXXX;
				if (dynamic_cast<CArchiveFactoryProxy*>((EarthView::World::Core::CArchiveFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CArchiveFactory::destroyInstance(ptr);
				else
					ptrNativeObject->destroyInstance(ptr);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive( void *pObjectXXXX, EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_Callback* pCallback )
			{
				CArchiveFactoryProxy* ptr = dynamic_cast<CArchiveFactoryProxy*>((EarthView::World::Core::CArchiveFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveFactory_destroyInstance_void_CArchive_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CArchive* ptr )
			{
				EarthView::World::Core::CArchiveFactory* ptrNativeObject = (EarthView::World::Core::CArchiveFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CArchiveFactory::destroyInstance(ptr);
			}
		}
	}
}
