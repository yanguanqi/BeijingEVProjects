/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/downloadinterface.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_instance_CDownloadInterface( )
				{
					EarthView::World::Spatial::Download::CDownloadInterface& objXXXX = EarthView::World::Spatial::Download::CDownloadInterface::instance();
					EarthView::World::Spatial::Download::CDownloadInterface *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void(void *pObjectXXXX, _in const char* url, _in void*& pData )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->httpGet(url1, pData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_int32(void *pObjectXXXX, _in const char* url, _in void*& pData, _inout ev_int32& retCode )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->httpGet(url1, pData, retCode);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_int32_ev_int32(void *pObjectXXXX, _in const char* url, _in void*& pData, _inout ev_int32& retCode, _inout ev_int32& responseTime )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->httpGet(url1, pData, retCode, responseTime);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32(void *pObjectXXXX, _in const char* url, _in void*& pData, _in ev_uint32 timeout_ms )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->httpGet(url1, pData, timeout_ms);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32_ev_int32(void *pObjectXXXX, _in const char* url, _in void*& pData, _in ev_uint32 timeout_ms, _inout ev_int32& retCode )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->httpGet(url1, pData, timeout_ms, retCode);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_httpGet_ev_uint32_EVString_void_ev_uint32_ev_int32_ev_int32(void *pObjectXXXX, _in const char* url, _in void*& pData, _in ev_uint32 timeout_ms, _inout ev_int32& retCode, _inout ev_int32& responseTime )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->httpGet(url1, pData, timeout_ms, retCode, responseTime);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_releaseHttpGetData_void_void(void *pObjectXXXX, _in void*& pData )
				{
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ptrNativeObject->releaseHttpGetData(pData);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CDownloadInterface_init_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::CDownloadInterface* ptrNativeObject = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjectXXXX;
					ptrNativeObject->init();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_URLSpeedManager_addUrl_void_EVString(void *pObjectXXXX, _in const char* url )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::URLSpeedManager* ptrNativeObject = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjectXXXX;
					ptrNativeObject->addUrl(url1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_URLSpeedManager_getMaxSpeedUrl_void_EVString_ev_int32(void *pObjectXXXX, _inout char*& url, _inout ev_int32& speed )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::URLSpeedManager* ptrNativeObject = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjectXXXX;
					ptrNativeObject->getMaxSpeedUrl(url1, speed);
					url=url1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_URLSpeedManager_getMinSpeedUrl_void_EVString_ev_int32(void *pObjectXXXX, _inout char*& url, _inout ev_int32& speed )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::URLSpeedManager* ptrNativeObject = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjectXXXX;
					ptrNativeObject->getMinSpeedUrl(url1, speed);
					url=url1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_URLSpeedManager_updateUrlSpeed_void_EVString_ev_int32(void *pObjectXXXX, _in const char* url, _in ev_int32 lastReqSpeed )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::Spatial::Download::URLSpeedManager* ptrNativeObject = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjectXXXX;
					ptrNativeObject->updateUrlSpeed(url1, lastReqSpeed);
				}
			}
		}
	}
}
