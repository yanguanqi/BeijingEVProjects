/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/core_common.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_push_back_void_ev_int32(void *pObjectXXXX, _in ev_int32& t )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_IntVector_front_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_IntVector_back_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_insert_void_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_uint32 pos, _in ev_int32& t )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_IntVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32&  _stdcall EarthView_World_Core_IntVector_OperatorIndex_ev_int32_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::IntVector& objYYYY = *(EarthView::World::Core::IntVector*) pObjXXXX;
				ev_int32& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_IntVector_at_ev_int32_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				const EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_IntVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_resize_void_ev_size_t_ev_int32(void *pObjectXXXX, _in ev_uint64  newSize, _in ev_int32 value )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize, value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_swap_void_IntVector(void *pObjectXXXX, _inout void* list )
			{
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Core::IntVector*)list);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntVector_fromString_void_EVString(void *pObjectXXXX, _in const char* str )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				ptrNativeObject->fromString(str1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_IntVector_toString_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::IntVector* ptrNativeObject = (EarthView::World::Core::IntVector*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->toString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_push_back_void_IntPair(void *pObjectXXXX, _in EarthView::World::Core::IntPair& t )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::IntPair&  _stdcall EarthView_World_Core_IntPairVector_front_IntPair(void *pObjectXXXX )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				EarthView::World::Core::IntPair& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::IntPair&  _stdcall EarthView_World_Core_IntPairVector_back_IntPair(void *pObjectXXXX )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				EarthView::World::Core::IntPair& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_insert_void_ev_uint32_IntPair(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Core::IntPair& t )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_IntPairVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::IntPair&  _stdcall EarthView_World_Core_IntPairVector_OperatorIndex_IntPair_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::IntPairVector& objYYYY = *(EarthView::World::Core::IntPairVector*) pObjXXXX;
				EarthView::World::Core::IntPair& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::IntPair&  _stdcall EarthView_World_Core_IntPairVector_at_IntPair_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				EarthView::World::Core::IntPair& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_IntPairVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_resize_void_ev_size_t_IntPair(void *pObjectXXXX, _in ev_uint64  newSize, _in EarthView::World::Core::IntPair value )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize, value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_IntPairVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::IntPairVector* ptrNativeObject = (EarthView::World::Core::IntPairVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_push_back_void_Int3(void *pObjectXXXX, _in EarthView::World::Core::Int3& t )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::Int3&  _stdcall EarthView_World_Core_Int3Vector_front_Int3(void *pObjectXXXX )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				EarthView::World::Core::Int3& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::Int3&  _stdcall EarthView_World_Core_Int3Vector_back_Int3(void *pObjectXXXX )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				EarthView::World::Core::Int3& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_insert_void_ev_uint32_Int3(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Core::Int3& t )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Int3Vector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::Int3&  _stdcall EarthView_World_Core_Int3Vector_OperatorIndex_Int3_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::Int3Vector& objYYYY = *(EarthView::World::Core::Int3Vector*) pObjXXXX;
				EarthView::World::Core::Int3& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::Int3&  _stdcall EarthView_World_Core_Int3Vector_at_Int3_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				EarthView::World::Core::Int3& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_Int3Vector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_resize_void_ev_size_t_Int3(void *pObjectXXXX, _in ev_uint64  newSize, _in EarthView::World::Core::Int3 value )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->resize(newSize, value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Int3Vector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::Int3Vector* ptrNativeObject = (EarthView::World::Core::Int3Vector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_push_back_void_ev_real64(void *pObjectXXXX, _in ev_real64& t )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Core_RealVector_front_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Core_RealVector_back_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_insert_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 pos, _in ev_real64& t )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_RealVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64&  _stdcall EarthView_World_Core_RealVector_OperatorIndex_ev_real64_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::RealVector& objYYYY = *(EarthView::World::Core::RealVector*) pObjXXXX;
				ev_real64& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Core_RealVector_at_ev_real64_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				const EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_RealVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_resize_void_ev_size_t_ev_real64(void *pObjectXXXX, _in ev_uint64  newSize, _in ev_real64 value )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize, value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealVector_fromString_void_EVString(void *pObjectXXXX, _in const char* str )
			{
				EarthView::World::Core::ev_string str1 = str;
				EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				ptrNativeObject->fromString(str1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_RealVector_toString_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealVector* ptrNativeObject = (EarthView::World::Core::RealVector*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->toString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealList_push_back_void_ev_real64(void *pObjectXXXX, _in ev_real64& t )
			{
				EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Core_RealList_front_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Core_RealList_back_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_RealList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_RealList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealList_resize_void_ev_size_t_ev_real64(void *pObjectXXXX, _in ev_uint64  newSize, _in ev_real64 value )
			{
				EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ptrNativeObject->resize(newSize, value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_RealList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::RealList* ptrNativeObject = (EarthView::World::Core::RealList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
