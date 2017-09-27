/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/commonstringpairlist.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CommonStringPairList_push_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* key, _in const char* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Core::CommonStringPairList* ptrNativeObject = (EarthView::World::Core::CommonStringPairList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CommonStringPairList_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CommonStringPairList* ptrNativeObject = (EarthView::World::Core::CommonStringPairList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CommonStringPairList_OperatorIndex_EVString_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Core::CommonStringPairList& objYYYY = *(EarthView::World::Core::CommonStringPairList*) pObjXXXX;
				EVString& objXXXX = objYYYY[key];
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CommonStringPairList_get_EVString_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CommonStringPairList* ptrNativeObject = (EarthView::World::Core::CommonStringPairList*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->get(key1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CommonStringPairList_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Core::CommonStringPairList* ptrNativeObject = (EarthView::World::Core::CommonStringPairList*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CommonStringPairList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::CommonStringPairList* ptrNativeObject = (EarthView::World::Core::CommonStringPairList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CommonStringPairList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CommonStringPairList* ptrNativeObject = (EarthView::World::Core::CommonStringPairList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CommonStringPairList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CommonStringPairList* ptrNativeObject = (EarthView::World::Core::CommonStringPairList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
		}
	}
}
