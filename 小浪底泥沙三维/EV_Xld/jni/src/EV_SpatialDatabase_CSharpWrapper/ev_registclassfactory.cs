using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_SpatialDatabase_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CAttributeQuery", new EarthView.World.Spatial.GeoDataset.AttributeQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDatabaseDataSource", new EarthView.World.Spatial.GeoDataset.DatabaseDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDatabaseDataSourceProxy", new EarthView.World.Spatial.GeoDataset.DatabaseDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDataMetaInfo", new EarthView.World.Spatial.GeoDataset.DataMetaInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDataMetaInfoProxy", new EarthView.World.Spatial.GeoDataset.DataMetaInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDataMetaInfos", new EarthView.World.Spatial.GeoDataset.DataMetaInfosClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDataMetaInfosProxy", new EarthView.World.Spatial.GeoDataset.DataMetaInfosClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDatasetIterator", new EarthView.World.Spatial.GeoDataset.DatasetIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDatasetIteratorProxy", new EarthView.World.Spatial.GeoDataset.DatasetIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDatasetLockManager", new EarthView.World.Spatial.GeoDataset.DatasetLockManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDatasetLockInfo", new EarthView.World.Spatial.GeoDataset.DatasetLockInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector", new EarthView.World.Spatial.GeoDataset.DatasetLockInfoVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CField", new EarthView.World.Spatial.GeoDataset.FieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CFieldProxy", new EarthView.World.Spatial.GeoDataset.FieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CFieldFactory", new EarthView.World.Spatial.GeoDataset.FieldFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CFields", new EarthView.World.Spatial.GeoDataset.FieldsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CFieldsProxy", new EarthView.World.Spatial.GeoDataset.FieldsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CGeometryField", new EarthView.World.Spatial.GeoDataset.GeometryFieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CGeometryFieldProxy", new EarthView.World.Spatial.GeoDataset.GeometryFieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CPropertySet", new EarthView.World.Spatial.GeoDataset.PropertySetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CPropertySetProxy", new EarthView.World.Spatial.GeoDataset.PropertySetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CQueryFilter", new EarthView.World.Spatial.GeoDataset.QueryFilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CQueryFilterProxy", new EarthView.World.Spatial.GeoDataset.QueryFilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CSqlstandardization", new EarthView.World.Spatial.GeoDataset.SqlstandardizationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CWorkCommand", new EarthView.World.Spatial.GeoDataset.WorkCommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CWorkCommandManager", new EarthView.World.Spatial.GeoDataset.WorkCommandManagerClassFactory());
	}
}

