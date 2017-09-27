using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Locker_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::License::CLicense", new EarthView.World.License.LicenseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::License::CWebLicense", new EarthView.World.License.WebLicenseClassFactory());
	}
}

