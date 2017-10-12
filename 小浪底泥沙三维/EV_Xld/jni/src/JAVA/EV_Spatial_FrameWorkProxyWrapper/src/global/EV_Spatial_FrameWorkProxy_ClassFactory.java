package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial_FrameWorkProxy_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Utilities::AppAtlas", new com.earthview.world.utilities.AppAtlasClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::AppDataSource", new com.earthview.world.utilities.AppDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CApplication", new com.earthview.world.core.ApplicationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCApplicationProxy", new com.earthview.world.core.ApplicationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::AppProject", new com.earthview.world.utilities.AppProjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasEventObject", new com.earthview.world.frameworkproxy.atlasmanager.AtlasEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::JCAtlasEventObjectProxy", new com.earthview.world.frameworkproxy.atlasmanager.AtlasEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet", new com.earthview.world.frameworkproxy.atlasmanager.EvdatasettypesetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CLayerVector", new com.earthview.world.frameworkproxy.atlasmanager.LayerVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager", new com.earthview.world.frameworkproxy.atlasmanager.AtlasManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData", new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEventDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CLayerSimpleProperty", new com.earthview.world.frameworkproxy.atlasmanager.LayerSimplePropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::JCLayerSimplePropertyProxy", new com.earthview.world.frameworkproxy.atlasmanager.LayerSimplePropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CMapSimpleProperty", new com.earthview.world.frameworkproxy.atlasmanager.MapSimplePropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::JCMapSimplePropertyProxy", new com.earthview.world.frameworkproxy.atlasmanager.MapSimplePropertyClassFactory());
		GlobalClassFactoryMap.put("CCommandPool", new CommandPoolClassFactory());
		GlobalClassFactoryMap.put("CControlSpace", new ControlSpaceClassFactory());
		GlobalClassFactoryMap.put("JCControlSpaceProxy", new ControlSpaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption", new com.earthview.world.utilities.DatasetOptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption_Create", new com.earthview.world.utilities.DatasetOptionCreateClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption_Create_DB", new com.earthview.world.utilities.DatasetOptionCreateDbClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DatasetOption_Create_File", new com.earthview.world.utilities.DatasetOptionCreateFileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent", new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr", new com.earthview.world.frameworkproxy.datasourcemanager.DatasetActiveEventArrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::JCDataSourceEventObjectProxy", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceActiveEventArrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructArrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::JCDataSourceManagerProxy", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::JCDataSourcePropertyStringInterfaceProxy", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSourcePropertyStringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::JCDataSetPropertyStringInterfaceProxy", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceManager.DataSetPropertyStringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.DataSourcePropertyDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.ModelManageDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEvent.EffectManageDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceTreeEventDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLStructClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool", new com.earthview.world.frameworkproxy.datasourcemanager.DataSourceURLToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager", new com.earthview.world.frameworkproxy.datasourcemanager.WebDataSourceCacheManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption", new com.earthview.world.utilities.DataSourceOptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Open_DB", new com.earthview.world.utilities.DataSourceOptionOpenDbClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Create_DB", new com.earthview.world.utilities.DataSourceOptionCreateDbClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Open", new com.earthview.world.utilities.DataSourceOptionOpenClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Utilities::DataSourceOption_Create", new com.earthview.world.utilities.DataSourceOptionCreateClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent", new com.earthview.world.spatial2d.controls.EagleEyeControlAgentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEagleEyeControlAgentProxy", new com.earthview.world.spatial2d.controls.EagleEyeControlAgentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::IEagleEyeControlListener", new com.earthview.world.spatial2d.controls.IeagleeyecontrollistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JIEagleEyeControlListenerProxy", new com.earthview.world.spatial2d.controls.IeagleeyecontrollistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEagleEyeControl", new com.earthview.world.spatial2d.controls.EagleEyeControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEagleEyeControlProxy", new com.earthview.world.spatial2d.controls.EagleEyeControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CToolEagleEyeControl", new com.earthview.world.spatial2d.controls.ToolEagleEyeControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCToolEagleEyeControlProxy", new com.earthview.world.spatial2d.controls.ToolEagleEyeControlClassFactory());
		GlobalClassFactoryMap.put("CGlobleControlSpace", new GlobleControlSpaceClassFactory());
		GlobalClassFactoryMap.put("JCGlobleControlSpaceProxy", new GlobleControlSpaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap", new com.earthview.world.frameworkproxy.GroupStringinterfaceMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface", new com.earthview.world.frameworkproxy.GroupStringinterfaceMap.GroupStringinterfaceClassFactory());
		GlobalClassFactoryMap.put("CLinkController", new LinkControllerClassFactory());
		GlobalClassFactoryMap.put("CMapControlSpace", new MapControlSpaceClassFactory());
		GlobalClassFactoryMap.put("JCMapControlSpaceProxy", new MapControlSpaceClassFactory());
		GlobalClassFactoryMap.put("CPageLayoutControlSpace", new PageLayoutControlSpaceClassFactory());
		GlobalClassFactoryMap.put("JCPageLayoutControlSpaceProxy", new PageLayoutControlSpaceClassFactory());
		GlobalClassFactoryMap.put("CViewManager", new ViewManagerClassFactory());
	}
}

