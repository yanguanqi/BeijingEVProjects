/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/stringvector.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_push_back_void_EVString(void *pObjectXXXX, _in char* t )
			{
				EarthView::World::Core::ev_string t1 = t;
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->push_back(t1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_StringVector_front_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->front();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_StringVector_back_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->back();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_insert_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 pos, _in char* t )
			{
				EarthView::World::Core::ev_string t1 = t;
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_StringVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_StringVector_OperatorIndex_EVString_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::StringVector& objYYYY = *(EarthView::World::Core::StringVector*) pObjXXXX;
				EVString& objXXXX = objYYYY[n];
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_StringVector_at_EVString_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				EVString& objXXXX = ptrNativeObject->at(n);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_StringVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_StringVector_swap_void_StringVector(void *pObjectXXXX, _inout void* rhs )
			{
				EarthView::World::Core::StringVector* ptrNativeObject = (EarthView::World::Core::StringVector*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Core::StringVector*)rhs);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::StringVector*  _stdcall EarthView_World_Core_StringVectorPtr_get_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Core::StringVectorPtr* ptrNativeObject = (EarthView::World::Core::StringVectorPtr*) pObjectXXXX;
				EarthView::World::Core::StringVector* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
		}
	}
}
