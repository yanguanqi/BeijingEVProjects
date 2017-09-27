/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileInfo_getRow_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileInfo_getCol_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getCol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileInfo_getMaxX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileInfo_getMinX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileInfo_getMaxY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileInfo_getMinY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileInfo_getSize_void_ev_uint32_ev_uint32(void *pObjectXXXX, _out ev_uint32& width, _out ev_uint32& height )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ptrNativeObject->getSize(width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileInfo_toTilePoint_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& x, _inout ev_real64& y )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ptrNativeObject->toTilePoint(x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileInfo_toPixelPoint_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& x, _inout ev_real64& y )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				ptrNativeObject->toPixelPoint(x, y);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileLevelInfo*  _stdcall EarthView_World_Spatial_CTileInfo_getTileLevelInfo_CTileLevelInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileInfo* ptrNativeObject = (EarthView::World::Spatial::CTileInfo*) pObjectXXXX;
				const EarthView::World::Spatial::CTileLevelInfo* objXXXX = ptrNativeObject->getTileLevelInfo();
				return objXXXX;
			}
		}
	}
}
