/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticefontcache.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLatticeFontCache*  _stdcall EarthView_World_Graphic_CLatticeFontCache_getDefaultCache_CLatticeFontCache( )
			{
				EarthView::World::Graphic::CLatticeFontCache* objXXXX = EarthView::World::Graphic::CLatticeFontCache::getDefaultCache();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeFontCache_loadCache_ev_bool_ev_char(void *pObjectXXXX, _in ev_char* filePath )
			{
				EarthView::World::Graphic::CLatticeFontCache* ptrNativeObject = (EarthView::World::Graphic::CLatticeFontCache*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->loadCache(filePath);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeFontCache_saveCacheAs_ev_bool_ev_char(void *pObjectXXXX, _in ev_char* filePath )
			{
				EarthView::World::Graphic::CLatticeFontCache* ptrNativeObject = (EarthView::World::Graphic::CLatticeFontCache*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->saveCacheAs(filePath);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeFontCache_updateCacheFile_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLatticeFontCache* ptrNativeObject = (EarthView::World::Graphic::CLatticeFontCache*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateCacheFile();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeFontCache_setMaxLatticeCounts_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 maxLatticeCounts )
			{
				EarthView::World::Graphic::CLatticeFontCache* ptrNativeObject = (EarthView::World::Graphic::CLatticeFontCache*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setMaxLatticeCounts(maxLatticeCounts);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CLatticeFontCache_getCacheSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeFontCache* ptrNativeObject = (EarthView::World::Graphic::CLatticeFontCache*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCacheSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeFontCache_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLatticeFontCache* ptrNativeObject = (EarthView::World::Graphic::CLatticeFontCache*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
