using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_RasterDataset_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDataset", new EarthView.World.Spatial2D.Raster.DbrasterdatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDatasetProxy", new EarthView.World.Spatial2D.Raster.DbrasterdatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterBand", new EarthView.World.Spatial2D.Raster.DbrasterbandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDataSource", new EarthView.World.Spatial2D.Raster.DbrasterdatasourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDataSourceProxy", new EarthView.World.Spatial2D.Raster.DbrasterdatasourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDataSourceFactory", new EarthView.World.Spatial2D.Raster.DbrasterdatasourcefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterDataSourceFactoryProxy", new EarthView.World.Spatial2D.Raster.DbrasterdatasourcefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterLayer", new EarthView.World.Spatial2D.Raster.DbrasterlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDBRasterLayerProxy", new EarthView.World.Spatial2D.Raster.DbrasterlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::DBRasterLayerFactory", new EarthView.World.Spatial2D.Raster.DbrasterlayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::DBRasterLayerFactoryProxy", new EarthView.World.Spatial2D.Raster.DbrasterlayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterFileOperator", new EarthView.World.Spatial2D.Raster.RasterFileOperatorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterAttributeTable", new EarthView.World.Spatial2D.Raster.RasterAttributeTableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterAttributeTableProxy", new EarthView.World.Spatial2D.Raster.RasterAttributeTableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterBlock", new EarthView.World.Spatial2D.Raster.RasterBlockClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterBlockProxy", new EarthView.World.Spatial2D.Raster.RasterBlockClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer", new EarthView.World.Spatial2D.Raster.RasterClassificationRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterClassificationRendererProxy", new EarthView.World.Spatial2D.Raster.RasterClassificationRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterColorMapRenderer", new EarthView.World.Spatial2D.Raster.RasterColorMapRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterColorMapRendererProxy", new EarthView.World.Spatial2D.Raster.RasterColorMapRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterBand", new EarthView.World.Spatial2D.Raster.RasterBandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterBandProxy", new EarthView.World.Spatial2D.Raster.RasterBandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterDataSet", new EarthView.World.Spatial2D.Raster.RasterDataSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterDataSetProxy", new EarthView.World.Spatial2D.Raster.RasterDataSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterDataSource", new EarthView.World.Spatial2D.Raster.RasterDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterDataSourceProxy", new EarthView.World.Spatial2D.Raster.RasterDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory", new EarthView.World.Spatial2D.Raster.RasterDataSourceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterDataSourceFactoryProxy", new EarthView.World.Spatial2D.Raster.RasterDataSourceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterLayer", new EarthView.World.Spatial2D.Raster.RasterLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterLayerProxy", new EarthView.World.Spatial2D.Raster.RasterLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::RasterLayerFactory", new EarthView.World.Spatial2D.Raster.RasterLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::RasterLayerFactoryProxy", new EarthView.World.Spatial2D.Raster.RasterLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterHistogram", new EarthView.World.Spatial2D.Raster.RasterHistogramClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterHistogramProxy", new EarthView.World.Spatial2D.Raster.RasterHistogramClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CBandHistogram", new EarthView.World.Spatial2D.Raster.BandHistogramClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CBandHistogramProxy", new EarthView.World.Spatial2D.Raster.BandHistogramClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CBandStatisticsInfo", new EarthView.World.Spatial2D.Raster.BandStatisticsInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CBandStatisticsInfoProxy", new EarthView.World.Spatial2D.Raster.BandStatisticsInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CDataTime", new EarthView.World.Spatial2D.Raster.DataTimeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CSensorInfo", new EarthView.World.Spatial2D.Raster.SensorInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CSensorInfoProxy", new EarthView.World.Spatial2D.Raster.SensorInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterRendererFactory", new EarthView.World.Spatial2D.Raster.RasterRendererFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterRGBRenderer", new EarthView.World.Spatial2D.Raster.RasterRGBRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterRGBRendererProxy", new EarthView.World.Spatial2D.Raster.RasterRGBRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterStretchRenderer", new EarthView.World.Spatial2D.Raster.RasterStretchRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterStretchRendererProxy", new EarthView.World.Spatial2D.Raster.RasterStretchRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterUniqueValueRenderer", new EarthView.World.Spatial2D.Raster.RasterUniqueValueRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CRasterUniqueValueRendererProxy", new EarthView.World.Spatial2D.Raster.RasterUniqueValueRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CReprojectAlg", new EarthView.World.Spatial2D.Raster.ReprojectAlgClassFactory());
	}
}

