using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial3DAnalysisObject_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAltitude3DListener", new EarthView.World.Spatial3D.Analysis.Altitude3DListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CAltitude3DListenerProxy", new EarthView.World.Spatial3D.Analysis.Altitude3DListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea", new EarthView.World.Spatial3D.Analysis.Math3DMeasureAreaClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureAreaProxy", new EarthView.World.Spatial3D.Analysis.Math3DMeasureAreaClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DBaseObject", new EarthView.World.Spatial3D.Analysis.Math3DBaseObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DBaseObjectProxy", new EarthView.World.Spatial3D.Analysis.Math3DBaseObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CGeoBoundingBox", new EarthView.World.Spatial3D.Analysis.GeoBoundingBoxClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength", new EarthView.World.Spatial3D.Analysis.Math3DMeasureLengthClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureLengthProxy", new EarthView.World.Spatial3D.Analysis.Math3DMeasureLengthClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CPositionColorTextured", new EarthView.World.Spatial3D.Analysis.PositionColorTexturedClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr", new EarthView.World.Spatial3D.Analysis.PositionColorTexturedSharedPtrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::FloodPointVector", new EarthView.World.Spatial3D.Analysis.FloodPointVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CFloodMeshPoint", new EarthView.World.Spatial3D.Analysis.FloodMeshPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CFloodRenderBlock", new EarthView.World.Spatial3D.Analysis.FloodRenderBlockClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CFRenderBlockSet", new EarthView.World.Spatial3D.Analysis.FrenderblocksetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood", new EarthView.World.Spatial3D.Analysis.Math3DRegionFloodClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DRegionFloodProxy", new EarthView.World.Spatial3D.Analysis.Math3DRegionFloodClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CSectionLineInfo", new EarthView.World.Spatial3D.Analysis.SectionLineInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DSection", new EarthView.World.Spatial3D.Analysis.Math3DSectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DSectionProxy", new EarthView.World.Spatial3D.Analysis.Math3DSectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DSlope", new EarthView.World.Spatial3D.Analysis.Math3DSlopeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DSlopeProxy", new EarthView.World.Spatial3D.Analysis.Math3DSlopeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::VisibilityPointList", new EarthView.World.Spatial3D.Analysis.VisibilityPointListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DVisibility", new EarthView.World.Spatial3D.Analysis.Math3DVisibilityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DVisibilityProxy", new EarthView.World.Spatial3D.Analysis.Math3DVisibilityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DVolume", new EarthView.World.Spatial3D.Analysis.Math3DVolumeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMath3DVolumeProxy", new EarthView.World.Spatial3D.Analysis.Math3DVolumeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMathUtility3D", new EarthView.World.Spatial3D.Analysis.MathUtility3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Analysis::CMathUtility3DProxy", new EarthView.World.Spatial3D.Analysis.MathUtility3DClassFactory());
	}
}

