/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilepathrulefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTilePathRule*  _stdcall EarthView_World_Spatial_CTilePathRuleFactory_createTilePathRule_CTilePathRule_EVTileDataType_EVTilePathType_EVTileModeType(_in int dataType, _in int tilePathType, _in int tileModeType )
			{
				EarthView::World::Spatial::CTilePathRule* objXXXX = EarthView::World::Spatial::CTilePathRuleFactory::createTilePathRule((EarthView::World::Spatial::EVTileDataType)dataType, (EarthView::World::Spatial::EVTilePathType)tilePathType, (EarthView::World::Spatial::EVTileModeType)tileModeType);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
		}
	}
}
