/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/configfile.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* separators )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(filename1, separators1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const char* separators, _in ev_bool trimWhitespace )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(filename1, separators1, trimWhitespace);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* resourceGroup, _in const char* separators )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(filename1, resourceGroup1, separators1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const char* resourceGroup, _in const char* separators, _in ev_bool trimWhitespace )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(filename1, resourceGroup1, separators1, trimWhitespace);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_DataStreamPtr(void *pObjectXXXX, _in const void* stream )
			{
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_DataStreamPtr_EVString(void *pObjectXXXX, _in const void* stream, _in const char* separators )
			{
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(*(EarthView::World::Core::DataStreamPtr*)stream, separators1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_load_void_DataStreamPtr_EVString_ev_bool(void *pObjectXXXX, _in const void* stream, _in const char* separators, _in ev_bool trimWhitespace )
			{
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->load(*(EarthView::World::Core::DataStreamPtr*)stream, separators1, trimWhitespace);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_loadDirect_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->loadDirect(filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_loadDirect_void_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* separators )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->loadDirect(filename1, separators1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_loadDirect_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const char* separators, _in ev_bool trimWhitespace )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->loadDirect(filename1, separators1, trimWhitespace);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_loadFromResourceSystem_void_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* resourceGroup )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->loadFromResourceSystem(filename1, resourceGroup1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_loadFromResourceSystem_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* resourceGroup, _in const char* separators )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->loadFromResourceSystem(filename1, resourceGroup1, separators1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_loadFromResourceSystem_void_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const char* resourceGroup, _in const char* separators, _in ev_bool trimWhitespace )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string resourceGroup1 = resourceGroup;
				EarthView::World::Core::ev_string separators1 = separators;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->loadFromResourceSystem(filename1, resourceGroup1, separators1, trimWhitespace);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_getSetting_EVString_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				const EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getSetting(key1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_getSetting_EVString_EVString_EVString(void *pObjectXXXX, _in const char* key, _in const char* section )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ev_string section1 = section;
				const EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getSetting(key1, section1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_getSetting_EVString_EVString_EVString_EVString(void *pObjectXXXX, _in const char* key, _in const char* section, _in const char* defaultValue )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ev_string section1 = section;
				EarthView::World::Core::ev_string defaultValue1 = defaultValue;
				const EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getSetting(key1, section1, defaultValue1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CConfigFile_getMultiSetting_StringVector_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				const EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getMultiSetting(key1);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CConfigFile_getMultiSetting_StringVector_EVString_EVString(void *pObjectXXXX, _in const char* key, _in const char* section )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ev_string section1 = section;
				const EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getMultiSetting(key1, section1);
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_push_void_EVString_EVString(void *pObjectXXXX, _in const char* key, _in char* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ptrNativeObject->push(key1, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_count_ev_size_t_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->count(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_get_EVString_EVString_ev_size_t(void *pObjectXXXX, _in const char* key, _in ev_uint64  index )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->get(key1, index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_erase_void_EVString_ev_size_t(void *pObjectXXXX, _in const char* key, _in ev_uint64  index )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ptrNativeObject->erase(key1, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConfigFile_SettingsMultiMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMap* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CConfigFile_SettingsMultiMapPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CConfigFile_SettingsMultiMapPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CConfigFile_SettingsMultiMapPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->second;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CConfigFile_SettingsMultiMapPair_second( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair*)pObjectXXXX)->second = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_nextValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_nextValuePtr_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				EVString* objXXXX = ptrNativeObject->nextValuePtr();
				return (char*)objXXXX->c_str();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_next_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->next();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_getBegin_SettingsMultiMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_getEnd_SettingsMultiMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsIterator_getCurrent_SettingsMultiMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CConfigFile::SettingsMultiMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_push_ev_bool_EVString_SettingsMultiMap(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CConfigFile::SettingsMultiMap*& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsBySection* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsBySection* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CConfigFile::SettingsMultiMap*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_OperatorIndex_SettingsMultiMap_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CConfigFile::SettingsBySection& objYYYY = *(EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CConfigFile::SettingsMultiMap*  _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_get_SettingsMultiMap_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsBySection* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CConfigFile::SettingsBySection* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SettingsBySection* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SettingsBySection* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConfigFile_SettingsBySection_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SettingsBySection* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SettingsBySection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CConfigFile_SectionPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionPair* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CConfigFile_SectionPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CConfigFile::SectionPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CConfigFile::SettingsMultiMap*  _stdcall Get_EarthView_World_Graphic_CConfigFile_SectionPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionPair* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionPair*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CConfigFile_SectionPair_second( void *pObjectXXXX, EarthView::World::Graphic::CConfigFile::SettingsMultiMap*  value )
			{
				((EarthView::World::Graphic::CConfigFile::SectionPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CConfigFile::SettingsMultiMap*  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_nextValue_SettingsMultiMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CConfigFile::SettingsMultiMap**  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_nextValuePtr_SettingsMultiMap(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CConfigFile::SettingsMultiMap*  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_next_SettingsMultiMap(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsMultiMap* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_getBegin_SectionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CConfigFile::SectionPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CConfigFile::SectionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_getEnd_SectionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CConfigFile::SectionPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CConfigFile::SectionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CConfigFile_SectionIterator_getCurrent_SectionPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile::SectionIterator* ptrNativeObject = (EarthView::World::Graphic::CConfigFile::SectionIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CConfigFile::SectionPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CConfigFile::SectionPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CConfigFile_getSectionIterator_SectionIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SectionIterator objXXXX = ptrNativeObject->getSectionIterator();
				EarthView::World::Graphic::CConfigFile::SectionIterator *pXXXX = new EarthView::World::Graphic::CConfigFile::SectionIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CConfigFile_getSettingsIterator_SettingsIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsIterator objXXXX = ptrNativeObject->getSettingsIterator();
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pXXXX = new EarthView::World::Graphic::CConfigFile::SettingsIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CConfigFile_getSettingsIterator_SettingsIterator_EVString(void *pObjectXXXX, _in const char* section )
			{
				EarthView::World::Core::ev_string section1 = section;
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				EarthView::World::Graphic::CConfigFile::SettingsIterator objXXXX = ptrNativeObject->getSettingsIterator(section1);
				EarthView::World::Graphic::CConfigFile::SettingsIterator *pXXXX = new EarthView::World::Graphic::CConfigFile::SettingsIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CConfigFile_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CConfigFile* ptrNativeObject = (EarthView::World::Graphic::CConfigFile*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
