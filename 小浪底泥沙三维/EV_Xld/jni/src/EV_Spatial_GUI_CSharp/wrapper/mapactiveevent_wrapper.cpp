/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/mapactiveevent.h"
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
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_setControl_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					ptrNativeObject->setControl(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_getControl_ISpatialControl(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getControl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_map )
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					ptrNativeObject->setMap(ref_map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapActiveEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial::SystemUI::CMapActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CMapLayersAddedEvent_getFlag_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getFlag();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayersAddedEvent_setFlag_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjectXXXX;
					ptrNativeObject->setFlag(flag);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_SystemUI_CMapLayersAddedEvent_getMap_IMap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapLayersAddedEvent_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_map )
				{
					EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjectXXXX;
					ptrNativeObject->setMap(ref_map);
				}
			}
		}
	}
}
