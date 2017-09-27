using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_SpatialIndex_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::COctreeManager", new EarthView.World.Spatial.Octree.OctreeManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::CBaseOctreeManager", new EarthView.World.Spatial.Octree.BaseOctreeManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::CDBOctreeManager", new EarthView.World.Spatial.Octree.DboctreemanagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Octree::CWebOctreeManager", new EarthView.World.Spatial.Octree.WebOctreeManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::Data", new EarthView.World.Spatial2D.SpatialIndex.DataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::INode", new EarthView.World.Spatial2D.SpatialIndex.InodeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::INodeProxy", new EarthView.World.Spatial2D.SpatialIndex.InodeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::IDVistor", new EarthView.World.Spatial2D.SpatialIndex.IdvistorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::Point2DF", new EarthView.World.Spatial2D.SpatialIndex.Point2DFClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex", new EarthView.World.Spatial2D.SpatialIndex.IspatialindexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::ISpatialIndexProxy", new EarthView.World.Spatial2D.SpatialIndex.IspatialindexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::IStorageManager", new EarthView.World.Spatial2D.SpatialIndex.IstoragemanagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::SpatialIndex::IStorageManagerProxy", new EarthView.World.Spatial2D.SpatialIndex.IstoragemanagerClassFactory());
	}
}

