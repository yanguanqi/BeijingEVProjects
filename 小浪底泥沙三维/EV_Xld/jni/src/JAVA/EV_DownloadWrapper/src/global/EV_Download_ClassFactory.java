package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Download_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ConnectionImpPlugin", new com.earthview.world.spatial.download.ConnectionImpPluginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JConnectionImpPluginProxy", new com.earthview.world.spatial.download.ConnectionImpPluginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ConnectionImp", new com.earthview.world.spatial.download.ConnectionImpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JConnectionImpProxy", new com.earthview.world.spatial.download.ConnectionImpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ConnectionImpAdapter", new com.earthview.world.spatial.download.ConnectionImpAdapterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CDownloadInterface", new com.earthview.world.spatial.download.DownloadInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::URLSpeedManager", new com.earthview.world.spatial.download.UrlspeedmanagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVLasXGServiceConnection", new com.earthview.world.spatial.download.EvlasxgserviceconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JEVLasXGServiceConnectionProxy", new com.earthview.world.spatial.download.EvlasxgserviceconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp", new com.earthview.world.spatial.download.EvlasxgserviceconnectionimpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JEVLasXGServiceConnectionImpProxy", new com.earthview.world.spatial.download.EvlasxgserviceconnectionimpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ModelFeature", new com.earthview.world.spatial.download.ModelFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ModelFeatureVector", new com.earthview.world.spatial.download.ModelFeatureVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVlasFeature", new com.earthview.world.spatial.download.EvlasfeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVLasFeatureVector", new com.earthview.world.spatial.download.EvlasfeaturevectorClassFactory());
		GlobalClassFactoryMap.put("FTPClient", new FtpclientClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBTopTile", new com.earthview.world.spatial.download.OsgbtoptileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBTopTileVector", new com.earthview.world.spatial.download.OsgbtoptilevectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBLayerLevel", new com.earthview.world.spatial.download.OsgblayerlevelClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBLayerLevelVector", new com.earthview.world.spatial.download.OsgblayerlevelvectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBLayerMetaData", new com.earthview.world.spatial.download.OsgblayermetadataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCOSGBLayerMetaDataProxy", new com.earthview.world.spatial.download.OsgblayermetadataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBServiceConnection", new com.earthview.world.spatial.download.OsgbserviceconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCOSGBServiceConnectionProxy", new com.earthview.world.spatial.download.OsgbserviceconnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::COSGBServiceConnectionImp", new com.earthview.world.spatial.download.OsgbserviceconnectionimpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCOSGBServiceConnectionImpProxy", new com.earthview.world.spatial.download.OsgbserviceconnectionimpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetPoint", new com.earthview.world.spatial.download.StreetPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetPointList", new com.earthview.world.spatial.download.StreetPointListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetViewServiceConnection", new com.earthview.world.spatial.download.StreetViewServiceConnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCStreetViewServiceConnectionProxy", new com.earthview.world.spatial.download.StreetViewServiceConnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp", new com.earthview.world.spatial.download.StreetViewServiceConnectionImpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCStreetViewServiceConnectionImpProxy", new com.earthview.world.spatial.download.StreetViewServiceConnectionImpClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CWebManager", new com.earthview.world.spatial.download.WebManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CWebServiceConnection", new com.earthview.world.spatial.download.WebServiceConnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCWebServiceConnectionProxy", new com.earthview.world.spatial.download.WebServiceConnectionClassFactory());
	}
}

