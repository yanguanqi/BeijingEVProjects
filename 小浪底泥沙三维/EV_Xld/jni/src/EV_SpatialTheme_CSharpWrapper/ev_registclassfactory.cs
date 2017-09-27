using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_SpatialTheme_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CCADUniqueEntityValueTheme", new EarthView.World.Spatial.Theme.CaduniqueentityvaluethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CCADUniqueEntityValueThemeProxy", new EarthView.World.Spatial.Theme.CaduniqueentityvaluethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CRangeTheme", new EarthView.World.Spatial.Theme.RangeThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CRangeThemeProxy", new EarthView.World.Spatial.Theme.RangeThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CSimpleTheme", new EarthView.World.Spatial.Theme.SimpleThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CSimpleThemeProxy", new EarthView.World.Spatial.Theme.SimpleThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CStatistics3DTheme", new EarthView.World.Spatial.Theme.Statistics3DThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CStatistics3DThemeProxy", new EarthView.World.Spatial.Theme.Statistics3DThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CStatisticsTheme", new EarthView.World.Spatial.Theme.StatisticsThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CStatisticsThemeProxy", new EarthView.World.Spatial.Theme.StatisticsThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CThemeFactory", new EarthView.World.Spatial.Theme.ThemeFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CThemeFactory2", new EarthView.World.Spatial.Theme.ThemeFactory2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CThemeFactory2Proxy", new EarthView.World.Spatial.Theme.ThemeFactory2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CThemeFactoryRegistry", new EarthView.World.Spatial.Theme.ThemeFactoryRegistryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme", new EarthView.World.Spatial.Theme.UniqueValueMatchSymbolThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolThemeProxy", new EarthView.World.Spatial.Theme.UniqueValueMatchSymbolThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CUniqueValueTheme", new EarthView.World.Spatial.Theme.UniqueValueThemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::CUniqueValueThemeProxy", new EarthView.World.Spatial.Theme.UniqueValueThemeClassFactory());
	}
}

