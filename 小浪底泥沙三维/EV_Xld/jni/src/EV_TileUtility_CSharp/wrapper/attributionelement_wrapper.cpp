/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/attributionelement.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CAttributionElement*  _stdcall EarthView_World_Spatial_CAttributionElement_fromStream_CAttributionElement_CDataStream_EarthView_World_Core_ev_string_ev_int32_ev_int32(_in void* stream, _in char* fieldName, _in ev_int32 fieldType, _in ev_int32 byteOrder )
			{
				EarthView::World::Core::ev_string fieldName1 = fieldName;
				EarthView::World::Spatial::CAttributionElement* objXXXX = EarthView::World::Spatial::CAttributionElement::fromStream(*(EarthView::World::Core::CDataStream*)stream, fieldName1, fieldType, byteOrder);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CAttributionElement_getID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CAttributionElement* ptrNativeObject = (EarthView::World::Spatial::CAttributionElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CAttributionElement_getAttributionValue_CVariant(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CAttributionElement* ptrNativeObject = (EarthView::World::Spatial::CAttributionElement*) pObjectXXXX;
				EarthView::World::Core::CVariant objXXXX = ptrNativeObject->getAttributionValue();
				EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CAttributionElement_getFieldType_EVFieldType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CAttributionElement* ptrNativeObject = (EarthView::World::Spatial::CAttributionElement*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->getFieldType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CAttributionElement_getFieldName_EarthView_World_Core_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CAttributionElement* ptrNativeObject = (EarthView::World::Spatial::CAttributionElement*) pObjectXXXX;
				EarthView::World::Core::ev_string objXXXX = ptrNativeObject->getFieldName();
				return objXXXX.makeBuffer();
			}
		}
	}
}
