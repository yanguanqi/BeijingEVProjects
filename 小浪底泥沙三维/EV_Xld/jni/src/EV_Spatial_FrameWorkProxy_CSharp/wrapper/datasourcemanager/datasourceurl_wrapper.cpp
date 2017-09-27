/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourceurl.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURL_setURL_void_EVString(void *pObjectXXXX, _in const char* url )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjectXXXX;
					ptrNativeObject->setURL(url1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURL_getURL_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getURL();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURL_medium_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->medium();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURL_connectParameter_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->connectParameter();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURL_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURL_setAliasName_void_EVString(void *pObjectXXXX, _in const char* strAliasName )
				{
					EarthView::World::Core::ev_string strAliasName1 = strAliasName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjectXXXX;
					ptrNativeObject->setAliasName(strAliasName1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_sourcetype( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->sourcetype;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_sourcetype( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->sourcetype = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_connectpath( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->connectpath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_connectpath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->connectpath = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_username( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->username;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_username( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->username = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_password( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->password;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_password( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->password = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_sourcename( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->sourcename;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_sourcename( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->sourcename = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_ip( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->ip;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_ip( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->ip = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_port( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->port;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_port( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->port = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_dbtype( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->dbtype;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_dbtype( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->dbtype = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_serviceplugin( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->serviceplugin;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_serviceplugin( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->serviceplugin = value1;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_serverType( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) pObjectXXXX;
					EarthView::World::Utilities::WebServerType objXXXX = ptrNativeObject->serverType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLStruct_serverType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjectXXXX)->serverType = (EarthView::World::Utilities::WebServerType)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLTool_createFileDataSourceUrl_CDataSourceURL_CDataSourceURLStruct(_in const void* urlStruct )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool::createFileDataSourceUrl(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)urlStruct);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLTool_parseDataSourceUrl_CDataSourceURLStruct_EVString(_in const char* url )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool::parseDataSourceUrl(url1);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceURLTool_parseDataSourceUrl_CDataSourceURLStruct_CDataSourceURL(_in const void* url )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool::parseDataSourceUrl(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)url);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
