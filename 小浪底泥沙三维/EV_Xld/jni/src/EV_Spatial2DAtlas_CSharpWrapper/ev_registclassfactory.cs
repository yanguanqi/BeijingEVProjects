using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial2DAtlas_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CBaseGroupLayer", new EarthView.World.Spatial2D.Atlas.BaseGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CBaseGroupLayerProxy", new EarthView.World.Spatial2D.Atlas.BaseGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory", new EarthView.World.Spatial2D.Atlas.BaseGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.BaseGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CLayerLabelProperty", new EarthView.World.Spatial2D.Atlas.LayerLabelPropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CLayerLabelPropertyProxy", new EarthView.World.Spatial2D.Atlas.LayerLabelPropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CDataLayer", new EarthView.World.Spatial2D.Atlas.DataLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CDataLayerProxy", new EarthView.World.Spatial2D.Atlas.DataLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CCacheInfo", new EarthView.World.Spatial2D.Atlas.CacheInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CCacheInfoProxy", new EarthView.World.Spatial2D.Atlas.CacheInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CDisplayCache", new EarthView.World.Spatial2D.Atlas.DisplayCacheClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CDisplayCacheProxy", new EarthView.World.Spatial2D.Atlas.DisplayCacheClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CGroupLayer", new EarthView.World.Spatial2D.Atlas.GroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CGroupLayerProxy", new EarthView.World.Spatial2D.Atlas.GroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CGroupLayerFactory", new EarthView.World.Spatial2D.Atlas.GroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CGroupLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.GroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CLayerFactory", new EarthView.World.Spatial2D.Atlas.LayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.LayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CLayerSelection", new EarthView.World.Spatial2D.Atlas.LayerSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CLayerSelectionProxy", new EarthView.World.Spatial2D.Atlas.LayerSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CMap", new EarthView.World.Spatial2D.Atlas.MapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CMapProxy", new EarthView.World.Spatial2D.Atlas.MapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CMapFactory", new EarthView.World.Spatial2D.Atlas.MapFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CMapFactoryProxy", new EarthView.World.Spatial2D.Atlas.MapFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CMapSelection", new EarthView.World.Spatial2D.Atlas.MapSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CMapSelectionProxy", new EarthView.World.Spatial2D.Atlas.MapSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CMapSet", new EarthView.World.Spatial2D.Atlas.MapSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CSpatialThemeScale", new EarthView.World.Spatial2D.Atlas.SpatialThemeScaleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CSpatialThemeScaleProxy", new EarthView.World.Spatial2D.Atlas.SpatialThemeScaleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSDataLayer", new EarthView.World.Spatial2D.Atlas.WfsdatalayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSDataLayerProxy", new EarthView.World.Spatial2D.Atlas.WfsdatalayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactory", new EarthView.World.Spatial2D.Atlas.WfsdatalayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CWFSDataLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.WfsdatalayerfactoryClassFactory());
	}
}

