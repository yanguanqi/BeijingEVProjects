package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Plugin_OctreeSceneManager_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctree", new com.earthview.world.graphic.OctreeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctree::OctreeNodeList", new com.earthview.world.graphic.Octree.OctreeNodeListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreeCamera", new com.earthview.world.graphic.OctreeCameraClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreeCameraProxy", new com.earthview.world.graphic.OctreeCameraClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreeNode", new com.earthview.world.graphic.OctreeNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreeNodeProxy", new com.earthview.world.graphic.OctreeNodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::BoxList", new com.earthview.world.graphic.BoxListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ColorList", new com.earthview.world.graphic.ColorListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::SceneNodes", new com.earthview.world.graphic.SceneNodesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreeSceneManager", new com.earthview.world.graphic.OctreeSceneManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreeSceneManagerProxy", new com.earthview.world.graphic.OctreeSceneManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreeIntersectionSceneQuery", new com.earthview.world.graphic.OctreeIntersectionSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreeIntersectionSceneQueryProxy", new com.earthview.world.graphic.OctreeIntersectionSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreeRaySceneQuery", new com.earthview.world.graphic.OctreeRaySceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreeRaySceneQueryProxy", new com.earthview.world.graphic.OctreeRaySceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreeSphereSceneQuery", new com.earthview.world.graphic.OctreeSphereSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreeSphereSceneQueryProxy", new com.earthview.world.graphic.OctreeSphereSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery", new com.earthview.world.graphic.OctreePlaneBoundedVolumeListSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreePlaneBoundedVolumeListSceneQueryProxy", new com.earthview.world.graphic.OctreePlaneBoundedVolumeListSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery", new com.earthview.world.graphic.OctreeAxisAlignedBoxSceneQueryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOctreeAxisAlignedBoxSceneQueryProxy", new com.earthview.world.graphic.OctreeAxisAlignedBoxSceneQueryClassFactory());
	}
}

