/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/webmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_CWebManager_getSingleton_CWebManager( )
				{
					EarthView::World::Spatial::Download::CWebManager& objXXXX = EarthView::World::Spatial::Download::CWebManager::getSingleton();
					EarthView::World::Spatial::Download::CWebManager *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Download::CWebManager*  _stdcall EarthView_World_Spatial_Download_CWebManager_getSingletonPtr_CWebManager( )
				{
					EarthView::World::Spatial::Download::CWebManager* objXXXX = EarthView::World::Spatial::Download::CWebManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Download::CWebServiceConnection*  _stdcall EarthView_World_Spatial_Download_CWebManager_getWebServiceConnection_CWebServiceConnection_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* url )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					EarthView::World::Spatial::Download::CWebServiceConnection* objXXXX = ptrNativeObject->getWebServiceConnection(name1, url1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebManager_setConnectOutTime_void_ev_int32(void *pObjectXXXX, _in ev_int32 outtime )
				{
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					ptrNativeObject->setConnectOutTime(outtime);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_CWebManager_getConnectOutTime_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getConnectOutTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebManager_setAutoConnectInterval_void_ev_int32(void *pObjectXXXX, _in ev_int32 interval )
				{
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					ptrNativeObject->setAutoConnectInterval(interval);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_CWebManager_getAutoConnectInterval_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getAutoConnectInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_CWebManager_installServicePlugin_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* pluginFile, _in const char* host )
				{
					EarthView::World::Core::ev_string pluginFile1 = pluginFile;
					EarthView::World::Core::ev_string host1 = host;
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->installServicePlugin(pluginFile1, host1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Download::ConnectionImpPlugin*  _stdcall EarthView_World_Spatial_Download_CWebManager_getConnectionImpPlugin_ConnectionImpPlugin_EVString_EVString(void *pObjectXXXX, _in const char* pluginFile, _in const char* serverHost )
				{
					EarthView::World::Core::ev_string pluginFile1 = pluginFile;
					EarthView::World::Core::ev_string serverHost1 = serverHost;
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					EarthView::World::Spatial::Download::ConnectionImpPlugin* objXXXX = ptrNativeObject->getConnectionImpPlugin(pluginFile1, serverHost1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_CWebManager_getPluginPath_EVString_EVString(void *pObjectXXXX, _in const char* serverHost )
				{
					EarthView::World::Core::ev_string serverHost1 = serverHost;
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPluginPath(serverHost1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_CWebManager_getPluginsInfo_StringVector_EVString(void *pObjectXXXX, _in const char* pluginsFolder )
				{
					EarthView::World::Core::ev_string pluginsFolder1 = pluginsFolder;
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getPluginsInfo(pluginsFolder1);
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_CWebManager_getPluginPathByPluginName_EVString_EVString(void *pObjectXXXX, _in const char* pluginName )
				{
					EarthView::World::Core::ev_string pluginName1 = pluginName;
					EarthView::World::Spatial::Download::CWebManager* ptrNativeObject = (EarthView::World::Spatial::Download::CWebManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPluginPathByPluginName(pluginName1);
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
