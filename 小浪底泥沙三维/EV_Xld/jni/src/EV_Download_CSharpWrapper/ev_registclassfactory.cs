using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Download_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ConnectionImpPlugin", new EarthView.World.Spatial.Download.ConnectionImpPluginClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ConnectionImpPluginProxy", new EarthView.World.Spatial.Download.ConnectionImpPluginClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ConnectionImp", new EarthView.World.Spatial.Download.ConnectionImpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ConnectionImpProxy", new EarthView.World.Spatial.Download.ConnectionImpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ConnectionImpAdapter", new EarthView.World.Spatial.Download.ConnectionImpAdapterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CDownloadInterface", new EarthView.World.Spatial.Download.DownloadInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::URLSpeedManager", new EarthView.World.Spatial.Download.UrlspeedmanagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ModelFeature", new EarthView.World.Spatial.Download.ModelFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ModelFeatureVector", new EarthView.World.Spatial.Download.ModelFeatureVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVlasFeature", new EarthView.World.Spatial.Download.EvlasfeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasFeatureVector", new EarthView.World.Spatial.Download.EvlasfeaturevectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("FTPClient", new FtpclientClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CWebManager", new EarthView.World.Spatial.Download.WebManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CWebServiceConnection", new EarthView.World.Spatial.Download.WebServiceConnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CWebServiceConnectionProxy", new EarthView.World.Spatial.Download.WebServiceConnectionClassFactory());
	}
}

