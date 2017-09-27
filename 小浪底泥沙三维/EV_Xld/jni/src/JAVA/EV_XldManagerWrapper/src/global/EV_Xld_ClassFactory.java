package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Xld_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::XldManager::CWaterConservancyManager", new com.earthview.xldmanager.WaterConservancyManagerClassFactory());
	}
}

