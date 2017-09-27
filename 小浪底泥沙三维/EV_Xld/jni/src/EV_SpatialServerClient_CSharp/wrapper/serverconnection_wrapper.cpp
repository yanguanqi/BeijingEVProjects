/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/serverconnection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerConnection_getURL_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getURL();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerConnection_getUserName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUserName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerConnection_getConnectionName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getConnectionName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CServerConnection_getServerPluginFile_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getServerPluginFile();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial_CServerConnection_getType_EVServerConnectionType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				const EarthView::World::Spatial::EVServerConnectionType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerConnection_setURL_void_EVString(void *pObjectXXXX, _in const char* url )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				ptrNativeObject->setURL(url1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerConnection_setUserName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				ptrNativeObject->setUserName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerConnection_setPassword_void_EVString(void *pObjectXXXX, _in const char* password )
			{
				EarthView::World::Core::ev_string password1 = password;
				EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				ptrNativeObject->setPassword(password1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerConnection_setConnectionName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				ptrNativeObject->setConnectionName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CServerConnection_setServerPluginFile_void_EVString(void *pObjectXXXX, _in const char* pluginfile )
			{
				EarthView::World::Core::ev_string pluginfile1 = pluginfile;
				EarthView::World::Spatial::CServerConnection* ptrNativeObject = (EarthView::World::Spatial::CServerConnection*) pObjectXXXX;
				ptrNativeObject->setServerPluginFile(pluginfile1);
			}
		}
	}
}
