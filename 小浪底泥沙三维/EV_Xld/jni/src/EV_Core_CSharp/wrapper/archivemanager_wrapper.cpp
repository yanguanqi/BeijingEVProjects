/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/archivemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_push_ev_bool_EVString_CArchiveFactory(void *pObjectXXXX, _in const char* key, _in const EarthView::World::Core::CArchiveFactory*& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchiveFactory*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_OperatorIndex_CArchiveFactory_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap& objYYYY = *(EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjXXXX;
				EarthView::World::Core::CArchiveFactory* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchiveFactory*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_get_CArchiveFactory_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjectXXXX;
				EarthView::World::Core::CArchiveFactory* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveManager::ArchiveFactoryMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveFactoryMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchiveManager_ArchiveFactoryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveManager::ArchiveFactoryMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_push_ev_bool_EVString_CArchive(void *pObjectXXXX, _in const char* key, _in const EarthView::World::Core::CArchive*& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_OperatorIndex_CArchive_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMap& objYYYY = *(EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjXXXX;
				EarthView::World::Core::CArchive* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_get_CArchive_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CArchiveManager::ArchiveMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveManager::ArchiveMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveManager::ArchiveMap* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchiveManager_getSingleton_CArchiveManager( )
			{
				EarthView::World::Core::CArchiveManager& objXXXX = EarthView::World::Core::CArchiveManager::getSingleton();
				EarthView::World::Core::CArchiveManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchiveManager*  _stdcall EarthView_World_Core_CArchiveManager_getSingletonPtr_CArchiveManager( )
			{
				EarthView::World::Core::CArchiveManager* objXXXX = EarthView::World::Core::CArchiveManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Core_CArchiveManager_load_CArchive_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* archiveType )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string archiveType1 = archiveType;
				EarthView::World::Core::CArchiveManager* ptrNativeObject = (EarthView::World::Core::CArchiveManager*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->load(filename1, archiveType1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_unload_void_CArchive(void *pObjectXXXX, _in EarthView::World::Core::CArchive* arch )
			{
				EarthView::World::Core::CArchiveManager* ptrNativeObject = (EarthView::World::Core::CArchiveManager*) pObjectXXXX;
				ptrNativeObject->unload(arch);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_unload_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::CArchiveManager* ptrNativeObject = (EarthView::World::Core::CArchiveManager*) pObjectXXXX;
				ptrNativeObject->unload(filename1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_CArchiveManager_ArchiveMapPair_first( void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapPair* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CArchiveManager_ArchiveMapPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::CArchiveManager::ArchiveMapPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall Get_EarthView_World_Core_CArchiveManager_ArchiveMapPair_second( void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapPair* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapPair*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CArchiveManager_ArchiveMapPair_second( void *pObjectXXXX, EarthView::World::Core::CArchive*  value )
			{
				((EarthView::World::Core::CArchiveManager::ArchiveMapPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_OperatorAssign_ArchiveMapIterator_ArchiveMapIterator(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator& objXXXX = *((EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjXXXX);
				objXXXX = *(EarthView::World::Core::CArchiveManager::ArchiveMapIterator*)other;
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_nextValue_CArchive(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive**  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_nextValuePtr_CArchive(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				EarthView::World::Core::CArchive** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_next_CArchive(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_getBegin_ArchiveMapPair(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_getEnd_ArchiveMapPair(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CArchiveManager_ArchiveMapIterator_getCurrent_ArchiveMapPair(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator* ptrNativeObject = (EarthView::World::Core::CArchiveManager::ArchiveMapIterator*) pObjectXXXX;
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Core::CArchiveManager::ArchiveMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchiveManager_getArchiveIterator_ArchiveMapIterator(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchiveManager* ptrNativeObject = (EarthView::World::Core::CArchiveManager*) pObjectXXXX;
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator objXXXX = ptrNativeObject->getArchiveIterator();
				EarthView::World::Core::CArchiveManager::ArchiveMapIterator *pXXXX = new EarthView::World::Core::CArchiveManager::ArchiveMapIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchiveManager_addArchiveFactory_void_CArchiveFactory(void *pObjectXXXX, _in EarthView::World::Core::CArchiveFactory* factory )
			{
				EarthView::World::Core::CArchiveManager* ptrNativeObject = (EarthView::World::Core::CArchiveManager*) pObjectXXXX;
				ptrNativeObject->addArchiveFactory(factory);
			}
		}
	}
}
