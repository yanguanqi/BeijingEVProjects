package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_VectorCache_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MapCache::CMapCacheCreator", new com.earthview.world.spatial.mapcache.MapCacheCreatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MapCache::CMapCacheListener", new com.earthview.world.spatial.mapcache.MapCacheListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MapCache::CMapCacheParam", new com.earthview.world.spatial.mapcache.MapCacheParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CVectorCacheCreator", new com.earthview.world.spatial.vectorcache.VectorCacheCreatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam", new com.earthview.world.spatial.vectorcache.VectorCacheBasicParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CCacheFieldInfo", new com.earthview.world.spatial.vectorcache.CacheFieldInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CCacheTemplate", new com.earthview.world.spatial.vectorcache.CacheTemplateClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage", new com.earthview.world.spatial.vectorcache.VectorCacheProcessMessageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorCache::CCacheProcessInfo", new com.earthview.world.spatial.vectorcache.CacheProcessInfoClassFactory());
	}
}

