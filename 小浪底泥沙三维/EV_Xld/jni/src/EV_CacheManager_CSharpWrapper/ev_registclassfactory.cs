using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_CacheManager_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CacheManager", new EarthView.World.Spatial.CacheManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CacheStrategy", new EarthView.World.Spatial.CacheStrategyClassFactory());
	}
}

