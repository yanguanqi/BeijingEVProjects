/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileblockinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CTileBlockInfo_isValid_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileBlockInfo_setBlockLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
			{
				EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				ptrNativeObject->setBlockLevel(level);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileBlockInfo_setStartLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
			{
				EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				ptrNativeObject->setStartLevel(level);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTileBlockInfo_setEndLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
			{
				EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				ptrNativeObject->setEndLevel(level);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileBlockInfo_getBlockLevel_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getBlockLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileBlockInfo_getStartLevel_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getStartLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTileBlockInfo_getEndLevel_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getEndLevel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTileBlockInfo*  _stdcall EarthView_World_Spatial_CTileBlockInfo_clone_CTileBlockInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CTileBlockInfo* ptrNativeObject = (EarthView::World::Spatial::CTileBlockInfo*) pObjectXXXX;
				EarthView::World::Spatial::CTileBlockInfo* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
		}
	}
}
