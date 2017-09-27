using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Plugin_OctreeSceneManager_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctree", new EarthView.World.Graphic.OctreeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctree::OctreeNodeList", new EarthView.World.Graphic.Octree.OctreeNodeListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeCamera", new EarthView.World.Graphic.OctreeCameraClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeCameraProxy", new EarthView.World.Graphic.OctreeCameraClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeNode", new EarthView.World.Graphic.OctreeNodeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeNodeProxy", new EarthView.World.Graphic.OctreeNodeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::BoxList", new EarthView.World.Graphic.BoxListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::ColorList", new EarthView.World.Graphic.ColorListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::SceneNodes", new EarthView.World.Graphic.SceneNodesClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeSceneManager", new EarthView.World.Graphic.OctreeSceneManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeSceneManagerProxy", new EarthView.World.Graphic.OctreeSceneManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeIntersectionSceneQuery", new EarthView.World.Graphic.OctreeIntersectionSceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeIntersectionSceneQueryProxy", new EarthView.World.Graphic.OctreeIntersectionSceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeRaySceneQuery", new EarthView.World.Graphic.OctreeRaySceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeRaySceneQueryProxy", new EarthView.World.Graphic.OctreeRaySceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeSphereSceneQuery", new EarthView.World.Graphic.OctreeSphereSceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeSphereSceneQueryProxy", new EarthView.World.Graphic.OctreeSphereSceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQuery", new EarthView.World.Graphic.OctreePlaneBoundedVolumeListSceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreePlaneBoundedVolumeListSceneQueryProxy", new EarthView.World.Graphic.OctreePlaneBoundedVolumeListSceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQuery", new EarthView.World.Graphic.OctreeAxisAlignedBoxSceneQueryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Graphic::COctreeAxisAlignedBoxSceneQueryProxy", new EarthView.World.Graphic.OctreeAxisAlignedBoxSceneQueryClassFactory());
	}
}

