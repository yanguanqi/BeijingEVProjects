/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqlerror.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlError_OperatorAssign_CSqlError_CSqlError(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlError& objXXXX = *((EarthView::World::Core::Database::CSqlError*) pObjXXXX);
					objXXXX = *(EarthView::World::Core::Database::CSqlError*)other;
					EarthView::World::Core::Database::CSqlError *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlError_driverText_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->driverText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlError_setDriverText_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* driverText )
				{
					EarthView::World::Core::ev_wstring driverText1 = driverText;
					EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					ptrNativeObject->setDriverText(driverText1);
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlError_databaseText_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->databaseText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlError_setDatabaseText_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* databaseText )
				{
					EarthView::World::Core::ev_wstring databaseText1 = databaseText;
					EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					ptrNativeObject->setDatabaseText(databaseText1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_Database_CSqlError_type_EVErrorType(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlError::EVErrorType objXXXX = ptrNativeObject->type();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlError_setType_void_EVErrorType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Core::Database::CSqlError::EVErrorType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_Database_CSqlError_number_int(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					int objXXXX = ptrNativeObject->number();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlError_setNumber_void_int(void *pObjectXXXX, _in int number )
				{
					EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					ptrNativeObject->setNumber(number);
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlError_text_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					ev_wstring objXXXX = ptrNativeObject->text();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Core_Database_CSqlError_isValid_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlError* ptrNativeObject = (EarthView::World::Core::Database::CSqlError*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
		}
	}
}
