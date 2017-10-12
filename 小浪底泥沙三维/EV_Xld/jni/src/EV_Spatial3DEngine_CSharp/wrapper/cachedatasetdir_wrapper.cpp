/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/cachedatasetdir.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CCacheDatasetDir_calcImageTileCacheFilePath_EVString_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32(_in int tilemode, _in const char* layerPath, _in const ev_int32 level, _in const ev_int32 row, _in const ev_int32 col )
			{
				EarthView::World::Core::ev_string layerPath1 = layerPath;
				EVString objXXXX = EarthView::World::Spatial3D::CCacheDatasetDir::calcImageTileCacheFilePath((EarthView::World::Spatial::EVTileModeType)tilemode, layerPath1, level, row, col);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_CCacheDatasetDir_calcDemCacheFilePath_EVString_EVString_ev_int32_ev_int32_ev_int32(_in const char* layerPath, _in const ev_int32 level, _in const ev_int32 row, _in const ev_int32 col )
			{
				EarthView::World::Core::ev_string layerPath1 = layerPath;
				EVString objXXXX = EarthView::World::Spatial3D::CCacheDatasetDir::calcDemCacheFilePath(layerPath1, level, row, col);
				return objXXXX.makeBuffer();
			}
		}
	}
}
