package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_SpatialTheme_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CCADUniqueEntityValueTheme", new com.earthview.world.spatial.theme.CaduniqueentityvaluethemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCCADUniqueEntityValueThemeProxy", new com.earthview.world.spatial.theme.CaduniqueentityvaluethemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CRangeTheme", new com.earthview.world.spatial.theme.RangeThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCRangeThemeProxy", new com.earthview.world.spatial.theme.RangeThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CSimpleTheme", new com.earthview.world.spatial.theme.SimpleThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCSimpleThemeProxy", new com.earthview.world.spatial.theme.SimpleThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CStatistics3DTheme", new com.earthview.world.spatial.theme.Statistics3DThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCStatistics3DThemeProxy", new com.earthview.world.spatial.theme.Statistics3DThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CStatisticsTheme", new com.earthview.world.spatial.theme.StatisticsThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCStatisticsThemeProxy", new com.earthview.world.spatial.theme.StatisticsThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CThemeFactory", new com.earthview.world.spatial.theme.ThemeFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CThemeFactory2", new com.earthview.world.spatial.theme.ThemeFactory2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCThemeFactory2Proxy", new com.earthview.world.spatial.theme.ThemeFactory2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CThemeFactoryRegistry", new com.earthview.world.spatial.theme.ThemeFactoryRegistryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CUniqueValueMatchSymbolTheme", new com.earthview.world.spatial.theme.UniqueValueMatchSymbolThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCUniqueValueMatchSymbolThemeProxy", new com.earthview.world.spatial.theme.UniqueValueMatchSymbolThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CUniqueValueTheme", new com.earthview.world.spatial.theme.UniqueValueThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCUniqueValueThemeProxy", new com.earthview.world.spatial.theme.UniqueValueThemeClassFactory());
	}
}

