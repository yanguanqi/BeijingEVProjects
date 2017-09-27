/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/prefabfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPrefabFactory_createPrefab_ev_bool_CMesh(_in EarthView::World::Graphic::CMesh* mesh )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CPrefabFactory::createPrefab(mesh);
				return objXXXX;
			}
		}
	}
}
