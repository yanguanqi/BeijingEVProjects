package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial3DCalculator_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Utility::CSpatialCalculator", new com.earthview.world.spatial3d.utility.SpatialCalculatorClassFactory());
	}
}

