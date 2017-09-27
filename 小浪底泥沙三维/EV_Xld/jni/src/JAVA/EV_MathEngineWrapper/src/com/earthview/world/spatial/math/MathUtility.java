package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MathUtility extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Math::CMathUtility", new MathUtilityClassFactory());
	}

	public MathUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMathUtility", null);
	}

	native private static long sphericalToCartesian_ev_real64_ev_real64_ev_real64(double latitude, double longitude, double radius);
	public static com.earthview.world.spatial.math.Vector3 sphericalToCartesian(double latitude, double longitude, double radius)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double radiusParamValue = radius;
		long returnValue = sphericalToCartesian_ev_real64_ev_real64_ev_real64(latitudeParamValue, longitudeParamValue, radiusParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static long sphericalToCartesian_CDegree_CDegree_ev_real64(long latitude, long longitude, double radius);
	/**
	 * 由经纬度和到球心的距离计算笛卡尔坐标
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param radius 到球心的距离
	 * @return 空间坐标
	 */
	public static com.earthview.world.spatial.math.Vector3 sphericalToCartesian(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double radius)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long returnValue = sphericalToCartesian_CDegree_CDegree_ev_real64(latitudeParamValue, longitudeParamValue, radiusParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static long sphericalToCartesian_CRadian_CRadian_ev_real64(long latitude, long longitude, double radius);
	/**
	 * 由经纬度和到球心的距离计算笛卡尔坐标
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param radius 到球心的距离
	 * @return 空间坐标
	 */
	public static com.earthview.world.spatial.math.Vector3 sphericalToCartesian(com.earthview.world.spatial.math.Radian latitude, com.earthview.world.spatial.math.Radian longitude, double radius)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long returnValue = sphericalToCartesian_CRadian_CRadian_ev_real64(latitudeParamValue, longitudeParamValue, radiusParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static long cartesianToSpherical_CVector3(long v);
	/**
	 * 由笛卡尔坐标转极坐标
	 * @param v 笛卡尔坐标系坐标点
	 * @return 极坐标(x:到球心的距离；y：纬度，以弧度为单位；z：经度,以弧度为单位)
	 */
	public static com.earthview.world.spatial.math.Vector3 cartesianToSpherical(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		long returnValue = cartesianToSpherical_CVector3(vParamValue);
		com.earthview.world.spatial.math.Vector3 __returnValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVector3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Vector3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVector3");
		}
		return __returnValue;
	}
	native private static double sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);
	/**
	 * 球面上两点求距离
	 * @param latA 第一个的点的纬度（度）
	 * @param lonA 第一个的点的经度（度）
	 * @param latB 第二个的点的纬度（度）
	 * @param lonB 第二个的点的经度（度）
	 * @return 球面上的距离，弧度为单位
	 */
	public static double sphericalDistance(double latA, double lonA, double latB, double lonB)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		double returnValue = sphericalDistance_ev_real64_ev_real64_ev_real64_ev_real64(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
		return returnValue;
	}
	native private static double Azimuth_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);
	/**
	 * 给定两点经纬度计算方位角（正北方向偏角）
	 * @param latA A点纬度(度)
	 * @param lonA A点经度(度)
	 * @param latB B点纬度(度)
	 * @param lonB B点经度(度)
	 * @return 方位角(度)
	 */
	public static double Azimuth(double latA, double lonA, double latB, double lonB)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		double returnValue = Azimuth_ev_real64_ev_real64_ev_real64_ev_real64(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
		return returnValue;
	}
	native private static boolean getRotationAngleAxis_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(double latA, double lonA, double latB, double lonB, long frkAngle, long raxis);
	/**
	 * 球面上两点的矩离和两点的转轴
	 * @param latA 第一个的点的纬度（度）
	 * @param lonA 第一个的点的经度（度）
	 * @param latB 第二个的点的纬度（度）
	 * @param lonB 第二个的点的经度（度）
	 * @param frkAngle 两点的间距（弧度）
	 * @param raxis 转轴（已单位化）
	 * @return 有无旋转
	 */
	public static boolean getRotationAngleAxis(double latA, double lonA, double latB, double lonB, DoublePointer frkAngle, com.earthview.world.spatial.math.Vector3 raxis)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		long frkAngleParamValue = frkAngle.nativeObject.pointer;
		long raxisParamValue = raxis.nativeObject.pointer;
		boolean returnValue = getRotationAngleAxis_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, frkAngleParamValue, raxisParamValue);
		return returnValue;
	}
	native private static boolean getInterpolaterLatitudeLongitude_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB, double ratio, long latitude, long longitude);
	public static boolean getInterpolaterLatitudeLongitude(double latA, double lonA, double latB, double lonB, double ratio, DoublePointer latitude, DoublePointer longitude)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		double ratioParamValue = ratio;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		boolean returnValue = getInterpolaterLatitudeLongitude_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, ratioParamValue, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}
	native private static boolean getInterpolaterLatitudeLongitude_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree(long latA, long lonA, long latB, long lonB, double ratio, long latitude, long longitude);
	public static boolean getInterpolaterLatitudeLongitude(com.earthview.world.spatial.math.Degree latA, com.earthview.world.spatial.math.Degree lonA, com.earthview.world.spatial.math.Degree latB, com.earthview.world.spatial.math.Degree lonB, double ratio, com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude)
	{
		long latAParamValue = latA.nativeObject.pointer;
		long lonAParamValue = lonA.nativeObject.pointer;
		long latBParamValue = latB.nativeObject.pointer;
		long lonBParamValue = lonB.nativeObject.pointer;
		double ratioParamValue = ratio;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		boolean returnValue = getInterpolaterLatitudeLongitude_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, ratioParamValue, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}
	native private static boolean getRotationAngleAxis_CDegree_CDegree_CDegree_CDegree_ev_real64_CVector3(long latA, long lonA, long latB, long lonB, long frkAngle, long raxis);
	/**
	 * 球面上两点的矩离和两点的转轴
	 * @param latA 第一个的点的纬度（度）
	 * @param lonA 第一个的点的经度（度）
	 * @param latB 第二个的点的纬度（度）
	 * @param lonB 第二个的点的经度（度）
	 * @param ev_real64 两点的间距（弧度）
	 * @param raxis 转轴（已单位化）
	 * @return 有无旋转
	 */
	public static boolean getRotationAngleAxis(com.earthview.world.spatial.math.Degree latA, com.earthview.world.spatial.math.Degree lonA, com.earthview.world.spatial.math.Degree latB, com.earthview.world.spatial.math.Degree lonB, DoublePointer frkAngle, com.earthview.world.spatial.math.Vector3 raxis)
	{
		long latAParamValue = latA.nativeObject.pointer;
		long lonAParamValue = lonA.nativeObject.pointer;
		long latBParamValue = latB.nativeObject.pointer;
		long lonBParamValue = lonB.nativeObject.pointer;
		long frkAngleParamValue = frkAngle.nativeObject.pointer;
		long raxisParamValue = raxis.nativeObject.pointer;
		boolean returnValue = getRotationAngleAxis_CDegree_CDegree_CDegree_CDegree_ev_real64_CVector3(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, frkAngleParamValue, raxisParamValue);
		return returnValue;
	}
	native private static void unProject_CVector3_CMatrix4_CMatrix4_CMatrix4_CVector3(long scenePoint, long modelViewMatrix, long projectMatrix, long viewportMatrix, long worldPoint);
	/// <summary>
	/// 计屏幕上的点在世界坐标系中的坐标
	/// </summary>
	/// <param name="scenePoint">屏幕坐标系中的点的坐标。z值在(0-1)</param>
	/// <param name="modelViewMatrix">模型视图变换矩阵</param>
	/// <param name="projectMatrix">投影变换矩阵</param>
	/// <param name="viewportMatrix">视口变换矩阵</param>
	/// <param name="worldPoint">世界坐标系中的点</param
	///<returns></returns>
	public static void unProject(com.earthview.world.spatial.math.Vector3 scenePoint, com.earthview.world.spatial.math.Matrix4 modelViewMatrix, com.earthview.world.spatial.math.Matrix4 projectMatrix, com.earthview.world.spatial.math.Matrix4 viewportMatrix, com.earthview.world.spatial.math.Vector3 worldPoint)
	{
		long scenePointParamValue = scenePoint.nativeObject.pointer;
		long modelViewMatrixParamValue = modelViewMatrix.nativeObject.pointer;
		long projectMatrixParamValue = projectMatrix.nativeObject.pointer;
		long viewportMatrixParamValue = viewportMatrix.nativeObject.pointer;
		long worldPointParamValue = worldPoint.nativeObject.pointer;
		unProject_CVector3_CMatrix4_CMatrix4_CMatrix4_CVector3(scenePointParamValue, modelViewMatrixParamValue, projectMatrixParamValue, viewportMatrixParamValue, worldPointParamValue);
	}
	native private static boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_ev_real64_ev_real64(int screenX, int screenY, double worldradius, boolean isOutside, long modelViewMatrix, long projectMatrix, long viewportMatrix, long latitude, long longitude);
	/**
	 * 计屏幕上的点计逄经纬度
	 * @param screenX 点的x坐标
	 * @param screenY 点的y坐标阵
	 * @param worldradius 球的斗径
	 * @param isOutside 是否是外面的点
	 * @param modelViewMatrix 模型视图变换矩阵
	 * @param projectMatrix 投影变换矩阵
	 * @param viewportMatrix 视口变换矩阵
	 * @param latitude 球面上的经度
	 * @param longitude 球面上的纬度
	 * @return 是否相交
	 */
	public static boolean pickingRayIntersection(int screenX, int screenY, double worldradius, boolean isOutside, com.earthview.world.spatial.math.Matrix4 modelViewMatrix, com.earthview.world.spatial.math.Matrix4 projectMatrix, com.earthview.world.spatial.math.Matrix4 viewportMatrix, DoublePointer latitude, DoublePointer longitude)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		double worldradiusParamValue = worldradius;
		boolean isOutsideParamValue = isOutside;
		long modelViewMatrixParamValue = modelViewMatrix.nativeObject.pointer;
		long projectMatrixParamValue = projectMatrix.nativeObject.pointer;
		long viewportMatrixParamValue = viewportMatrix.nativeObject.pointer;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_ev_real64_ev_real64(screenXParamValue, screenYParamValue, worldradiusParamValue, isOutsideParamValue, modelViewMatrixParamValue, projectMatrixParamValue, viewportMatrixParamValue, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}
	native private static boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_CVector3_CVector3(int screenX, int screenY, double worldradius, boolean isOutside, long modelViewMatrix, long projectMatrix, long viewportMatrix, long pointA, long pointB);
	public static boolean pickingRayIntersection(int screenX, int screenY, double worldradius, boolean isOutside, com.earthview.world.spatial.math.Matrix4 modelViewMatrix, com.earthview.world.spatial.math.Matrix4 projectMatrix, com.earthview.world.spatial.math.Matrix4 viewportMatrix, com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		double worldradiusParamValue = worldradius;
		boolean isOutsideParamValue = isOutside;
		long modelViewMatrixParamValue = modelViewMatrix.nativeObject.pointer;
		long projectMatrixParamValue = projectMatrix.nativeObject.pointer;
		long viewportMatrixParamValue = viewportMatrix.nativeObject.pointer;
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_bool_CMatrix4_CMatrix4_CMatrix4_CVector3_CVector3(screenXParamValue, screenYParamValue, worldradiusParamValue, isOutsideParamValue, modelViewMatrixParamValue, projectMatrixParamValue, viewportMatrixParamValue, pointAParamValue, pointBParamValue);
		return returnValue;
	}
	native private static boolean pickingRayIntersection_CVector3_CVector3_ev_real64_CVector3(long lookVector, long observerPostion, double worldradius, long intersectionPostion);
	/**
	 * 射线与球面上相交的点
	 * @param lookVector 射线方向
	 * @param observerPostion 射线的起始点
	 * @param worldradius 球的半径
	 * @param isOutside 交点
	 * @return 是否相交
	 */
	public static boolean pickingRayIntersection(com.earthview.world.spatial.math.Vector3 lookVector, com.earthview.world.spatial.math.Vector3 observerPostion, double worldradius, com.earthview.world.spatial.math.Vector3 intersectionPostion)
	{
		long lookVectorParamValue = lookVector.nativeObject.pointer;
		long observerPostionParamValue = observerPostion.nativeObject.pointer;
		double worldradiusParamValue = worldradius;
		long intersectionPostionParamValue = intersectionPostion.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_CVector3_CVector3_ev_real64_CVector3(lookVectorParamValue, observerPostionParamValue, worldradiusParamValue, intersectionPostionParamValue);
		return returnValue;
	}
	native private static boolean pickingRayWithLookDirIntersection_CVector3_CVector3_ev_real64_CVector3(long lookVector, long observerPostion, double worldradius, long intersectionPostion);
	public static boolean pickingRayWithLookDirIntersection(com.earthview.world.spatial.math.Vector3 lookVector, com.earthview.world.spatial.math.Vector3 observerPostion, double worldradius, com.earthview.world.spatial.math.Vector3 intersectionPostion)
	{
		long lookVectorParamValue = lookVector.nativeObject.pointer;
		long observerPostionParamValue = observerPostion.nativeObject.pointer;
		double worldradiusParamValue = worldradius;
		long intersectionPostionParamValue = intersectionPostion.nativeObject.pointer;
		boolean returnValue = pickingRayWithLookDirIntersection_CVector3_CVector3_ev_real64_CVector3(lookVectorParamValue, observerPostionParamValue, worldradiusParamValue, intersectionPostionParamValue);
		return returnValue;
	}
	native private static long computeWorldMatrix_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(double latitude, double longitude, double height, long quaternion, long scale);
	public static com.earthview.world.spatial.math.Matrix4 computeWorldMatrix(double latitude, double longitude, double height, com.earthview.world.spatial.math.Quaternion quaternion, com.earthview.world.spatial.math.Vector3 scale)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double heightParamValue = height;
		long quaternionParamValue = quaternion.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long returnValue = computeWorldMatrix_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(latitudeParamValue, longitudeParamValue, heightParamValue, quaternionParamValue, scaleParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static void decomputeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(long mat4, long latitude, long longitude, long height, long quaternion, long scale);
	public static void decomputeWorldMatrix(com.earthview.world.spatial.math.Matrix4 mat4, DoublePointer latitude, DoublePointer longitude, DoublePointer height, com.earthview.world.spatial.math.Quaternion quaternion, com.earthview.world.spatial.math.Vector3 scale)
	{
		long mat4ParamValue = mat4.nativeObject.pointer;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		long quaternionParamValue = quaternion.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		decomputeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CQuaternion_CVector3(mat4ParamValue, latitudeParamValue, longitudeParamValue, heightParamValue, quaternionParamValue, scaleParamValue);
	}
	native private static long computeWorldMatrix_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(double latitude, double longitude, double height, float rotationXDegree, float rotationYDegree, float rotationZDegree, long scale);
	public static com.earthview.world.spatial.math.Matrix4 computeWorldMatrix(double latitude, double longitude, double height, float rotationXDegree, float rotationYDegree, float rotationZDegree, com.earthview.world.spatial.math.Vector3 scale)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double heightParamValue = height;
		float rotationXDegreeParamValue = rotationXDegree;
		float rotationYDegreeParamValue = rotationYDegree;
		float rotationZDegreeParamValue = rotationZDegree;
		long scaleParamValue = scale.nativeObject.pointer;
		long returnValue = computeWorldMatrix_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(latitudeParamValue, longitudeParamValue, heightParamValue, rotationXDegreeParamValue, rotationYDegreeParamValue, rotationZDegreeParamValue, scaleParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static void decomputeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(long mat4, long latitude, long longitude, long height, long rotationXDegree, long rotationYDegree, long rotationZDegree, long scale);
	public static void decomputeWorldMatrix(com.earthview.world.spatial.math.Matrix4 mat4, DoublePointer latitude, DoublePointer longitude, DoublePointer height, FloatPointer rotationXDegree, FloatPointer rotationYDegree, FloatPointer rotationZDegree, com.earthview.world.spatial.math.Vector3 scale)
	{
		long mat4ParamValue = mat4.nativeObject.pointer;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long heightParamValue = height.nativeObject.pointer;
		long rotationXDegreeParamValue = rotationXDegree.nativeObject.pointer;
		long rotationYDegreeParamValue = rotationYDegree.nativeObject.pointer;
		long rotationZDegreeParamValue = rotationZDegree.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		decomputeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_ev_real32_ev_real32_ev_real32_CVector3(mat4ParamValue, latitudeParamValue, longitudeParamValue, heightParamValue, rotationXDegreeParamValue, rotationYDegreeParamValue, rotationZDegreeParamValue, scaleParamValue);
	}
	native private static long computeWorldMatrix_CVector3_CQuaternion_CVector3(long postion, long quaternion, long scale);
	public static com.earthview.world.spatial.math.Matrix4 computeWorldMatrix(com.earthview.world.spatial.math.Vector3 postion, com.earthview.world.spatial.math.Quaternion quaternion, com.earthview.world.spatial.math.Vector3 scale)
	{
		long postionParamValue = postion.nativeObject.pointer;
		long quaternionParamValue = quaternion.nativeObject.pointer;
		long scaleParamValue = scale.nativeObject.pointer;
		long returnValue = computeWorldMatrix_CVector3_CQuaternion_CVector3(postionParamValue, quaternionParamValue, scaleParamValue);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private static double latitudeDegreeToMercator_ev_real64(double degree);
	///角度转墨卡托弧度
	public static double latitudeDegreeToMercator(double degree)
	{
		double degreeParamValue = degree;
		double returnValue = latitudeDegreeToMercator_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static double longitudeDegreeToMercator_ev_real64(double degree);
	public static double longitudeDegreeToMercator(double degree)
	{
		double degreeParamValue = degree;
		double returnValue = longitudeDegreeToMercator_ev_real64(degreeParamValue);
		return returnValue;
	}
	native private static double mercatorToLatitudeDegree_ev_real64(double radian);
	public static double mercatorToLatitudeDegree(double radian)
	{
		double radianParamValue = radian;
		double returnValue = mercatorToLatitudeDegree_ev_real64(radianParamValue);
		return returnValue;
	}
	native private static double mercatorToLongitudeDegree_ev_real64(double radian);
	public static double mercatorToLongitudeDegree(double radian)
	{
		double radianParamValue = radian;
		double returnValue = mercatorToLongitudeDegree_ev_real64(radianParamValue);
		return returnValue;
	}
	native private static long getColFromLongitude_ev_real64_ev_real64(double longitude, double tileSize);
	/**
	 * 从经度获取瓦片所在列
	 * @param longitude 经度，单位为度
	 * @param tileSize 瓦片大小
	 * @return 瓦片所在列
	 */
	public static long getColFromLongitude(double longitude, double tileSize)
	{
		double longitudeParamValue = longitude;
		double tileSizeParamValue = tileSize;
		long returnValue = getColFromLongitude_ev_real64_ev_real64(longitudeParamValue, tileSizeParamValue);
		return returnValue;
	}
	native private static long getRowFromLatitude_ev_real64_ev_real64(double latitude, double tileSize);
	/**
	 * 从纬度获取瓦片所在行
	 * @param longitude 纬度，单位为度
	 * @param tileSize 瓦片大小
	 * @return 瓦片所在行
	 */
	public static long getRowFromLatitude(double latitude, double tileSize)
	{
		double latitudeParamValue = latitude;
		double tileSizeParamValue = tileSize;
		long returnValue = getRowFromLatitude_ev_real64_ev_real64(latitudeParamValue, tileSizeParamValue);
		return returnValue;
	}
	native private static long computeAxisMatrix_CDegree_CDegree_ev_real64(long latitude, long longitude, double radius);
	public static com.earthview.world.spatial.math.Matrix3 computeAxisMatrix(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double radius)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long returnValue = computeAxisMatrix_CDegree_CDegree_ev_real64(latitudeParamValue, longitudeParamValue, radiusParamValue);
		com.earthview.world.spatial.math.Matrix3 __returnValue = new com.earthview.world.spatial.math.Matrix3(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix3)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix3");
		}
		return __returnValue;
	}
	native private static double computeCameraTilt_CVector3_CVector3_CVector3_CVector3(long target, long observer, long upVector, long localCenter);
	public static double computeCameraTilt(com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 upVector, com.earthview.world.spatial.math.Vector3 localCenter)
	{
		long targetParamValue = target.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long upVectorParamValue = upVector.nativeObject.pointer;
		long localCenterParamValue = localCenter.nativeObject.pointer;
		double returnValue = computeCameraTilt_CVector3_CVector3_CVector3_CVector3(targetParamValue, observerParamValue, upVectorParamValue, localCenterParamValue);
		return returnValue;
	}
	native private static double computeCameraHeading_CVector3_CVector3_ev_real64_CVector3_CVector3(long up, long look, double tiltRadious, long target, long localCenter);
	public static double computeCameraHeading(com.earthview.world.spatial.math.Vector3 up, com.earthview.world.spatial.math.Vector3 look, double tiltRadious, com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 localCenter)
	{
		long upParamValue = up.nativeObject.pointer;
		long lookParamValue = look.nativeObject.pointer;
		double tiltRadiousParamValue = tiltRadious;
		long targetParamValue = target.nativeObject.pointer;
		long localCenterParamValue = localCenter.nativeObject.pointer;
		double returnValue = computeCameraHeading_CVector3_CVector3_ev_real64_CVector3_CVector3(upParamValue, lookParamValue, tiltRadiousParamValue, targetParamValue, localCenterParamValue);
		return returnValue;
	}
	native private static void adjustTarget_CVector3_CVector3_CVector3_CVector3_ev_real64(long oldTarget, long observer, long target, long localCenter, double worldradius);
	public static void adjustTarget(com.earthview.world.spatial.math.Vector3 oldTarget, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 localCenter, double worldradius)
	{
		long oldTargetParamValue = oldTarget.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long targetParamValue = target.nativeObject.pointer;
		long localCenterParamValue = localCenter.nativeObject.pointer;
		double worldradiusParamValue = worldradius;
		adjustTarget_CVector3_CVector3_CVector3_CVector3_ev_real64(oldTargetParamValue, observerParamValue, targetParamValue, localCenterParamValue, worldradiusParamValue);
	}
	native private static void transformKMLCameraTag_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_CVector3_CVector3_CVector3(long cameraLatitude, long cameraLongitude, double radius, long heading, long tilt, long roll, long target, long observer, long upVector);
	public static void transformKMLCameraTag(com.earthview.world.spatial.math.Degree cameraLatitude, com.earthview.world.spatial.math.Degree cameraLongitude, double radius, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, com.earthview.world.spatial.math.Degree roll, com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 upVector)
	{
		long cameraLatitudeParamValue = cameraLatitude.nativeObject.pointer;
		long cameraLongitudeParamValue = cameraLongitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		long rollParamValue = roll.nativeObject.pointer;
		long targetParamValue = target.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long upVectorParamValue = upVector.nativeObject.pointer;
		transformKMLCameraTag_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_CVector3_CVector3_CVector3(cameraLatitudeParamValue, cameraLongitudeParamValue, radiusParamValue, headingParamValue, tiltParamValue, rollParamValue, targetParamValue, observerParamValue, upVectorParamValue);
	}
	native private static void transformKMLLookAtTag_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64_CVector3_CVector3_CVector3(long targetLatitude, long targetLongitude, double radius, long heading, long tilt, double range, long target, long observer, long upVector);
	public static void transformKMLLookAtTag(com.earthview.world.spatial.math.Degree targetLatitude, com.earthview.world.spatial.math.Degree targetLongitude, double radius, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double range, com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 upVector)
	{
		long targetLatitudeParamValue = targetLatitude.nativeObject.pointer;
		long targetLongitudeParamValue = targetLongitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double rangeParamValue = range;
		long targetParamValue = target.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long upVectorParamValue = upVector.nativeObject.pointer;
		transformKMLLookAtTag_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64_CVector3_CVector3_CVector3(targetLatitudeParamValue, targetLongitudeParamValue, radiusParamValue, headingParamValue, tiltParamValue, rangeParamValue, targetParamValue, observerParamValue, upVectorParamValue);
	}
	native private static void transformToCameraPostion_CVector3_CVector3_CVector3_double_double_double_double_double_double_double(long target, long observer, long up, double worldradius, long latitude, long longitude, long heading, long tilt, long altitude, long moditifAltitude);
	public static void transformToCameraPostion(com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 up, double worldradius, DoublePointer latitude, DoublePointer longitude, DoublePointer heading, DoublePointer tilt, DoublePointer altitude, DoublePointer moditifAltitude)
	{
		long targetParamValue = target.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long upParamValue = up.nativeObject.pointer;
		double worldradiusParamValue = worldradius;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long moditifAltitudeParamValue = moditifAltitude.nativeObject.pointer;
		transformToCameraPostion_CVector3_CVector3_CVector3_double_double_double_double_double_double_double(targetParamValue, observerParamValue, upParamValue, worldradiusParamValue, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, altitudeParamValue, moditifAltitudeParamValue);
	}
	native private static void transformToCameraPostion_CVector3_CVector3_CVector3_double_double_double_double_double_double_double_ev_real64(long target, long observer, long up, double worldradius, long latitude, long longitude, long heading, long tilt, long altitude, long moditifAltitude, long distance);
	public static void transformToCameraPostion(com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Vector3 observer, com.earthview.world.spatial.math.Vector3 up, double worldradius, DoublePointer latitude, DoublePointer longitude, DoublePointer heading, DoublePointer tilt, DoublePointer altitude, DoublePointer moditifAltitude, DoublePointer distance)
	{
		long targetParamValue = target.nativeObject.pointer;
		long observerParamValue = observer.nativeObject.pointer;
		long upParamValue = up.nativeObject.pointer;
		double worldradiusParamValue = worldradius;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long moditifAltitudeParamValue = moditifAltitude.nativeObject.pointer;
		long distanceParamValue = distance.nativeObject.pointer;
		transformToCameraPostion_CVector3_CVector3_CVector3_double_double_double_double_double_double_double_ev_real64(targetParamValue, observerParamValue, upParamValue, worldradiusParamValue, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, altitudeParamValue, moditifAltitudeParamValue, distanceParamValue);
	}
	public MathUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MathUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MathUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MathUtility obj = null;
 		if(baseObj instanceof MathUtility)
		{
			obj = (MathUtility)baseObj;
		} else {
			obj = new MathUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMathUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
