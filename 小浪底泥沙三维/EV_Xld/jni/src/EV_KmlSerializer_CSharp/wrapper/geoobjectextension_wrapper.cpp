/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/geoobjectextension.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
			namespace Kml
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CSceneOverlayData_setData_void_EVSceneOverlayType_ev_real32(void *pObjectXXXX, _in int type, _in ev_real32 value )
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData* ptrNativeObject = (EarthView::World::Spatial::Kml::CSceneOverlayData*) pObjectXXXX;
					ptrNativeObject->setData((EarthView::World::Spatial::Kml::CSceneOverlayData::EVSceneOverlayType)type, value);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CSceneOverlayData_getDataType_EVSceneOverlayType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData* ptrNativeObject = (EarthView::World::Spatial::Kml::CSceneOverlayData*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData::EVSceneOverlayType objXXXX = ptrNativeObject->getDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CSceneOverlayData_getDataValue_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CSceneOverlayData* ptrNativeObject = (EarthView::World::Spatial::Kml::CSceneOverlayData*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getDataValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_ReqID( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->ReqID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_ReqID( void *pObjectXXXX, ev_uint64  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->ReqID = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_ReqAbort( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ReqAbort;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_ReqAbort( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->ReqAbort = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_ReqType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState::EVKmlRequestType objXXXX = ptrNativeObject->ReqType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_ReqType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->ReqType = (EarthView::World::Spatial::Kml::CKmlWorkQueueState::EVKmlRequestType)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_WorkStateEnum( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState::EVKmlWorkQueueState objXXXX = ptrNativeObject->WorkStateEnum;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_WorkStateEnum( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->WorkStateEnum = (EarthView::World::Spatial::Kml::CKmlWorkQueueState::EVKmlWorkQueueState)value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_mDistance( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mDistance;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_mDistance( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->mDistance = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_LayerVisible( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->LayerVisible;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_LayerVisible( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->LayerVisible = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_NeedRefresh( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->NeedRefresh;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_NeedRefresh( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->NeedRefresh = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_GeoVisible( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->GeoVisible;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_GeoVisible( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->GeoVisible = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::CGeoObject*  _stdcall Get_EarthView_World_Spatial_Kml_CKmlWorkQueueState_VisibleGeoObject( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* ptrNativeObject = (EarthView::World::Spatial::Kml::CKmlWorkQueueState*) pObjectXXXX;
					EarthView::World::Spatial::CGeoObject* objXXXX = ptrNativeObject->VisibleGeoObject;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CKmlWorkQueueState_VisibleGeoObject( void *pObjectXXXX, EarthView::World::Spatial::CGeoObject*  value )
				{
					((EarthView::World::Spatial::Kml::CKmlWorkQueueState*)pObjectXXXX)->VisibleGeoObject = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_OperatorAssign_CGeoObjectExtensionAttribute_CGeoObjectExtensionAttribute(void *pObjXXXX, _in const void* geoAttr )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute& objXXXX = *((EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)geoAttr;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_update_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->update();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mpOldAttr( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* objXXXX = ptrNativeObject->mpOldAttr;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mpOldAttr( void *pObjectXXXX, EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjectXXXX)->mpOldAttr = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setParentKmldocument_void_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* parentDoc )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setParentKmldocument(parentDoc);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getParentKmlDocument_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getParentKmlDocument();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionWest_void_ev_real64(void *pObjectXXXX, _in ev_real64 RegionWest )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionWest(RegionWest);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionWest_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRegionWest();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionWest_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldRegionWest();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionEast_void_ev_real64(void *pObjectXXXX, _in ev_real64 RegionEast )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionEast(RegionEast);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionEast_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRegionEast();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionEast_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldRegionEast();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionNorth_void_ev_real64(void *pObjectXXXX, _in ev_real64 RegionNorth )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionNorth(RegionNorth);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionNorth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRegionNorth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionNorth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldRegionNorth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionSouth_void_ev_real64(void *pObjectXXXX, _in ev_real64 RegionSouth )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionSouth(RegionSouth);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionSouth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRegionSouth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionSouth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldRegionSouth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionMaxAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 maxAltitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionMaxAltitude(maxAltitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionMaxAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRegionMaxAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionMaxAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldRegionMaxAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionMinAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 minAltitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionMinAltitude(minAltitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionMinAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRegionMinAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionMinAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldRegionMinAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setMaxLodPixels_void_ev_real64(void *pObjectXXXX, _in ev_real64 maxLodPixels )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setMaxLodPixels(maxLodPixels);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getMaxLodPixels_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxLodPixels();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldMaxLodPixels_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldMaxLodPixels();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setMinLodPixels_void_ev_real64(void *pObjectXXXX, _in ev_real64 minLodPixels )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setMinLodPixels(minLodPixels);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getMinLodPixels_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinLodPixels();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldMinLodPixels_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldMinLodPixels();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setMaxFadeExtent_void_ev_real64(void *pObjectXXXX, _in ev_real64 maxFadeExtent )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setMaxFadeExtent(maxFadeExtent);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getMaxFadeExtent_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxFadeExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldMaxFadeExtent_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldMaxFadeExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setMinFadeExtent_void_ev_real64(void *pObjectXXXX, _in ev_real64 minFadeExtent )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setMinFadeExtent(minFadeExtent);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getMinFadeExtent_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinFadeExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldMinFadeExtent_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldMinFadeExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getNetLinkPath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getNetLinkPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldNetLinkPath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldNetLinkPath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setNetLinkPath_void_EVString(void *pObjectXXXX, _in char* netLinkPath )
				{
					EarthView::World::Core::ev_string netLinkPath1 = netLinkPath;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setNetLinkPath(netLinkPath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPicPath360_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPicPath360();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPicPath360_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldPicPath360();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPicPath360_void_EVString(void *pObjectXXXX, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPicPath360(path1);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRadius360_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getRadius360();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRadius360_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldRadius360();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRadius360_void_ev_real32(void *pObjectXXXX, _in ev_real32 r )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRadius360(r);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_equal_ev_bool_CGeoObjectExtensionAttribute(void *pObjectXXXX, _in const void* geoAttr )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->equal(*(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)geoAttr);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mLodStatus( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::LodStatus objXXXX = ptrNativeObject->mLodStatus;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mLodStatus( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjectXXXX)->mLodStatus = (EarthView::World::Spatial::Kml::LodStatus)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mIsEditting( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsEditting;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mIsEditting( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjectXXXX)->mIsEditting = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlWorkQueueState*  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_WorkState( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* objXXXX = ptrNativeObject->WorkState;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_WorkState( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlWorkQueueState*  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjectXXXX)->WorkState = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_ParamChanged( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->ParamChanged;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_ParamChanged( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjectXXXX)->ParamChanged = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mIsBelongToNetLink( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsBelongToNetLink;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_mIsBelongToNetLink( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)pObjectXXXX)->mIsBelongToNetLink = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setDesc_void_EVString(void *pObjectXXXX, _in const char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setDesc(desc1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getDesc_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDesc();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldDesc_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldDesc();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setID_void_EVString(void *pObjectXXXX, _in const char* id )
				{
					EarthView::World::Core::ev_string id1 = id;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setID(id1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getID_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldID_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPicLayout_void_EVPicLayout(void *pObjectXXXX, _in int piclayout )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPicLayout((EarthView::World::Spatial::Kml::EVPicLayout)piclayout);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPicLayout_EVPicLayout(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::EVPicLayout objXXXX = ptrNativeObject->getPicLayout();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPicLayout_EVPicLayout(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::EVPicLayout objXXXX = ptrNativeObject->getOldPicLayout();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setStyleUrlName_void_EVString(void *pObjectXXXX, _in const char* styleUrlName )
				{
					EarthView::World::Core::ev_string styleUrlName1 = styleUrlName;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setStyleUrlName(styleUrlName1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getStyleUrlName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getStyleUrlName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldStyleUrlName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldStyleUrlName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPictureUrl_void_EVString(void *pObjectXXXX, _in const char* pictureUrl )
				{
					EarthView::World::Core::ev_string pictureUrl1 = pictureUrl;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPictureUrl(pictureUrl1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPictureUrl_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPictureUrl();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPictureUrl_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldPictureUrl();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPictureID_void_EVString(void *pObjectXXXX, _in const char* pictureID )
				{
					EarthView::World::Core::ev_string pictureID1 = pictureID;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPictureID(pictureID1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPictureID_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPictureID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPictureID_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldPictureID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool isVisiable )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setVisible(isVisiable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setExtrude_void_ev_bool(void *pObjectXXXX, _in ev_bool isExtrude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setExtrude(isExtrude);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getExtrude_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getExtrude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldExtrude_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldExtrude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setKmlType_void_EVGEXTYPE(void *pObjectXXXX, _in int kmlType )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setKmlType((EarthView::World::Spatial::Kml::EVGEXTYPE)kmlType);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getKmlType_EVGEXTYPE(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::EVGEXTYPE objXXXX = ptrNativeObject->getKmlType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPoints_void_VertexList(void *pObjectXXXX, _inout void* points )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPoints(*(EarthView::World::Spatial::Math::VertexList*)points);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPoints_VertexList(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::VertexList objXXXX = ptrNativeObject->getPoints();
					EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPoints_VertexList(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::VertexList objXXXX = ptrNativeObject->getOldPoints();
					EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLatitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 latitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLatitude(latitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLatitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLatitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLatitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldLatitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLongitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 lontitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLongitude(lontitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLongitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLongitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLongitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldLongitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setAltitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 altitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setAltitude(altitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setAltitudeMode_void_EVAltitudeMode(void *pObjectXXXX, _in int altitudemode )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudemode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getAltitudeMode_EVAltitudeMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getAltitudeMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldAltitudeMode_EVAltitudeMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getOldAltitudeMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setFontName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setFontName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getFontName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFontName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldFontName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldFontName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTextShadowEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTextShadowEnabled(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTextShadowEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getTextShadowEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTextShadowEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldTextShadowEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setFontScale_void_ev_real32(void *pObjectXXXX, _in ev_real32 fontScale )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setFontScale(fontScale);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getFontScale_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getFontScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldFontScale_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldFontScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setFontTransparency_void_ev_real32(void *pObjectXXXX, _in ev_real32 fontTransparency )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setFontTransparency(fontTransparency);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getFontTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getFontTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldFontTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldFontTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setFontColor_void_CVector3(void *pObjectXXXX, _in void* fontColor )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setFontColor(*(EarthView::World::Spatial::Math::CVector3*)fontColor);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getFontColor_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getFontColor();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldFontColor_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getOldFontColor();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPictureTransparency_void_ev_real32(void *pObjectXXXX, _in ev_real32 iconTransparency )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPictureTransparency(iconTransparency);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPictureTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getPictureTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPictureTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldPictureTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setIconScale_void_ev_real32(void *pObjectXXXX, _in ev_real32 iconScale )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setIconScale(iconScale);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getIconScale_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getIconScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldIconScale_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldIconScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLineColor_void_CVector3(void *pObjectXXXX, _in void* lineColor )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLineColor(*(EarthView::World::Spatial::Math::CVector3*)lineColor);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLineColor_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getLineColor();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLineColor_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getOldLineColor();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLineTransparency_void_ev_real32(void *pObjectXXXX, _in ev_real32 lineTransparency )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLineTransparency(lineTransparency);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLineTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getLineTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLineTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldLineTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLineWidth_void_ev_real32(void *pObjectXXXX, _in ev_real32 width )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLineWidth(width);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLineWidth_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getLineWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLineWidth_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldLineWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPolygonColor_void_CVector3(void *pObjectXXXX, _in void* ploygonColor )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPolygonColor(*(EarthView::World::Spatial::Math::CVector3*)ploygonColor);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPolygonColor_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPolygonColor();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPolygonColor_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getOldPolygonColor();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setFillOutLineMode_void_FillOutLineMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setFillOutLineMode((EarthView::World::Spatial::Kml::FillOutLineMode)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getFillOutLineMode_FillOutLineMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::FillOutLineMode objXXXX = ptrNativeObject->getFillOutLineMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldFillOutLineMode_FillOutLineMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::FillOutLineMode objXXXX = ptrNativeObject->getOldFillOutLineMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPolygonTransparency_void_ev_real32(void *pObjectXXXX, _in ev_real32 polygonTransparency )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPolygonTransparency(polygonTransparency);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPolygonTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getPolygonTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPolygonTransparency_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldPolygonTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLookAt_void_CLookAt(void *pObjectXXXX, _in void* LookAtAttr )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLookAt(*(EarthView::World::Spatial::CGeoObject::CLookAt*)LookAtAttr);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLookAt_CLookAt(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::CGeoObject::CLookAt objXXXX = ptrNativeObject->getLookAt();
					EarthView::World::Spatial::CGeoObject::CLookAt *pXXXX = new EarthView::World::Spatial::CGeoObject::CLookAt(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLookAt_CLookAt(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::CGeoObject::CLookAt objXXXX = ptrNativeObject->getOldLookAt();
					EarthView::World::Spatial::CGeoObject::CLookAt *pXXXX = new EarthView::World::Spatial::CGeoObject::CLookAt(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setFresnelsurface_void_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool underWaterEnable, _in ev_bool reflectionEnable, _in ev_bool reflectSky, _in ev_bool refractionEnable )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setFresnelsurface(underWaterEnable, reflectionEnable, reflectSky, refractionEnable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getFresnelsurface_void_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _inout ev_bool& underWaterEnable, _inout ev_bool& reflectionEnable, _inout ev_bool& reflectSky, _inout ev_bool& refractionEnable )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getFresnelsurface(underWaterEnable, reflectionEnable, reflectSky, refractionEnable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldFresnelsurface_void_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _inout ev_bool& underWaterEnable, _inout ev_bool& reflectionEnable, _inout ev_bool& reflectSky, _inout ev_bool& refractionEnable )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getOldFresnelsurface(underWaterEnable, reflectionEnable, reflectSky, refractionEnable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setFresnelsurfaceColor_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(void *pObjectXXXX, _in ev_real32 waveDensity, _in ev_real32 flowSpeed, _in ev_real32 waterDeep, _in ev_real32 wavePower, _in ev_real32 lightPower, _in ev_real32 waveDir, _in void* waterColor )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setFresnelsurfaceColor(waveDensity, flowSpeed, waterDeep, wavePower, lightPower, waveDir, *(EarthView::World::Spatial::Math::CVector4*)waterColor);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getFresnelsurfaceColor_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(void *pObjectXXXX, _inout ev_real32& waveDensity, _inout ev_real32& flowSpeed, _inout ev_real32& waterDeep, _inout ev_real32& wavePower, _inout ev_real32& lightPower, _inout ev_real32& waveDir, _inout void* waterColor )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getFresnelsurfaceColor(waveDensity, flowSpeed, waterDeep, wavePower, lightPower, waveDir, *(EarthView::World::Spatial::Math::CVector4*)waterColor);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldFresnelsurfaceColor_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_CVector4(void *pObjectXXXX, _inout ev_real32& waveDensity, _inout ev_real32& flowSpeed, _inout ev_real32& waterDeep, _inout ev_real32& wavePower, _inout ev_real32& lightPower, _inout ev_real32& waveDir, _inout void* waterColor )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getOldFresnelsurfaceColor(waveDensity, flowSpeed, waterDeep, wavePower, lightPower, waveDir, *(EarthView::World::Spatial::Math::CVector4*)waterColor);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setModelHref_void_EVString(void *pObjectXXXX, _in const char* modelHref )
				{
					EarthView::World::Core::ev_string modelHref1 = modelHref;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setModelHref(modelHref1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getModelHref_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getModelHref();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldModelHref_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldModelHref();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRotation_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRotation(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRotation_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getRotation();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRotation_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getOldRotation();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setScale_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 z )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setScale(x, y, z);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getScale_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScale();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldScale_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getOldScale();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRemovePictureCache_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRemovePictureCache(val);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRemovePictureCache_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getRemovePictureCache();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setOverLayerLatLonBox_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 west, _in ev_real64 east, _in ev_real64 north, _in ev_real64 south )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setOverLayerLatLonBox(west, east, north, south);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOverLayerLatLonBox_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& west, _inout ev_real64& east, _inout ev_real64& north, _inout ev_real64& south )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getOverLayerLatLonBox(west, east, north, south);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldOverLayerLatLonBox_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& west, _inout ev_real64& east, _inout ev_real64& north, _inout ev_real64& south )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getOldOverLayerLatLonBox(west, east, north, south);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setOverLayerRotateAngle_void_ev_real32(void *pObjectXXXX, _in ev_real32 rotate )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setOverLayerRotateAngle(rotate);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOverLayerRotateAngle_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOverLayerRotateAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldOverLayerRotateAngle_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldOverLayerRotateAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setOverLayerSmooth_void_ev_bool(void *pObjectXXXX, _in ev_bool enableSmooth )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setOverLayerSmooth(enableSmooth);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOverLayerSmooth_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOverLayerSmooth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldOverLayerSmooth_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldOverLayerSmooth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setIsRegion_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setIsRegion(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getIsRegion_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsRegion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldIsRegion_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldIsRegion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionLatLonAltBox_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 regionWest, _in ev_real64 regionEast, _in ev_real64 regionNorth, _in ev_real64 regionSouth, _in ev_real64 minAltitude, _in ev_real64 maxAltitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionLatLonAltBox(regionWest, regionEast, regionNorth, regionSouth, minAltitude, maxAltitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionLatLonAltBox_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& regionWest, _inout ev_real64& regionEast, _inout ev_real64& regionNorth, _inout ev_real64& regionSouth, _inout ev_real64& minAltitude, _inout ev_real64& maxAltitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getRegionLatLonAltBox(regionWest, regionEast, regionNorth, regionSouth, minAltitude, maxAltitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionLatLonAltBox_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& regionWest, _inout ev_real64& regionEast, _inout ev_real64& regionNorth, _inout ev_real64& regionSouth, _inout ev_real64& minAltitude, _inout ev_real64& maxAltitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getOldRegionLatLonAltBox(regionWest, regionEast, regionNorth, regionSouth, minAltitude, maxAltitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setIsLod_void_ev_bool(void *pObjectXXXX, _in ev_bool IsLod )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setIsLod(IsLod);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getIsLod_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsLod();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldIsLod_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldIsLod();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLodPixels_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 minLodPixels, _in ev_real64 maxLodPixels )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLodPixels(minLodPixels, maxLodPixels);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLodPixels_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& minLodPixels, _inout ev_real64& maxLodPixels )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getLodPixels(minLodPixels, maxLodPixels);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLodPixels_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& minLodPixels, _inout ev_real64& maxLodPixels )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->getOldLodPixels(minLodPixels, maxLodPixels);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRegionAltitudeMode_void_EVAltitudeMode(void *pObjectXXXX, _in int altitudemode )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRegionAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)altitudemode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRegionAltitudeMode_EVAltitudeMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getRegionAltitudeMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldRegionAltitudeMode_EVAltitudeMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getOldRegionAltitudeMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setOriginRegion_void_ev_bool(void *pObjectXXXX, _in ev_bool originRegion )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setOriginRegion(originRegion);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOriginRegion_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOriginRegion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldOriginRegion_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldOriginRegion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setArrowType_void_ArrowType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setArrowType((EarthView::World::Spatial::Kml::ArrowType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getArrowType_ArrowType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::ArrowType objXXXX = ptrNativeObject->getArrowType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldArrowType_ArrowType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::ArrowType objXXXX = ptrNativeObject->getOldArrowType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setArrowStartAltitude_void_ev_real32(void *pObjectXXXX, _in ev_real32 startAtitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setArrowStartAltitude(startAtitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getArrowStartAltitude_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getArrowStartAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldArrowStartAltitude_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldArrowStartAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setArrowEndAltitude_void_ev_real32(void *pObjectXXXX, _in ev_real32 endAtitude )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setArrowEndAltitude(endAtitude);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getArrowEndAltitude_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getArrowEndAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldArrowEndAltitude_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldArrowEndAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setArrowKeyPoints_void_EVString(void *pObjectXXXX, _in char* arrowKeyPoints )
				{
					EarthView::World::Core::ev_string arrowKeyPoints1 = arrowKeyPoints;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setArrowKeyPoints(arrowKeyPoints1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getArrowKeyPoints_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getArrowKeyPoints();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldArrowKeyPoints_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldArrowKeyPoints();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldLength_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldWidth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldHeight_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setLength_void_ev_real64(void *pObjectXXXX, _in ev_real64 length )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setLength(length);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 width )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setWidth(width);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setHeigth_void_ev_real64(void *pObjectXXXX, _in ev_real64 height )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setHeigth(height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setIsUseTexture_void_ev_bool(void *pObjectXXXX, _in ev_bool useTexture )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setIsUseTexture(useTexture);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getIsUseTexture_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsUseTexture();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldIsUseTexture_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldIsUseTexture();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setIsTextureFlow_void_ev_bool(void *pObjectXXXX, _in ev_bool isTextureFlow )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setIsTextureFlow(isTextureFlow);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getIsTextureFlow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsTextureFlow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldIsTextureFlow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldIsTextureFlow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setIsTexturePositiveFlow_void_ev_bool(void *pObjectXXXX, _in ev_bool isTexturePositiveFlow )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setIsTexturePositiveFlow(isTexturePositiveFlow);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getIsTexturePositiveFlow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsTexturePositiveFlow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldIsTexturePositiveFlow_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldIsTexturePositiveFlow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTextureFlowSpeed_void_ev_real64(void *pObjectXXXX, _in ev_real64 flowSpeed )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTextureFlowSpeed(flowSpeed);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTextureFlowSpeed_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getTextureFlowSpeed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTextureFlowSpeed_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldTextureFlowSpeed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setBottomRadius_void_ev_real64(void *pObjectXXXX, _in ev_real64 bottomRadius )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setBottomRadius(bottomRadius);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getBottomRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getBottomRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldBottomRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldBottomRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTopRadius_void_ev_real64(void *pObjectXXXX, _in ev_real64 topRadius )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTopRadius(topRadius);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTopRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getTopRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTopRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOldTopRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setGranularity_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 granularity )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setGranularity(granularity);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getGranularity_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getGranularity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldGranularity_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getOldGranularity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setHalfsPhereRenderMode_void_HalfsPhereRenderMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setHalfsPhereRenderMode((EarthView::World::Spatial::Kml::HalfsPhereRenderMode)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getHalfsPhereRenderMode_HalfsPhereRenderMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::HalfsPhereRenderMode objXXXX = ptrNativeObject->getHalfsPhereRenderMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldHalfsPhereRenderMode_HalfsPhereRenderMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::HalfsPhereRenderMode objXXXX = ptrNativeObject->getOldHalfsPhereRenderMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getScreenX_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getScreenX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getScreenY_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getScreenY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setScreenXY_void_CSceneOverlayData_CSceneOverlayData(void *pObjectXXXX, _in void* screenX, _in void* screenY )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setScreenXY(*(EarthView::World::Spatial::Kml::CSceneOverlayData*)screenX, *(EarthView::World::Spatial::Kml::CSceneOverlayData*)screenY);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOverlayX_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getOverlayX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOverlayY_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getOverlayY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setOverlayXY_void_CSceneOverlayData_CSceneOverlayData(void *pObjectXXXX, _in void* overlayX, _in void* overlayY )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setOverlayXY(*(EarthView::World::Spatial::Kml::CSceneOverlayData*)overlayX, *(EarthView::World::Spatial::Kml::CSceneOverlayData*)overlayY);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getSizeX_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getSizeX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getSizeY_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getSizeY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setSizeXY_void_CSceneOverlayData_CSceneOverlayData(void *pObjectXXXX, _in void* sizeX, _in void* sizeY )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setSizeXY(*(EarthView::World::Spatial::Kml::CSceneOverlayData*)sizeX, *(EarthView::World::Spatial::Kml::CSceneOverlayData*)sizeY);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRotateX_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getRotateX();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getRotateY_CSceneOverlayData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CSceneOverlayData objXXXX = ptrNativeObject->getRotateY();
					EarthView::World::Spatial::Kml::CSceneOverlayData *pXXXX = new EarthView::World::Spatial::Kml::CSceneOverlayData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setRotateXY_void_CSceneOverlayData_CSceneOverlayData(void *pObjectXXXX, _in void* rotateX, _in void* rotateY )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setRotateXY(*(EarthView::World::Spatial::Kml::CSceneOverlayData*)rotateX, *(EarthView::World::Spatial::Kml::CSceneOverlayData*)rotateY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setMultiPoint_void_CMultiPoint(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CMultiPoint* ref_MultiPoint )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setMultiPoint(ref_MultiPoint);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CMultiPoint*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getMultiPoint_CMultiPoint(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CMultiPoint* objXXXX = ptrNativeObject->getMultiPoint();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CMultiPoint*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldMultiPoint_CMultiPoint(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CMultiPoint* objXXXX = ptrNativeObject->getOldMultiPoint();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPolyLine_void_CPolyline(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPolyline* ref_polyline )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPolyLine(ref_polyline);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPolyline*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPolyLine_CPolyline(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPolyline* objXXXX = ptrNativeObject->getPolyLine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPolyline*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPolyLine_CPolyline(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPolyline* objXXXX = ptrNativeObject->getOldPolyLine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPolygon_void_CPolygon(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPolygon* ref_polygon )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPolygon(ref_polygon);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPolygon*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getPolygon_CPolygon(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPolygon* objXXXX = ptrNativeObject->getPolygon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CPolygon*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldPolygon_CPolygon(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CPolygon* objXXXX = ptrNativeObject->getOldPolygon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTopSurfaceTextureEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTopSurfaceTextureEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTopSurfaceTextureEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getTopSurfaceTextureEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTopSurfaceTextureEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldTopSurfaceTextureEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setWallSurfaceTextureEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setWallSurfaceTextureEnable(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getWallSurfaceTextureEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getWallSurfaceTextureEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldWallSurfaceTextureEnable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getOldWallSurfaceTextureEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTopSurfaceTextureScale_void_ev_real32(void *pObjectXXXX, _in ev_real32 scale )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTopSurfaceTextureScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTopSurfaceTextureScale_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getTopSurfaceTextureScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTopSurfaceTextureScale_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldTopSurfaceTextureScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setWallSurfaceTextureScale_void_ev_real32(void *pObjectXXXX, _in ev_real32 scale )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setWallSurfaceTextureScale(scale);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getWallSurfaceTextureScale_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getWallSurfaceTextureScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldWallSurfaceTextureScale_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldWallSurfaceTextureScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTopSurfaceTextureTransparency_void_ev_real32(void *pObjectXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTopSurfaceTextureTransparency(val);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTopSurfaceTextureTransparency_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getTopSurfaceTextureTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTopSurfaceTextureTransparency_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldTopSurfaceTextureTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setWallSurfaceTextureTransparency_void_ev_real32(void *pObjectXXXX, _in ev_real32 val )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setWallSurfaceTextureTransparency(val);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getWallSurfaceTextureTransparency_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getWallSurfaceTextureTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldWallSurfaceTextureTransparency_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldWallSurfaceTextureTransparency();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTopSurfaceTexturePath_void_EVString(void *pObjectXXXX, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTopSurfaceTexturePath(path1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTopSurfaceTexturePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getTopSurfaceTexturePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTopSurfaceTexturePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldTopSurfaceTexturePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setWallSurfaceTexturePath_void_EVString(void *pObjectXXXX, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setWallSurfaceTexturePath(path1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getWallSurfaceTexturePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getWallSurfaceTexturePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldWallSurfaceTexturePath_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOldWallSurfaceTexturePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTopSurfaceTextureUnitSizeX_void_ev_real32(void *pObjectXXXX, _in ev_real32 unitSizeX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTopSurfaceTextureUnitSizeX(unitSizeX);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTopSurfaceTextureUnitSizeX_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getTopSurfaceTextureUnitSizeX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTopSurfaceTextureUnitSizeX_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldTopSurfaceTextureUnitSizeX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setTopSurfaceTextureUnitSizeY_void_ev_real32(void *pObjectXXXX, _in ev_real32 unitSizeY )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setTopSurfaceTextureUnitSizeY(unitSizeY);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getTopSurfaceTextureUnitSizeY_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getTopSurfaceTextureUnitSizeY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldTopSurfaceTextureUnitSizeY_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldTopSurfaceTextureUnitSizeY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setWallSurfaceTextureUnitSizeX_void_ev_real32(void *pObjectXXXX, _in ev_real32 unitSizeX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setWallSurfaceTextureUnitSizeX(unitSizeX);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getWallSurfaceTextureUnitSizeX_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getWallSurfaceTextureUnitSizeX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldWallSurfaceTextureUnitSizeX_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldWallSurfaceTextureUnitSizeX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setWallSurfaceTextureUnitSizeY_void_ev_real32(void *pObjectXXXX, _in ev_real32 unitSizeY )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setWallSurfaceTextureUnitSizeY(unitSizeY);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getWallSurfaceTextureUnitSizeY_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getWallSurfaceTextureUnitSizeY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_getOldWallSurfaceTextureUnitSizeY_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getOldWallSurfaceTextureUnitSizeY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_isPixelWidth_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isPixelWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_isOldPixelWidth_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOldPixelWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtensionAttribute_setPixelWidth_void_ev_bool(void *pObjectXXXX, _in ev_bool isPixelWidth )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*) pObjectXXXX;
					ptrNativeObject->setPixelWidth(isPixelWidth);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtension_GeoObjectExtAttr( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute &objXXXX = ptrNativeObject->GeoObjectExtAttr;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtension_GeoObjectExtAttr( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtension*)pObjectXXXX)->GeoObjectExtAttr = *(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlWorkQueueState*  _stdcall Get_EarthView_World_Spatial_Kml_CGeoObjectExtension_WorkState( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlWorkQueueState* objXXXX = ptrNativeObject->WorkState;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CGeoObjectExtension_WorkState( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlWorkQueueState*  value )
				{
					((EarthView::World::Spatial::Kml::CGeoObjectExtension*)pObjectXXXX)->WorkState = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CSpatialReference*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtension_getWGS84SpatialReference_CSpatialReference( )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* objXXXX = EarthView::World::Spatial::Kml::CGeoObjectExtension::getWGS84SpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtension_cloneProperty_void_CGeoObjectExtension(void *pObjectXXXX, _out EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObject )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) pObjectXXXX;
					ptrNativeObject->cloneProperty(ref_geoObject);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial_Kml_CGeoObjectExtension_clone_CGeoObjectExtension(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension* ptrNativeObject = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
		}
	}
}
