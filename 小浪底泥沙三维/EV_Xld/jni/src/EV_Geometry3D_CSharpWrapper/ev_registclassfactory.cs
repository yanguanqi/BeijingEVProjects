using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Geometry3D_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue", new EarthView.World.Geometry3D.BackgroundWorkQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueueProxy", new EarthView.World.Geometry3D.BackgroundWorkQueueClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundResponseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponseProxy", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundResponseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundRequestClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequestProxy", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundRequestClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundRequestHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandlerProxy", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundRequestHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundResponseHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandlerProxy", new EarthView.World.Geometry3D.BackgroundWorkQueue.BackgroundResponseHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundQueueListener", new EarthView.World.Geometry3D.BackgroundQueueListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundQueueListenerProxy", new EarthView.World.Geometry3D.BackgroundQueueListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CBackgroundWorkManager", new EarthView.World.Geometry3D.BackgroundWorkManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CFeatureUserData", new EarthView.World.Spatial3D.FeatureUserDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CFeatureUserDataProxy", new EarthView.World.Spatial3D.FeatureUserDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CKmlFeatureUserData", new EarthView.World.Spatial3D.KmlFeatureUserDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CKmlFeatureUserDataProxy", new EarthView.World.Spatial3D.KmlFeatureUserDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3DEx", new EarthView.World.Geometry3D.Geometry3DExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3DExProxy", new EarthView.World.Geometry3D.Geometry3DExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3DExFactory", new EarthView.World.Geometry3D.Geometry3DExFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3DExFactoryProxy", new EarthView.World.Geometry3D.Geometry3DExFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3DFactory", new EarthView.World.Geometry3D.Geometry3DFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CImageOverlayer", new EarthView.World.Geometry3D.ImageOverlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CImageOverlayerProxy", new EarthView.World.Geometry3D.ImageOverlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageOverlayerExtension", new EarthView.World.Spatial3D.Atlas.ImageOverlayerExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionProxy", new EarthView.World.Spatial3D.Atlas.ImageOverlayerExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactory", new EarthView.World.Spatial3D.Atlas.ImageOverlayerExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageOverlayerExtensionFactoryProxy", new EarthView.World.Spatial3D.Atlas.ImageOverlayerExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CArrowBaseInfo", new EarthView.World.Geometry3D.ArrowBaseInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CArrowMathEngine", new EarthView.World.Geometry3D.ArrowMathEngineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlArrow3DMovable", new EarthView.World.Geometry3D.KmlArrow3DMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlArrow3DMovableProxy", new EarthView.World.Geometry3D.KmlArrow3DMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlArrowObjectEx", new EarthView.World.Geometry3D.KmlArrowObjectExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlArrowObjectExProxy", new EarthView.World.Geometry3D.KmlArrowObjectExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlArrowObjectExFactory", new EarthView.World.Geometry3D.KmlArrowObjectExFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlArrowObjectExFactoryProxy", new EarthView.World.Geometry3D.KmlArrowObjectExFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPlaceMarkList", new EarthView.World.Geometry3D.PlaceMarkListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPlaceMarkListProxy", new EarthView.World.Geometry3D.PlaceMarkListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPolylineList", new EarthView.World.Geometry3D.PolylineListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPolylineListProxy", new EarthView.World.Geometry3D.PolylineListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPolygonList", new EarthView.World.Geometry3D.PolygonListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPolygonListProxy", new EarthView.World.Geometry3D.PolygonListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFeatureList", new EarthView.World.Geometry3D.KmlFeatureListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFeatureListProxy", new EarthView.World.Geometry3D.KmlFeatureListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenGeometry", new EarthView.World.Geometry3D.ScreenGeometryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenGeometryProxy", new EarthView.World.Geometry3D.ScreenGeometryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenLine", new EarthView.World.Geometry3D.ScreenLineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenLineProxy", new EarthView.World.Geometry3D.ScreenLineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenPoint", new EarthView.World.Geometry3D.ScreenPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenPointProxy", new EarthView.World.Geometry3D.ScreenPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenPolygon", new EarthView.World.Geometry3D.ScreenPolygonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CScreenPolygonProxy", new EarthView.World.Geometry3D.ScreenPolygonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CFaceWithSimpleRenderableEx", new EarthView.World.Geometry3D.FaceWithSimpleRenderableExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet", new EarthView.World.Geometry3D.FaceWithSimpleRenderableExSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CSimpleRenderableEx", new EarthView.World.Geometry3D.SimpleRenderableExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CSimpleRenderableExProxy", new EarthView.World.Geometry3D.SimpleRenderableExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3D", new EarthView.World.Geometry3D.Geometry3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometry3DProxy", new EarthView.World.Geometry3D.Geometry3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePoint", new EarthView.World.Geometry3D.MovablePointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePointProxy", new EarthView.World.Geometry3D.MovablePointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePoint2", new EarthView.World.Geometry3D.MovablePoint2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePoint2Proxy", new EarthView.World.Geometry3D.MovablePoint2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePoint3", new EarthView.World.Geometry3D.MovablePoint3ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePoint3Proxy", new EarthView.World.Geometry3D.MovablePoint3ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePointCollection", new EarthView.World.Geometry3D.MovablePointCollectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePointCollectionProxy", new EarthView.World.Geometry3D.MovablePointCollectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableLine", new EarthView.World.Geometry3D.MovableLineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableLineProxy", new EarthView.World.Geometry3D.MovableLineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableLine2", new EarthView.World.Geometry3D.MovableLine2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableLine2Proxy", new EarthView.World.Geometry3D.MovableLine2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePolyline", new EarthView.World.Geometry3D.MovablePolylineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePolylineProxy", new EarthView.World.Geometry3D.MovablePolylineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePolyline2", new EarthView.World.Geometry3D.MovablePolyline2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePolyline2Proxy", new EarthView.World.Geometry3D.MovablePolyline2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableCurve", new EarthView.World.Geometry3D.MovableCurveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableCurveProxy", new EarthView.World.Geometry3D.MovableCurveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePolygon", new EarthView.World.Geometry3D.MovablePolygonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovablePolygonProxy", new EarthView.World.Geometry3D.MovablePolygonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableSurface", new EarthView.World.Geometry3D.MovableSurfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableSurfaceProxy", new EarthView.World.Geometry3D.MovableSurfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableEllipse", new EarthView.World.Geometry3D.MovableEllipseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableEllipseProxy", new EarthView.World.Geometry3D.MovableEllipseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableCube", new EarthView.World.Geometry3D.MovableCubeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableCubeProxy", new EarthView.World.Geometry3D.MovableCubeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableEllipticalCylinder", new EarthView.World.Geometry3D.MovableEllipticalCylinderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableEllipticalCylinderProxy", new EarthView.World.Geometry3D.MovableEllipticalCylinderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableCylinder", new EarthView.World.Geometry3D.MovableCylinderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableCylinderProxy", new EarthView.World.Geometry3D.MovableCylinderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableCone", new EarthView.World.Geometry3D.MovableConeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableConeProxy", new EarthView.World.Geometry3D.MovableConeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableHemisphere", new EarthView.World.Geometry3D.MovableHemisphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableHemisphereProxy", new EarthView.World.Geometry3D.MovableHemisphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableEllipsoid", new EarthView.World.Geometry3D.MovableEllipsoidClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableEllipsoidProxy", new EarthView.World.Geometry3D.MovableEllipsoidClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableSphere", new EarthView.World.Geometry3D.MovableSphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMovableSphereProxy", new EarthView.World.Geometry3D.MovableSphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMercatorSphere", new EarthView.World.Geometry3D.MercatorSphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMercatorSphereProxy", new EarthView.World.Geometry3D.MercatorSphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMercatorPole", new EarthView.World.Geometry3D.MercatorPoleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMercatorPoleProxy", new EarthView.World.Geometry3D.MercatorPoleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CWideLine", new EarthView.World.Geometry3D.WideLineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CWideLineProxy", new EarthView.World.Geometry3D.WideLineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CWideLine::CWideLineRenderable", new EarthView.World.Geometry3D.WideLine.WideLineRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CWideLine::CWideLineRenderableProxy", new EarthView.World.Geometry3D.WideLine.WideLineRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoEntity", new EarthView.World.Geometry3D.GeoEntityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoEntityProxy", new EarthView.World.Geometry3D.GeoEntityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoEntityFactory", new EarthView.World.Geometry3D.GeoEntityFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoEntityFactoryProxy", new EarthView.World.Geometry3D.GeoEntityFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurface", new EarthView.World.Geometry3D.KmlFresnelSurfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurfaceProxy", new EarthView.World.Geometry3D.KmlFresnelSurfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurfaceFactory", new EarthView.World.Geometry3D.KmlFresnelSurfaceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlFresnelSurfaceFactoryProxy", new EarthView.World.Geometry3D.KmlFresnelSurfaceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometry", new EarthView.World.Geometry3D.KmlMultigeometryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometryProxy", new EarthView.World.Geometry3D.KmlMultigeometryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometryFactory", new EarthView.World.Geometry3D.KmlMultigeometryFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlMultigeometryFactoryProxy", new EarthView.World.Geometry3D.KmlMultigeometryFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPlacemark", new EarthView.World.Geometry3D.KmlPlacemarkClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPlacemarkProxy", new EarthView.World.Geometry3D.KmlPlacemarkClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPlaceMarkFactory", new EarthView.World.Geometry3D.KmlPlaceMarkFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPlaceMarkFactoryProxy", new EarthView.World.Geometry3D.KmlPlaceMarkFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolygon", new EarthView.World.Geometry3D.KmlPolygonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolygonProxy", new EarthView.World.Geometry3D.KmlPolygonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolygonFactory", new EarthView.World.Geometry3D.KmlPolygonFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolygonFactoryProxy", new EarthView.World.Geometry3D.KmlPolygonFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolyline", new EarthView.World.Geometry3D.KmlPolylineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolylineProxy", new EarthView.World.Geometry3D.KmlPolylineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolylineFactory", new EarthView.World.Geometry3D.KmlPolylineFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CKmlPolylineFactoryProxy", new EarthView.World.Geometry3D.KmlPolylineFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::SubMeshData", new EarthView.World.Geometry3D.SubMeshDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CSubMeshDataVector", new EarthView.World.Geometry3D.SubMeshDataVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CRenderableGeometryExtensionListener", new EarthView.World.Geometry3D.RenderableGeometryExtensionListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CRenderableGeometryExtensionListenerProxy", new EarthView.World.Geometry3D.RenderableGeometryExtensionListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtension", new EarthView.World.Geometry3D.MultiGeometry3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionProxy", new EarthView.World.Geometry3D.MultiGeometry3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager", new EarthView.World.Geometry3D.GeometryExtensionBackgroundWorkManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener", new EarthView.World.Geometry3D.MultiGeometry3DExtensionListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionListenerProxy", new EarthView.World.Geometry3D.MultiGeometry3DExtensionListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiGeometry3DExtensionTool", new EarthView.World.Geometry3D.MultiGeometry3DExtensionToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPoint3DExtension", new EarthView.World.Geometry3D.MultiPoint3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPoint3DExtensionProxy", new EarthView.World.Geometry3D.MultiPoint3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPoint3DExtensionFactory", new EarthView.World.Geometry3D.MultiPoint3DExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPoint3DExtensionFactoryProxy", new EarthView.World.Geometry3D.MultiPoint3DExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolygon3DExtension", new EarthView.World.Geometry3D.MultiPolygon3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolygon3DExtensionProxy", new EarthView.World.Geometry3D.MultiPolygon3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolygon3DExtensionFactory", new EarthView.World.Geometry3D.MultiPolygon3DExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolygon3DExtensionFactoryProxy", new EarthView.World.Geometry3D.MultiPolygon3DExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolyline3DExtension", new EarthView.World.Geometry3D.MultiPolyline3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolyline3DExtensionProxy", new EarthView.World.Geometry3D.MultiPolyline3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolyline3DExtensionFactory", new EarthView.World.Geometry3D.MultiPolyline3DExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CMultiPolyline3DExtensionFactoryProxy", new EarthView.World.Geometry3D.MultiPolyline3DExtensionFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CSymbolToMaterial", new EarthView.World.Geometry3D.SymbolToMaterialClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum", new EarthView.World.Spatial3D.Atlas.Geometry3DFactoryEnumClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometryClampSceneLayer", new EarthView.World.Geometry3D.GeometryClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeometryClampSceneLayerProxy", new EarthView.World.Geometry3D.GeometryClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPointEx", new EarthView.World.Geometry3D.GeoPointExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPointExProxy", new EarthView.World.Geometry3D.GeoPointExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPolygonEx", new EarthView.World.Geometry3D.GeoPolygonExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPolygonExProxy", new EarthView.World.Geometry3D.GeoPolygonExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPolygonExFactory", new EarthView.World.Geometry3D.GeoPolygonExFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPolygonExFactoryProxy", new EarthView.World.Geometry3D.GeoPolygonExFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPolylineEx", new EarthView.World.Geometry3D.GeoPolylineExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoPolylineExProxy", new EarthView.World.Geometry3D.GeoPolylineExClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoStatistics3DExtension", new EarthView.World.Geometry3D.GeoStatistics3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoStatistics3DExtensionProxy", new EarthView.World.Geometry3D.GeoStatistics3DExtensionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform", new EarthView.World.Geometry3D.GeoStatistics3DExtension.TagSymbolTransformClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGlobeTextMovable", new EarthView.World.Geometry3D.GlobeTextMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CGlobeTextMovableProxy", new EarthView.World.Geometry3D.GlobeTextMovableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IClampSceneLayer", new EarthView.World.Spatial3D.Atlas.IclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.IclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayerTilePair", new EarthView.World.Spatial3D.Atlas.LayerTilePairClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayerTileList", new EarthView.World.Spatial3D.Atlas.LayerTileListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IGeometry3DFactory", new EarthView.World.Spatial3D.Atlas.Igeometry3dfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IGeometry3DFactoryProxy", new EarthView.World.Spatial3D.Atlas.Igeometry3dfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IGlobeLayer", new EarthView.World.Spatial3D.Atlas.IglobelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IGlobeLayerProxy", new EarthView.World.Spatial3D.Atlas.IglobelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::ISceneLayer", new EarthView.World.Spatial3D.Atlas.IscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::ISceneLayerProxy", new EarthView.World.Spatial3D.Atlas.IscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayerSelection3D", new EarthView.World.Spatial3D.Atlas.LayerSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayerSelection3DProxy", new EarthView.World.Spatial3D.Atlas.LayerSelection3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::COrthaxis", new EarthView.World.Geometry3D.OrthaxisClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::COrthaxisProxy", new EarthView.World.Geometry3D.OrthaxisClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::COrthaxis::COrthaxisInternalRenderable", new EarthView.World.Geometry3D.Orthaxis.OrthaxisInternalRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::COrthaxis::COrthaxisInternalRenderableProxy", new EarthView.World.Geometry3D.Orthaxis.OrthaxisInternalRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPlanargrid", new EarthView.World.Geometry3D.PlanargridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPlanargridProxy", new EarthView.World.Geometry3D.PlanargridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPlanargrid::CPlanargridInternalRenderable", new EarthView.World.Geometry3D.Planargrid.PlanargridInternalRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CPlanargrid::CPlanargridInternalRenderableProxy", new EarthView.World.Geometry3D.Planargrid.PlanargridInternalRenderableClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVertex", new EarthView.World.Geometry3D.VertexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVertexVector", new EarthView.World.Geometry3D.VertexVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CIndexVector", new EarthView.World.Geometry3D.IndexVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVisibleObjectListener", new EarthView.World.Geometry3D.VisibleObjectListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVisibleObjectListenerProxy", new EarthView.World.Geometry3D.VisibleObjectListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVisibleObject", new EarthView.World.Geometry3D.VisibleObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVisibleObjectProxy", new EarthView.World.Geometry3D.VisibleObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVisibleObjectPtr", new EarthView.World.Geometry3D.VisibleObjectPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::VisibleObjects", new EarthView.World.Geometry3D.VisibleObjectsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::VisibleObjectsVector", new EarthView.World.Geometry3D.VisibleObjectsVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::VisibleObjectPtrVector", new EarthView.World.Geometry3D.VisibleObjectPtrVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Geometry3D::CVisibleobjectVector", new EarthView.World.Geometry3D.VisibleobjectVectorClassFactory());
	}
}

