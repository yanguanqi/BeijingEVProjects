using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_KmlSerializer_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CSceneOverlayData", new EarthView.World.Spatial.Kml.SceneOverlayDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CKmlWorkQueueState", new EarthView.World.Spatial.Kml.KmlWorkQueueStateClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute", new EarthView.World.Spatial.Kml.GeoObjectExtensionAttributeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CGeoObjectExtension", new EarthView.World.Spatial.Kml.GeoObjectExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CEnvelopListener", new EarthView.World.Spatial.Kml.EnvelopListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CEnvelopListenerProxy", new EarthView.World.Spatial.Kml.EnvelopListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::GeoObjects", new EarthView.World.Spatial.Kml.GeoObjectsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CTours", new EarthView.World.Spatial.Kml.ToursClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CKmlNetworkLinks", new EarthView.World.Spatial.Kml.KmlNetworkLinksClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CKmlDocument", new EarthView.World.Spatial.Kml.KmlDocumentClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CKmlDocumentProxy", new EarthView.World.Spatial.Kml.KmlDocumentClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CKmlNetworkLink", new EarthView.World.Spatial.Kml.KmlNetworkLinkClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CTourUnit", new EarthView.World.Spatial.Kml.TourUnitClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CTourUnitProxy", new EarthView.World.Spatial.Kml.TourUnitClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CFlyTo", new EarthView.World.Spatial.Kml.FlyToClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CFlyToProxy", new EarthView.World.Spatial.Kml.FlyToClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CFlyTo::CameraStr", new EarthView.World.Spatial.Kml.FlyTo.CameraStrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CFlyTo::LookAtStr", new EarthView.World.Spatial.Kml.FlyTo.LookAtStrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CWait", new EarthView.World.Spatial.Kml.WaitClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CWaitProxy", new EarthView.World.Spatial.Kml.WaitClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CTourUnitVector", new EarthView.World.Spatial.Kml.TourUnitVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Kml::CTour", new EarthView.World.Spatial.Kml.TourClassFactory());
	}
}

