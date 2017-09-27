/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "cachemanager/cachemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CacheManager_getSingleton_CacheManager( )
			{
				EarthView::World::Spatial::CacheManager& objXXXX = EarthView::World::Spatial::CacheManager::getSingleton();
				EarthView::World::Spatial::CacheManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CacheManager*  _stdcall EarthView_World_Spatial_CacheManager_getSingletonPtr_CacheManager( )
			{
				EarthView::World::Spatial::CacheManager* objXXXX = EarthView::World::Spatial::CacheManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheManager_setCacheManageInterval_void_ev_int32(void *pObjectXXXX, _in ev_int32 interval )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ptrNativeObject->setCacheManageInterval(interval);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CacheManager_getCacheManageInterval_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getCacheManageInterval();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheManager_setCacheUpdateListenURL_void_EVString(void *pObjectXXXX, _in const char* url )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ptrNativeObject->setCacheUpdateListenURL(url1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CacheManager_getCacheUpdateListenURL_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getCacheUpdateListenURL();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_setCacheMaxSize_ev_bool_ev_uint64(void *pObjectXXXX, _in ev_uint64 maxsize )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setCacheMaxSize(maxsize);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_CacheManager_getCacheMaxSize_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->getCacheMaxSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_loadConfig_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->loadConfig();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheManager_saveConfig_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ptrNativeObject->saveConfig();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_manageLocalCacheData_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->manageLocalCacheData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_setCacheRootDir_ev_bool_EVString(void *pObjectXXXX, _in const char* cacheRootDir )
			{
				EarthView::World::Core::ev_string cacheRootDir1 = cacheRootDir;
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setCacheRootDir(cacheRootDir1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CacheManager_getCacheRootDir_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getCacheRootDir();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CacheManager_deleteCache_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->deleteCache();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_start_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->start();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_start_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool workable )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->start(workable);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_isWorking_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isWorking();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheManager_stop_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ptrNativeObject->stop();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheManager_pauseWork_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ptrNativeObject->pauseWork();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CacheManager_continueWork_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ptrNativeObject->continueWork();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_isPaused_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isPaused();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CacheManager_clearVectorTileCache_ev_bool_EVString(void *pObjectXXXX, _in const char* datasetName )
			{
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->clearVectorTileCache(datasetName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_CacheManager_getCurrentCacheSize_ev_uint64(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CacheManager* ptrNativeObject = (EarthView::World::Spatial::CacheManager*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->getCurrentCacheSize();
				return objXXXX;
			}
		}
	}
}
