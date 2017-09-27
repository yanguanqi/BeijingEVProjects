/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/bilbuilder.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CBilBuilder_setRasterDataset_void_IRasterDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IRasterDataset* ref_pRasterDataset )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ptrNativeObject->setRasterDataset(ref_pRasterDataset);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CBilBuilder_getRowColRange_void_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 level, _inout ev_int32& minRow, _inout ev_int32& maxRow, _inout ev_int32& minCol, _inout ev_int32& maxCol )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ptrNativeObject->getRowColRange(level, minRow, maxRow, minCol, maxCol);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CBilBuilder_getTile_void_ev_int32_ev_int32_ev_int32_ev_byte(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _in ev_byte* pBuffer )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ptrNativeObject->getTile(level, row, col, pBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CBilBuilder_getTileWidth_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTileWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CBilBuilder_getTileHeight_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTileHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CBilBuilder_getTileDataLength_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTileDataLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_CBilBuilder_getSpatialRef_EVString(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getSpatialRef();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CBilBuilder_getLowestLevel_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getLowestLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_CBilBuilder_getHighestLevel_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getHighestLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_CBilBuilder_getLevelSpan_ev_real64_ev_int32(void *pObjectXXXX, _in ev_int32 level )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getLevelSpan(level);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CBilBuilder_getRowColByCoord_void_ev_int32_ev_real64_ev_real64_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 level, _in ev_real64 X, _in ev_real64 Y, _inout ev_int32& row, _inout ev_int32& col )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ptrNativeObject->getRowColByCoord(level, X, Y, row, col);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CBilBuilder_getTileCoordRange_void_ev_int32_ev_int32_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_int32 level, _in ev_int32 row, _in ev_int32 col, _inout ev_real64& minX, _inout ev_real64& maxX, _inout ev_real64& minY, _inout ev_real64& maxY )
			{
				EarthView::World::Spatial3D::CBilBuilder* ptrNativeObject = (EarthView::World::Spatial3D::CBilBuilder*) pObjectXXXX;
				ptrNativeObject->getTileCoordRange(level, row, col, minX, maxX, minY, maxY);
			}
		}
	}
}
