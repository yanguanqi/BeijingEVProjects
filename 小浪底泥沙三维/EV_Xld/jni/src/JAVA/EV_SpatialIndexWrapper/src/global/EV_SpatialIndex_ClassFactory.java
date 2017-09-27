package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_SpatialIndex_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::COctreeManager", new com.earthview.world.spatial.octree.OctreeManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::CBaseOctreeManager", new com.earthview.world.spatial.octree.BaseOctreeManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::CDBOctreeManager", new com.earthview.world.spatial.octree.DboctreemanagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::CWebOctreeManager", new com.earthview.world.spatial.octree.WebOctreeManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::Data", new com.earthview.world.spatial2d.spatialindex.DataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::INode", new com.earthview.world.spatial2d.spatialindex.InodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::JINodeProxy", new com.earthview.world.spatial2d.spatialindex.InodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::IDVistor", new com.earthview.world.spatial2d.spatialindex.IdvistorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::Point2DF", new com.earthview.world.spatial2d.spatialindex.Point2DFClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex", new com.earthview.world.spatial2d.spatialindex.IspatialindexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::JISpatialIndexProxy", new com.earthview.world.spatial2d.spatialindex.IspatialindexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::IStorageManager", new com.earthview.world.spatial2d.spatialindex.IstoragemanagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::SpatialIndex::JIStorageManagerProxy", new com.earthview.world.spatial2d.spatialindex.IstoragemanagerClassFactory());
	}
}

