/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilesinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTilesInfo_getMaxRow_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxRow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTilesInfo_getMinRow_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMinRow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTilesInfo_getMaxCol_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxCol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTilesInfo_getMinCol_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMinCol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTilesInfo_getMaxX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTilesInfo_getMinX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTilesInfo_getMaxY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTilesInfo_getMinY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileInfo*  _stdcall EarthView_World_Spatial_CTilesInfo_getTileInfoByRowCol_CTileInfo_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 row, _in ev_uint32 col )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTileInfo* objXXXX = ptrNativeObject->getTileInfoByRowCol(row, col);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileInfo*  _stdcall EarthView_World_Spatial_CTilesInfo_getTileInfoByXY_CTileInfo_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTileInfo* objXXXX = ptrNativeObject->getTileInfoByXY(x, y);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileLevelInfo*  _stdcall EarthView_World_Spatial_CTilesInfo_getTileLevelInfo_CTileLevelInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilesInfo* ptrNativeObject = (EarthView::World::Spatial::CTilesInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CTileLevelInfo* objXXXX = ptrNativeObject->getTileLevelInfo();
				return objXXXX;
			}
		}
	}
}
