/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/atlasmanager/atlastreeeventdata.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_setType_void_ActionType(void *pObjectXXXX, _in int t )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType)t);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_getType_ActionType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ActionType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_detialData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData &objXXXX = ptrNativeObject->detialData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_detialData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->detialData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_propertyData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData &objXXXX = ptrNativeObject->propertyData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_propertyData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->propertyData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_kmlManageData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData &objXXXX = ptrNativeObject->kmlManageData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_kmlManageData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->kmlManageData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneDetailData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData &objXXXX = ptrNativeObject->sceneDetailData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneDetailData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->sceneDetailData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_scenePropertyData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData &objXXXX = ptrNativeObject->scenePropertyData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_scenePropertyData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->scenePropertyData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapDetailData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData &objXXXX = ptrNativeObject->mapDetailData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapDetailData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->mapDetailData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapPropertyData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData &objXXXX = ptrNativeObject->mapPropertyData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapPropertyData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->mapPropertyData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapLayerRecordData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData &objXXXX = ptrNativeObject->mapLayerRecordData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_mapLayerRecordData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->mapLayerRecordData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneLayerRecordData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData &objXXXX = ptrNativeObject->sceneLayerRecordData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_sceneLayerRecordData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->sceneLayerRecordData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_historyImageData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData &objXXXX = ptrNativeObject->historyImageData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_historyImageData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->historyImageData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_terrainSettingsData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData &objXXXX = ptrNativeObject->terrainSettingsData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_terrainSettingsData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->terrainSettingsData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_atmosphereTreeData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData &objXXXX = ptrNativeObject->atmosphereTreeData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_atmosphereTreeData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->atmosphereTreeData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_editableData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData &objXXXX = ptrNativeObject->editableData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_editableData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->editableData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_selectableData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData &objXXXX = ptrNativeObject->selectableData;
					EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_AtlasManager_AtlasTreeEventData_selectableData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData*)pObjectXXXX)->selectableData = *(EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData*)value;
				}
			}
		}
	}
}
