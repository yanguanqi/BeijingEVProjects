/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/mapcachelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace MapCache
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_setStop_void_ev_bool(void *pObjectXXXX, _in ev_bool stop )
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ptrNativeObject->setStop(stop);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_getStop_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getStop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_incrementFinishNum_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ptrNativeObject->incrementFinishNum();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_setFinishNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 num )
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ptrNativeObject->setFinishNum(num);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_getFinishNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getFinishNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_setTotalNum_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 num )
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ptrNativeObject->setTotalNum(num);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_getTotalNum_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTotalNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_setErrorMessage_void_EVString(void *pObjectXXXX, _in const char* str )
				{
					EarthView::World::Core::ev_string str1 = str;
					EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ptrNativeObject->setErrorMessage(str1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_getErrorMessage_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getErrorMessage();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_getClipFlag_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getClipFlag();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_setClipFlag_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ptrNativeObject->setClipFlag(flag);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::MapCache::CMapCacheListener*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_clone_CMapCacheListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					EarthView::World::Spatial::MapCache::CMapCacheListener* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheListener_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjectXXXX;
					ptrNativeObject->reset();
				}
			}
		}
	}
}
