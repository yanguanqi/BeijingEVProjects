using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_DataAnalyst_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoCorretion::CRectification", new EarthView.World.Spatial2D.GeoCorretion.RectificationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper", new EarthView.World.Spatial2D.GeoCorretion.RectifyResampleWarperClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator", new EarthView.World.Spatial2D.GeoCorretion.ResamplerOpratorClassFactory());
	}
}

