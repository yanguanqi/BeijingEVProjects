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
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnection", new EarthView.World.Spatial.Download.EvlasxgserviceconnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnectionProxy", new EarthView.World.Spatial.Download.EvlasxgserviceconnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnectionImp", new EarthView.World.Spatial.Download.EvlasxgserviceconnectionimpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasXGServiceConnectionImpProxy", new EarthView.World.Spatial.Download.EvlasxgserviceconnectionimpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ModelFeature", new EarthView.World.Spatial.Download.ModelFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::ModelFeatureVector", new EarthView.World.Spatial.Download.ModelFeatureVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVlasFeature", new EarthView.World.Spatial.Download.EvlasfeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::EVLasFeatureVector", new EarthView.World.Spatial.Download.EvlasfeaturevectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("FTPClient", new FtpclientClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBTopTile", new EarthView.World.Spatial.Download.OsgbtoptileClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBTopTileVector", new EarthView.World.Spatial.Download.OsgbtoptilevectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBLayerLevel", new EarthView.World.Spatial.Download.OsgblayerlevelClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBLayerLevelVector", new EarthView.World.Spatial.Download.OsgblayerlevelvectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBLayerMetaData", new EarthView.World.Spatial.Download.OsgblayermetadataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBLayerMetaDataProxy", new EarthView.World.Spatial.Download.OsgblayermetadataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBServiceConnection", new EarthView.World.Spatial.Download.OsgbserviceconnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBServiceConnectionProxy", new EarthView.World.Spatial.Download.OsgbserviceconnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBServiceConnectionImp", new EarthView.World.Spatial.Download.OsgbserviceconnectionimpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::COSGBServiceConnectionImpProxy", new EarthView.World.Spatial.Download.OsgbserviceconnectionimpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CStreetPoint", new EarthView.World.Spatial.Download.StreetPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CStreetPointList", new EarthView.World.Spatial.Download.StreetPointListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CStreetViewServiceConnection", new EarthView.World.Spatial.Download.StreetViewServiceConnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CStreetViewServiceConnectionProxy", new EarthView.World.Spatial.Download.StreetViewServiceConnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CStreetViewServiceConnectionImp", new EarthView.World.Spatial.Download.StreetViewServiceConnectionImpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CStreetViewServiceConnectionImpProxy", new EarthView.World.Spatial.Download.StreetViewServiceConnectionImpClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CWebManager", new EarthView.World.Spatial.Download.WebManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CWebServiceConnection", new EarthView.World.Spatial.Download.WebServiceConnectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Download::CWebServiceConnectionProxy", new EarthView.World.Spatial.Download.WebServiceConnectionClassFactory());
	}
}

