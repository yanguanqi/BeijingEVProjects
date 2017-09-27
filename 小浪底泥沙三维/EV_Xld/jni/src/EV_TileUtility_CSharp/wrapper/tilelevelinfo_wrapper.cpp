/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilelevelinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileLevelInfo_getResolution_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getResolution();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileLevelInfo_getSpan_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getSpan();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileLevelInfo_getScale_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CTileLevelInfo_getLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileLevelInfo_getMaxRow_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxRow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileLevelInfo_getMinRow_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMinRow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileLevelInfo_getMaxCol_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMaxCol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileLevelInfo_getMinCol_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMinCol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileInfo*  _stdcall EarthView_World_Spatial_CTileLevelInfo_getTileInfoByRowCol_CTileInfo_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 row, _in ev_uint32 col )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTileInfo* objXXXX = ptrNativeObject->getTileInfoByRowCol(row, col);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileInfo*  _stdcall EarthView_World_Spatial_CTileLevelInfo_getTileInfoByRowCol_CTileInfo_ev_uint32_ev_uint32_void(void *pObjectXXXX, _in ev_uint32 row, _in ev_uint32 col, _in void* ptr1 )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTileInfo* objXXXX = ptrNativeObject->getTileInfoByRowCol(row, col, ptr1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileInfo*  _stdcall EarthView_World_Spatial_CTileLevelInfo_getTileInfoByXY_CTileInfo_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTileInfo* objXXXX = ptrNativeObject->getTileInfoByXY(x, y);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileInfo*  _stdcall EarthView_World_Spatial_CTileLevelInfo_getTileInfoByXY_CTileInfo_ev_real64_ev_real64_void(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in void* ptr )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTileInfo* objXXXX = ptrNativeObject->getTileInfoByXY(x, y, ptr);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTilesInfo*  _stdcall EarthView_World_Spatial_CTileLevelInfo_getTilesInfo_CTilesInfo_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 minx, _in ev_real64 miny, _in ev_real64 maxx, _in ev_real64 maxy )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTilesInfo* objXXXX = ptrNativeObject->getTilesInfo(minx, miny, maxx, maxy);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileReference*  _stdcall EarthView_World_Spatial_CTileLevelInfo_getTileReferenceRef_CTileReference(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevelInfo* ptrNativeObject = (EarthView::World::Spatial::CTileLevelInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CTileReference* objXXXX = ptrNativeObject->getTileReferenceRef();
				return objXXXX;
			}
		}
	}
}
