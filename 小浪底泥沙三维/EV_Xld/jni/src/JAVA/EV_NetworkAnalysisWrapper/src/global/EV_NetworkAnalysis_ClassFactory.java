package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_NetworkAnalysis_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CNetworkAnalyst", new com.earthview.world.spatial2d.analyst.NetworkAnalystClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CNALocation", new com.earthview.world.spatial2d.analyst.NalocationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer", new com.earthview.world.spatial2d.analyst.NetworkAnalystLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::JCNetworkAnalystLayerProxy", new com.earthview.world.spatial2d.analyst.NetworkAnalystLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CNetworkLayer", new com.earthview.world.spatial2d.atlas.NetworkLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCNetworkLayerProxy", new com.earthview.world.spatial2d.atlas.NetworkLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory", new com.earthview.world.spatial2d.atlas.NetworkLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCNetworkLayerFactoryProxy", new com.earthview.world.spatial2d.atlas.NetworkLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CRouteLayerFactory", new com.earthview.world.spatial2d.atlas.RouteLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCRouteLayerFactoryProxy", new com.earthview.world.spatial2d.atlas.RouteLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteParam", new com.earthview.world.spatial2d.analyst.RouteParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteParamI", new com.earthview.world.spatial2d.analyst.RouteParamIClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteResult", new com.earthview.world.spatial2d.analyst.RouteResultClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteAnalyst", new com.earthview.world.spatial2d.analyst.RouteAnalystClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteLayer", new com.earthview.world.spatial2d.analyst.RouteLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::JCRouteLayerProxy", new com.earthview.world.spatial2d.analyst.RouteLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::CRouteLayerFactory", new com.earthview.world.spatial2d.analyst.RouteLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Analyst::JCRouteLayerFactoryProxy", new com.earthview.world.spatial2d.analyst.RouteLayerFactoryClassFactory());
	}
}

