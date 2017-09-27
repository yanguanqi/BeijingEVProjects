using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Annotation_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeature", new EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureProxy", new EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass", new EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClassClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClassProxy", new EarthView.World.Spatial2D.GeoDataset.AnnoFeatureClassClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoIterator", new EarthView.World.Spatial2D.GeoDataset.AnnoIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoIteratorProxy", new EarthView.World.Spatial2D.GeoDataset.AnnoIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CAnnoLayer", new EarthView.World.Spatial2D.Atlas.AnnoLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CAnnoLayerProxy", new EarthView.World.Spatial2D.Atlas.AnnoLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CAnnoLayerFactory", new EarthView.World.Spatial2D.Atlas.AnnoLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CAnnoLayerFactoryProxy", new EarthView.World.Spatial2D.Atlas.AnnoLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CAnnoLayerSelection", new EarthView.World.Spatial2D.Atlas.AnnoLayerSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Atlas::CAnnoLayerSelectionProxy", new EarthView.World.Spatial2D.Atlas.AnnoLayerSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoSelection", new EarthView.World.Spatial2D.GeoDataset.AnnoSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnoSelectionProxy", new EarthView.World.Spatial2D.GeoDataset.AnnoSelectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder", new EarthView.World.Spatial2D.GeoDataset.AnnotationBuilderClassFactory());
	}
}

