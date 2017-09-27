using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_SpatialDisplay_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CGeometryRenderer", new EarthView.World.Spatial.Display.GeometryRendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CRenderInformation", new EarthView.World.Spatial2D.Atlas.RenderInformationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CRenderInformationProxy", new EarthView.World.Spatial2D.Atlas.RenderInformationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CLabelEnvironment", new EarthView.World.Spatial.Display.LabelEnvironmentClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialDisplay", new EarthView.World.Spatial.Display.SpatialDisplayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialDisplayProxy", new EarthView.World.Spatial.Display.SpatialDisplayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialMatrix", new EarthView.World.Spatial.Display.SpatialMatrixClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialRect", new EarthView.World.Spatial.Display.SpatialRectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CCondensedMatrix3", new EarthView.World.Spatial.Display.CondensedMatrix3ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialTransformer", new EarthView.World.Spatial.Display.SpatialTransformerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialTransformerProxy", new EarthView.World.Spatial.Display.SpatialTransformerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSpatialUnitConverter", new EarthView.World.Spatial.Display.SpatialUnitConverterClassFactory());
	}
}

