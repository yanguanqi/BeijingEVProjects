/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/mapcachecreator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace MapCache
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_setClipParam_void_CMapCacheParam(void *pObjectXXXX, _in const EarthView::World::Spatial::MapCache::CMapCacheParam* param )
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ptrNativeObject->setClipParam(param);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::MapCache::CMapCacheParam*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_getClipParam_CMapCacheParam(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					const EarthView::World::Spatial::MapCache::CMapCacheParam* objXXXX = ptrNativeObject->getClipParam();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_setTempClipParam_void_CMapCacheParam(void *pObjectXXXX, _in const EarthView::World::Spatial::MapCache::CMapCacheParam* param )
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ptrNativeObject->setTempClipParam(param);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::MapCache::CMapCacheParam*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_getTempClipParam_CMapCacheParam(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					const EarthView::World::Spatial::MapCache::CMapCacheParam* objXXXX = ptrNativeObject->getTempClipParam();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_setClipListener_void_CMapCacheListener(void *pObjectXXXX, _in const EarthView::World::Spatial::MapCache::CMapCacheListener* listener )
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ptrNativeObject->setClipListener(listener);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::MapCache::CMapCacheListener*  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_getClipListener_CMapCacheListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					EarthView::World::Spatial::MapCache::CMapCacheListener* objXXXX = ptrNativeObject->getClipListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_createETM_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createETM();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_createClipParmtoXMLs_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createClipParmtoXMLs();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_clip_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clip();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_hasLastTaskUnfinishd_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->hasLastTaskUnfinishd();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_MapCache_CMapCacheCreator_loadLastTast_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::MapCache::CMapCacheCreator* ptrNativeObject = (EarthView::World::Spatial::MapCache::CMapCacheCreator*) pObjectXXXX;
					ptrNativeObject->loadLastTast();
				}
			}
		}
	}
}
