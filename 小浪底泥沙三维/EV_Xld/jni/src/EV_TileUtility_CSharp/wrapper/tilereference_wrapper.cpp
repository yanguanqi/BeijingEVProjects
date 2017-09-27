/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilereference.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CTileRule*  _stdcall EarthView_World_Spatial_CTileReference_getTileRuleRef_CTileRule(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileReference* ptrNativeObject = (EarthView::World::Spatial::CTileReference*) pObjectXXXX;
				const EarthView::World::Spatial::CTileRule* objXXXX = ptrNativeObject->getTileRuleRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileLevelInfo*  _stdcall EarthView_World_Spatial_CTileReference_getLevelInfo_CTileLevelInfo_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 level, _in ev_uint32 dpiPerInch )
			{
				const EarthView::World::Spatial::CTileReference* ptrNativeObject = (EarthView::World::Spatial::CTileReference*) pObjectXXXX;
				EarthView::World::Spatial::CTileLevelInfo* objXXXX = ptrNativeObject->getLevelInfo(level, dpiPerInch);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileLevelInfo*  _stdcall EarthView_World_Spatial_CTileReference_getLevelInfo_CTileLevelInfo_ev_int32_void_ev_uint32(void *pObjectXXXX, _in ev_int32 level, _in void* ptr1, _in ev_uint32 dpiPerInch )
			{
				const EarthView::World::Spatial::CTileReference* ptrNativeObject = (EarthView::World::Spatial::CTileReference*) pObjectXXXX;
				EarthView::World::Spatial::CTileLevelInfo* objXXXX = ptrNativeObject->getLevelInfo(level, ptr1, dpiPerInch);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
		}
	}
}
