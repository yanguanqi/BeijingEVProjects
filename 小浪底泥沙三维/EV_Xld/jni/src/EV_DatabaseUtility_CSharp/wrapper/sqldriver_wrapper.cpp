/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "databaseutility/sqldriver.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
			{
				typedef void*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback)(_in int f);
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback)(_in ev_wchar*& dbname);
				typedef void*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback)(_in int tableType);
				typedef void*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback)(_in ev_wchar*& tableName);
				typedef void*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback)(_in ev_wchar*& tableName);
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback)(_in ev_wchar*& db, _in ev_wchar*& user, _in ev_wchar*& password, _in ev_wchar*& host, _in ev_int32 port, _in ev_wchar*& connOpts);
				typedef void  ( _stdcall EarthView_World_Core_Database_CSqlDriver_close_void_Callback)();
				typedef EarthView::World::Core::Database::CSqlResult*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback)();
				typedef ev_wchar*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback)(_in int type, _in ev_wchar*& tableName, _in const void* rec, _in ev_bool preparedStatement);
				typedef ev_bool  ( _stdcall EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback)(_in ev_wchar*& identifier, _in int type);
				typedef ev_wchar*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback)(_in ev_wchar*& identifier, _in int type);
				typedef ev_wchar*  ( _stdcall EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback)(_in const void* field, _in ev_bool trimStrings);
				class CSqlDriverProxy : public EarthView::World::Core::Database::CSqlDriver
				{
				private:
					EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback* m_EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback;
					EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback* m_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback;
					EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback* m_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback;
					EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback* m_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback;
					EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback* m_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback;
					EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback* m_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback;
					EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback* m_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback;
					EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback* m_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback;
					EarthView_World_Core_Database_CSqlDriver_close_void_Callback* m_EarthView_World_Core_Database_CSqlDriver_close_void_Callback;
					EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback* m_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback;
					EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback* m_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback;
					EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback* m_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback;
					EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback* m_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback;
					EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback* m_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback;
					EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback* m_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback;
					EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback* m_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback;
					EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback* m_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback;
				public:
					CSqlDriverProxy(EarthView::World::Core::CNameValuePairList *pList) : CSqlDriver(pList)
					{
						m_EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_close_void_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback = NULL;
						m_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_handle_CVariant(EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature(EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool(EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring(EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType(EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring(EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring(EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_close_void(EarthView_World_Core_Database_CSqlDriver_close_void_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_close_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult(EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool(EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool(EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool(EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType(EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType(EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool(EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Core::CVariant handle() const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback();
							return returnValue;
						}
						else
							return this->CSqlDriver::handle();
					}
					virtual ev_bool hasFeature(_in EarthView::World::Core::Database::CSqlDriver::EVDriverFeature f) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback((int)f);
							return returnValue;
						}
						else
							return this->CSqlDriver::hasFeature(f);
					}
					virtual ev_bool isOpen() const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSqlDriver::isOpen();
					}
					virtual ev_bool exist(_in const ev_wstring& dbname) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback != NULL && this->isCustomExtend())
						{
							ev_wchar* dbname_Char = dbname.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback(dbname_Char);
							return returnValue;
						}
						else
							return this->CSqlDriver::exist(dbname);
					}
					virtual EarthView::World::Core::CWStringArray tables(_in EarthView::World::Core::Database::EVTableType tableType) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CWStringArray returnValue = *(EarthView::World::Core::CWStringArray*)m_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback((int)tableType);
							return returnValue;
						}
						else
							return this->CSqlDriver::tables(tableType);
					}
					virtual EarthView::World::Core::Database::CSqlIndex primaryIndex(_in const ev_wstring& tableName) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback != NULL && this->isCustomExtend())
						{
							ev_wchar* tableName_Char = tableName.makeBuffer();
							EarthView::World::Core::Database::CSqlIndex returnValue = *(EarthView::World::Core::Database::CSqlIndex*)m_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback(tableName_Char);
							return returnValue;
						}
						else
							return this->CSqlDriver::primaryIndex(tableName);
					}
					virtual EarthView::World::Core::Database::CSqlRecord record(_in const ev_wstring& tableName) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback != NULL && this->isCustomExtend())
						{
							ev_wchar* tableName_Char = tableName.makeBuffer();
							EarthView::World::Core::Database::CSqlRecord returnValue = *(EarthView::World::Core::Database::CSqlRecord*)m_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback(tableName_Char);
							return returnValue;
						}
						else
							return this->CSqlDriver::record(tableName);
					}
					virtual ev_bool open(_in const ev_wstring& db, _in const ev_wstring& user, _in const ev_wstring& password, _in const ev_wstring& host, _in ev_int32 port, _in const ev_wstring& connOpts)
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback != NULL && this->isCustomExtend())
						{
							ev_wchar* db_Char = db.makeBuffer();
							ev_wchar* user_Char = user.makeBuffer();
							ev_wchar* password_Char = password.makeBuffer();
							ev_wchar* host_Char = host.makeBuffer();
							ev_wchar* connOpts_Char = connOpts.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback(db_Char, user_Char, password_Char, host_Char, port, connOpts_Char);
							return returnValue;
						}
						else
							return this->CSqlDriver::open(db, user, password, host, port, connOpts);
					}
					virtual void close()
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_close_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Core_Database_CSqlDriver_close_void_Callback();
						}
						else
							return this->CSqlDriver::close();
					}
					virtual EarthView::World::Core::Database::CSqlResult* createResult() const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::Database::CSqlResult* returnValue = m_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback();
							return returnValue;
						}
						else
							return this->CSqlDriver::createResult();
					}
					virtual ev_bool beginTransaction()
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSqlDriver::beginTransaction();
					}
					virtual ev_bool commitTransaction()
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSqlDriver::commitTransaction();
					}
					virtual ev_bool rollbackTransaction()
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSqlDriver::rollbackTransaction();
					}
					virtual ev_wstring sqlStatement(_in EarthView::World::Core::Database::CSqlDriver::EVStatementType type, _in const ev_wstring& tableName, _in const EarthView::World::Core::Database::CSqlRecord& rec, _in ev_bool preparedStatement) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_wchar* tableName_Char = tableName.makeBuffer();
							ev_wstring returnValue = m_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback((int)type, tableName_Char, &rec, preparedStatement);
							return returnValue;
						}
						else
							return this->CSqlDriver::sqlStatement(type, tableName, rec, preparedStatement);
					}
					virtual ev_bool isIdentifierEscaped(_in const ev_wstring& identifier, _in EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback != NULL && this->isCustomExtend())
						{
							ev_wchar* identifier_Char = identifier.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback(identifier_Char, (int)type);
							return returnValue;
						}
						else
							return this->CSqlDriver::isIdentifierEscaped(identifier, type);
					}
					virtual ev_wstring escapeIdentifier(_in const ev_wstring& identifier, _in EarthView::World::Core::Database::CSqlDriver::EVIdentifierType type) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback != NULL && this->isCustomExtend())
						{
							ev_wchar* identifier_Char = identifier.makeBuffer();
							ev_wstring returnValue = m_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback(identifier_Char, (int)type);
							return returnValue;
						}
						else
							return this->CSqlDriver::escapeIdentifier(identifier, type);
					}
					virtual ev_wstring formatValue(_in const EarthView::World::Core::Database::CSqlField& field, _in ev_bool trimStrings) const
					{
						if(m_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_wstring returnValue = m_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback(&field, trimStrings);
							return returnValue;
						}
						else
							return this->CSqlDriver::formatValue(field, trimStrings);
					}
				};
				REGISTER_FACTORY_CLASS(CSqlDriverProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_handle_CVariant(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::handle();
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->handle();
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_handle_CVariant( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_handle_CVariant_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_handle_CVariant(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_handle_CVariant_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::handle();
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature(void *pObjectXXXX, _in int f )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::hasFeature((EarthView::World::Core::Database::CSqlDriver::EVDriverFeature)f);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasFeature((EarthView::World::Core::Database::CSqlDriver::EVDriverFeature)f);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_hasFeature_ev_bool_EVDriverFeature_NoVirtual(void *pObjectXXXX, _in int f )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::hasFeature((EarthView::World::Core::Database::CSqlDriver::EVDriverFeature)f);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::isOpen();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isOpen();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_isOpen_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::isOpen();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_isOpenError_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOpenError();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_lastError_CSqlError(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlError objXXXX = ptrNativeObject->lastError();
					EarthView::World::Core::Database::CSqlError *pXXXX = new EarthView::World::Core::Database::CSqlError(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring(void *pObjectXXXX, _in const ev_wchar* dbname )
				{
					EarthView::World::Core::ev_wstring dbname1 = dbname;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::exist(dbname1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->exist(dbname1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_exist_ev_bool_ev_wstring_NoVirtual(void *pObjectXXXX, _in const ev_wchar* dbname )
				{
					EarthView::World::Core::ev_wstring dbname1 = dbname;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::exist(dbname1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType(void *pObjectXXXX, _in int tableType )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CWStringArray objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::tables((EarthView::World::Core::Database::EVTableType)tableType);
						EarthView::World::Core::CWStringArray *pXXXX = new EarthView::World::Core::CWStringArray(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CWStringArray objXXXX = ptrNativeObject->tables((EarthView::World::Core::Database::EVTableType)tableType);
						EarthView::World::Core::CWStringArray *pXXXX = new EarthView::World::Core::CWStringArray(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_tables_CWStringArray_EVTableType_NoVirtual(void *pObjectXXXX, _in int tableType )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					EarthView::World::Core::CWStringArray objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::tables((EarthView::World::Core::Database::EVTableType)tableType);
					EarthView::World::Core::CWStringArray *pXXXX = new EarthView::World::Core::CWStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring(void *pObjectXXXX, _in const ev_wchar* tableName )
				{
					EarthView::World::Core::ev_wstring tableName1 = tableName;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlIndex objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::primaryIndex(tableName1);
						EarthView::World::Core::Database::CSqlIndex *pXXXX = new EarthView::World::Core::Database::CSqlIndex(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::Database::CSqlIndex objXXXX = ptrNativeObject->primaryIndex(tableName1);
						EarthView::World::Core::Database::CSqlIndex *pXXXX = new EarthView::World::Core::Database::CSqlIndex(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_primaryIndex_CSqlIndex_ev_wstring_NoVirtual(void *pObjectXXXX, _in const ev_wchar* tableName )
				{
					EarthView::World::Core::ev_wstring tableName1 = tableName;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlIndex objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::primaryIndex(tableName1);
					EarthView::World::Core::Database::CSqlIndex *pXXXX = new EarthView::World::Core::Database::CSqlIndex(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring(void *pObjectXXXX, _in const ev_wchar* tableName )
				{
					EarthView::World::Core::ev_wstring tableName1 = tableName;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlRecord objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::record(tableName1);
						EarthView::World::Core::Database::CSqlRecord *pXXXX = new EarthView::World::Core::Database::CSqlRecord(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::Database::CSqlRecord objXXXX = ptrNativeObject->record(tableName1);
						EarthView::World::Core::Database::CSqlRecord *pXXXX = new EarthView::World::Core::Database::CSqlRecord(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_Database_CSqlDriver_record_CSqlRecord_ev_wstring_NoVirtual(void *pObjectXXXX, _in const ev_wchar* tableName )
				{
					EarthView::World::Core::ev_wstring tableName1 = tableName;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlRecord objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::record(tableName1);
					EarthView::World::Core::Database::CSqlRecord *pXXXX = new EarthView::World::Core::Database::CSqlRecord(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(void *pObjectXXXX, _in const ev_wchar* db, _in const ev_wchar* user, _in const ev_wchar* password, _in const ev_wchar* host, _in ev_int32 port, _in const ev_wchar* connOpts )
				{
					EarthView::World::Core::ev_wstring db1 = db;
					EarthView::World::Core::ev_wstring user1 = user;
					EarthView::World::Core::ev_wstring password1 = password;
					EarthView::World::Core::ev_wstring host1 = host;
					EarthView::World::Core::ev_wstring connOpts1 = connOpts;
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::open(db1, user1, password1, host1, port, connOpts1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->open(db1, user1, password1, host1, port, connOpts1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_open_ev_bool_ev_wstring_ev_wstring_ev_wstring_ev_wstring_ev_int32_ev_wstring_NoVirtual(void *pObjectXXXX, _in const ev_wchar* db, _in const ev_wchar* user, _in const ev_wchar* password, _in const ev_wchar* host, _in ev_int32 port, _in const ev_wchar* connOpts )
				{
					EarthView::World::Core::ev_wstring db1 = db;
					EarthView::World::Core::ev_wstring user1 = user;
					EarthView::World::Core::ev_wstring password1 = password;
					EarthView::World::Core::ev_wstring host1 = host;
					EarthView::World::Core::ev_wstring connOpts1 = connOpts;
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::open(db1, user1, password1, host1, port, connOpts1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDriver_close_void(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::close();
					else
						ptrNativeObject->close();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_close_void( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_close_void_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_close_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDriver_close_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::close();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::Database::CSqlResult*  _stdcall EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::Database::CSqlResult* objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::createResult();
						return objXXXX;
					}
					else
					{
						EarthView::World::Core::Database::CSqlResult* objXXXX = ptrNativeObject->createResult();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::Database::CSqlResult*  _stdcall EarthView_World_Core_Database_CSqlDriver_createResult_CSqlResult_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					EarthView::World::Core::Database::CSqlResult* objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::createResult();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::beginTransaction();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginTransaction();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_beginTransaction_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::beginTransaction();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::commitTransaction();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->commitTransaction();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_commitTransaction_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::commitTransaction();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::rollbackTransaction();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rollbackTransaction();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_rollbackTransaction_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::rollbackTransaction();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(void *pObjectXXXX, _in int type, _in const ev_wchar* tableName, _in const void* rec, _in ev_bool preparedStatement )
				{
					EarthView::World::Core::ev_wstring tableName1 = tableName;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_wstring objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::sqlStatement((EarthView::World::Core::Database::CSqlDriver::EVStatementType)type, tableName1, *(EarthView::World::Core::Database::CSqlRecord*)rec, preparedStatement);
						return objXXXX.makeBuffer();
					}
					else
					{
						ev_wstring objXXXX = ptrNativeObject->sqlStatement((EarthView::World::Core::Database::CSqlDriver::EVStatementType)type, tableName1, *(EarthView::World::Core::Database::CSqlRecord*)rec, preparedStatement);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDriver_sqlStatement_ev_wstring_EVStatementType_ev_wstring_CSqlRecord_ev_bool_NoVirtual(void *pObjectXXXX, _in int type, _in const ev_wchar* tableName, _in const void* rec, _in ev_bool preparedStatement )
				{
					EarthView::World::Core::ev_wstring tableName1 = tableName;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_wstring objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::sqlStatement((EarthView::World::Core::Database::CSqlDriver::EVStatementType)type, tableName1, *(EarthView::World::Core::Database::CSqlRecord*)rec, preparedStatement);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType(void *pObjectXXXX, _in const ev_wchar* identifier, _in int type )
				{
					EarthView::World::Core::ev_wstring identifier1 = identifier;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::isIdentifierEscaped(identifier1, (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType)type);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isIdentifierEscaped(identifier1, (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType)type);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_Database_CSqlDriver_isIdentifierEscaped_ev_bool_ev_wstring_EVIdentifierType_NoVirtual(void *pObjectXXXX, _in const ev_wchar* identifier, _in int type )
				{
					EarthView::World::Core::ev_wstring identifier1 = identifier;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::isIdentifierEscaped(identifier1, (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType(void *pObjectXXXX, _in const ev_wchar* identifier, _in int type )
				{
					EarthView::World::Core::ev_wstring identifier1 = identifier;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_wstring objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::escapeIdentifier(identifier1, (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType)type);
						return objXXXX.makeBuffer();
					}
					else
					{
						ev_wstring objXXXX = ptrNativeObject->escapeIdentifier(identifier1, (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType)type);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDriver_escapeIdentifier_ev_wstring_ev_wstring_EVIdentifierType_NoVirtual(void *pObjectXXXX, _in const ev_wchar* identifier, _in int type )
				{
					EarthView::World::Core::ev_wstring identifier1 = identifier;
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_wstring objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::escapeIdentifier(identifier1, (EarthView::World::Core::Database::CSqlDriver::EVIdentifierType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool(void *pObjectXXXX, _in const void* field, _in ev_bool trimStrings )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					if (dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*)ptrNativeObject) != NULL)
					{
						ev_wstring objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::formatValue(*(EarthView::World::Core::Database::CSqlField*)field, trimStrings);
						return objXXXX.makeBuffer();
					}
					else
					{
						ev_wstring objXXXX = ptrNativeObject->formatValue(*(EarthView::World::Core::Database::CSqlField*)field, trimStrings);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool( void *pObjectXXXX, EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_Callback* pCallback )
				{
					CSqlDriverProxy* ptr = dynamic_cast<CSqlDriverProxy*>((EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_wchar*  _stdcall EarthView_World_Core_Database_CSqlDriver_formatValue_ev_wstring_CSqlField_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* field, _in ev_bool trimStrings )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ev_wstring objXXXX = ptrNativeObject->EarthView::World::Core::Database::CSqlDriver::formatValue(*(EarthView::World::Core::Database::CSqlField*)field, trimStrings);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_Database_CSqlDriver_setNumericalPrecisionPolicy_void_EVNumericalPrecisionPolicy(void *pObjectXXXX, _in int precisionPolicy )
				{
					EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					ptrNativeObject->setNumericalPrecisionPolicy((EarthView::World::Core::Database::EVNumericalPrecisionPolicy)precisionPolicy);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Core_Database_CSqlDriver_numericalPrecisionPolicy_EVNumericalPrecisionPolicy(void *pObjectXXXX )
				{
					const EarthView::World::Core::Database::CSqlDriver* ptrNativeObject = (EarthView::World::Core::Database::CSqlDriver*) pObjectXXXX;
					EarthView::World::Core::Database::EVNumericalPrecisionPolicy objXXXX = ptrNativeObject->numericalPrecisionPolicy();
					return (int)objXXXX;
				}
			}
		}
	}
}
