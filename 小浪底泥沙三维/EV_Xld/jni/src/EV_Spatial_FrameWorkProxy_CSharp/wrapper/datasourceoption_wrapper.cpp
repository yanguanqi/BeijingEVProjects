/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourceoption.h"
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_open_DataSourceOption_Open(void *pObjectXXXX )
			{
				EarthView::World::Utilities::DataSourceOption* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption_Open& objXXXX = ptrNativeObject->open();
				EarthView::World::Utilities::DataSourceOption_Open *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_create_DataSourceOption_Create(void *pObjectXXXX )
			{
				EarthView::World::Utilities::DataSourceOption* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption_Create& objXXXX = ptrNativeObject->create();
				EarthView::World::Utilities::DataSourceOption_Create *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Open_DB_sqlite_DataSourceOption_EVString(void *pObjectXXXX, _in const char* filepath )
			{
				EarthView::World::Core::ev_string filepath1 = filepath;
				EarthView::World::Utilities::DataSourceOption_Open_DB* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Open_DB*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption& objXXXX = ptrNativeObject->sqlite(filepath1);
				EarthView::World::Utilities::DataSourceOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Open_DB_odbc_DataSourceOption_EVString_int_EVString_EVString(void *pObjectXXXX, _in const char* ip, _in int port, _in const char* user, _in const char* password )
			{
				EarthView::World::Core::ev_string ip1 = ip;
				EarthView::World::Core::ev_string user1 = user;
				EarthView::World::Core::ev_string password1 = password;
				EarthView::World::Utilities::DataSourceOption_Open_DB* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Open_DB*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption& objXXXX = ptrNativeObject->odbc(ip1, port, user1, password1);
				EarthView::World::Utilities::DataSourceOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Open_DB_oracle_DataSourceOption_EVString_int_EVString_EVString(void *pObjectXXXX, _in const char* ip, _in int port, _in const char* user, _in const char* password )
			{
				EarthView::World::Core::ev_string ip1 = ip;
				EarthView::World::Core::ev_string user1 = user;
				EarthView::World::Core::ev_string password1 = password;
				EarthView::World::Utilities::DataSourceOption_Open_DB* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Open_DB*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption& objXXXX = ptrNativeObject->oracle(ip1, port, user1, password1);
				EarthView::World::Utilities::DataSourceOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Create_DB_sqlite_DataSourceOption_EVString(void *pObjectXXXX, _in const char* filepath )
			{
				EarthView::World::Core::ev_string filepath1 = filepath;
				EarthView::World::Utilities::DataSourceOption_Create_DB* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Create_DB*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption& objXXXX = ptrNativeObject->sqlite(filepath1);
				EarthView::World::Utilities::DataSourceOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Open_db_DataSourceOption_Open_DB(void *pObjectXXXX )
			{
				EarthView::World::Utilities::DataSourceOption_Open* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Open*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption_Open_DB& objXXXX = ptrNativeObject->db();
				EarthView::World::Utilities::DataSourceOption_Open_DB *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Open_file_DataSourceOption_EVString(void *pObjectXXXX, _in const char* dirPath )
			{
				EarthView::World::Core::ev_string dirPath1 = dirPath;
				EarthView::World::Utilities::DataSourceOption_Open* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Open*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption& objXXXX = ptrNativeObject->file(dirPath1);
				EarthView::World::Utilities::DataSourceOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Open_web_DataSourceOption_EVString_int_EVString_EVString_EVString_WebServerType(void *pObjectXXXX, _in const char* ip, _in int port, _in const char* user, _in const char* password, _in const char* pluginFile, _in int serverType )
			{
				EarthView::World::Core::ev_string ip1 = ip;
				EarthView::World::Core::ev_string user1 = user;
				EarthView::World::Core::ev_string password1 = password;
				EarthView::World::Core::ev_string pluginFile1 = pluginFile;
				EarthView::World::Utilities::DataSourceOption_Open* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Open*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption& objXXXX = ptrNativeObject->web(ip1, port, user1, password1, pluginFile1, (EarthView::World::Utilities::WebServerType)serverType);
				EarthView::World::Utilities::DataSourceOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Open_web_DataSourceOption_EVString_EVString_EVString_EVString_WebServerType(void *pObjectXXXX, _in const char* url, _in const char* user, _in const char* password, _in const char* pluginFile, _in int serverType )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Core::ev_string user1 = user;
				EarthView::World::Core::ev_string password1 = password;
				EarthView::World::Core::ev_string pluginFile1 = pluginFile;
				EarthView::World::Utilities::DataSourceOption_Open* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Open*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption& objXXXX = ptrNativeObject->web(url1, user1, password1, pluginFile1, (EarthView::World::Utilities::WebServerType)serverType);
				EarthView::World::Utilities::DataSourceOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DataSourceOption_Create_db_DataSourceOption_Create_DB(void *pObjectXXXX )
			{
				EarthView::World::Utilities::DataSourceOption_Create* ptrNativeObject = (EarthView::World::Utilities::DataSourceOption_Create*) pObjectXXXX;
				EarthView::World::Utilities::DataSourceOption_Create_DB& objXXXX = ptrNativeObject->db();
				EarthView::World::Utilities::DataSourceOption_Create_DB *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
