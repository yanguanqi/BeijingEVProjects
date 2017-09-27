/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/maplayeractiveevent.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
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
			namespace SystemUI
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_map )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setMap(ref_map);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getParentGroupLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getParentGroupLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setParentGroupLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_grouplayer )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setParentGroupLayer(ref_grouplayer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getHoverParentGroupLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getHoverParentGroupLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setHoverParentGroupLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* hoverGroupLayer )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setHoverParentGroupLayer(hoverGroupLayer);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getOldIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getOldIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_getNewIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getNewIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setOldIndex_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setOldIndex(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setNewIndex_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setNewIndex(index);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_isUpdateCache_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isUpdateCache();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setUpdateCache_void_ev_bool(void *pObjectXXXX, _in ev_bool update )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setUpdateCache(update);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_isBatch_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isBatch();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayerActiveEvent_setBatch_void_ev_bool(void *pObjectXXXX, _in ev_bool batch )
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setBatch(batch);
				}
			}
		}
	}
}
