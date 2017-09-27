package com.earthview.world.spatial3d.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialCalculator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Utility::CSpatialCalculator", new SpatialCalculatorClassFactory());
	}

	public SpatialCalculator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CSpatialCalculator", null);
	}

	public enum EVAxisUpType implements INativeEnum<EVAxisUpType> {
		AUT_XAxisUP(EVAxisUpTypeHelper.ENUM_VALUES[0]),
		AUT_YAxisUP(EVAxisUpTypeHelper.ENUM_VALUES[1]),
		AUT_ZAxisUP(EVAxisUpTypeHelper.ENUM_VALUES[2]);
		private int value;
		EVAxisUpType(int i) {
			this.value = i;
		}
		public EVAxisUpType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVAxisUpType toEnum(int retval) {
			if(retval == AUT_XAxisUP.value){
				return AUT_XAxisUP;
			}
			else if(retval == AUT_YAxisUP.value){
				return AUT_YAxisUP;
			}
			else if(retval == AUT_ZAxisUP.value){
				return AUT_ZAxisUP;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVAxisUpTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	native private static boolean intersect_CRay_CViewport_CMatrix4_CVertexData_CIndexData_OperationType_CullingMode_CVector3(long ray, long viewport, long worldMatrix, long vData, long iData, int ot, int mode, long point);
	public static boolean intersect(com.earthview.world.spatial.math.Ray ray, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial.math.Matrix4 worldMatrix, com.earthview.world.graphic.VertexData vData, com.earthview.world.graphic.IndexData iData, com.earthview.world.graphic.RenderOperation.OperationType ot, com.earthview.world.graphic.CullingMode mode, com.earthview.world.spatial.math.Vector3 point)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		long vDataParamValue = (vData == null ? 0L : vData.nativeObject.pointer);
		long iDataParamValue = (iData == null ? 0L : iData.nativeObject.pointer);
		int otParamValue = ot.getValue();
		int modeParamValue = mode.getValue();
		long pointParamValue = point.nativeObject.pointer;
		boolean returnValue = intersect_CRay_CViewport_CMatrix4_CVertexData_CIndexData_OperationType_CullingMode_CVector3(rayParamValue, viewportParamValue, worldMatrixParamValue, vDataParamValue, iDataParamValue, otParamValue, modeParamValue, pointParamValue);
		return returnValue;
	}
	native private static long sphericalToCartesian_ev_real64_ev_real64_ev_real64(double latitude, double longitude, double radius);
	/**
	 * 由经纬度和地球半径计算出空间坐标
	 * @param latitude 纬度，单位为度
	 * @param longitude 经度，单位为度
	 * @param radius 点到球心的距离
	 * @return 空间坐标
	 */
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
	native private static long sphericalToCartesian_CRadian_CRadian_Real(long latitude, long longitude, double radius);
	/**
	 * 由经纬度和地球半径计算出空间坐标
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param radius 点到球心的距离
	 * @return 空间坐标
	 */
	public static com.earthview.world.spatial.math.Vector3 sphericalToCartesian(com.earthview.world.spatial.math.Radian latitude, com.earthview.world.spatial.math.Radian longitude, double radius)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long returnValue = sphericalToCartesian_CRadian_CRadian_Real(latitudeParamValue, longitudeParamValue, radiusParamValue);
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
	native private static long sphericalToCartesian_CDegree_CDegree_Real(long latitude, long longitude, double radius);
	/**
	 * 由经纬度和地球半径计算出空间坐标
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param radius 点到球心的距离
	 * @return 空间坐标
	 */
	public static com.earthview.world.spatial.math.Vector3 sphericalToCartesian(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double radius)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		double radiusParamValue = radius;
		long returnValue = sphericalToCartesian_CDegree_CDegree_Real(latitudeParamValue, longitudeParamValue, radiusParamValue);
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
	 * 笛卡尔坐标转极坐标
	 * @param EarthView::World::Spatial::Math::CVector3 笛卡尔坐标系坐标点
	 * @return 极坐标系x:点到球心的距离;y:纬度(单位为弧度);z:经度(单位为弧度)
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
	 * @return 球面上的距离，单位为弧度
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
	native private static double distance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double altA, double latB, double lonB, double altB);
	/**
	 * 空间两点求距离
	 * @param latA 第一个的点的纬度（度）
	 * @param lonA 第一个的点的经度（度）
	 * @param altA 第一个的高程（米）
	 * @param latB 第二个的点的纬度（度）
	 * @param lonB 第二个的点的经度（度）
	 * @param altB 第二个的高程（米）
	 * @return 空间距离,单位为米
	 */
	public static double distance(double latA, double lonA, double altA, double latB, double lonB, double altB)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double altAParamValue = altA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		double altBParamValue = altB;
		double returnValue = distance_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latAParamValue, lonAParamValue, altAParamValue, latBParamValue, lonBParamValue, altBParamValue);
		return returnValue;
	}
	native private static void getRotationAngleAxis_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(double latA, double lonA, double latB, double lonB, long frkAngle, long raxis);
	/**
	 * 球面上两点的矩离和两点的转轴
	 * @param latA 第一个的点的纬度（度）
	 * @param lonA 第一个的点的经度（度）
	 * @param latB 第二个的点的纬度（度）
	 * @param lonB 第二个的点的经度（度）
	 * @param ev_real64 两点的间距（弧度）
	 * @param raxis 转轴（已单位化）
	 */
	public static void getRotationAngleAxis(double latA, double lonA, double latB, double lonB, DoublePointer frkAngle, com.earthview.world.spatial.math.Vector3 raxis)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		long frkAngleParamValue = frkAngle.nativeObject.pointer;
		long raxisParamValue = raxis.nativeObject.pointer;
		getRotationAngleAxis_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CVector3(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, frkAngleParamValue, raxisParamValue);
	}
	native private static void ProjCoordinateToGeoCoordinate_ISpatialReference_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long sr, double in_x, double in_y, double in_z, long latitude, long longitude, long radius);
	/**
	 * 由投影坐标转换成地理坐标
	 * @param sr 空间参考系统参数
	 * @param in_x 东坐标(m)
	 * @param in_y 北坐标(m)
	 * @param in_z 高程(m)
	 * @param latitude 纬度(°)
	 * @param longitude 经度(°)
	 * @param radius 高程
	 * @return true表示成功
	 */
	public static void ProjCoordinateToGeoCoordinate(com.earthview.world.spatial.geometry.Ispatialreference sr, double in_x, double in_y, double in_z, DoublePointer latitude, DoublePointer longitude, DoublePointer radius)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		double in_xParamValue = in_x;
		double in_yParamValue = in_y;
		double in_zParamValue = in_z;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long radiusParamValue = radius.nativeObject.pointer;
		ProjCoordinateToGeoCoordinate_ISpatialReference_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(srParamValue, in_xParamValue, in_yParamValue, in_zParamValue, latitudeParamValue, longitudeParamValue, radiusParamValue);
	}
	native private static void ProjCoordinateToGeoCoordinate_ISpatialReference_ev_real64_ev_real64_ev_real64(long sr, long x, long y, long z);
	/**
	 * 由投影坐标转换成地理坐标
	 * @param sr 空间参考系统参数
	 * @param x 东坐标
	 * @param y 北坐标
	 * @param z 高程
	 * @return true表示成功
	 */
	public static void ProjCoordinateToGeoCoordinate(com.earthview.world.spatial.geometry.Ispatialreference sr, DoublePointer x, DoublePointer y, DoublePointer z)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long xParamValue = x.nativeObject.pointer;
		long yParamValue = y.nativeObject.pointer;
		long zParamValue = z.nativeObject.pointer;
		ProjCoordinateToGeoCoordinate_ISpatialReference_ev_real64_ev_real64_ev_real64(srParamValue, xParamValue, yParamValue, zParamValue);
	}
	native private static void ProjCoordinateToGeoCoordinate_ISpatialReference_ev_uint32_ev_real64_ev_real64_ev_real64(long sr, long nCount, long pdfX, long pdfY, long pdfZ);
	/**
	 * 由投影坐标转换成地理坐标
	 * @param sr 空间参考系统参数
	 * @param nCount 坐标个数
	 * @param pdfX 东坐标
	 * @param pdfY 北坐标
	 * @param pdfZ 高程
	 * @return true表示成功
	 */
	public static void ProjCoordinateToGeoCoordinate(com.earthview.world.spatial.geometry.Ispatialreference sr, long nCount, DoublePointer pdfX, DoublePointer pdfY, DoublePointer pdfZ)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long nCountParamValue = nCount;
		long pdfXParamValue = (pdfX == null ? 0L : pdfX.nativeObject.pointer);
		long pdfYParamValue = (pdfY == null ? 0L : pdfY.nativeObject.pointer);
		long pdfZParamValue = (pdfZ == null ? 0L : pdfZ.nativeObject.pointer);
		ProjCoordinateToGeoCoordinate_ISpatialReference_ev_uint32_ev_real64_ev_real64_ev_real64(srParamValue, nCountParamValue, pdfXParamValue, pdfYParamValue, pdfZParamValue);
	}
	native private static void geoCoordinateToProjCoordinate_CVector3_CVector3_ISpatialReference(long srcCoordinate, long resCoordinate, long sr);
	/**
	 * 地理坐标转投影坐标，相同椭球体
	 * @param srcCoordinate 源地理坐标
	 * @param resCoordinate 目标投影坐标
	 * @param sr 目标参考
	 */
	public static void geoCoordinateToProjCoordinate(com.earthview.world.spatial.math.Vector3 srcCoordinate, com.earthview.world.spatial.math.Vector3 resCoordinate, com.earthview.world.spatial.geometry.Ispatialreference sr)
	{
		long srcCoordinateParamValue = srcCoordinate.nativeObject.pointer;
		long resCoordinateParamValue = resCoordinate.nativeObject.pointer;
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		geoCoordinateToProjCoordinate_CVector3_CVector3_ISpatialReference(srcCoordinateParamValue, resCoordinateParamValue, srParamValue);
	}
	native private static void coordinateToCartesian_ISpatialReference_CVector3_CVector3(long sr, long srcCoordinate, long resCoordinate);
	/**
	 * 地理坐标或投影坐标转换为笛卡尔坐标
	 * @param sr 空间参考
	 * @param srcCoordinate 源坐标
	 * @param resCoordinate 目标坐标
	 * @return 三维图形转换信息
	 */
	public static void coordinateToCartesian(com.earthview.world.spatial.geometry.Ispatialreference sr, com.earthview.world.spatial.math.Vector3 srcCoordinate, com.earthview.world.spatial.math.Vector3 resCoordinate)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long srcCoordinateParamValue = srcCoordinate.nativeObject.pointer;
		long resCoordinateParamValue = resCoordinate.nativeObject.pointer;
		coordinateToCartesian_ISpatialReference_CVector3_CVector3(srParamValue, srcCoordinateParamValue, resCoordinateParamValue);
	}
	native private static void cartensionToCoordinate_ISpatialReference_CVector3_CVector3(long sr, long srcCoordinate, long resCoordinate);
	/**
	 * 笛卡尔坐标转地理坐标或投影坐标
	 * @param sr 参考
	 * @param srcCoordinate 源坐标
	 * @param resCoordinate 目标坐标
	 * @return 三维图形转换信息
	 */
	public static void cartensionToCoordinate(com.earthview.world.spatial.geometry.Ispatialreference sr, com.earthview.world.spatial.math.Vector3 srcCoordinate, com.earthview.world.spatial.math.Vector3 resCoordinate)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long srcCoordinateParamValue = srcCoordinate.nativeObject.pointer;
		long resCoordinateParamValue = resCoordinate.nativeObject.pointer;
		cartensionToCoordinate_ISpatialReference_CVector3_CVector3(srParamValue, srcCoordinateParamValue, resCoordinateParamValue);
	}
	native private static boolean calculateIntersection_CVector3_CVector3_CVector3_CVector3(long node0, long node1, long node2, long node3);
	/**
	 * 判断两条线段是否相交，不包含边界，输入点为经纬度坐标
	 * @param node0 线段1端点,地理坐标
	 * @param node1 线段1端点,地理坐标
	 * @param node2 线段2端点,地理坐标
	 * @param node3 线段2端点,地理坐标
	 * @return 两条线段是否相交
	 */
	public static boolean calculateIntersection(com.earthview.world.spatial.math.Vector3 node0, com.earthview.world.spatial.math.Vector3 node1, com.earthview.world.spatial.math.Vector3 node2, com.earthview.world.spatial.math.Vector3 node3)
	{
		long node0ParamValue = node0.nativeObject.pointer;
		long node1ParamValue = node1.nativeObject.pointer;
		long node2ParamValue = node2.nativeObject.pointer;
		long node3ParamValue = node3.nativeObject.pointer;
		boolean returnValue = calculateIntersection_CVector3_CVector3_CVector3_CVector3(node0ParamValue, node1ParamValue, node2ParamValue, node3ParamValue);
		return returnValue;
	}
	native private static double approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);
	/**
	 * 由两点间的经纬度计算出两点的圆心的夹角
	 * @param latA 第一点的纬度，角度制
	 * @param lonA 第一点的经度，角度制
	 * @param latB 第二点的纬度，角度制
	 * @param lonB 第二点的经度，角度制
	 * @return 两点间圆心角的大小，弧度制
	 */
	public static double approxAngularDistance(double latA, double lonA, double latB, double lonB)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		double returnValue = approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
		return returnValue;
	}
	native private static double interpolate_CVector3_VertexList_ev_int32(long point, long arry, int power);
	/**
	 * 反距离权重插值
	 * @param point 需要插值的点
	 * @param arry 离计算点最近的插值点
	 * @param power 采用的幂次方
	 * @return 插值结果值
	 */
	public static double interpolate(com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.VertexList arry, int power)
	{
		long pointParamValue = point.nativeObject.pointer;
		long arryParamValue = arry.nativeObject.pointer;
		int powerParamValue = power;
		double returnValue = interpolate_CVector3_VertexList_ev_int32(pointParamValue, arryParamValue, powerParamValue);
		return returnValue;
	}
	native private static long composeWorldMatrix_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(double lat, double lon, double alt, long scaleInLocal, long orientInLocal);
	public static com.earthview.world.spatial.math.Matrix4 composeWorldMatrix(double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 scaleInLocal, com.earthview.world.spatial.math.Quaternion orientInLocal)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long scaleInLocalParamValue = scaleInLocal.nativeObject.pointer;
		long orientInLocalParamValue = orientInLocal.nativeObject.pointer;
		long returnValue = composeWorldMatrix_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(latParamValue, lonParamValue, altParamValue, scaleInLocalParamValue, orientInLocalParamValue);
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
	native private static void decomposeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(long worldMatrix, long lat, long lon, long alt, long scaleInLocal, long orientInLocal);
	public static void decomposeWorldMatrix(com.earthview.world.spatial.math.Matrix4 worldMatrix, DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 scaleInLocal, com.earthview.world.spatial.math.Quaternion orientInLocal)
	{
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		long scaleInLocalParamValue = scaleInLocal.nativeObject.pointer;
		long orientInLocalParamValue = orientInLocal.nativeObject.pointer;
		decomposeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(worldMatrixParamValue, latParamValue, lonParamValue, altParamValue, scaleInLocalParamValue, orientInLocalParamValue);
	}
	native private static long composeWorldMatrix_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(double lat, double lon, double alt, long scaleInLocal, long orientInLocal, int axisUpType);
	public static com.earthview.world.spatial.math.Matrix4 composeWorldMatrix(double lat, double lon, double alt, com.earthview.world.spatial.math.Vector3 scaleInLocal, com.earthview.world.spatial.math.Quaternion orientInLocal, com.earthview.world.spatial3d.utility.SpatialCalculator.EVAxisUpType axisUpType)
	{
		double latParamValue = lat;
		double lonParamValue = lon;
		double altParamValue = alt;
		long scaleInLocalParamValue = scaleInLocal.nativeObject.pointer;
		long orientInLocalParamValue = orientInLocal.nativeObject.pointer;
		int axisUpTypeParamValue = axisUpType.getValue();
		long returnValue = composeWorldMatrix_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(latParamValue, lonParamValue, altParamValue, scaleInLocalParamValue, orientInLocalParamValue, axisUpTypeParamValue);
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
	native private static void decomposeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(long worldMatrix, long lat, long lon, long alt, long scaleInLocal, long orientInLocal, int axisUpType);
	public static void decomposeWorldMatrix(com.earthview.world.spatial.math.Matrix4 worldMatrix, DoublePointer lat, DoublePointer lon, DoublePointer alt, com.earthview.world.spatial.math.Vector3 scaleInLocal, com.earthview.world.spatial.math.Quaternion orientInLocal, com.earthview.world.spatial3d.utility.SpatialCalculator.EVAxisUpType axisUpType)
	{
		long worldMatrixParamValue = worldMatrix.nativeObject.pointer;
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long altParamValue = alt.nativeObject.pointer;
		long scaleInLocalParamValue = scaleInLocal.nativeObject.pointer;
		long orientInLocalParamValue = orientInLocal.nativeObject.pointer;
		int axisUpTypeParamValue = axisUpType.getValue();
		decomposeWorldMatrix_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_EVAxisUpType(worldMatrixParamValue, latParamValue, lonParamValue, altParamValue, scaleInLocalParamValue, orientInLocalParamValue, axisUpTypeParamValue);
	}
	native private static double visibleDistance_CVector3(long vCamera);
	/**
	 * 球面视距计算(目的:剔除海平面以下的物体)/----------------d=/h^2+2hr(h>0)\/
	 * @param vCamera 相机向量
	 * @return 当前镜头高度下的视距
	 */
	public static double visibleDistance(com.earthview.world.spatial.math.Vector3 vCamera)
	{
		long vCameraParamValue = vCamera.nativeObject.pointer;
		double returnValue = visibleDistance_CVector3(vCameraParamValue);
		return returnValue;
	}
	native private static long envelope2Box_ISpatialReference_IEnvelope_ev_real64_ev_real64_ev_real64(long sr, long pEnvelope, double minz, double maxz, double ex);
	///{
	///	ev_real64 rCam= sqrt(vCamera.x *vCamera.x + vCamera.y* vCamera.y + vCamera.z * vCamera.z);
	///	Real height = rCam - EV_EARTHRADIUS;
	///	return visableDistance(height,EV_EARTHRADIUS);
	///}
	///static inline Real visableDistance(Real h, Real r)
	///{
	///	if(h > 0)
	///		return sqrt(h * h + 2 * h * r);
	///	else
	///		return 0.0;
	///}
	public static com.earthview.world.spatial.math.AxisAlignedBox envelope2Box(com.earthview.world.spatial.geometry.Ispatialreference sr, com.earthview.world.spatial.geometry.Ienvelope pEnvelope, double minz, double maxz, double ex)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		double minzParamValue = minz;
		double maxzParamValue = maxz;
		double exParamValue = ex;
		long returnValue = envelope2Box_ISpatialReference_IEnvelope_ev_real64_ev_real64_ev_real64(srParamValue, pEnvelopeParamValue, minzParamValue, maxzParamValue, exParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private static long envelope2Box_ISpatialReference_IEnvelope_ev_real64_ev_real64(long sr, long pEnvelope, double minz, double maxz);
	public static com.earthview.world.spatial.math.AxisAlignedBox envelope2Box(com.earthview.world.spatial.geometry.Ispatialreference sr, com.earthview.world.spatial.geometry.Ienvelope pEnvelope, double minz, double maxz)
	{
		long srParamValue = (sr == null ? 0L : sr.nativeObject.pointer);
		long pEnvelopeParamValue = (pEnvelope == null ? 0L : pEnvelope.nativeObject.pointer);
		double minzParamValue = minz;
		double maxzParamValue = maxz;
		long returnValue = envelope2Box_ISpatialReference_IEnvelope_ev_real64_ev_real64(srParamValue, pEnvelopeParamValue, minzParamValue, maxzParamValue);
		com.earthview.world.spatial.math.AxisAlignedBox __returnValue = new com.earthview.world.spatial.math.AxisAlignedBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.AxisAlignedBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CAxisAlignedBox");
		}
		return __returnValue;
	}
	native private static boolean upwardsHorizon_CVector3_CVector3(long vCamera, long vPoint);
	public static boolean upwardsHorizon(com.earthview.world.spatial.math.Vector3 vCamera, com.earthview.world.spatial.math.Vector3 vPoint)
	{
		long vCameraParamValue = vCamera.nativeObject.pointer;
		long vPointParamValue = vPoint.nativeObject.pointer;
		boolean returnValue = upwardsHorizon_CVector3_CVector3(vCameraParamValue, vPointParamValue);
		return returnValue;
	}
	native private static boolean getGeometryCenter_IGeometry_CVector3(long geometry, long center);
	/**
	 * 获取geometry中心点
	 * @param geometry geometry
	 * @param center 中心点，坐标系同geometry
	 * @return 正确获取
	 */
	public static boolean getGeometryCenter(com.earthview.world.spatial.geometry.Igeometry geometry, com.earthview.world.spatial.math.Vector3 center)
	{
		long geometryParamValue = (geometry == null ? 0L : geometry.nativeObject.pointer);
		long centerParamValue = center.nativeObject.pointer;
		boolean returnValue = getGeometryCenter_IGeometry_CVector3(geometryParamValue, centerParamValue);
		return returnValue;
	}
	public SpatialCalculator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SpatialCalculator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SpatialCalculator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SpatialCalculator obj = null;
 		if(baseObj instanceof SpatialCalculator)
		{
			obj = (SpatialCalculator)baseObj;
		} else {
			obj = new SpatialCalculator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSpatialCalculator");
			obj.increaseCast();
		}

		return obj;
	}
}
