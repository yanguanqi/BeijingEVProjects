/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlfield.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlField_OperatorAssign_CSqlField_CSqlField(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlField& objXXXX = *((EarthView::World::Core::Database::CSqlField*) pObjXXXX);
					objXXXX = *(EarthView::World::Core::Database::CSqlField*)other;
					EarthView::World::Core::Database::CSqlField *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlField_OperatorEquals_ev_bool_CSqlField(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlField& objXXXX = *(EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlField& objXXXX1 = *(EarthView::World::Core::Database::CSqlField*)other;
					return objXXXX == objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlField_OperatorNotEquals_ev_bool_CSqlField(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlField& objXXXX = *(EarthView::World::Core::Database::CSqlField*) pObjXXXX;
					const EarthView::World::Core::Database::CSqlField& objXXXX1 = *(EarthView::World::Core::Database::CSqlField*)other;
					return objXXXX != objXXXX1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setValue_void_CVariant(void *pObjectXXXX, _in const void* value )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setValue(*(EarthView::World::Core::CVariant*)value);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlField_value_CVariant(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->value();
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setName_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlField_name_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->name();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlField_isNull_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNull();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setReadOnly_void_ev_bool(void *pObjectXXXX, _in ev_bool readOnly )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setReadOnly(readOnly);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlField_isReadOnly_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isReadOnly();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_Database_CSqlField_type_EVDataType(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					EarthView::World::Core::CVariant::EVDataType objXXXX = ptrNativeObject->type();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlField_isAutoValue_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAutoValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setType_void_EVDataType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Core::CVariant::EVDataType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setRequiredStatus_void_EVRequiredStatus(void *pObjectXXXX, _in int status )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setRequiredStatus((EarthView::World::Core::Database::CSqlField::EVRequiredStatus)status);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setRequired_void_ev_bool(void *pObjectXXXX, _in ev_bool required )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setRequired(required);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setLength_void_ev_int32(void *pObjectXXXX, _in ev_int32 fieldLength )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setLength(fieldLength);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setPrecision_void_ev_int32(void *pObjectXXXX, _in ev_int32 precision )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setPrecision(precision);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setDefaultValue_void_CVariant(void *pObjectXXXX, _in const void* value )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setDefaultValue(*(EarthView::World::Core::CVariant*)value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setSqlType_void_ev_int32(void *pObjectXXXX, _in ev_int32 type )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setSqlType(type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setGenerated_void_ev_bool(void *pObjectXXXX, _in ev_bool gen )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setGenerated(gen);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlField_setAutoValue_void_ev_bool(void *pObjectXXXX, _in ev_bool autoVal )
				{
					EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ptrNativeObject->setAutoValue(autoVal);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_Database_CSqlField_RequiredStatus_EVRequiredStatus(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlField::EVRequiredStatus objXXXX = ptrNativeObject->RequiredStatus();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlField_length_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->length();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlField_precision_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->precision();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlField_defaultValue_CVariant(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->defaultValue();
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlField_isGenerated_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isGenerated();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlField_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlField* ptrNativeObject = (EarthView::World::Core::Database::CSqlField*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
		}
	}
}
