using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial_FrameWorkProxy_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::AppAtlas", new EarthView.World.Utilities.AppAtlasClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::AppDataSource", new EarthView.World.Utilities.AppDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CApplication", new EarthView.World.Core.ApplicationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Core::CApplicationProxy", new EarthView.World.Core.ApplicationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::AppProject", new EarthView.World.Utilities.AppProjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObjectProxy", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet", new EarthView.World.FrameWorkProxy.AtlasManager.EvdatasettypesetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector", new EarthView.World.FrameWorkProxy.AtlasManager.LayerVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneDetailDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.ScenePropertyDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapDetailDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapPropertyDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.KmlManageDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerPropertyDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerDetailDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.MapLayerRecordDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.SceneLayerRecordDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.TerrainSettingsDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.AtmosphereTreeDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.HistoryImageDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerEditableChangedDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEvent.LayerSelectableChangedDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData", new EarthView.World.FrameWorkProxy.AtlasManager.AtlasTreeEventDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty", new EarthView.World.FrameWorkProxy.AtlasManager.LayerSimplePropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimplePropertyProxy", new EarthView.World.FrameWorkProxy.AtlasManager.LayerSimplePropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty", new EarthView.World.FrameWorkProxy.AtlasManager.MapSimplePropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::AtlasManager::CMapSimplePropertyProxy", new EarthView.World.FrameWorkProxy.AtlasManager.MapSimplePropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CCommandPool", new CommandPoolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CControlSpace", new ControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CControlSpaceProxy", new ControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption", new EarthView.World.Utilities.DatasetOptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption_Create", new EarthView.World.Utilities.DatasetOptionCreateClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption_Create_DB", new EarthView.World.Utilities.DatasetOptionCreateDbClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DatasetOption_Create_File", new EarthView.World.Utilities.DatasetOptionCreateFileClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent", new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr", new EarthView.World.FrameWorkProxy.DataSourceManager.DatasetActiveEventArrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObjectProxy", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceActiveEventArrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructArrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManagerProxy", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterfaceProxy", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSourcePropertyStringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterfaceProxy", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceManager.DataSetPropertyStringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.DataSourcePropertyDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.ModelManageDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEvent.EffectManageDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceTreeEventDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLStructClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool", new EarthView.World.FrameWorkProxy.DataSourceManager.DataSourceURLToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager", new EarthView.World.FrameWorkProxy.DataSourceManager.WebDataSourceCacheManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption", new EarthView.World.Utilities.DataSourceOptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Open_DB", new EarthView.World.Utilities.DataSourceOptionOpenDbClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Create_DB", new EarthView.World.Utilities.DataSourceOptionCreateDbClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Open", new EarthView.World.Utilities.DataSourceOptionOpenClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Utilities::DataSourceOption_Create", new EarthView.World.Utilities.DataSourceOptionCreateClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CGlobleControlSpace", new GlobleControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CGlobleControlSpaceProxy", new GlobleControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap", new EarthView.World.FrameWorkProxy.GroupStringinterfaceMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface", new EarthView.World.FrameWorkProxy.GroupStringinterfaceMap.GroupStringinterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CLinkController", new LinkControllerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CMapControlSpace", new MapControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CMapControlSpaceProxy", new MapControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CPageLayoutControlSpace", new PageLayoutControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CPageLayoutControlSpaceProxy", new PageLayoutControlSpaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CViewManager", new ViewManagerClassFactory());
	}
}

