package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_SpatialServerClient_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CDataSourceServerFactory", new com.earthview.world.spatial.DataSourceServerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCDataSourceServerFactoryProxy", new com.earthview.world.spatial.DataSourceServerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSDataSourceServerFactory", new com.earthview.world.spatial.OgcwmsdatasourceserverfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCOGCWMSDataSourceServerFactoryProxy", new com.earthview.world.spatial.OgcwmsdatasourceserverfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSDataSourceServerFactory", new com.earthview.world.spatial.OgcwmtsdatasourceserverfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCOGCWMTSDataSourceServerFactoryProxy", new com.earthview.world.spatial.OgcwmtsdatasourceserverfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWFSDataSourceServerFactory", new com.earthview.world.spatial.OgcwfsdatasourceserverfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCOGCWFSDataSourceServerFactoryProxy", new com.earthview.world.spatial.OgcwfsdatasourceserverfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMTSDataset", new com.earthview.world.spatial.EvwmtsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMTSDatasetProxy", new com.earthview.world.spatial.EvwmtsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWFSDataset", new com.earthview.world.spatial.EvwfsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWFSDatasetProxy", new com.earthview.world.spatial.EvwfsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSDataset", new com.earthview.world.spatial.EvwmsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSDatasetProxy", new com.earthview.world.spatial.EvwmsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeoCodeDataset", new com.earthview.world.spatial.EvgeocodedatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeoCodeDatasetProxy", new com.earthview.world.spatial.EvgeocodedatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVDEMDataset", new com.earthview.world.spatial.EvdemdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVDEMDatasetProxy", new com.earthview.world.spatial.EvdemdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVKMLDataset", new com.earthview.world.spatial.EvkmldatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVKMLDatasetProxy", new com.earthview.world.spatial.EvkmldatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::IWebOBQDataset", new com.earthview.world.spatial.IwebobqdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JIWebOBQDatasetProxy", new com.earthview.world.spatial.IwebobqdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebSmart3DDataset", new com.earthview.world.spatial.WebSmart3DDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebSmart3DDatasetProxy", new com.earthview.world.spatial.WebSmart3DDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebMeshXDataset", new com.earthview.world.spatial.WebMeshXDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebMeshXDatasetProxy", new com.earthview.world.spatial.WebMeshXDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebMeshXGDataset", new com.earthview.world.spatial.WebMeshXGDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebMeshXGDatasetProxy", new com.earthview.world.spatial.WebMeshXGDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebLasDataset", new com.earthview.world.spatial.WebLasDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebLasDatasetProxy", new com.earthview.world.spatial.WebLasDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebVector3DDataset", new com.earthview.world.spatial.WebVector3DDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebVector3DDatasetProxy", new com.earthview.world.spatial.WebVector3DDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVBaseModelDataset", new com.earthview.world.spatial.EvbasemodeldatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVBaseModelDatasetProxy", new com.earthview.world.spatial.EvbasemodeldatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelDataset", new com.earthview.world.spatial.EvmodeldatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelDatasetProxy", new com.earthview.world.spatial.EvmodeldatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelTemplateDataset", new com.earthview.world.spatial.EvmodeltemplatedatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelTemplateDatasetProxy", new com.earthview.world.spatial.EvmodeltemplatedatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSChartDataset", new com.earthview.world.spatial.EvwmschartdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSChartDatasetProxy", new com.earthview.world.spatial.EvwmschartdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSImageDataset", new com.earthview.world.spatial.EvwmsimagedatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSImageDatasetProxy", new com.earthview.world.spatial.EvwmsimagedatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeometryDataset", new com.earthview.world.spatial.EvgeometrydatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeometryDatasetProxy", new com.earthview.world.spatial.EvgeometrydatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CMultiMedaServiceDataset", new com.earthview.world.spatial.MultiMedaServiceDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCMultiMedaServiceDatasetProxy", new com.earthview.world.spatial.MultiMedaServiceDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMTSLayer", new com.earthview.world.spatial.EvwmtslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMTSLayerProxy", new com.earthview.world.spatial.EvwmtslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSMapLayer", new com.earthview.world.spatial.EvwmsmaplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSMapLayerProxy", new com.earthview.world.spatial.EvwmsmaplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWFSLayer", new com.earthview.world.spatial.EvwfslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWFSLayerProxy", new com.earthview.world.spatial.EvwfslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeoCodeLayer", new com.earthview.world.spatial.EvgeocodelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeoCodeLayerProxy", new com.earthview.world.spatial.EvgeocodelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVDEMLayer", new com.earthview.world.spatial.EvdemlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVDEMLayerProxy", new com.earthview.world.spatial.EvdemlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVKMLLayer", new com.earthview.world.spatial.EvkmllayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVKMLLayerProxy", new com.earthview.world.spatial.EvkmllayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeometryMapLayer", new com.earthview.world.spatial.EvgeometrymaplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeometryMapLayerProxy", new com.earthview.world.spatial.EvgeometrymaplayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelLayer", new com.earthview.world.spatial.EvmodellayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelLayerProxy", new com.earthview.world.spatial.EvmodellayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelTemplateLayer", new com.earthview.world.spatial.EvmodeltemplatelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelTemplateLayerProxy", new com.earthview.world.spatial.EvmodeltemplatelayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMTSLayerFactory", new com.earthview.world.spatial.EvwmtslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMTSLayerFactoryProxy", new com.earthview.world.spatial.EvwmtslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSLayerFactory", new com.earthview.world.spatial.EvwmslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSLayerFactoryProxy", new com.earthview.world.spatial.EvwmslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWFSLayerFactory", new com.earthview.world.spatial.EvwfslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWFSLayerFactoryProxy", new com.earthview.world.spatial.EvwfslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVDEMLayerFactory", new com.earthview.world.spatial.EvdemlayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVDEMLayerFactoryProxy", new com.earthview.world.spatial.EvdemlayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVKMLLayerFactory", new com.earthview.world.spatial.EvkmllayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVKMLLayerFactoryProxy", new com.earthview.world.spatial.EvkmllayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeoCodeLayerFactory", new com.earthview.world.spatial.EvgeocodelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeoCodeLayerFactoryProxy", new com.earthview.world.spatial.EvgeocodelayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeometryLayerFactory", new com.earthview.world.spatial.GeometryLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCGeometryLayerFactoryProxy", new com.earthview.world.spatial.GeometryLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CModelLayerFactory", new com.earthview.world.spatial.ModelLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCModelLayerFactoryProxy", new com.earthview.world.spatial.ModelLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerPoint3DF", new com.earthview.world.spatial.ServerPoint3DFClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerFont", new com.earthview.world.spatial.ServerFontClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerAnnotation", new com.earthview.world.spatial.ServerAnnotationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerIcon", new com.earthview.world.spatial.ServerIconClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerStyle", new com.earthview.world.spatial.ServerStyleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTheme", new com.earthview.world.spatial.ServerThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerCacheLayerInfo", new com.earthview.world.spatial.ServerCacheLayerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerSearchCondition", new com.earthview.world.spatial.ServerSearchConditionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerRecord", new com.earthview.world.spatial.ServerRecordClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerSet", new com.earthview.world.spatial.ServerSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerQueryResults", new com.earthview.world.spatial.ServerQueryResultsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebField", new com.earthview.world.spatial.WebFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerPointList", new com.earthview.world.spatial.ServerPointListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CMemoryStreamResult", new com.earthview.world.spatial.MemoryStreamResultClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeometryList", new com.earthview.world.spatial.GeometryListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWebFeature", new com.earthview.world.spatial.EvwebfeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVPlaceNameRecord", new com.earthview.world.spatial.EvplacenamerecordClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CPlaceNameList", new com.earthview.world.spatial.PlaceNameListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerMeshObject", new com.earthview.world.spatial.ServerMeshObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTemplateMeshObject", new com.earthview.world.spatial.ServerTemplateMeshObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerModelResource", new com.earthview.world.spatial.ServerModelResourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTemplateModelResource", new com.earthview.world.spatial.ServerTemplateModelResourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerResourceObject", new com.earthview.world.spatial.ServerResourceObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerOrigTexture", new com.earthview.world.spatial.ServerOrigTextureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerEntityObject", new com.earthview.world.spatial.ServerEntityObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTemplateEntityObject", new com.earthview.world.spatial.ServerTemplateEntityObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerOctreeNode", new com.earthview.world.spatial.ServerOctreeNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerDBField", new com.earthview.world.spatial.ServerDBFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVTileInfo", new com.earthview.world.spatial.EvtileinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVDEMLayerInfo", new com.earthview.world.spatial.EvdemlayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVDEMLayerInfoProxy", new com.earthview.world.spatial.EvdemlayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeoCodeLayerInfo", new com.earthview.world.spatial.EvgeocodelayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeoCodeLayerInfoProxy", new com.earthview.world.spatial.EvgeocodelayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVOBQDataMetaInfo", new com.earthview.world.spatial.EvobqdatametainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVOBQDataMetaInfoProxy", new com.earthview.world.spatial.EvobqdatametainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVBaseModelLayerInfo", new com.earthview.world.spatial.EvbasemodellayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVBaseModelLayerInfoProxy", new com.earthview.world.spatial.EvbasemodellayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelLayerInfo", new com.earthview.world.spatial.EvmodellayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelLayerInfoProxy", new com.earthview.world.spatial.EvmodellayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVModelTemplateLayerInfo", new com.earthview.world.spatial.EvmodeltemplatelayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVModelTemplateLayerInfoProxy", new com.earthview.world.spatial.EvmodeltemplatelayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVKMLLayerInfo", new com.earthview.world.spatial.EvkmllayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVKMLLayerInfoProxy", new com.earthview.world.spatial.EvkmllayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVVector3DMetaInfo", new com.earthview.world.spatial.Evvector3dmetainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVVector3DMetaInfoProxy", new com.earthview.world.spatial.Evvector3dmetainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVLayerInfo", new com.earthview.world.spatial.EvlayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVLayerInfoProxy", new com.earthview.world.spatial.EvlayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMTSLayerInfo", new com.earthview.world.spatial.EvwmtslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMTSLayerInfoProxy", new com.earthview.world.spatial.EvwmtslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVMapLayerInfo", new com.earthview.world.spatial.EvmaplayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVMapLayerInfoProxy", new com.earthview.world.spatial.EvmaplayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVGeometryInfo", new com.earthview.world.spatial.EvgeometryinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVGeometryInfoProxy", new com.earthview.world.spatial.EvgeometryinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWFSLayerInfo", new com.earthview.world.spatial.EvwfslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWFSLayerInfoProxy", new com.earthview.world.spatial.EvwfslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSMapInfo", new com.earthview.world.spatial.EvwmsmapinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSMapInfoProxy", new com.earthview.world.spatial.EvwmsmapinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSChartObjectInfo", new com.earthview.world.spatial.EvwmschartobjectinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSChartObjectInfoProxy", new com.earthview.world.spatial.EvwmschartobjectinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWMSImageInfo", new com.earthview.world.spatial.EvwmsimageinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWMSImageInfoProxy", new com.earthview.world.spatial.EvwmsimageinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWFSMapInfo", new com.earthview.world.spatial.EvwfsmapinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWFSMapInfoProxy", new com.earthview.world.spatial.EvwfsmapinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVServerConnection", new com.earthview.world.spatial.EvserverconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVSpatialServer", new com.earthview.world.spatial.EvspatialserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVSpatialServerProxy", new com.earthview.world.spatial.EvspatialserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCSpatialServer", new com.earthview.world.spatial.OgcspatialserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCOGCSpatialServerProxy", new com.earthview.world.spatial.OgcspatialserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerConnection", new com.earthview.world.spatial.ServerConnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCServiceProviderInfo", new com.earthview.world.spatial.OgcserviceproviderinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCServiceInfo", new com.earthview.world.spatial.OgcserviceinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCServiceInfo::COGCHttpInfo", new com.earthview.world.spatial.Ogcserviceinfo.OgchttpinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerInfo", new com.earthview.world.spatial.ServerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCServerInfoProxy", new com.earthview.world.spatial.ServerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCMetaDataURLInfo", new com.earthview.world.spatial.OgcmetadataurlinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWebServiceBoundingBox", new com.earthview.world.spatial.OgcwebserviceboundingboxClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWebServiceLegendURL", new com.earthview.world.spatial.OgcwebservicelegendurlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWebServiceStyle", new com.earthview.world.spatial.OgcwebservicestyleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerLayerInfo", new com.earthview.world.spatial.ServerLayerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCServerLayerInfoProxy", new com.earthview.world.spatial.ServerLayerInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CSpatialServer", new com.earthview.world.spatial.SpatialServerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCSpatialServerProxy", new com.earthview.world.spatial.SpatialServerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileMatrix", new com.earthview.world.spatial.TileMatrixClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileMatrixSet", new com.earthview.world.spatial.TileMatrixSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor", new com.earthview.world.spatial.EvspatialserverurlcachevisitorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebDataMetaInfo", new com.earthview.world.spatial.WebDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebDataMetaInfoProxy", new com.earthview.world.spatial.WebDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWebDataMetaInfos", new com.earthview.world.spatial.EvwebdatametainfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWebDataMetaInfosProxy", new com.earthview.world.spatial.EvwebdatametainfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebDataset", new com.earthview.world.spatial.WebDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebDatasetProxy", new com.earthview.world.spatial.WebDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebDatasetIterator", new com.earthview.world.spatial.WebDatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebDatasetIteratorProxy", new com.earthview.world.spatial.WebDatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVWebDatasetIterator", new com.earthview.world.spatial.EvwebdatasetiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCEVWebDatasetIteratorProxy", new com.earthview.world.spatial.EvwebdatasetiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSDatasetIterator", new com.earthview.world.spatial.WmsdatasetiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSDatasetIteratorProxy", new com.earthview.world.spatial.WmsdatasetiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSDatasetIterator", new com.earthview.world.spatial.WmtsdatasetiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSDatasetIteratorProxy", new com.earthview.world.spatial.WmtsdatasetiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCResult", new com.earthview.world.spatial.OgcresultClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebLayer", new com.earthview.world.spatial.WebLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebLayerProxy", new com.earthview.world.spatial.WebLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWebLayerFactory", new com.earthview.world.spatial.WebLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWebLayerFactoryProxy", new com.earthview.world.spatial.WebLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSDataset", new com.earthview.world.spatial.WfsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSDatasetProxy", new com.earthview.world.spatial.WfsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSFeatureIterator", new com.earthview.world.spatial.WfsfeatureiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSFeatureIteratorProxy", new com.earthview.world.spatial.WfsfeatureiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSFeature", new com.earthview.world.spatial.WfsfeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSFeatureProxy", new com.earthview.world.spatial.WfsfeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSLayerInfo", new com.earthview.world.spatial.WfslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSLayerInfoProxy", new com.earthview.world.spatial.WfslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSLayerRequestParam", new com.earthview.world.spatial.WfslayerrequestparamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSServer", new com.earthview.world.spatial.WfsserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSServerProxy", new com.earthview.world.spatial.WfsserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWFSServerConnection", new com.earthview.world.spatial.OgcwfsserverconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWFSServerInfo", new com.earthview.world.spatial.WfsserverinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWFSServerInfoProxy", new com.earthview.world.spatial.WfsserverinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSDataset", new com.earthview.world.spatial.WmsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSDatasetProxy", new com.earthview.world.spatial.WmsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSLayer", new com.earthview.world.spatial.WmslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSLayerProxy", new com.earthview.world.spatial.WmslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSLayerFactory", new com.earthview.world.spatial.WmslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSLayerFactoryProxy", new com.earthview.world.spatial.WmslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSAuthorityURL", new com.earthview.world.spatial.OgcwmsauthorityurlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSAttribution", new com.earthview.world.spatial.OgcwmsattributionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSDimensionInfo", new com.earthview.world.spatial.OgcwmsdimensioninfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSLayerInfo", new com.earthview.world.spatial.WmslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSLayerInfoProxy", new com.earthview.world.spatial.WmslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSServer", new com.earthview.world.spatial.WmsserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSServerProxy", new com.earthview.world.spatial.WmsserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSServerConnection", new com.earthview.world.spatial.OgcwmsserverconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMSServerInfo", new com.earthview.world.spatial.WmsserverinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMSServerInfoProxy", new com.earthview.world.spatial.WmsserverinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSDataset", new com.earthview.world.spatial.WmtsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSDatasetProxy", new com.earthview.world.spatial.WmtsdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSLayer", new com.earthview.world.spatial.WmtslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSLayerProxy", new com.earthview.world.spatial.WmtslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSLayerFactory", new com.earthview.world.spatial.WmtslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSLayerFactoryProxy", new com.earthview.world.spatial.WmtslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCTileMatrixLimits", new com.earthview.world.spatial.OgctilematrixlimitsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCTileMatrixSetLink", new com.earthview.world.spatial.OgctilematrixsetlinkClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCResourceURL", new com.earthview.world.spatial.OgcresourceurlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSDimensionInfo", new com.earthview.world.spatial.OgcwmtsdimensioninfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSLayerInfo", new com.earthview.world.spatial.WmtslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSLayerInfoProxy", new com.earthview.world.spatial.WmtslayerinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSServer", new com.earthview.world.spatial.WmtsserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSServerProxy", new com.earthview.world.spatial.WmtsserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSServerConnection", new com.earthview.world.spatial.OgcwmtsserverconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSTheme", new com.earthview.world.spatial.OgcwmtsthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMTSThemes", new com.earthview.world.spatial.OgcwmtsthemesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CWMTSServerInfo", new com.earthview.world.spatial.WmtsserverinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCWMTSServerInfoProxy", new com.earthview.world.spatial.WmtsserverinfoClassFactory());
	}
}

