/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilelevel.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CTileLevel_getBaseLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getBaseLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CTileLevel_getSpanOfBaseLevel_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getSpanOfBaseLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CTileLevel_getMinLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMinLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CTileLevel_getMaxLevel_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMaxLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CTileLevel_hasMinLevel_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMinLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CTileLevel_hasMaxLevel_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMaxLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileLevel_setBaseLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 nLevel )
			{
				EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ptrNativeObject->setBaseLevel(nLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileLevel_setSpanOfBaseLevel_void_ev_real64(void *pObjectXXXX, _in ev_real64 dSpan )
			{
				EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ptrNativeObject->setSpanOfBaseLevel(dSpan);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileLevel_setMinLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 nLevel )
			{
				EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ptrNativeObject->setMinLevel(nLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileLevel_setMaxLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 nLevel )
			{
				EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ptrNativeObject->setMaxLevel(nLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileLevel_setHasMinLevel_void_ev_bool(void *pObjectXXXX, _in ev_bool bHas )
			{
				EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ptrNativeObject->setHasMinLevel(bHas);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileLevel_setHasMaxLevel_void_ev_bool(void *pObjectXXXX, _in ev_bool bHas )
			{
				EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				ptrNativeObject->setHasMaxLevel(bHas);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileLevel*  _stdcall EarthView_World_Spatial_CTileLevel_clone_CTileLevel(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileLevel* ptrNativeObject = (EarthView::World::Spatial::CTileLevel*) pObjectXXXX;
				EarthView::World::Spatial::CTileLevel* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
		}
	}
}
