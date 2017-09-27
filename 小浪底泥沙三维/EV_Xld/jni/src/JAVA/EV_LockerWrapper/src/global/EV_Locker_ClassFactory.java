package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Locker_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::License::CLicense", new com.earthview.world.license.LicenseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::License::CWebLicense", new com.earthview.world.license.WebLicenseClassFactory());
	}
}

