using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial2DDisplay_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme", new EarthView.World.Spatial2D.Renderer.DrawCADUniqueEntityValueThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueThemeProxy", new EarthView.World.Spatial2D.Renderer.DrawCADUniqueEntityValueThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawRangeTheme", new EarthView.World.Spatial2D.Renderer.DrawRangeThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawRangeThemeProxy", new EarthView.World.Spatial2D.Renderer.DrawRangeThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawSimpleTheme", new EarthView.World.Spatial2D.Renderer.DrawSimpleThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawSimpleThemeProxy", new EarthView.World.Spatial2D.Renderer.DrawSimpleThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme", new EarthView.World.Spatial2D.Renderer.DrawStatisticsThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawStatisticsThemeProxy", new EarthView.World.Spatial2D.Renderer.DrawStatisticsThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawTheme", new EarthView.World.Spatial2D.Renderer.DrawThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeProxy", new EarthView.World.Spatial2D.Renderer.DrawThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactory", new EarthView.World.Spatial2D.Renderer.DrawThemeFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryProxy", new EarthView.World.Spatial2D.Renderer.DrawThemeFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry", new EarthView.World.Spatial2D.Renderer.DrawThemeFactoryRegistryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawUniqueValueMatchSymbolTheme", new EarthView.World.Spatial2D.Renderer.DrawUniqueValueMatchSymbolThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawUniqueValueMatchSymbolThemeProxy", new EarthView.World.Spatial2D.Renderer.DrawUniqueValueMatchSymbolThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawUniqueValueTheme", new EarthView.World.Spatial2D.Renderer.DrawUniqueValueThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CDrawUniqueValueThemeProxy", new EarthView.World.Spatial2D.Renderer.DrawUniqueValueThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CFeatureRenderer", new EarthView.World.Spatial2D.Renderer.FeatureRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CFeatureRendererProxy", new EarthView.World.Spatial2D.Renderer.FeatureRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CLabelRenderer", new EarthView.World.Spatial2D.Renderer.LabelRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CLabelRendererProxy", new EarthView.World.Spatial2D.Renderer.LabelRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CRasterRenderer", new EarthView.World.Spatial2D.Renderer.RasterRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Renderer::CRasterRendererProxy", new EarthView.World.Spatial2D.Renderer.RasterRendererClassFactory());
	}
}

