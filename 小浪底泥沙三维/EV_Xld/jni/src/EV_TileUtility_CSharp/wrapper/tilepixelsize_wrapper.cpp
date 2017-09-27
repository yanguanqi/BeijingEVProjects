/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilepixelsize.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTilePixelSize_getWidth_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilePixelSize* ptrNativeObject = (EarthView::World::Spatial::CTilePixelSize*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CTilePixelSize_getHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilePixelSize* ptrNativeObject = (EarthView::World::Spatial::CTilePixelSize*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTilePixelSize_setWidth_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 dWidth )
			{
				EarthView::World::Spatial::CTilePixelSize* ptrNativeObject = (EarthView::World::Spatial::CTilePixelSize*) pObjectXXXX;
				ptrNativeObject->setWidth(dWidth);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CTilePixelSize_setHeight_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 dHeight )
			{
				EarthView::World::Spatial::CTilePixelSize* ptrNativeObject = (EarthView::World::Spatial::CTilePixelSize*) pObjectXXXX;
				ptrNativeObject->setHeight(dHeight);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CTilePixelSize*  _stdcall EarthView_World_Spatial_CTilePixelSize_clone_CTilePixelSize(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CTilePixelSize* ptrNativeObject = (EarthView::World::Spatial::CTilePixelSize*) pObjectXXXX;
				EarthView::World::Spatial::CTilePixelSize* objXXXX = ptrNativeObject->clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
		}
	}
}
