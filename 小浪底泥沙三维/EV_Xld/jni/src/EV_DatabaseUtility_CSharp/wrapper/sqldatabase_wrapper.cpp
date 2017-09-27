/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqldatabase.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				typedef EarthView::World::Core::Database::CSqlDriver*  ( _stdcall EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback)();
				class CSqlDriverCreatorBaseProxy : public EarthView::World::Core::Database::CSqlDriverCreatorBase
				{
				private:
					EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback* m_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback;
				public:
					CSqlDriverCreatorBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlDriverCreatorBase(pList)
					{
						m_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver(EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback = pCallback;
					}
					virtual EarthView::World::Core::Database::CSqlDriver* createObject()
					{
						if(m_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::Database::CSqlDriver* returnValue = m_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback();
							return returnValue;
						}
						else
							return this->CSqlDriverCreatorBase::createObject();
					}
				};
				REGISTER_FACTORY_CLASS(CSqlDriverCreatorBaseProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::Database::CSqlDriver*  _stdcall EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriverCreatorBase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriverCreatorBase*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverCreatorBaseProxy*>((EarthView::World::Core::Database::CSqlDriverCreatorBase*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlDriver* objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriverCreatorBase::createObject();
						return objXXXX;
					}
					else
					{
						EarthView::World::Core::Database::CSqlDriver* objXXXX = ptrNativeObject->createObject();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_Callback* pCallback )
				{
					CSqlDriverCreatorBaseProxy* ptr = dynamic_cast<CSqlDriverCreatorBaseProxy*>((EarthView::World::Core::Database::CSqlDriverCreatorBase*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::Database::CSqlDriver*  _stdcall EarthView_World_Core_Database_CSqlDriverCreatorBase_createObject_CSqlDriver_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriverCreatorBase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriverCreatorBase*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlDriver* objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriverCreatorBase::createObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_OperatorAssign_CSqlDatabase_CSqlDatabase(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Core::Database::CSqlDatabase& objXXXX = *((EarthView::World::Core::Database::CSqlDatabase*) pObjXXXX);
					objXXXX = *(EarthView::World::Core::Database::CSqlDatabase*)other;
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_open_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->open();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_open_ev_bool_ev_wstring_ev_wstring(void *pObjectXXXX, _in const ev_wchar* user, _in const ev_wchar* password )
				{
					EarthView::World::Core::ev_wstring user1 = user;
					EarthView::World::Core::ev_wstring password1 = password;
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->open(user1, password1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_close_void(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->close();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_isOpen_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOpen();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_isOpenError_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOpenError();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_transaction_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->transaction();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_commit_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->commit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_rollback_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->rollback();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_setDatabaseName_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->setDatabaseName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_setUserName_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->setUserName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_setPassword_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* password )
				{
					EarthView::World::Core::ev_wstring password1 = password;
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->setPassword(password1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_setHostName_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* host )
				{
					EarthView::World::Core::ev_wstring host1 = host;
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->setHostName(host1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_setPort_void_ev_int32(void *pObjectXXXX, _in ev_int32 p )
				{
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->setPort(p);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_setConnectOptions_void_ev_wstring(void *pObjectXXXX, _in const ev_wchar* options )
				{
					EarthView::World::Core::ev_wstring options1 = options;
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->setConnectOptions(options1);
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDatabase_databaseName_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->databaseName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDatabase_userName_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->userName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDatabase_password_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->password();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDatabase_hostName_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->hostName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDatabase_driverName_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->driverName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_Database_CSqlDatabase_port_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->port();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDatabase_connectOptions_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->connectOptions();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDatabase_connectionName_ev_wstring(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					const ev_wstring& objXXXX = ptrNativeObject->connectionName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::Database::CSqlDriver*  _stdcall EarthView_World_Core_Database_CSqlDatabase_driver_CSqlDriver(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlDriver* objXXXX = ptrNativeObject->driver();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_tables_CWStringArray_EVTableType(void *pObjectXXXX, _in int type )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					EarthView::World::Core::CWStringArray objXXXX = ptrNativeObject->tables((EarthView::World::Core::Database::EVTableType)type);
					EarthView::World::Core::CWStringArray *pXXXX = new EarthView::World::Core::CWStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_record_CSqlRecord_ev_wstring(void *pObjectXXXX, _in const ev_wchar* tablename )
				{
					EarthView::World::Core::ev_wstring tablename1 = tablename;
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlRecord objXXXX = ptrNativeObject->record(tablename1);
					EarthView::World::Core::Database::CSqlRecord *pXXXX = new EarthView::World::Core::Database::CSqlRecord(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_primaryIndex_CSqlIndex_ev_wstring(void *pObjectXXXX, _in const ev_wchar* tablename )
				{
					EarthView::World::Core::ev_wstring tablename1 = tablename;
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlIndex objXXXX = ptrNativeObject->primaryIndex(tablename1);
					EarthView::World::Core::Database::CSqlIndex *pXXXX = new EarthView::World::Core::Database::CSqlIndex(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_addDatabase_CSqlDatabase_ev_wstring_ev_wstring(_in const ev_wchar* type, _in const ev_wchar* connectionName )
				{
					EarthView::World::Core::ev_wstring type1 = type;
					EarthView::World::Core::ev_wstring connectionName1 = connectionName;
					EarthView::World::Core::Database::CSqlDatabase objXXXX = EarthView::World::Core::Database::CSqlDatabase::addDatabase(type1, connectionName1);
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = new EarthView::World::Core::Database::CSqlDatabase(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_addDatabase_CSqlDatabase_CSqlDriver_ev_wstring(_in EarthView::World::Core::Database::CSqlDriver* driver, _in const ev_wchar* connectionName )
				{
					EarthView::World::Core::ev_wstring connectionName1 = connectionName;
					EarthView::World::Core::Database::CSqlDatabase objXXXX = EarthView::World::Core::Database::CSqlDatabase::addDatabase(driver, connectionName1);
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = new EarthView::World::Core::Database::CSqlDatabase(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_cloneDatabase_CSqlDatabase_CSqlDatabase_ev_wstring(_in const void* other, _in const ev_wchar* connectionName )
				{
					EarthView::World::Core::ev_wstring connectionName1 = connectionName;
					EarthView::World::Core::Database::CSqlDatabase objXXXX = EarthView::World::Core::Database::CSqlDatabase::cloneDatabase(*(EarthView::World::Core::Database::CSqlDatabase*)other, connectionName1);
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = new EarthView::World::Core::Database::CSqlDatabase(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_database_CSqlDatabase_ev_wstring_ev_bool(_in const ev_wchar* connectionName, _in ev_bool open )
				{
					EarthView::World::Core::ev_wstring connectionName1 = connectionName;
					EarthView::World::Core::Database::CSqlDatabase objXXXX = EarthView::World::Core::Database::CSqlDatabase::database(connectionName1, open);
					EarthView::World::Core::Database::CSqlDatabase *pXXXX = new EarthView::World::Core::Database::CSqlDatabase(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_removeDatabase_void_ev_wstring(_in const ev_wchar* connectionName )
				{
					EarthView::World::Core::ev_wstring connectionName1 = connectionName;
					EarthView::World::Core::Database::CSqlDatabase::removeDatabase(connectionName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_contains_ev_bool_ev_wstring(_in const ev_wchar* connectionName )
				{
					EarthView::World::Core::ev_wstring connectionName1 = connectionName;
					ev_bool objXXXX = EarthView::World::Core::Database::CSqlDatabase::contains(connectionName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_drivers_CWStringArray( )
				{
					EarthView::World::Core::CWStringArray objXXXX = EarthView::World::Core::Database::CSqlDatabase::drivers();
					EarthView::World::Core::CWStringArray *pXXXX = new EarthView::World::Core::CWStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDatabase_connectionNames_CWStringArray( )
				{
					EarthView::World::Core::CWStringArray objXXXX = EarthView::World::Core::Database::CSqlDatabase::connectionNames();
					EarthView::World::Core::CWStringArray *pXXXX = new EarthView::World::Core::CWStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_registerSqlDriver_void_ev_wstring_CSqlDriverCreatorBase(_in const ev_wchar* name, _in EarthView::World::Core::Database::CSqlDriverCreatorBase* creator )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					EarthView::World::Core::Database::CSqlDatabase::registerSqlDriver(name1, creator);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDatabase_isDriverAvailable_ev_bool_ev_wstring(_in const ev_wchar* name )
				{
					EarthView::World::Core::ev_wstring name1 = name;
					ev_bool objXXXX = EarthView::World::Core::Database::CSqlDatabase::isDriverAvailable(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDatabase_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(void *pObjectXXXX, _in int precisionPolicy )
				{
					EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					ptrNativeObject->setNumericalPrecisionPolicy((EarthView::World::Core::Database::EVNumericalPrecisionPolicy)precisionPolicy);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_Database_CSqlDatabase_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDatabase* ptrNativeObject = (EarthView::World::Core::Database::CSqlDatabase*) pObjectXXXX;
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy objXXXX = ptrNativeObject->numericalPrecisionPolicy();
					return (int)objXXXX;
				}
			}
		}
	}
}
