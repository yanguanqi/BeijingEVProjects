package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_RasterDataset_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterDataset", new com.earthview.world.spatial2d.raster.DbrasterdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCDBRasterDatasetProxy", new com.earthview.world.spatial2d.raster.DbrasterdatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterBand", new com.earthview.world.spatial2d.raster.DbrasterbandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterDataSource", new com.earthview.world.spatial2d.raster.DbrasterdatasourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCDBRasterDataSourceProxy", new com.earthview.world.spatial2d.raster.DbrasterdatasourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterDataSourceFactory", new com.earthview.world.spatial2d.raster.DbrasterdatasourcefactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCDBRasterDataSourceFactoryProxy", new com.earthview.world.spatial2d.raster.DbrasterdatasourcefactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDBRasterLayer", new com.earthview.world.spatial2d.raster.DbrasterlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCDBRasterLayerProxy", new com.earthview.world.spatial2d.raster.DbrasterlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::DBRasterLayerFactory", new com.earthview.world.spatial2d.raster.DbrasterlayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JDBRasterLayerFactoryProxy", new com.earthview.world.spatial2d.raster.DbrasterlayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterFileOperator", new com.earthview.world.spatial2d.raster.RasterFileOperatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterAttributeTable", new com.earthview.world.spatial2d.raster.RasterAttributeTableClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterAttributeTableProxy", new com.earthview.world.spatial2d.raster.RasterAttributeTableClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterBlock", new com.earthview.world.spatial2d.raster.RasterBlockClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterBlockProxy", new com.earthview.world.spatial2d.raster.RasterBlockClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterClassificationRenderer", new com.earthview.world.spatial2d.raster.RasterClassificationRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterClassificationRendererProxy", new com.earthview.world.spatial2d.raster.RasterClassificationRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterColorMapRenderer", new com.earthview.world.spatial2d.raster.RasterColorMapRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterColorMapRendererProxy", new com.earthview.world.spatial2d.raster.RasterColorMapRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterBand", new com.earthview.world.spatial2d.raster.RasterBandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterBandProxy", new com.earthview.world.spatial2d.raster.RasterBandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterDataSet", new com.earthview.world.spatial2d.raster.RasterDataSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterDataSetProxy", new com.earthview.world.spatial2d.raster.RasterDataSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterDataSource", new com.earthview.world.spatial2d.raster.RasterDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterDataSourceProxy", new com.earthview.world.spatial2d.raster.RasterDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory", new com.earthview.world.spatial2d.raster.RasterDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterDataSourceFactoryProxy", new com.earthview.world.spatial2d.raster.RasterDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterLayer", new com.earthview.world.spatial2d.raster.RasterLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterLayerProxy", new com.earthview.world.spatial2d.raster.RasterLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::RasterLayerFactory", new com.earthview.world.spatial2d.raster.RasterLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JRasterLayerFactoryProxy", new com.earthview.world.spatial2d.raster.RasterLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterHistogram", new com.earthview.world.spatial2d.raster.RasterHistogramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterHistogramProxy", new com.earthview.world.spatial2d.raster.RasterHistogramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CBandHistogram", new com.earthview.world.spatial2d.raster.BandHistogramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCBandHistogramProxy", new com.earthview.world.spatial2d.raster.BandHistogramClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CBandStatisticsInfo", new com.earthview.world.spatial2d.raster.BandStatisticsInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCBandStatisticsInfoProxy", new com.earthview.world.spatial2d.raster.BandStatisticsInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CDataTime", new com.earthview.world.spatial2d.raster.DataTimeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CSensorInfo", new com.earthview.world.spatial2d.raster.SensorInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCSensorInfoProxy", new com.earthview.world.spatial2d.raster.SensorInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterRendererFactory", new com.earthview.world.spatial2d.raster.RasterRendererFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterRGBRenderer", new com.earthview.world.spatial2d.raster.RasterRGBRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterRGBRendererProxy", new com.earthview.world.spatial2d.raster.RasterRGBRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterStretchRenderer", new com.earthview.world.spatial2d.raster.RasterStretchRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterStretchRendererProxy", new com.earthview.world.spatial2d.raster.RasterStretchRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CRasterUniqueValueRenderer", new com.earthview.world.spatial2d.raster.RasterUniqueValueRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::JCRasterUniqueValueRendererProxy", new com.earthview.world.spatial2d.raster.RasterUniqueValueRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Raster::CReprojectAlg", new com.earthview.world.spatial2d.raster.ReprojectAlgClassFactory());
	}
}

