using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Chart_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartQueryFilter", new EarthView.World.Spatial.GeoDataset.ChartQueryFilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartQueryFilterProxy", new EarthView.World.Spatial.GeoDataset.ChartQueryFilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartFeatureSelection", new EarthView.World.Spatial.GeoDataset.ChartFeatureSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartFeatureSelectionProxy", new EarthView.World.Spatial.GeoDataset.ChartFeatureSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartFeatureIterator", new EarthView.World.Spatial.GeoDataset.ChartFeatureIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartFeatureIteratorProxy", new EarthView.World.Spatial.GeoDataset.ChartFeatureIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo", new EarthView.World.Spatial.GeoDataset.ChartDatasetHeaderInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataset", new EarthView.World.Spatial.GeoDataset.ChartDatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDatasetProxy", new EarthView.World.Spatial.GeoDataset.ChartDatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataSource", new EarthView.World.Spatial.GeoDataset.ChartDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataSourceProxy", new EarthView.World.Spatial.GeoDataset.ChartDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDatasetIterator", new EarthView.World.Spatial.GeoDataset.ChartDatasetIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDatasetIteratorProxy", new EarthView.World.Spatial.GeoDataset.ChartDatasetIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfo", new EarthView.World.Spatial.GeoDataset.ChartDataMetaInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfoProxy", new EarthView.World.Spatial.GeoDataset.ChartDataMetaInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfos", new EarthView.World.Spatial.GeoDataset.ChartDataMetaInfosClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataMetaInfosProxy", new EarthView.World.Spatial.GeoDataset.ChartDataMetaInfosClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataSourceFactory", new EarthView.World.Spatial.GeoDataset.ChartDataSourceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartDataSourceFactoryProxy", new EarthView.World.Spatial.GeoDataset.ChartDataSourceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartFeature", new EarthView.World.Spatial.GeoDataset.ChartFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartFeatureProxy", new EarthView.World.Spatial.GeoDataset.ChartFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::CChartLayerSelection", new EarthView.World.Spatial.Atlas.ChartLayerSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::CChartLayerSelectionProxy", new EarthView.World.Spatial.Atlas.ChartLayerSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::NHChartClassControl", new EarthView.World.Spatial.Atlas.NhchartclasscontrolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::CChartLayer", new EarthView.World.Spatial.Atlas.ChartLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::CChartLayerProxy", new EarthView.World.Spatial.Atlas.ChartLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::CChartLayerFactory", new EarthView.World.Spatial.Atlas.ChartLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::CChartLayerFactoryProxy", new EarthView.World.Spatial.Atlas.ChartLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CChartOption", new EarthView.World.Spatial.Display.ChartOptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CChartOptionProxy", new EarthView.World.Spatial.Display.ChartOptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartClassInfo", new EarthView.World.Spatial.GeoDataset.ChartClassInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CChartAttributeInfo", new EarthView.World.Spatial.GeoDataset.ChartAttributeInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CS57Info", new EarthView.World.Spatial.GeoDataset.S57InfoClassFactory());
	}
}

