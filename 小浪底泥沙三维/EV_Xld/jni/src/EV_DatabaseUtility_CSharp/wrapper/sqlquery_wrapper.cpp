/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlquery.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlQuery_OperatorAssign_CSqlQuery_CSqlQuery(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlQuery& objXXXX = *((EarthView::World::Core::Database::CSqlQuery*) pObjXXXX);
					objXXXX = *(EarthView::World::Core::Database::CSqlQuery*)other;
					EarthView::World::Core::Database::CSqlQuery *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlQuery_bindValue_void_ev_wstring_CVariant_EVParamType(void *pObjectXXXX, _in const ev_wchar* placeholder, _in const void* val, _in int type )
				{
					EarthView::World::Core::ev_wstring placeholder1 = placeholder;
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ptrNativeObject->bindValue(placeholder1, *(EarthView::World::Core::CVariant*)val, (EarthView::World::Core::Database::EVParamType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlQuery_bindValue_void_ev_int32_CVariant_EVParamType(void *pObjectXXXX, _in ev_int32 pos, _in const void* val, _in int type )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ptrNativeObject->bindValue(pos, *(EarthView::World::Core::CVariant*)val, (EarthView::World::Core::Database::EVParamType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlQuery_addBindValue_void_CVariant_EVParamType(void *pObjectXXXX, _in const void* val, _in int type )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ptrNativeObject->addBindValue(*(EarthView::World::Core::CVariant*)val, (EarthView::World::Core::Database::EVParamType)type);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlQuery_boundValue_CVariant_ev_wstring(void *pObjectXXXX, _in const ev_wchar* placeholder )
				{
					EarthView::World::Core::ev_wstring placeholder1 = placeholder;
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->boundValue(placeholder1);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlQuery_boundValue_CVariant_ev_int32(void *pObjectXXXX, _in ev_int32 pos )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->boundValue(pos);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlQuery_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Core::Database::CSqlDriver*  _stdcall EarthView_World_Core_Database_CSqlQuery_driver_CSqlDriver(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					const EarthView::World::Core::Database::CSqlDriver* objXXXX = ptrNativeObject->driver();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_exec_ev_bool_ev_wstring(void *pObjectXXXX, _in const ev_wchar* query )
				{
					EarthView::World::Core::ev_wstring query1 = query;
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exec(query1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_exec_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exec();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Core_Database_CSqlQuery_execBatch_bool_EVBatchExecutionMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->execBatch((EarthView::World::Core::Database::EVBatchExecutionMode)mode);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlQuery_executedQuery_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_wstring objXXXX = ptrNativeObject->executedQuery();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlQuery_finish_void(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ptrNativeObject->finish();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_first_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->first();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_last_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->last();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_next_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_previous_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->previous();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_isForwardOnly_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isForwardOnly();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_seek_ev_bool_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 index, _in ev_bool relative )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->seek(index, relative);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Core::Database::CSqlResult*  _stdcall EarthView_World_Core_Database_CSqlQuery_result_CSqlResult(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					const EarthView::World::Core::Database::CSqlResult* objXXXX = ptrNativeObject->result();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlQuery_record_CSqlRecord(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlRecord objXXXX = ptrNativeObject->record();
					EarthView::World::Core::Database::CSqlRecord *pXXXX = new EarthView::World::Core::Database::CSqlRecord(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlQuery_value_CVariant_ev_int32(void *pObjectXXXX, _in ev_int32 i )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->value(i);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlQuery_size_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_isNull_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 field )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isNull(field);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlQuery_at_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->at();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_isSelect_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSelect();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlQuery_setForwardOnly_void_ev_bool(void *pObjectXXXX, _in ev_bool forward )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ptrNativeObject->setForwardOnly(forward);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_prepare_ev_bool_ev_wstring(void *pObjectXXXX, _in const ev_wchar* query )
				{
					EarthView::World::Core::ev_wstring query1 = query;
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->prepare(query1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlQuery_lastInsertId_CVariant(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->lastInsertId();
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlQuery_numRowsAffected_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->numRowsAffected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlQuery_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(void *pObjectXXXX, _in int precisionPolicy )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ptrNativeObject->setNumericalPrecisionPolicy((EarthView::World::Core::Database::EVNumericalPrecisionPolicy)precisionPolicy);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_Database_CSqlQuery_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy objXXXX = ptrNativeObject->numericalPrecisionPolicy();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlQuery_nextResult_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlQuery* ptrNativeObject = (EarthView::World::Core::Database::CSqlQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->nextResult();
					return objXXXX;
				}
			}
		}
	}
}
