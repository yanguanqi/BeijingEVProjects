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
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ModelFeature", new com.earthview.world.spatial.download.ModelFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ModelFeatureVector", new com.earthview.world.spatial.download.ModelFeatureVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVlasFeature", new com.earthview.world.spatial.download.EvlasfeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVLasFeatureVector", new com.earthview.world.spatial.download.EvlasfeaturevectorClassFactory());
		GlobalClassFactoryMap.put("FTPClient", new FtpclientClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CWebManager", new com.earthview.world.spatial.download.WebManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::CWebServiceConnection", new com.earthview.world.spatial.download.WebServiceConnectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::JCWebServiceConnectionProxy", new com.earthview.world.spatial.download.WebServiceConnectionClassFactory());
	}
}

