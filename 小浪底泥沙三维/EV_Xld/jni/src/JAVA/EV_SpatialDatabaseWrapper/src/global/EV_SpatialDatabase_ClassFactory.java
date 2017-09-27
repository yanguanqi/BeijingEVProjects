package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_SpatialDatabase_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CAttributeQuery", new com.earthview.world.spatial.geodataset.AttributeQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatabaseDataSource", new com.earthview.world.spatial.geodataset.DatabaseDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCDatabaseDataSourceProxy", new com.earthview.world.spatial.geodataset.DatabaseDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDataMetaInfo", new com.earthview.world.spatial.geodataset.DataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCDataMetaInfoProxy", new com.earthview.world.spatial.geodataset.DataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDataMetaInfos", new com.earthview.world.spatial.geodataset.DataMetaInfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCDataMetaInfosProxy", new com.earthview.world.spatial.geodataset.DataMetaInfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatasetIterator", new com.earthview.world.spatial.geodataset.DatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCDatasetIteratorProxy", new com.earthview.world.spatial.geodataset.DatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatasetLockManager", new com.earthview.world.spatial.geodataset.DatasetLockManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatasetLockInfo", new com.earthview.world.spatial.geodataset.DatasetLockInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector", new com.earthview.world.spatial.geodataset.DatasetLockInfoVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CField", new com.earthview.world.spatial.geodataset.FieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCFieldProxy", new com.earthview.world.spatial.geodataset.FieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CFieldFactory", new com.earthview.world.spatial.geodataset.FieldFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CFields", new com.earthview.world.spatial.geodataset.FieldsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCFieldsProxy", new com.earthview.world.spatial.geodataset.FieldsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CGeometryField", new com.earthview.world.spatial.geodataset.GeometryFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCGeometryFieldProxy", new com.earthview.world.spatial.geodataset.GeometryFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CPropertySet", new com.earthview.world.spatial.geodataset.PropertySetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCPropertySetProxy", new com.earthview.world.spatial.geodataset.PropertySetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CQueryFilter", new com.earthview.world.spatial.geodataset.QueryFilterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCQueryFilterProxy", new com.earthview.world.spatial.geodataset.QueryFilterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CSqlstandardization", new com.earthview.world.spatial.geodataset.SqlstandardizationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CWorkCommand", new com.earthview.world.spatial.geodataset.WorkCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CWorkCommandManager", new com.earthview.world.spatial.geodataset.WorkCommandManagerClassFactory());
	}
}

