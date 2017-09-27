package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Annotation_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeature", new com.earthview.world.spatial2d.geodataset.AnnoFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCAnnoFeatureProxy", new com.earthview.world.spatial2d.geodataset.AnnoFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass", new com.earthview.world.spatial2d.geodataset.AnnoFeatureClassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCAnnoFeatureClassProxy", new com.earthview.world.spatial2d.geodataset.AnnoFeatureClassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnoIterator", new com.earthview.world.spatial2d.geodataset.AnnoIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCAnnoIteratorProxy", new com.earthview.world.spatial2d.geodataset.AnnoIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CAnnoLayer", new com.earthview.world.spatial2d.atlas.AnnoLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCAnnoLayerProxy", new com.earthview.world.spatial2d.atlas.AnnoLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory", new com.earthview.world.spatial2d.atlas.AnnoLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCAnnoLayerFactoryProxy", new com.earthview.world.spatial2d.atlas.AnnoLayerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection", new com.earthview.world.spatial2d.atlas.AnnoLayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCAnnoLayerSelectionProxy", new com.earthview.world.spatial2d.atlas.AnnoLayerSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnoSelection", new com.earthview.world.spatial2d.geodataset.AnnoSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::JCAnnoSelectionProxy", new com.earthview.world.spatial2d.geodataset.AnnoSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder", new com.earthview.world.spatial2d.geodataset.AnnotationBuilderClassFactory());
	}
}

