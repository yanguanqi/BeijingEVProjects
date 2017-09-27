/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilepath.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTilePath_setTilePathRule_void_CTilePathRule(void *pObjectXXXX, _in const EarthView::World::Spatial::CTilePathRule* tilepathrule )
			{
				EarthView::World::Spatial::CTilePath* ptrNativeObject = (EarthView::World::Spatial::CTilePath*) pObjectXXXX;
				ptrNativeObject->setTilePathRule(tilepathrule);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTilePathRule*  _stdcall EarthView_World_Spatial_CTilePath_getTilePathRule_CTilePathRule(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilePath* ptrNativeObject = (EarthView::World::Spatial::CTilePath*) pObjectXXXX;
				EarthView::World::Spatial::CTilePathRule* objXXXX = ptrNativeObject->getTilePathRule();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CTilePath_getPath_EVString_ev_int32_ev_uint32_ev_uint32_EVString(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				const EarthView::World::Spatial::CTilePath* ptrNativeObject = (EarthView::World::Spatial::CTilePath*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getPath(level, row, col, format1);
				return objXXXX.makeBuffer();
			}
		}
	}
}
