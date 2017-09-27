using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_NetworkAnalysis_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CNetworkAnalyst", new EarthView.World.Spatial2D.Analyst.NetworkAnalystClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CNALocation", new EarthView.World.Spatial2D.Analyst.NalocationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer", new EarthView.World.Spatial2D.Analyst.NetworkAnalystLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayerProxy", new EarthView.World.Spatial2D.Analyst.NetworkAnalystLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CNetworkLayer", new EarthView.World.Spatial2D.Atlas.NetworkLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CNetworkLayerProxy", new EarthView.World.Spatial2D.Atlas.NetworkLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory", new EarthView.World.Spatial2D.Atlas.NetworkLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CNetworkLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.NetworkLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CRouteLayerFactory", new EarthView.World.Spatial2D.Atlas.RouteLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CRouteLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.RouteLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteParam", new EarthView.World.Spatial2D.Analyst.RouteParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteParamI", new EarthView.World.Spatial2D.Analyst.RouteParamIClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteResult", new EarthView.World.Spatial2D.Analyst.RouteResultClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteAnalyst", new EarthView.World.Spatial2D.Analyst.RouteAnalystClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteLayer", new EarthView.World.Spatial2D.Analyst.RouteLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteLayerProxy", new EarthView.World.Spatial2D.Analyst.RouteLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteLayerFactory", new EarthView.World.Spatial2D.Analyst.RouteLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Analyst::CRouteLayerFactoryProxy", new EarthView.World.Spatial2D.Analyst.RouteLayerFactoryClassFactory());
	}
}

