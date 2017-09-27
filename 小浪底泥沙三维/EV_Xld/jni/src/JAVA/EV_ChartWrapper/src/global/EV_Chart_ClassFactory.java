package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Chart_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartQueryFilter", new com.earthview.world.spatial.geodataset.ChartQueryFilterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartQueryFilterProxy", new com.earthview.world.spatial.geodataset.ChartQueryFilterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartFeatureSelection", new com.earthview.world.spatial.geodataset.ChartFeatureSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartFeatureSelectionProxy", new com.earthview.world.spatial.geodataset.ChartFeatureSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartFeatureIterator", new com.earthview.world.spatial.geodataset.ChartFeatureIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartFeatureIteratorProxy", new com.earthview.world.spatial.geodataset.ChartFeatureIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo", new com.earthview.world.spatial.geodataset.ChartDatasetHeaderInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDataset", new com.earthview.world.spatial.geodataset.ChartDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDatasetProxy", new com.earthview.world.spatial.geodataset.ChartDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDataSource", new com.earthview.world.spatial.geodataset.ChartDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDataSourceProxy", new com.earthview.world.spatial.geodataset.ChartDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDatasetIterator", new com.earthview.world.spatial.geodataset.ChartDatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDatasetIteratorProxy", new com.earthview.world.spatial.geodataset.ChartDatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo", new com.earthview.world.spatial.geodataset.ChartDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDataMetaInfoProxy", new com.earthview.world.spatial.geodataset.ChartDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos", new com.earthview.world.spatial.geodataset.ChartDataMetaInfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDataMetaInfosProxy", new com.earthview.world.spatial.geodataset.ChartDataMetaInfosClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartDataSourceFactory", new com.earthview.world.spatial.geodataset.ChartDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartDataSourceFactoryProxy", new com.earthview.world.spatial.geodataset.ChartDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartFeature", new com.earthview.world.spatial.geodataset.ChartFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::JCChartFeatureProxy", new com.earthview.world.spatial.geodataset.ChartFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::CChartLayerSelection", new com.earthview.world.spatial.atlas.ChartLayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JCChartLayerSelectionProxy", new com.earthview.world.spatial.atlas.ChartLayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::NHChartClassControl", new com.earthview.world.spatial.atlas.NhchartclasscontrolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::CChartLayer", new com.earthview.world.spatial.atlas.ChartLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JCChartLayerProxy", new com.earthview.world.spatial.atlas.ChartLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::CChartLayerFactory", new com.earthview.world.spatial.atlas.ChartLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JCChartLayerFactoryProxy", new com.earthview.world.spatial.atlas.ChartLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CChartOption", new com.earthview.world.spatial.display.ChartOptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCChartOptionProxy", new com.earthview.world.spatial.display.ChartOptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartClassInfo", new com.earthview.world.spatial.geodataset.ChartClassInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CChartAttributeInfo", new com.earthview.world.spatial.geodataset.ChartAttributeInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::GeoDataset::CS57Info", new com.earthview.world.spatial.geodataset.S57InfoClassFactory());
	}
}

