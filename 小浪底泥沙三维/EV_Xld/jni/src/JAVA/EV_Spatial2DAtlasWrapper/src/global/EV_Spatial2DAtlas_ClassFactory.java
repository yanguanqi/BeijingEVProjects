package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial2DAtlas_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CBaseGroupLayer", new com.earthview.world.spatial2d.atlas.BaseGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCBaseGroupLayerProxy", new com.earthview.world.spatial2d.atlas.BaseGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CBaseGroupLayerFactory", new com.earthview.world.spatial2d.atlas.BaseGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCBaseGroupLayerFactoryProxy", new com.earthview.world.spatial2d.atlas.BaseGroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CLayerLabelProperty", new com.earthview.world.spatial2d.atlas.LayerLabelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCLayerLabelPropertyProxy", new com.earthview.world.spatial2d.atlas.LayerLabelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CDataLayer", new com.earthview.world.spatial2d.atlas.DataLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCDataLayerProxy", new com.earthview.world.spatial2d.atlas.DataLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CCacheInfo", new com.earthview.world.spatial2d.atlas.CacheInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCCacheInfoProxy", new com.earthview.world.spatial2d.atlas.CacheInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CDisplayCache", new com.earthview.world.spatial2d.atlas.DisplayCacheClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCDisplayCacheProxy", new com.earthview.world.spatial2d.atlas.DisplayCacheClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CGroupLayer", new com.earthview.world.spatial2d.atlas.GroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCGroupLayerProxy", new com.earthview.world.spatial2d.atlas.GroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CGroupLayerFactory", new com.earthview.world.spatial2d.atlas.GroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCGroupLayerFactoryProxy", new com.earthview.world.spatial2d.atlas.GroupLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CLayerFactory", new com.earthview.world.spatial2d.atlas.LayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCLayerFactoryProxy", new com.earthview.world.spatial2d.atlas.LayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CLayerSelection", new com.earthview.world.spatial2d.atlas.LayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCLayerSelectionProxy", new com.earthview.world.spatial2d.atlas.LayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CMap", new com.earthview.world.spatial2d.atlas.MapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCMapProxy", new com.earthview.world.spatial2d.atlas.MapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CMapFactory", new com.earthview.world.spatial2d.atlas.MapFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCMapFactoryProxy", new com.earthview.world.spatial2d.atlas.MapFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CMapSelection", new com.earthview.world.spatial2d.atlas.MapSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCMapSelectionProxy", new com.earthview.world.spatial2d.atlas.MapSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CMapSet", new com.earthview.world.spatial2d.atlas.MapSetClassFactory());
	}
}

