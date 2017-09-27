/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/userobjectbindings.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CUserObjectBindings_clear_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CUserObjectBindings* ptrNativeObject = (EarthView::World::Graphic::CUserObjectBindings*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
