package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial3DAnalysisObject_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAltitude3DListener", new com.earthview.world.spatial3d.analysis.Altitude3DListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAltitude3DListenerProxy", new com.earthview.world.spatial3d.analysis.Altitude3DListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea", new com.earthview.world.spatial3d.analysis.Math3DMeasureAreaClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DMeasureAreaProxy", new com.earthview.world.spatial3d.analysis.Math3DMeasureAreaClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DBaseObject", new com.earthview.world.spatial3d.analysis.Math3DBaseObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DBaseObjectProxy", new com.earthview.world.spatial3d.analysis.Math3DBaseObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CGeoBoundingBox", new com.earthview.world.spatial3d.analysis.GeoBoundingBoxClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength", new com.earthview.world.spatial3d.analysis.Math3DMeasureLengthClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DMeasureLengthProxy", new com.earthview.world.spatial3d.analysis.Math3DMeasureLengthClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CPositionColorTextured", new com.earthview.world.spatial3d.analysis.PositionColorTexturedClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr", new com.earthview.world.spatial3d.analysis.PositionColorTexturedSharedPtrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::FloodPointVector", new com.earthview.world.spatial3d.analysis.FloodPointVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CFloodMeshPoint", new com.earthview.world.spatial3d.analysis.FloodMeshPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CFloodRenderBlock", new com.earthview.world.spatial3d.analysis.FloodRenderBlockClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CFRenderBlockSet", new com.earthview.world.spatial3d.analysis.FrenderblocksetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood", new com.earthview.world.spatial3d.analysis.Math3DRegionFloodClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DRegionFloodProxy", new com.earthview.world.spatial3d.analysis.Math3DRegionFloodClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CSectionLineInfo", new com.earthview.world.spatial3d.analysis.SectionLineInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DSection", new com.earthview.world.spatial3d.analysis.Math3DSectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DSectionProxy", new com.earthview.world.spatial3d.analysis.Math3DSectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DSlope", new com.earthview.world.spatial3d.analysis.Math3DSlopeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DSlopeProxy", new com.earthview.world.spatial3d.analysis.Math3DSlopeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::VisibilityPointList", new com.earthview.world.spatial3d.analysis.VisibilityPointListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DVisibility", new com.earthview.world.spatial3d.analysis.Math3DVisibilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DVisibilityProxy", new com.earthview.world.spatial3d.analysis.Math3DVisibilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DVolume", new com.earthview.world.spatial3d.analysis.Math3DVolumeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DVolumeProxy", new com.earthview.world.spatial3d.analysis.Math3DVolumeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMathUtility3D", new com.earthview.world.spatial3d.analysis.MathUtility3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMathUtility3DProxy", new com.earthview.world.spatial3d.analysis.MathUtility3DClassFactory());
	}
}

