using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial3DCalculator_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Utility::CSpatialCalculator", new EarthView.World.Spatial3D.Utility.SpatialCalculatorClassFactory());
	}
}

