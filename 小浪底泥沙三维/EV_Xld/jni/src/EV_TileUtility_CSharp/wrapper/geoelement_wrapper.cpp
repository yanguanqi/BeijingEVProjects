/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/geoelement.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoElement*  _stdcall EarthView_World_Spatial_CGeoElement_fromStream_CGeoElement_CDataStream_EVGeoElementType_ev_uint32_ev_uint32_ev_int32(_in void* stream, _in int type, _in ev_uint32 width, _in ev_uint32 height, _in ev_int32 byteOrder )
			{
				EarthView::World::Spatial::CGeoElement* objXXXX = EarthView::World::Spatial::CGeoElement::fromStream(*(EarthView::World::Core::CDataStream*)stream, (EarthView::World::Spatial::EVGeoElementType)type, width, height, byteOrder);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoElement*  _stdcall EarthView_World_Spatial_CGeoElement_fromTileStreamByID_CGeoElement_CDataStream_ev_uint32_ev_uint32_ev_uint32(_in void* stream, _in ev_uint32 id, _in ev_uint32 width, _in ev_uint32 height )
			{
				EarthView::World::Spatial::CGeoElement* objXXXX = EarthView::World::Spatial::CGeoElement::fromTileStreamByID(*(EarthView::World::Core::CDataStream*)stream, id, width, height);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoElement*  _stdcall EarthView_World_Spatial_CGeoElement_fromTileStreamByIndex_CGeoElement_CDataStream_ev_uint32_ev_uint32_ev_uint32(_in void* stream, _in ev_uint32 index, _in ev_uint32 width, _in ev_uint32 height )
			{
				EarthView::World::Spatial::CGeoElement* objXXXX = EarthView::World::Spatial::CGeoElement::fromTileStreamByIndex(*(EarthView::World::Core::CDataStream*)stream, index, width, height);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CGeoElement_getID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CGeoElement_getElementType_EVGeoElementType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				EarthView::World::Spatial::EVGeoElementType objXXXX = ptrNativeObject->getElementType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CGeoElement_getPartNum_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getPartNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CGeoElement_getPointNum_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getPointNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CGeoElement_getPointNumByPart_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getPointNumByPart(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CGeoElement_getMinX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CGeoElement_getMinY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMinY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CGeoElement_getMaxX_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_CGeoElement_getMaxY_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getMaxY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CPixelPoint*  _stdcall EarthView_World_Spatial_CGeoElement_getPointRef_CPixelPoint_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CGeoElement* ptrNativeObject = (EarthView::World::Spatial::CGeoElement*) pObjectXXXX;
				const EarthView::World::Spatial::CPixelPoint* objXXXX = ptrNativeObject->getPointRef(index);
				return objXXXX;
			}
		}
	}
}
