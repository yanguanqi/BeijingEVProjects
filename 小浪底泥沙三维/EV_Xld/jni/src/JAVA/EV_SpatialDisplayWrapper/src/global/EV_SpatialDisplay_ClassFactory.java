package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_SpatialDisplay_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CGeometryRenderer", new com.earthview.world.spatial.display.GeometryRendererClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CRenderInformation", new com.earthview.world.spatial2d.atlas.RenderInformationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCRenderInformationProxy", new com.earthview.world.spatial2d.atlas.RenderInformationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CLabelEnvironment", new com.earthview.world.spatial.display.LabelEnvironmentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialDisplay", new com.earthview.world.spatial.display.SpatialDisplayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSpatialDisplayProxy", new com.earthview.world.spatial.display.SpatialDisplayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialMatrix", new com.earthview.world.spatial.display.SpatialMatrixClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialRect", new com.earthview.world.spatial.display.SpatialRectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CCondensedMatrix3", new com.earthview.world.spatial.display.CondensedMatrix3ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialTransformer", new com.earthview.world.spatial.display.SpatialTransformerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSpatialTransformerProxy", new com.earthview.world.spatial.display.SpatialTransformerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSpatialUnitConverter", new com.earthview.world.spatial.display.SpatialUnitConverterClassFactory());
	}
}

