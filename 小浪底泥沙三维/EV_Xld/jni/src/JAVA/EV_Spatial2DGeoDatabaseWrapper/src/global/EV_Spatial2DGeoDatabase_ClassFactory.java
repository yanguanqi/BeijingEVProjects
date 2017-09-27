package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial2DGeoDatabase_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSource", new com.earthview.world.spatial2d.geodataset.DatabaseVectorSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCDatabaseVectorSourceProxy", new com.earthview.world.spatial2d.geodataset.DatabaseVectorSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CDatabaseVectorSourceFactory", new com.earthview.world.spatial2d.geodataset.DatabaseVectorSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCDatabaseVectorSourceFactoryProxy", new com.earthview.world.spatial2d.geodataset.DatabaseVectorSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CVectorFeature", new com.earthview.world.spatial2d.geodataset.VectorFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCVectorFeatureProxy", new com.earthview.world.spatial2d.geodataset.VectorFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CFeatureIterator", new com.earthview.world.spatial2d.geodataset.FeatureIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCFeatureIteratorProxy", new com.earthview.world.spatial2d.geodataset.FeatureIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CFeatureSelection", new com.earthview.world.spatial2d.geodataset.FeatureSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCFeatureSelectionProxy", new com.earthview.world.spatial2d.geodataset.FeatureSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::ElevationSetting", new com.earthview.world.spatial2d.geodataset.ElevationSettingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CNAAttributeSetting", new com.earthview.world.spatial2d.geodataset.NaattributesettingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CNAAttribute", new com.earthview.world.spatial2d.geodataset.NaattributeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CNetworkDatasetBuilder", new com.earthview.world.spatial2d.geodataset.NetworkDatasetBuilderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CNetworkDataset", new com.earthview.world.spatial2d.geodataset.NetworkDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCNetworkDatasetProxy", new com.earthview.world.spatial2d.geodataset.NetworkDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CRTreeSpatialIndexParam", new com.earthview.world.spatial2d.geodataset.RtreespatialindexparamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCRTreeSpatialIndexParamProxy", new com.earthview.world.spatial2d.geodataset.RtreespatialindexparamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CSpatialGridIndexParam", new com.earthview.world.spatial2d.geodataset.SpatialGridIndexParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCSpatialGridIndexParamProxy", new com.earthview.world.spatial2d.geodataset.SpatialGridIndexParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CSpatialIndexParamFactory", new com.earthview.world.spatial2d.geodataset.SpatialIndexParamFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCSpatialIndexParamFactoryProxy", new com.earthview.world.spatial2d.geodataset.SpatialIndexParamFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass", new com.earthview.world.spatial2d.geodataset.VectorFeatureClassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCVectorFeatureClassProxy", new com.earthview.world.spatial2d.geodataset.VectorFeatureClassClassFactory());
	}
}

