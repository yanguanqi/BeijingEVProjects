using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_RasterAnalysis_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic", new EarthView.World.Spatial2D.Analyst.RasterTileMosaicClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListener", new EarthView.World.Spatial2D.Analyst.RasterTileMosaic.TileMosaicListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRasterTileMosaic::CTileMosaicListenerProxy", new EarthView.World.Spatial2D.Analyst.RasterTileMosaic.TileMosaicListenerClassFactory());
	}
}

