/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/WIN32/timerimp.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTimer_setOption_ev_bool_EVString_void(void *pObjectXXXX, _in const char* strKey, _in const void* pValue )
			{
				EarthView::World::Core::ev_string strKey1 = strKey;
				EarthView::World::Graphic::CTimer* ptrNativeObject = (EarthView::World::Graphic::CTimer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setOption(strKey1, pValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTimer_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTimer* ptrNativeObject = (EarthView::World::Graphic::CTimer*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTimer_getMilliseconds_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTimer* ptrNativeObject = (EarthView::World::Graphic::CTimer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMilliseconds();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTimer_getMicroseconds_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTimer* ptrNativeObject = (EarthView::World::Graphic::CTimer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMicroseconds();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTimer_getMillisecondsCPU_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTimer* ptrNativeObject = (EarthView::World::Graphic::CTimer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMillisecondsCPU();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTimer_getMicrosecondsCPU_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTimer* ptrNativeObject = (EarthView::World::Graphic::CTimer*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMicrosecondsCPU();
				return objXXXX;
			}
		}
	}
}
