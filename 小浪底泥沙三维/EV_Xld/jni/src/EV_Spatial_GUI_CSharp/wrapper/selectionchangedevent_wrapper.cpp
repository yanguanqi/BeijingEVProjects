/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/selectionchangedevent.h"
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
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_getSpatialControl_ISpatialControl(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getSpatialControl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_setSpatialControl_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_control )
				{
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ptrNativeObject->setSpatialControl(ref_control);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_getLayerCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_getLayer_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_addLayer_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addLayer(ref_layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_removeLayer_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_existLayer_ev_int32_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					const EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->existLayer(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSelectionChangedEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
			}
		}
	}
}
