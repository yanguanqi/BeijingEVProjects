using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_MathEngine_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CAxisAlignedBox", new EarthView.World.Spatial.Math.AxisAlignedBoxClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CRadian", new EarthView.World.Spatial.Math.RadianClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CDegree", new EarthView.World.Spatial.Math.DegreeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CAngle", new EarthView.World.Spatial.Math.AngleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::IntersectResPair", new EarthView.World.Spatial.Math.IntersectResPairClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMath", new EarthView.World.Spatial.Math.MathClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CFixedPoint", new EarthView.World.Spatial.Math.FixedPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMathUtility", new EarthView.World.Spatial.Math.MathUtilityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMatrix3", new EarthView.World.Spatial.Math.Matrix3ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CMatrix4", new EarthView.World.Spatial.Math.Matrix4ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPlane", new EarthView.World.Spatial.Math.PlaneClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::PlaneList", new EarthView.World.Spatial.Math.PlaneListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::Planes", new EarthView.World.Spatial.Math.PlanesClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPlaneBoundedVolume", new EarthView.World.Spatial.Math.PlaneBoundedVolumeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::PlaneBoundedVolumeList", new EarthView.World.Spatial.Math.PlaneBoundedVolumeListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPolygon3D", new EarthView.World.Spatial.Math.Polygon3DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPolygon3D::EdgeMap", new EarthView.World.Spatial.Math.Polygon3D.EdgeMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CPolygon3D::Edge", new EarthView.World.Spatial.Math.Polygon3D.EdgeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CQuaternion", new EarthView.World.Spatial.Math.QuaternionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CRay", new EarthView.World.Spatial.Math.RayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CSpatialPosition", new EarthView.World.Spatial.Math.SpatialPositionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CSphere", new EarthView.World.Spatial.Math.SphereClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CVector2", new EarthView.World.Spatial.Math.Vector2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CVector3", new EarthView.World.Spatial.Math.Vector3ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::VertexList", new EarthView.World.Spatial.Math.VertexListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::Vector3List", new EarthView.World.Spatial.Math.Vector3ListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::CVector4", new EarthView.World.Spatial.Math.Vector4ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Math::Vector4List", new EarthView.World.Spatial.Math.Vector4ListClassFactory());
	}
}

