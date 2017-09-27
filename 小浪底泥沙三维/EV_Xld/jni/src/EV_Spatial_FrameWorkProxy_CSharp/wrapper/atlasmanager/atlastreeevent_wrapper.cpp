/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlastreeevent.h"
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
		namespace FrameWorkProxy
		{
			namespace AtlasManager
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneDetailData_scene( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->scene;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneDetailData_scene( void *pObjectXXXX, EarthView::World::Spatial::Atlas::IScene*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData*)pObjectXXXX)->scene = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_ScenePropertyData_groupStringInterface( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap &objXXXX = ptrNativeObject->groupStringInterface;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_ScenePropertyData_groupStringInterface( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData*)pObjectXXXX)->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapDetailData_imap( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->imap;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapDetailData_imap( void *pObjectXXXX, EarthView::World::Spatial::Atlas::IMap*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData*)pObjectXXXX)->imap = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapPropertyData_groupStringInterface( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap &objXXXX = ptrNativeObject->groupStringInterface;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapPropertyData_groupStringInterface( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData*)pObjectXXXX)->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasourceName( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->datasourceName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasourceName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjectXXXX)->datasourceName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasetName( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->datasetName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_datasetName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjectXXXX)->datasetName = value1;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_layer( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->layer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_KmlManageData_layer( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ILayer*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)pObjectXXXX)->layer = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerPropertyData_groupStringInterface( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap &objXXXX = ptrNativeObject->groupStringInterface;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerPropertyData_groupStringInterface( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData*)pObjectXXXX)->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_imap( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->imap;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_imap( void *pObjectXXXX, EarthView::World::Spatial::Atlas::IMap*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjectXXXX)->imap = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_layer( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->layer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_layer( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ILayer*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjectXXXX)->layer = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_parentLayer( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->parentLayer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerDetailData_parentLayer( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ILayer*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)pObjectXXXX)->parentLayer = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapLayerRecordData_layer( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->layer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_MapLayerRecordData_layer( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ILayer*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData*)pObjectXXXX)->layer = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneLayerRecordData_layer( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->layer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_SceneLayerRecordData_layer( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ILayer*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData*)pObjectXXXX)->layer = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_TerrainSettingsData_sceneName( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->sceneName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_TerrainSettingsData_sceneName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData*)pObjectXXXX)->sceneName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_AtmosphereTreeData_sceneName( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->sceneName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_AtmosphereTreeData_sceneName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData*)pObjectXXXX)->sceneName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_HistoryImageData_sceneName( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->sceneName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_HistoryImageData_sceneName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData*)pObjectXXXX)->sceneName = value1;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerEditableChangedData_layer( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->layer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerEditableChangedData_layer( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ILayer*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData*)pObjectXXXX)->layer = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerSelectableChangedData_layer( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->layer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_LayerSelectableChangedData_layer( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ILayer*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData*)pObjectXXXX)->layer = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getActionType_ActionType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType objXXXX = ptrNativeObject->getActionType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerDetailData_LayerDetailData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData objXXXX = ptrNativeObject->getLayerDetailData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerPropertyData_LayerPropertyData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData objXXXX = ptrNativeObject->getLayerPropertyData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getKmlManageData_KmlManageData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData objXXXX = ptrNativeObject->getKmlManageData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getSceneDetailData_SceneDetailData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData objXXXX = ptrNativeObject->getSceneDetailData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getScenePropertyData_ScenePropertyData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData objXXXX = ptrNativeObject->getScenePropertyData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapDetailData_MapDetailData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData objXXXX = ptrNativeObject->getMapDetailData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapPropertyData_MapPropertyData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData objXXXX = ptrNativeObject->getMapPropertyData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getMapLayerRecordData_MapLayerRecordData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData objXXXX = ptrNativeObject->getMapLayerRecordData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getSceneLayerRecordData_SceneLayerRecordData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData objXXXX = ptrNativeObject->getSceneLayerRecordData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getHistoryImageData_HistoryImageData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData objXXXX = ptrNativeObject->getHistoryImageData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getTerrainSettingsData_TerrainSettingsData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData objXXXX = ptrNativeObject->getTerrainSettingsData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getAtmosphereTreeData_AtmosphereTreeData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData objXXXX = ptrNativeObject->getAtmosphereTreeData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerEditableChangedData_LayerEditableChangedData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData objXXXX = ptrNativeObject->getLayerEditableChangedData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_getLayerSelectableChangedData_LayerSelectableChangedData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData objXXXX = ptrNativeObject->getLayerSelectableChangedData();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData *pXXXX = new EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEvent_data_AtlasTreeEventData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData& objXXXX = ptrNativeObject->data();
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
