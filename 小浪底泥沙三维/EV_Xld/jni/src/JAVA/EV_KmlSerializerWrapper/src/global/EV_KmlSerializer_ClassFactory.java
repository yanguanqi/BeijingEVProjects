package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_KmlSerializer_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CSceneOverlayData", new com.earthview.world.spatial.kml.SceneOverlayDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CKmlWorkQueueState", new com.earthview.world.spatial.kml.KmlWorkQueueStateClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute", new com.earthview.world.spatial.kml.GeoObjectExtensionAttributeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CGeoObjectExtension", new com.earthview.world.spatial.kml.GeoObjectExtensionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CEnvelopListener", new com.earthview.world.spatial.kml.EnvelopListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCEnvelopListenerProxy", new com.earthview.world.spatial.kml.EnvelopListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::GeoObjects", new com.earthview.world.spatial.kml.GeoObjectsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CTours", new com.earthview.world.spatial.kml.ToursClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CKmlNetworkLinks", new com.earthview.world.spatial.kml.KmlNetworkLinksClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CKmlDocument", new com.earthview.world.spatial.kml.KmlDocumentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCKmlDocumentProxy", new com.earthview.world.spatial.kml.KmlDocumentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CKmlNetworkLink", new com.earthview.world.spatial.kml.KmlNetworkLinkClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CTourUnit", new com.earthview.world.spatial.kml.TourUnitClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCTourUnitProxy", new com.earthview.world.spatial.kml.TourUnitClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CFlyTo", new com.earthview.world.spatial.kml.FlyToClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCFlyToProxy", new com.earthview.world.spatial.kml.FlyToClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CFlyTo::CameraStr", new com.earthview.world.spatial.kml.FlyTo.CameraStrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CFlyTo::LookAtStr", new com.earthview.world.spatial.kml.FlyTo.LookAtStrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CWait", new com.earthview.world.spatial.kml.WaitClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::JCWaitProxy", new com.earthview.world.spatial.kml.WaitClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CTourUnitVector", new com.earthview.world.spatial.kml.TourUnitVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Kml::CTour", new com.earthview.world.spatial.kml.TourClassFactory());
	}
}

