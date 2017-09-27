package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial2DServer_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawChartTheme", new com.earthview.world.spatial.display.DrawChartThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawChartThemeProxy", new com.earthview.world.spatial.display.DrawChartThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawImageTheme", new com.earthview.world.spatial.display.DrawImageThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawImageThemeProxy", new com.earthview.world.spatial.display.DrawImageThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawOGCWMSTheme", new com.earthview.world.spatial.display.DrawOGCWMSThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawOGCWMSThemeProxy", new com.earthview.world.spatial.display.DrawOGCWMSThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawOGCWMTSTheme", new com.earthview.world.spatial.display.DrawOGCWMTSThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawOGCWMTSThemeProxy", new com.earthview.world.spatial.display.DrawOGCWMTSThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawServerLayerTheme", new com.earthview.world.spatial.display.DrawServerLayerThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawServerLayerThemeProxy", new com.earthview.world.spatial.display.DrawServerLayerThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory", new com.earthview.world.spatial.display.DrawServerLayerThemeFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawServerLayerThemeFactoryProxy", new com.earthview.world.spatial.display.DrawServerLayerThemeFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry", new com.earthview.world.spatial.display.DrawServerLayerThemeFactoryRegistryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawVectorTheme", new com.earthview.world.spatial.display.DrawVectorThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawVectorThemeProxy", new com.earthview.world.spatial.display.DrawVectorThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawWMSVectorTheme", new com.earthview.world.spatial.display.DrawWMSVectorThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawWMSVectorThemeProxy", new com.earthview.world.spatial.display.DrawWMSVectorThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CEVServerLayerEx", new com.earthview.world.spatial2d.atlas.EvserverlayerexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCEVServerLayerExProxy", new com.earthview.world.spatial2d.atlas.EvserverlayerexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory", new com.earthview.world.spatial2d.atlas.EvserverlayerexfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCEVServerLayerExFactoryProxy", new com.earthview.world.spatial2d.atlas.EvserverlayerexfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::COGCWMSTheme", new com.earthview.world.spatial.theme.OgcwmsthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCOGCWMSThemeProxy", new com.earthview.world.spatial.theme.OgcwmsthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::COGCWMTSTheme", new com.earthview.world.spatial.theme.OgcwmtsthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCOGCWMTSThemeProxy", new com.earthview.world.spatial.theme.OgcwmtsthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CWFSCacheData", new com.earthview.world.spatial2d.geodataset.WfscachedataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCWFSCacheDataProxy", new com.earthview.world.spatial2d.geodataset.WfscachedataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CWFSLayer", new com.earthview.world.spatial2d.atlas.WfslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCWFSLayerProxy", new com.earthview.world.spatial2d.atlas.WfslayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CWFSLayerSelection", new com.earthview.world.spatial2d.atlas.WfslayerselectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CWFSLayerFactory", new com.earthview.world.spatial2d.atlas.WfslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCWFSLayerFactoryProxy", new com.earthview.world.spatial2d.atlas.WfslayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CEVWMSChartTheme", new com.earthview.world.spatial.theme.EvwmschartthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCEVWMSChartThemeProxy", new com.earthview.world.spatial.theme.EvwmschartthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CEVWMSVectorTheme", new com.earthview.world.spatial.theme.EvwmsvectorthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCEVWMSVectorThemeProxy", new com.earthview.world.spatial.theme.EvwmsvectorthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CEVWMTSImageTheme", new com.earthview.world.spatial.theme.EvwmtsimagethemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCEVWMTSImageThemeProxy", new com.earthview.world.spatial.theme.EvwmtsimagethemeClassFactory());
	}
}

