/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/string_array.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CStringArray_getCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CStringArray_isEmpty_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEmpty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CStringArray_append_ev_uint32_ev_string(void *pObjectXXXX, _in const char* strNewItem )
			{
				EarthView::World::Core::ev_string strNewItem1 = strNewItem;
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->append(strNewItem1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringArray_insertAt_void_ev_uint32_ev_string(void *pObjectXXXX, _in ev_uint32 index, _in const char* strNewItem )
			{
				EarthView::World::Core::ev_string strNewItem1 = strNewItem;
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ptrNativeObject->insertAt(index, strNewItem1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CStringArray_getAt_ev_string_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getAt(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CStringArray_at_ev_string_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ev_string& objXXXX = ptrNativeObject->at(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringArray_removeAt_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ptrNativeObject->removeAt(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringArray_removeAll_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ptrNativeObject->removeAll();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CStringArray_size_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CStringArray_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::CStringArray* ptrNativeObject = (EarthView::World::Core::CStringArray*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CWStringArray_getCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CWStringArray_isEmpty_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEmpty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CWStringArray_append_ev_uint32_ev_wstring(void *pObjectXXXX, _in const ev_wchar* strNewItem )
			{
				EarthView::World::Core::ev_wstring strNewItem1 = strNewItem;
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->append(strNewItem1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWStringArray_insertAt_void_ev_uint32_ev_wstring(void *pObjectXXXX, _in ev_uint32 index, _in const ev_wchar* strNewItem )
			{
				EarthView::World::Core::ev_wstring strNewItem1 = strNewItem;
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ptrNativeObject->insertAt(index, strNewItem1);
			}
			extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_CWStringArray_getAt_ev_wstring_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ev_wstring objXXXX = ptrNativeObject->getAt(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_CWStringArray_at_ev_wstring_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ev_wstring& objXXXX = ptrNativeObject->at(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWStringArray_removeAt_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ptrNativeObject->removeAt(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWStringArray_removeAll_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ptrNativeObject->removeAll();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_CWStringArray_size_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CWStringArray_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::CWStringArray* ptrNativeObject = (EarthView::World::Core::CWStringArray*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
		}
	}
}
