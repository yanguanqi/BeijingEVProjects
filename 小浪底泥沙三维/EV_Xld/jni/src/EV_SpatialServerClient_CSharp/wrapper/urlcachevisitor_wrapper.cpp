/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/urlcachevisitor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_instance_CEVSpatialServerURLCacheVisitor( )
			{
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor& objXXXX = EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor::instance();
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_addUsingCacheURL_void_EVString_EVString(void *pObjectXXXX, _in const char* url, _in const char* servername )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Core::ev_string servername1 = servername;
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjectXXXX;
				ptrNativeObject->addUsingCacheURL(url1, servername1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_removeUsingCacheURL_void_EVString_EVString(void *pObjectXXXX, _in const char* url, _in const char* servername )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Core::ev_string servername1 = servername;
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjectXXXX;
				ptrNativeObject->removeUsingCacheURL(url1, servername1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_isUsingCacheURL_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* url, _in const char* servername )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Core::ev_string servername1 = servername;
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isUsingCacheURL(url1, servername1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_readURLListFromCache_StringVector(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->readURLListFromCache();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CEVSpatialServerURLCacheVisitor_writeURLToCache_void_EVString_EVString(void *pObjectXXXX, _in const char* url, _in const char* servername )
			{
				EarthView::World::Core::ev_string url1 = url;
				EarthView::World::Core::ev_string servername1 = servername;
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor* ptrNativeObject = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjectXXXX;
				ptrNativeObject->writeURLToCache(url1, servername1);
			}
		}
	}
}
