package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial2DDisplay_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawCADUniqueEntityValueTheme", new com.earthview.world.spatial2d.renderer.DrawCADUniqueEntityValueThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawCADUniqueEntityValueThemeProxy", new com.earthview.world.spatial2d.renderer.DrawCADUniqueEntityValueThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawRangeTheme", new com.earthview.world.spatial2d.renderer.DrawRangeThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawRangeThemeProxy", new com.earthview.world.spatial2d.renderer.DrawRangeThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawSimpleTheme", new com.earthview.world.spatial2d.renderer.DrawSimpleThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawSimpleThemeProxy", new com.earthview.world.spatial2d.renderer.DrawSimpleThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawStatisticsTheme", new com.earthview.world.spatial2d.renderer.DrawStatisticsThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawStatisticsThemeProxy", new com.earthview.world.spatial2d.renderer.DrawStatisticsThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawTheme", new com.earthview.world.spatial2d.renderer.DrawThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawThemeProxy", new com.earthview.world.spatial2d.renderer.DrawThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactory", new com.earthview.world.spatial2d.renderer.DrawThemeFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawThemeFactoryProxy", new com.earthview.world.spatial2d.renderer.DrawThemeFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry", new com.earthview.world.spatial2d.renderer.DrawThemeFactoryRegistryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawUniqueValueMatchSymbolTheme", new com.earthview.world.spatial2d.renderer.DrawUniqueValueMatchSymbolThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawUniqueValueMatchSymbolThemeProxy", new com.earthview.world.spatial2d.renderer.DrawUniqueValueMatchSymbolThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawUniqueValueTheme", new com.earthview.world.spatial2d.renderer.DrawUniqueValueThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawUniqueValueThemeProxy", new com.earthview.world.spatial2d.renderer.DrawUniqueValueThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CFeatureRenderer", new com.earthview.world.spatial2d.renderer.FeatureRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCFeatureRendererProxy", new com.earthview.world.spatial2d.renderer.FeatureRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CLabelRenderer", new com.earthview.world.spatial2d.renderer.LabelRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCLabelRendererProxy", new com.earthview.world.spatial2d.renderer.LabelRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CRasterRenderer", new com.earthview.world.spatial2d.renderer.RasterRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCRasterRendererProxy", new com.earthview.world.spatial2d.renderer.RasterRendererClassFactory());
	}
}

