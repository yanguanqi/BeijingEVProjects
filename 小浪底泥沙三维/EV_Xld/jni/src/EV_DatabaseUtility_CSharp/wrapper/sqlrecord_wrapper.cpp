/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlrecord.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlRecord_OperatorAssign_CSqlRecord_CSqlRecord(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlRecord& objXXXX = *((EarthView::World::Core::Database::CSqlRecord*) pObjXXXX);
					objXXXX = *(EarthView::World::Core::Database::CSqlRecord*)other;
					EarthView::World::Core::Database::CSqlRecord *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_OperatorEquals_ev_bool_CSqlRecord(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlRecord& objXXXX = *(EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlRecord& objXXXX1 = *(EarthView::World::Core::Database::CSqlRecord*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_OperatorNotEquals_ev_bool_CSqlRecord(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlRecord& objXXXX = *(EarthView::World::Core::Database::CSqlRecord*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlRecord& objXXXX1 = *(EarthView::World::Core::Database::CSqlRecord*)other;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlRecord_value_CVariant_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->value(i);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlRecord_value_CVariant_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->value(name1);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_setValue_void_ev_int32_CVariant(void *pObjectXXXX, _in ev_int32 i, _in const void* val )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->setValue(i, *(EarthView::World::Core::CVariant*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_setValue_void_ev_wstring_CVariant(void *pObjectXXXX, _in const ev_wchar* name, _in const void* val )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->setValue(name1, *(EarthView::World::Core::CVariant*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_setNull_void_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->setNull(i);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_setNull_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->setNull(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_isNull_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNull(i);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_isNull_ev_bool_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNull(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlRecord_indexOf_ev_int32_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->indexOf(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlRecord_fieldName_ev_wstring_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_wstring objXXXX = ptrNativeObject->fieldName(i);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlRecord_field_CSqlField_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlField objXXXX = ptrNativeObject->field(i);
					EarthView::World::Core::Database::CSqlField *pXXXX = new EarthView::World::Core::Database::CSqlField(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlRecord_field_CSqlField_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlField objXXXX = ptrNativeObject->field(name1);
					EarthView::World::Core::Database::CSqlField *pXXXX = new EarthView::World::Core::Database::CSqlField(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_isGenerated_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isGenerated(i);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_isGenerated_ev_bool_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isGenerated(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_setGenerated_void_ev_wstring_ev_bool(void *pObjectXXXX, _in const ev_wchar* name, _in ev_bool generated )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->setGenerated(name1, generated);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_setGenerated_void_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 i, _in ev_bool generated )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->setGenerated(i, generated);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_append_void_CSqlField(void *pObjectXXXX, _in const void* field )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->append(*(EarthView::World::Core::Database::CSqlField*)field);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_replace_void_ev_int32_CSqlField(void *pObjectXXXX, _in ev_int32 pos, _in const void* field )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->replace(pos, *(EarthView::World::Core::Database::CSqlField*)field);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_insert_void_ev_int32_CSqlField(void *pObjectXXXX, _in ev_int32 pos, _in const void* field )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Core::Database::CSqlField*)field);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_remove_void_ev_int32(void *pObjectXXXX, _in ev_int32 pos )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_isEmpty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlRecord_contains_ev_bool_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->contains(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlRecord_clearValues_void(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ptrNativeObject->clearValues();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlRecord_count_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlRecord* ptrNativeObject = (EarthView::World::Core::Database::CSqlRecord*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->count();
					return objXXXX;
				}
			}
		}
	}
}
