/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/scenelayeractiveevent.h"
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
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setID(id);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_getScene_IScene(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->getScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_setScene_void_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* ref_scene )
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setScene(ref_scene);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_getParentGroupLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getParentGroupLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_setParentGroupLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_grouplayer )
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setParentGroupLayer(ref_grouplayer);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_getOldIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getOldIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_getNewIndex_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getNewIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_setOldIndex_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setOldIndex(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CSceneLayerActiveEvent_setNewIndex_void_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjectXXXX;
					ptrNativeObject->setNewIndex(index);
				}
			}
		}
	}
}
