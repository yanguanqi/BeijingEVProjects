using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Xld_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::XldManager::CWaterConservancyManager", new EarthView.XldManager.WaterConservancyManagerClassFactory());
	}
}

