/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/webdatasourcecachemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_instance_CWebDataSourceCacheManager( )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager& objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager::instance();
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_setUsingCacheURL_void_EVString_ev_bool(void *pObjectXXXX, _in const char* url, _in ev_bool isUsingCache )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager*) pObjectXXXX;
					ptrNativeObject->setUsingCacheURL(url1, isUsingCache);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_isUsingCacheURL_ev_bool_EVString(void *pObjectXXXX, _in const char* url )
				{
					EarthView::World::Core::ev_string url1 = url;
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isUsingCacheURL(url1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CWebDataSourceCacheManager_getCachedURLList_StringVector(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getCachedURLList();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
