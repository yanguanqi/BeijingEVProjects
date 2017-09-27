/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/vectortile.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CVectorTile*  _stdcall EarthView_World_Spatial_CVectorTile_fromStream_CVectorTile_CDataStream_ev_uint32_ev_uint32(_in void* stream, _in ev_uint32 width, _in ev_uint32 height )
			{
				EarthView::World::Spatial::CVectorTile* objXXXX = EarthView::World::Spatial::CVectorTile::fromStream(*(EarthView::World::Core::CDataStream*)stream, width, height);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CVectorTile_getElementCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CVectorTile* ptrNativeObject = (EarthView::World::Spatial::CVectorTile*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getElementCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CGeoElement*  _stdcall EarthView_World_Spatial_CVectorTile_getGeoElement_CGeoElement_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CVectorTile* ptrNativeObject = (EarthView::World::Spatial::CVectorTile*) pObjectXXXX;
				const EarthView::World::Spatial::CGeoElement* objXXXX = ptrNativeObject->getGeoElement(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CVectorTile_getID_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CVectorTile* ptrNativeObject = (EarthView::World::Spatial::CVectorTile*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CGeoElement*  _stdcall EarthView_World_Spatial_CVectorTile_getGeoElementByID_CGeoElement_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial::CVectorTile* ptrNativeObject = (EarthView::World::Spatial::CVectorTile*) pObjectXXXX;
				const EarthView::World::Spatial::CGeoElement* objXXXX = ptrNativeObject->getGeoElementByID(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CVectorTile_getElementType_EVGeoElementType(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CVectorTile* ptrNativeObject = (EarthView::World::Spatial::CVectorTile*) pObjectXXXX;
				EarthView::World::Spatial::EVGeoElementType objXXXX = ptrNativeObject->getElementType();
				return (int)objXXXX;
			}
		}
	}
}
