package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_MathEngine_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CAxisAlignedBox", new com.earthview.world.spatial.math.AxisAlignedBoxClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CRadian", new com.earthview.world.spatial.math.RadianClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CDegree", new com.earthview.world.spatial.math.DegreeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CAngle", new com.earthview.world.spatial.math.AngleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::IntersectResPair", new com.earthview.world.spatial.math.IntersectResPairClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMath", new com.earthview.world.spatial.math.EVMathClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CFixedPoint", new com.earthview.world.spatial.math.FixedPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMathUtility", new com.earthview.world.spatial.math.MathUtilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMatrix3", new com.earthview.world.spatial.math.Matrix3ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMatrix4", new com.earthview.world.spatial.math.Matrix4ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPlane", new com.earthview.world.spatial.math.PlaneClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::PlaneList", new com.earthview.world.spatial.math.PlaneListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::Planes", new com.earthview.world.spatial.math.PlanesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPlaneBoundedVolume", new com.earthview.world.spatial.math.PlaneBoundedVolumeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::PlaneBoundedVolumeList", new com.earthview.world.spatial.math.PlaneBoundedVolumeListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPolygon3D", new com.earthview.world.spatial.math.Polygon3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPolygon3D::EdgeMap", new com.earthview.world.spatial.math.Polygon3D.EdgeMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CPolygon3D::Edge", new com.earthview.world.spatial.math.Polygon3D.EdgeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CQuaternion", new com.earthview.world.spatial.math.QuaternionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CRay", new com.earthview.world.spatial.math.RayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CSpatialPosition", new com.earthview.world.spatial.math.SpatialPositionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CSphere", new com.earthview.world.spatial.math.SphereClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CVector2", new com.earthview.world.spatial.math.Vector2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CVector3", new com.earthview.world.spatial.math.Vector3ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::VertexList", new com.earthview.world.spatial.math.VertexListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::Vector3List", new com.earthview.world.spatial.math.Vector3ListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CVector4", new com.earthview.world.spatial.math.Vector4ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::Vector4List", new com.earthview.world.spatial.math.Vector4ListClassFactory());
	}
}

