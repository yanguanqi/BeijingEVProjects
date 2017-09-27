using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial2DGeoDatabase_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource", new EarthView.World.Spatial2D.GeoDataset.DatabaseVectorSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSourceProxy", new EarthView.World.Spatial2D.GeoDataset.DatabaseVectorSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSourceFactory", new EarthView.World.Spatial2D.GeoDataset.DatabaseVectorSourceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSourceFactoryProxy", new EarthView.World.Spatial2D.GeoDataset.DatabaseVectorSourceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CVectorFeature", new EarthView.World.Spatial2D.GeoDataset.VectorFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CVectorFeatureProxy", new EarthView.World.Spatial2D.GeoDataset.VectorFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CFeatureIterator", new EarthView.World.Spatial2D.GeoDataset.FeatureIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CFeatureIteratorProxy", new EarthView.World.Spatial2D.GeoDataset.FeatureIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CFeatureSelection", new EarthView.World.Spatial2D.GeoDataset.FeatureSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CFeatureSelectionProxy", new EarthView.World.Spatial2D.GeoDataset.FeatureSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::ElevationSetting", new EarthView.World.Spatial2D.GeoDataset.ElevationSettingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting", new EarthView.World.Spatial2D.GeoDataset.NaattributesettingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNAAttribute", new EarthView.World.Spatial2D.GeoDataset.NaattributeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder", new EarthView.World.Spatial2D.GeoDataset.NetworkDatasetBuilderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNetworkDataset", new EarthView.World.Spatial2D.GeoDataset.NetworkDatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetProxy", new EarthView.World.Spatial2D.GeoDataset.NetworkDatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam", new EarthView.World.Spatial2D.GeoDataset.RtreespatialindexparamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParamProxy", new EarthView.World.Spatial2D.GeoDataset.RtreespatialindexparamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam", new EarthView.World.Spatial2D.GeoDataset.SpatialGridIndexParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParamProxy", new EarthView.World.Spatial2D.GeoDataset.SpatialGridIndexParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory", new EarthView.World.Spatial2D.GeoDataset.SpatialIndexParamFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactoryProxy", new EarthView.World.Spatial2D.GeoDataset.SpatialIndexParamFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass", new EarthView.World.Spatial2D.GeoDataset.VectorFeatureClassClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassProxy", new EarthView.World.Spatial2D.GeoDataset.VectorFeatureClassClassFactory());
	}
}

