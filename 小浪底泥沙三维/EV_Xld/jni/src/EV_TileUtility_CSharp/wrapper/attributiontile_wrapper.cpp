/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/attributiontile.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CAttributionTile*  _stdcall EarthView_World_Spatial_CAttributionTile_fromStream_CAttributionTile_CDataStream_EarthView_World_Core_ev_string(_in void* stream, _in const char* fieldName )
			{
				EarthView::World::Core::ev_string fieldName1 = fieldName;
				EarthView::World::Spatial::CAttributionTile* objXXXX = EarthView::World::Spatial::CAttributionTile::fromStream(*(EarthView::World::Core::CDataStream*)stream, fieldName1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CAttributionTile_getElementCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CAttributionTile* ptrNativeObject = (EarthView::World::Spatial::CAttributionTile*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getElementCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CAttributionTile_getID_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CAttributionTile* ptrNativeObject = (EarthView::World::Spatial::CAttributionTile*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CAttributionTile_getAttribution_CVariant_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CAttributionTile* ptrNativeObject = (EarthView::World::Spatial::CAttributionTile*) pObjectXXXX;
				EarthView::World::Core::CVariant objXXXX = ptrNativeObject->getAttribution(index);
				EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_CAttributionTile_getAttributionByID_CVariant_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial::CAttributionTile* ptrNativeObject = (EarthView::World::Spatial::CAttributionTile*) pObjectXXXX;
				EarthView::World::Core::CVariant objXXXX = ptrNativeObject->getAttributionByID(id);
				EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CAttributionTile_getFieldName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CAttributionTile* ptrNativeObject = (EarthView::World::Spatial::CAttributionTile*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFieldName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CAttributionTile_getFieldType_EVFieldType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CAttributionTile* ptrNativeObject = (EarthView::World::Spatial::CAttributionTile*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVFieldType objXXXX = ptrNativeObject->getFieldType();
				return (int)objXXXX;
			}
		}
	}
}
