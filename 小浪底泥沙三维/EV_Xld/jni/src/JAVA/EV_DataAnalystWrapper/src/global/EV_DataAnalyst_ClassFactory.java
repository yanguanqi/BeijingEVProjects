package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_DataAnalyst_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoCorretion::CRectification", new com.earthview.world.spatial2d.geocorretion.RectificationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoCorretion::RectifyResampleWarper", new com.earthview.world.spatial2d.geocorretion.RectifyResampleWarperClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoCorretion::ResamplerOprator", new com.earthview.world.spatial2d.geocorretion.ResamplerOpratorClassFactory());
	}
}

