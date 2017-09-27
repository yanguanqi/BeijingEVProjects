/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/variant.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CVariant_isNull_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isNull();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CVariant_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_CVariant_type_EVDataType(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				EarthView::World::Core::CVariant::EVDataType objXXXX = ptrNativeObject->type();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariant_data_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->data();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Core_CVariant_constData_void(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				const void* objXXXX = ptrNativeObject->constData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CVariant_toBool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool* ok )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->toBool(ok);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CVariant_toBool_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->toBool();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CVariant_toInt32_ev_int32_ev_bool(void *pObjectXXXX, _in ev_bool* ok )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->toInt32(ok);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CVariant_toInt32_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->toInt32();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CVariant_toUInt32_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_bool* ok )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->toUInt32(ok);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CVariant_toUInt32_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->toUInt32();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Core_CVariant_toInt64_ev_int64_ev_bool(void *pObjectXXXX, _in ev_bool* ok )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->toInt64(ok);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Core_CVariant_toInt64_ev_int64(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->toInt64();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CVariant_toUInt64_ev_uint64_ev_bool(void *pObjectXXXX, _in ev_bool* ok )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->toUInt64(ok);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CVariant_toUInt64_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->toUInt64();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Core_CVariant_toReal32_ev_real32_ev_bool(void *pObjectXXXX, _in ev_bool* ok )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->toReal32(ok);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Core_CVariant_toReal32_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->toReal32();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Core_CVariant_toReal64_ev_real64_ev_bool(void *pObjectXXXX, _in ev_bool* ok )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->toReal64(ok);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Core_CVariant_toReal64_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->toReal64();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariant_toDateTime_CCoreTime(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->toDateTime();
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CVariant_toString_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->toString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_CVariant_toWString_ev_wstring(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ev_wstring objXXXX = ptrNativeObject->toWString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariant_toDataStream_MemoryDataStreamPtr(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->toDataStream();
				EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromBool_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromBool(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromInt32_void_ev_int32(void *pObjectXXXX, _in ev_int32 val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromInt32(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromUInt32_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromUInt32(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromInt64_void_ev_int64(void *pObjectXXXX, _in ev_int64 val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromInt64(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromUInt64_void_ev_uint64(void *pObjectXXXX, _in ev_uint64 val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromUInt64(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromReal32_void_ev_real32(void *pObjectXXXX, _in ev_real32 val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromReal32(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromReal64_void_ev_real64(void *pObjectXXXX, _in ev_real64 val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromReal64(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromDateTime_void_CCoreTime(void *pObjectXXXX, _in const void* val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromDateTime(*(EarthView::World::Core::CCoreTime*)val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromString_void_ev_string(void *pObjectXXXX, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromString(val1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromWString_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* val )
			{
				EarthView::World::Core::ev_wstring val1 = val;
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromWString(val1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromDataStream_void_MemoryDataStreamPtr(void *pObjectXXXX, _in const void* val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromDataStream(*(EarthView::World::Core::MemoryDataStreamPtr*)val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromCharString_void_ev_char(void *pObjectXXXX, _in const ev_char* val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromCharString(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariant_fromWCharString_void_ev_wchar(void *pObjectXXXX, _in const ev_wchar* val )
			{
				EarthView::World::Core::CVariant* ptrNativeObject = (EarthView::World::Core::CVariant*) pObjectXXXX;
				ptrNativeObject->fromWCharString(val);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariant_OperatorAssign_CVariant_CVariant(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CVariant& objXXXX = *((EarthView::World::Core::CVariant*) pObjXXXX);
				objXXXX = *(EarthView::World::Core::CVariant*)other;
				EarthView::World::Core::CVariant *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CVariant_OperatorEquals_ev_bool_CVariant(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CVariant& objXXXX = *(EarthView::World::Core::CVariant*) pObjXXXX;
				const EarthView::World::Core::CVariant& objXXXX1 = *(EarthView::World::Core::CVariant*)other;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CVariant_OperatorNotEquals_ev_bool_CVariant(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CVariant& objXXXX = *(EarthView::World::Core::CVariant*) pObjXXXX;
				const EarthView::World::Core::CVariant& objXXXX1 = *(EarthView::World::Core::CVariant*)other;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CVariantArray_count_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->count();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariantArray_at_CVariant_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				EarthView::World::Core::CVariant objXXXX = ptrNativeObject->at(index);
				EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariantArray_take_CVariant_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				EarthView::World::Core::CVariant objXXXX = ptrNativeObject->take(index);
				EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CVariantArray_find_ev_int32_CVariant_ev_uint32(void *pObjectXXXX, _in void* var, _in ev_uint32 from )
			{
				const EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->find(*(EarthView::World::Core::CVariant*)var, from);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CVariantArray_find_ev_int32_CVariant(void *pObjectXXXX, _in void* var )
			{
				const EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->find(*(EarthView::World::Core::CVariant*)var);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariantArray_prepend_void_CVariant(void *pObjectXXXX, _in void* var )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ptrNativeObject->prepend(*(EarthView::World::Core::CVariant*)var);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariantArray_insert_void_ev_int32_CVariant(void *pObjectXXXX, _in ev_int32 index, _in void* var )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ptrNativeObject->insert(index, *(EarthView::World::Core::CVariant*)var);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariantArray_append_void_CVariant(void *pObjectXXXX, _in void* var )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ptrNativeObject->append(*(EarthView::World::Core::CVariant*)var);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariantArray_append_void_CVariantArray(void *pObjectXXXX, _in const void* other )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ptrNativeObject->append(*(EarthView::World::Core::CVariantArray*)other);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariantArray_erase_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ptrNativeObject->erase(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariantArray_swap_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 first, _in ev_int32 second )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ptrNativeObject->swap(first, second);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CVariantArray_isEmpty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEmpty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CVariantArray_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CVariantArray* ptrNativeObject = (EarthView::World::Core::CVariantArray*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariantArray_OperatorAssign_CVariantArray_CVariantArray(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CVariantArray& objXXXX = *((EarthView::World::Core::CVariantArray*) pObjXXXX);
				objXXXX = *(EarthView::World::Core::CVariantArray*)other;
				EarthView::World::Core::CVariantArray *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariantArray_OperatorPlus_CVariantArray_CVariantArray(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CVariantArray& objXXXX = *(EarthView::World::Core::CVariantArray*) pObjXXXX;
				EarthView::World::Core::CVariantArray result = objXXXX +(*(EarthView::World::Core::CVariantArray*)other);
				EarthView::World::Core::CVariantArray* pnew = new EarthView::World::Core::CVariantArray(result);
				pnew->setExternFree(1);
				return (void*)pnew;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariantArray_OperatorIndex_CVariant_ev_int32(void *pObjXXXX, _in ev_int32 i )
			{
				EarthView::World::Core::CVariantArray& objYYYY = *(EarthView::World::Core::CVariantArray*) pObjXXXX;
				EarthView::World::Core::CVariant& objXXXX = objYYYY[i];
				EarthView::World::Core::CVariant *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CVariantArray_OperatorIndex_CVariant_ev_uint32(void *pObjXXXX, _in ev_uint32 i )
			{
				EarthView::World::Core::CVariantArray& objYYYY = *(EarthView::World::Core::CVariantArray*) pObjXXXX;
				EarthView::World::Core::CVariant& objXXXX = objYYYY[i];
				EarthView::World::Core::CVariant *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
