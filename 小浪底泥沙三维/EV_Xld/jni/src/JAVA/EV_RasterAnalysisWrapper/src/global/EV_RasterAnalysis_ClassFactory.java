package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_RasterAnalysis_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterDataAnalysis", new com.earthview.world.spatial2d.analyst.RasterDataAnalysisClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CImageCut", new com.earthview.world.spatial2d.analyst.ImageCutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterMosaic", new com.earthview.world.spatial2d.analyst.RasterMosaicClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic", new com.earthview.world.spatial2d.analyst.RasterTileMosaicClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener", new com.earthview.world.spatial2d.analyst.RasterTileMosaic.TileMosaicListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::JCTileMosaicListenerProxy", new com.earthview.world.spatial2d.analyst.RasterTileMosaic.TileMosaicListenerClassFactory());
	}
}

