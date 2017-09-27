/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilerule.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileLevel*  _stdcall EarthView_World_Spatial_CTileRule_getTileLevelRef_CTileLevel(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				const EarthView::World::Spatial::CTileLevel* objXXXX = ptrNativeObject->getTileLevelRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileOrigin*  _stdcall EarthView_World_Spatial_CTileRule_getTileOriginRef_CTileOrigin(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				const EarthView::World::Spatial::CTileOrigin* objXXXX = ptrNativeObject->getTileOriginRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTilePixelSize*  _stdcall EarthView_World_Spatial_CTileRule_getTilePixelSizeRef_CTilePixelSize(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				const EarthView::World::Spatial::CTilePixelSize* objXXXX = ptrNativeObject->getTilePixelSizeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CTileRule_getTileUnitsType_EVTileUnitsType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				EarthView::World::Spatial::EVTileUnitsType objXXXX = ptrNativeObject->getTileUnitsType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileRule_setTileLevel_void_CTileLevel(void *pObjectXXXX, _in const void* tileLevel )
			{
				EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				ptrNativeObject->setTileLevel(*(EarthView::World::Spatial::CTileLevel*)tileLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileRule_setTileOrigin_void_CTileOrigin(void *pObjectXXXX, _in const void* tileOrigin )
			{
				EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				ptrNativeObject->setTileOrigin(*(EarthView::World::Spatial::CTileOrigin*)tileOrigin);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileRule_setTilePixelSize_void_CTilePixelSize(void *pObjectXXXX, _in const void* tilePixelSize )
			{
				EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				ptrNativeObject->setTilePixelSize(*(EarthView::World::Spatial::CTilePixelSize*)tilePixelSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileRule_setTileUnits_void_EVTileUnitsType(void *pObjectXXXX, _in int type )
			{
				EarthView::World::Spatial::CTileRule* ptrNativeObject = (EarthView::World::Spatial::CTileRule*) pObjectXXXX;
				ptrNativeObject->setTileUnits((EarthView::World::Spatial::EVTileUnitsType)type);
			}
		}
	}
}
