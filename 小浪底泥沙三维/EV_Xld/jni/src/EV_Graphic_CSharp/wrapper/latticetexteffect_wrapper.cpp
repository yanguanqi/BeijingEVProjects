/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticetexteffect.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ILatticeTextEffect_setColor_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 argb )
			{
				EarthView::World::Graphic::ILatticeTextEffect* ptrNativeObject = (EarthView::World::Graphic::ILatticeTextEffect*) pObjectXXXX;
				ptrNativeObject->setColor(argb);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ILatticeTextEffect_setColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::World::Graphic::ILatticeTextEffect* ptrNativeObject = (EarthView::World::Graphic::ILatticeTextEffect*) pObjectXXXX;
				ptrNativeObject->setColor(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_ILatticeTextEffect_getColor_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ILatticeTextEffect* ptrNativeObject = (EarthView::World::Graphic::ILatticeTextEffect*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getColor();
				return objXXXX;
			}
		}
	}
}
