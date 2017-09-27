using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial2DServer_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawChartTheme", new EarthView.World.Spatial.Display.DrawChartThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawChartThemeProxy", new EarthView.World.Spatial.Display.DrawChartThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawImageTheme", new EarthView.World.Spatial.Display.DrawImageThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawImageThemeProxy", new EarthView.World.Spatial.Display.DrawImageThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawOGCWMSTheme", new EarthView.World.Spatial.Display.DrawOGCWMSThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawOGCWMSThemeProxy", new EarthView.World.Spatial.Display.DrawOGCWMSThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawOGCWMTSTheme", new EarthView.World.Spatial.Display.DrawOGCWMTSThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawOGCWMTSThemeProxy", new EarthView.World.Spatial.Display.DrawOGCWMTSThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerTheme", new EarthView.World.Spatial.Display.DrawServerLayerThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeProxy", new EarthView.World.Spatial.Display.DrawServerLayerThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory", new EarthView.World.Spatial.Display.DrawServerLayerThemeFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryProxy", new EarthView.World.Spatial.Display.DrawServerLayerThemeFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry", new EarthView.World.Spatial.Display.DrawServerLayerThemeFactoryRegistryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawVectorTheme", new EarthView.World.Spatial.Display.DrawVectorThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawVectorThemeProxy", new EarthView.World.Spatial.Display.DrawVectorThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawWMSVectorTheme", new EarthView.World.Spatial.Display.DrawWMSVectorThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CDrawWMSVectorThemeProxy", new EarthView.World.Spatial.Display.DrawWMSVectorThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CEVServerLayerEx", new EarthView.World.Spatial2D.Atlas.EvserverlayerexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CEVServerLayerExProxy", new EarthView.World.Spatial2D.Atlas.EvserverlayerexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactory", new EarthView.World.Spatial2D.Atlas.EvserverlayerexfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CEVServerLayerExFactoryProxy", new EarthView.World.Spatial2D.Atlas.EvserverlayerexfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::COGCWMSTheme", new EarthView.World.Spatial.Theme.OgcwmsthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::COGCWMSThemeProxy", new EarthView.World.Spatial.Theme.OgcwmsthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::COGCWMTSTheme", new EarthView.World.Spatial.Theme.OgcwmtsthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::COGCWMTSThemeProxy", new EarthView.World.Spatial.Theme.OgcwmtsthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CWFSCacheData", new EarthView.World.Spatial2D.GeoDataset.WfscachedataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CWFSCacheDataProxy", new EarthView.World.Spatial2D.GeoDataset.WfscachedataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSLayer", new EarthView.World.Spatial2D.Atlas.WfslayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSLayerProxy", new EarthView.World.Spatial2D.Atlas.WfslayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSLayerSelection", new EarthView.World.Spatial2D.Atlas.WfslayerselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSLayerFactory", new EarthView.World.Spatial2D.Atlas.WfslayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.WfslayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMSChartTheme", new EarthView.World.Spatial.Theme.EvwmschartthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMSChartThemeProxy", new EarthView.World.Spatial.Theme.EvwmschartthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMSVectorTheme", new EarthView.World.Spatial.Theme.EvwmsvectorthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMSVectorThemeProxy", new EarthView.World.Spatial.Theme.EvwmsvectorthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMTSImageTheme", new EarthView.World.Spatial.Theme.EvwmtsimagethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CEVWMTSImageThemeProxy", new EarthView.World.Spatial.Theme.EvwmtsimagethemeClassFactory());
	}
}

