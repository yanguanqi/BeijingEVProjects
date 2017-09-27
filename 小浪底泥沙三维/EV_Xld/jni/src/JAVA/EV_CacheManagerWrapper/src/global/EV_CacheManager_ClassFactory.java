package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_CacheManager_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CacheManager", new com.earthview.world.spatial.CacheManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CacheStrategy", new com.earthview.world.spatial.CacheStrategyClassFactory());
	}
}

