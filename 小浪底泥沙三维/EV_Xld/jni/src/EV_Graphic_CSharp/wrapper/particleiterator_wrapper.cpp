/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particleiterator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CParticleIterator_end_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->end();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CParticle*  _stdcall EarthView_World_Graphic_CParticleIterator_getNext_CParticle(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CParticleIterator* ptrNativeObject = (EarthView::World::Graphic::CParticleIterator*) pObjectXXXX;
				EarthView::World::Graphic::CParticle* objXXXX = ptrNativeObject->getNext();
				return objXXXX;
			}
		}
	}
}
