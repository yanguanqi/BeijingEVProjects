/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/sceneactiveevent.h"
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
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_getScene_IScene(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->getScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_setScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* ref_map )
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					ptrNativeObject->setScene(ref_map);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneActiveEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
			}
		}
	}
}
