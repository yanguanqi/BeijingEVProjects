using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_VectorCache_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::MapCache::CMapCacheCreator", new EarthView.World.Spatial.MapCache.MapCacheCreatorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::MapCache::CMapCacheListener", new EarthView.World.Spatial.MapCache.MapCacheListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::MapCache::CMapCacheParam", new EarthView.World.Spatial.MapCache.MapCacheParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorCache::CVectorCacheCreator", new EarthView.World.Spatial.VectorCache.VectorCacheCreatorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorCache::CVectorCacheBasicParam", new EarthView.World.Spatial.VectorCache.VectorCacheBasicParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorCache::CCacheFieldInfo", new EarthView.World.Spatial.VectorCache.CacheFieldInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorCache::CCacheTemplate", new EarthView.World.Spatial.VectorCache.CacheTemplateClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorCache::CVectorCacheProcessMessage", new EarthView.World.Spatial.VectorCache.VectorCacheProcessMessageClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorCache::CCacheProcessInfo", new EarthView.World.Spatial.VectorCache.CacheProcessInfoClassFactory());
	}
}

