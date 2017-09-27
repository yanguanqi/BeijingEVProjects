package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维分析、三维测量算法类,为提高算法精度，均以EarthView::World::Spatial::Math::CVector3点为计算static函数算法不带高程非static函数带高程，需要重载获取高程函数
 */
public class MathUtility3D extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMathUtility3D", new MathUtility3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMathUtility3DProxy", new MathUtility3DClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public MathUtility3D() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMathUtility3DProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.MathUtility3D".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getAltitudeListener_void_callback()
	{
		com.earthview.world.spatial3d.analysis.Altitude3DListener returnValue = getAltitudeListener();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getAltitudeListener_void(long pNativeObject);
	/**
	 * 获取高程控件指针
	 * @param  
	 * @return 高程控件
	 */
	public com.earthview.world.spatial3d.analysis.Altitude3DListener getAltitudeListener()
	{
		long returnValue = getAltitudeListener_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Altitude3DListener __returnValue = new com.earthview.world.spatial3d.analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate, "CAltitude3DListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Altitude3DListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAltitude3DListener");
		}
		return __returnValue;
	}
	native private long getAltitudeListener_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.analysis.Altitude3DListener getAltitudeListener_NoVirtual()
	{
		long returnValue = getAltitudeListener_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.analysis.Altitude3DListener __returnValue = new com.earthview.world.spatial3d.analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate, "CAltitude3DListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.analysis.Altitude3DListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAltitude3DListener");
		}
		return __returnValue;
	}

	protected  void setAltitudeListener_CAltitude3DListener_callback(long ref_pListener)
	{
		com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListenerParamValue = (ref_pListener == 0L ? null : new com.earthview.world.spatial3d.analysis.Altitude3DListener(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_pListenerParamValue != null)
		{
		ref_pListenerParamValue.setDelegate(true);
		ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		IClassFactory ref_pListenerParamValueClassFactory = GlobalClassFactoryMap.get(ref_pListenerParamValue.getCppInstanceTypeName());
		if (ref_pListenerParamValueClassFactory != null)
		{
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue = (com.earthview.world.spatial3d.analysis.Altitude3DListener)ref_pListenerParamValueClassFactory.create();
			ref_pListenerParamValue.setDelegate(true);
			ref_pListenerParamValue.setInstancePointer(new InstancePointer(ref_pListener));
		}
		}
		setAltitudeListener(ref_pListenerParamValue);
	}

	native private void setAltitudeListener_CAltitude3DListener(long pNativeObject, long ref_pListener);
	/**
	 * 设置高程控件指针
	 * @param pListener 高程控件
	 */
	public void setAltitudeListener(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		setAltitudeListener_CAltitude3DListener(this.nativeObject.pointer, ref_pListenerParamValue);
	}
	native private void setAltitudeListener_CAltitude3DListener_NoVirtual(long pNativeObject, long ref_pListener);
	protected void setAltitudeListener_NoVirtual(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListener)
	{
		long ref_pListenerParamValue = (ref_pListener == null ? 0L : ref_pListener.nativeObject.pointer);
		setAltitudeListener_CAltitude3DListener_NoVirtual(this.nativeObject.pointer, ref_pListenerParamValue);
	}

	native private boolean getNeedStop_void(long pNativeObject);
	/**
	 * 是否中断了计算
	 * @return 是否停止计算
	 */
	public boolean getNeedStop()
	{
		boolean returnValue = getNeedStop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNeedStop_ev_bool(long pNativeObject, boolean value);
	/**
	 * 中断计算
	 * @param value 是否停止计算
	 */
	public void setNeedStop(boolean value)
	{
		boolean valueParamValue = value;
		setNeedStop_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private int getProgressV_void(long pNativeObject);
	/**
	 * 获取计算进度值
	 * @return 计算进度值
	 */
	public int getProgressV()
	{
		int returnValue = getProgressV_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getProgressM_void(long pNativeObject);
	/**
	 * 获取进度值的最大值
	 * @return 进度值的最大值
	 */
	public int getProgressM()
	{
		int returnValue = getProgressM_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setProgressV_ev_int32_ev_int32(long pNativeObject, int progressV, int progressM);
	/**
	 * 设置进度值及进度值的最大值
	 * @param progressV 进度值
	 * @param progressM 进度值的最大值
	 */
	public void setProgressV(int progressV, int progressM)
	{
		int progressVParamValue = progressV;
		int progressMParamValue = progressM;
		setProgressV_ev_int32_ev_int32(this.nativeObject.pointer, progressVParamValue, progressMParamValue);
	}
	native private static long sphericalToCartesian_ev_real32_ev_real32_ev_real32(float latitude, float longitude, float radius);
	/**
	 * 由经纬度和半径计算出空间坐标
	 * @param latitude 纬度，单位为度
	 * @param longitude 经度，单位为度
	 * @param radius 半径
	 * @return 空间坐标
	 */
	public static com.earthview.world.spatial.math.Vector3 sphericalToCartesian(float latitude, float longitude, float radius)
	{
		float latitudeParamValue = latitude;
		float longitudeParamValue = longitude;
		float radiusParamValue = radius;
		long returnValue = sphericalToCartesian_ev_real32_ev_real32_ev_real32(latitudeParamValue, longitudeParamValue, radiusParamValue);
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
	native private static long sphericalToCartesian_ev_real64_ev_real64_ev_real64(double latitude, double longitude, double radius);
	/**
	 * 由经纬度和半径计算出空间坐标
	 * @param latitude 纬度，单位为度
	 * @param longitude 经度，单位为度
	 * @param radius 半径
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
	native private static int mod_ev_int32_ev_int32(int i, int n);
	/**
	 * 计算i对应n范围内的值
	 * @param i i的值
	 * @param n n的值
	 * @return i对应n范围内的值
	 */
	public static int mod(int i, int n)
	{
		int iParamValue = i;
		int nParamValue = n;
		int returnValue = mod_ev_int32_ev_int32(iParamValue, nParamValue);
		return returnValue;
	}
	native private void calculateInsertNum_CVector3_CVector3_ev_real64_ev_uint32_ev_uint32(long pNativeObject, long pointA, long pointB, double givenInterval, long givenInsertNum, long suggestInsertNum);
	/**
	 * 根据空间两点距离计算采样点个数
	 * @param pointA 顶点A（经度，纬度，高程）,地理坐标
	 * @param pointB 顶点B（经度，纬度，高程）,地理坐标
	 * @param givenInterval 给定的插值间隔距离
	 * @param givenInsertNum 根据给定的插值间隔距离计算出的插值个数
	 * @param suggestInsertNum 建议的插值个数
	 */
	public void calculateInsertNum(com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB, double givenInterval, UIntegerPointer givenInsertNum, UIntegerPointer suggestInsertNum)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		double givenIntervalParamValue = givenInterval;
		long givenInsertNumParamValue = givenInsertNum.nativeObject.pointer;
		long suggestInsertNumParamValue = suggestInsertNum.nativeObject.pointer;
		calculateInsertNum_CVector3_CVector3_ev_real64_ev_uint32_ev_uint32(this.nativeObject.pointer, pointAParamValue, pointBParamValue, givenIntervalParamValue, givenInsertNumParamValue, suggestInsertNumParamValue);
	}
	native private static boolean isDeasil_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB, double latC, double lonC);
	/**
	 * 判断三角形三个点顺序是否为顺时针
	 * @param latA 第一个点纬度
	 * @param lonA 第一个点经度
	 * @param latB 第二个点纬度
	 * @param lonB 第二个点经度
	 * @param latC 第三个点纬度
	 * @param lonC 第三个点经度
	 * @return 三个点顺序是否为顺时针
	 */
	public static boolean isDeasil(double latA, double lonA, double latB, double lonB, double latC, double lonC)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		double latCParamValue = latC;
		double lonCParamValue = lonC;
		boolean returnValue = isDeasil_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, latCParamValue, lonCParamValue);
		return returnValue;
	}
	native private static boolean isInPolygon_VertexList_CVector3(long inList, long node);
	/**
	 * 判断一点是否在多边形内部
	 * @param list 多边形各个闭合边界顶点(经度,纬度,0)数组的列表
	 * @param node 判断的点，地理坐标(经度,纬度,0)
	 * @return 点是否在多边形内部
	 */
	public static boolean isInPolygon(com.earthview.world.spatial.math.VertexList inList, com.earthview.world.spatial.math.Vector3 node)
	{
		long inListParamValue = inList.nativeObject.pointer;
		long nodeParamValue = node.nativeObject.pointer;
		boolean returnValue = isInPolygon_VertexList_CVector3(inListParamValue, nodeParamValue);
		return returnValue;
	}
	native private static boolean isDiagonal_VertexList_ev_int32_ev_int32(long list, int i0, int i1);
	/**
	 * 判断线段是否为多边形内的对角线
	 * @param list 多边形顶点(经度,纬度,0)列表
	 * @param i0 线段的顶点0索引
	 * @param i1 线段的顶点1索引
	 * @return 线段是否为多边形内的对角线
	 */
	public static boolean isDiagonal(com.earthview.world.spatial.math.VertexList list, int i0, int i1)
	{
		long listParamValue = list.nativeObject.pointer;
		int i0ParamValue = i0;
		int i1ParamValue = i1;
		boolean returnValue = isDiagonal_VertexList_ev_int32_ev_int32(listParamValue, i0ParamValue, i1ParamValue);
		return returnValue;
	}
	native private static boolean isTriangulable_VertexList(long pointList);
	/**
	 * 多边形是否可以剖分（非自相交）
	 * @param pointList 多边形顶点(经度,纬度,0)列表
	 * @return 多边形是否可以剖分
	 */
	public static boolean isTriangulable(com.earthview.world.spatial.math.VertexList pointList)
	{
		long pointListParamValue = pointList.nativeObject.pointer;
		boolean returnValue = isTriangulable_VertexList(pointListParamValue);
		return returnValue;
	}
	native private static int getEffectAddPoint_VertexList_CVector3_ev_bool(long pointList, long point, boolean isMoved);
	/**
	 * 获取多边形形成过程中，新加点对原来没有永久自相交多边形的影响
	 * @param pointList 原多边形顶点地理坐标列表
	 * @param point 新加点地理坐标
	 * @param isMoved 新加的点是否为移动点，即只判断是否自相交
	 * @return 0:无相交，1:临时自相交，2:永久自相交
	 */
	public static int getEffectAddPoint(com.earthview.world.spatial.math.VertexList pointList, com.earthview.world.spatial.math.Vector3 point, boolean isMoved)
	{
		long pointListParamValue = pointList.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		boolean isMovedParamValue = isMoved;
		int returnValue = getEffectAddPoint_VertexList_CVector3_ev_bool(pointListParamValue, pointParamValue, isMovedParamValue);
		return returnValue;
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
	native private static long calcuInterGeoPositionWithoutAltitude_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(float f, double latA, double lonA, double latB, double lonB);
	/**
	 * 空间插值,通过首尾两点的经纬度计算,由f来控制此点的次序，f=n/N;在0~1之间输出对应插值的地理坐标（经度，纬度，0）。
	 * @param f 
	 * @param latA 首点纬度,角度值
	 * @param lonA 首点经度,角度值
	 * @param latB 尾点纬度,角度值
	 * @param lonB 尾点经度,角度值
	 * @return 插值的Vector3d（经度，纬度，0）
	 */
	public static com.earthview.world.spatial.math.Vector3 calcuInterGeoPositionWithoutAltitude(float f, double latA, double lonA, double latB, double lonB)
	{
		float fParamValue = f;
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		long returnValue = calcuInterGeoPositionWithoutAltitude_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(fParamValue, latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
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
	native private static long calcuInterWorldPositionWithoutAltitude_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(float f, double latA, double lonA, double latB, double lonB);
	/**
	 * 空间插值,通过首尾两点的经纬度计算,由f来控制此点的次序，f=n/N;在0~1之间输出对应插值的世界坐标。
	 * @param f 
	 * @param latA 首点纬度,角度值
	 * @param lonA 首点经度,角度值
	 * @param latB 尾点纬度,角度值
	 * @param lonB 尾点经度,角度值
	 * @return 插值的世界坐标
	 */
	public static com.earthview.world.spatial.math.Vector3 calcuInterWorldPositionWithoutAltitude(float f, double latA, double lonA, double latB, double lonB)
	{
		float fParamValue = f;
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		long returnValue = calcuInterWorldPositionWithoutAltitude_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(fParamValue, latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
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
	native private long calcuInterGeoPosition_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, float f, double latA, double lonA, double latB, double lonB);
	/**
	 * 计算两地理坐标点间的任一点
	 * @param f 在线段间位置的百分比
	 * @param latA 点A纬度
	 * @param lonA 点A经度
	 * @param latB 点B纬度
	 * @param lonB 点B经度
	 * @return 点坐标
	 */
	public com.earthview.world.spatial.math.Vector3 calcuInterGeoPosition(float f, double latA, double lonA, double latB, double lonB)
	{
		float fParamValue = f;
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		long returnValue = calcuInterGeoPosition_ev_real32_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, fParamValue, latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
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
	native private static double azimuth_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);
	/**
	 * 给定两点经纬度计算方位角（正北方向偏角）
	 * @param latA A点纬度,角度值
	 * @param lonA A点经度,角度值
	 * @param latB B点纬度,角度值
	 * @param lonB B点经度,角度值
	 * @return 方位角,弧度制
	 */
	public static double azimuth(double latA, double lonA, double latB, double lonB)
	{
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		double returnValue = azimuth_ev_real64_ev_real64_ev_real64_ev_real64(latAParamValue, lonAParamValue, latBParamValue, lonBParamValue);
		return returnValue;
	}
	native private static double approxAngularDistance_ev_real64_ev_real64_ev_real64_ev_real64(double latA, double lonA, double latB, double lonB);
	/**
	 * 由两点间的经纬度计算出两点的圆心的夹角
	 * @param latA 第一点的纬度，角度值
	 * @param lonA 第一点的经度，角度值
	 * @param latB 第二点的纬度，角度值
	 * @param lonB 第二点的经度，角度值
	 * @return 两点间圆心角的大小，角度值
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
	native private static double lineStraightMeasure_CVector3_CVector3(long pointStart, long pointEnd);
	/**
	 * 计算两世界坐标点之间的直线距离
	 * @param pointStart 顶点（世界坐标）
	 * @param pointEnd 顶点（世界坐标）
	 * @return 直线距离
	 */
	public static double lineStraightMeasure(com.earthview.world.spatial.math.Vector3 pointStart, com.earthview.world.spatial.math.Vector3 pointEnd)
	{
		long pointStartParamValue = pointStart.nativeObject.pointer;
		long pointEndParamValue = pointEnd.nativeObject.pointer;
		double returnValue = lineStraightMeasure_CVector3_CVector3(pointStartParamValue, pointEndParamValue);
		return returnValue;
	}
	native private static double lineProjectMeasure_CVector3_CVector3(long point0, long point1);
	/**
	 * 计算两点的投影距离，球体大圆的一部分
	 * @param point0 顶点（经度，纬度，0）
	 * @param point1 顶点（经度，纬度，0）
	 * @return 投影距离
	 */
	public static double lineProjectMeasure(com.earthview.world.spatial.math.Vector3 point0, com.earthview.world.spatial.math.Vector3 point1)
	{
		long point0ParamValue = point0.nativeObject.pointer;
		long point1ParamValue = point1.nativeObject.pointer;
		double returnValue = lineProjectMeasure_CVector3_CVector3(point0ParamValue, point1ParamValue);
		return returnValue;
	}
	native private double geoLineDistanceMeasure_CVector3_CVector3(long pNativeObject, long pointA, long pointB);
	/**
	 * 计算两地理坐标点间的贴地距离，不插值
	 * @param point0 顶点（经度，纬度，高程）
	 * @param point1 顶点（经度，纬度，高程）
	 * @return 贴地距离
	 */
	public double geoLineDistanceMeasure(com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		double returnValue = geoLineDistanceMeasure_CVector3_CVector3(this.nativeObject.pointer, pointAParamValue, pointBParamValue);
		return returnValue;
	}
	native private double geoLineDistanceMeasure_CVector3_CVector3_ev_int32(long pNativeObject, long pointA, long pointB, int number);
	/**
	 * 计算两地理坐标点间的贴地距离，可控制插值个数
	 * @param point0 顶点（经度，纬度，高程）,地理坐标
	 * @param point1 顶点（经度，纬度，高程）,地理坐标
	 * @param num 拆分线段的插值个数,1表示两点间距离
	 * @return 贴地距离
	 */
	public double geoLineDistanceMeasure(com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB, int number)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		int numberParamValue = number;
		double returnValue = geoLineDistanceMeasure_CVector3_CVector3_ev_int32(this.nativeObject.pointer, pointAParamValue, pointBParamValue, numberParamValue);
		return returnValue;
	}
	native private static boolean triangulate_VertexList_VertexList(long nodeList, long pointList);
	/**
	 * 三角剖分函数
	 * @param NodeList 多边形顶点列表，地理坐标(经度,纬度,0)
	 * @param PointList 拆分后各三角形顶点列表(地理坐标)
	 * @return 是否剖分成功
	 */
	public static boolean triangulate(com.earthview.world.spatial.math.VertexList nodeList, com.earthview.world.spatial.math.VertexList pointList)
	{
		long nodeListParamValue = nodeList.nativeObject.pointer;
		long pointListParamValue = pointList.nativeObject.pointer;
		boolean returnValue = triangulate_VertexList_VertexList(nodeListParamValue, pointListParamValue);
		return returnValue;
	}
	native private void splitTriangle2GeoPosition_ev_int32_VertexList_ev_bool_VertexList_ev_int32_ev_int32(long pNativeObject, int num, long nodeList, boolean isGetAlti, long outPoints, long maxAltiIndex, long minAltiIndex);
	/**
	 * 分割三角形为若干小相似三角形，输出分割后小三角形各顶点
	 * @param num 每条边要分割的段数
	 * @param nodeList 三角形三个顶点（经度，纬度，高程）
	 * @param isGetAlti 是否获取高程
	 * @param outPoints 地理坐标列表（经度，纬度，高程）
	 * @param maxAltiIndex 最大高程索引
	 * @param minAltiIndex 最小高程索引
	 */
	public void splitTriangle2GeoPosition(int num, com.earthview.world.spatial.math.VertexList nodeList, boolean isGetAlti, com.earthview.world.spatial.math.VertexList outPoints, IntegerPointer maxAltiIndex, IntegerPointer minAltiIndex)
	{
		int numParamValue = num;
		long nodeListParamValue = nodeList.nativeObject.pointer;
		boolean isGetAltiParamValue = isGetAlti;
		long outPointsParamValue = outPoints.nativeObject.pointer;
		long maxAltiIndexParamValue = maxAltiIndex.nativeObject.pointer;
		long minAltiIndexParamValue = minAltiIndex.nativeObject.pointer;
		splitTriangle2GeoPosition_ev_int32_VertexList_ev_bool_VertexList_ev_int32_ev_int32(this.nativeObject.pointer, numParamValue, nodeListParamValue, isGetAltiParamValue, outPointsParamValue, maxAltiIndexParamValue, minAltiIndexParamValue);
	}
	native private void splitTriang2Indices_ev_int32_IntVector(long pNativeObject, int num, long indices);
	/**
	 * 三角形按照确定数目拆分后为所有小三角形建立索引，与splitTriangle2GeoPosition配套使用
	 * @param num 每条边拆分的个数
	 * @param indices 索引数组
	 */
	public void splitTriang2Indices(int num, com.earthview.world.core.IntVector indices)
	{
		int numParamValue = num;
		long indicesParamValue = indices.nativeObject.pointer;
		splitTriang2Indices_ev_int32_IntVector(this.nativeObject.pointer, numParamValue, indicesParamValue);
	}
	native private static double triangleAreaMeasure_CVector3_CVector3_CVector3(long pointA, long pointB, long pointC);
	/**
	 * 直接计算三角形平面面积，不进行拆分
	 * @param pointA 三角形顶点（世界坐标）
	 * @param pointB 三角形顶点（世界坐标）
	 * @param pointC 三角形顶点（世界坐标）
	 * @return 三角形平面面积
	 */
	public static double triangleAreaMeasure(com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB, com.earthview.world.spatial.math.Vector3 pointC)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		long pointCParamValue = pointC.nativeObject.pointer;
		double returnValue = triangleAreaMeasure_CVector3_CVector3_CVector3(pointAParamValue, pointBParamValue, pointCParamValue);
		return returnValue;
	}
	native private static double triangleProjectMeasure_CVector3_CVector3_CVector3(long pointA, long pointB, long pointC);
	/**
	 * 计算三角形投影到球体上的面积根据范围的不同判断是否需要使用球面面积计算或者平面面积计算
	 * @param pointA 顶点（经度，纬度，0）
	 * @param pointB 顶点（经度，纬度，0）
	 * @param pointC 顶点（经度，纬度，0）
	 * @return 投影面积
	 */
	public static double triangleProjectMeasure(com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB, com.earthview.world.spatial.math.Vector3 pointC)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		long pointCParamValue = pointC.nativeObject.pointer;
		double returnValue = triangleProjectMeasure_CVector3_CVector3_CVector3(pointAParamValue, pointBParamValue, pointCParamValue);
		return returnValue;
	}
	native private double spiltTriangleSurfaceMeasure_CVector3_CVector3_CVector3_ev_int32(long pNativeObject, long pointA, long pointB, long pointC, int insertNum);
	/**
	 * 计算三角形区域地表贴地面积,可控制计算精度
	 * @param pointA 顶点（经度，纬度，0）
	 * @param pointB 顶点（经度，纬度，0）
	 * @param pointC 顶点（经度，纬度，0）
	 * @param insertNum 每条边的插值个数
	 * @return 三角形区域地表贴地面积
	 */
	public double spiltTriangleSurfaceMeasure(com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB, com.earthview.world.spatial.math.Vector3 pointC, int insertNum)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		long pointCParamValue = pointC.nativeObject.pointer;
		int insertNumParamValue = insertNum;
		double returnValue = spiltTriangleSurfaceMeasure_CVector3_CVector3_CVector3_ev_int32(this.nativeObject.pointer, pointAParamValue, pointBParamValue, pointCParamValue, insertNumParamValue);
		return returnValue;
	}
	native private double spiltTriangleProjectMeasure_CVector3_CVector3_CVector3_ev_int32(long pNativeObject, long pointA, long pointB, long pointC, int insertNum);
	/**
	 * 计算三角形区域地表投影面积,可控制计算精度
	 * @param pointA 顶点（经度，纬度，0）
	 * @param pointB 顶点（经度，纬度，0）
	 * @param pointC 顶点（经度，纬度，0）
	 * @param insertNum 每条边的插值个数
	 * @return 三角形区域地表投影面积
	 */
	public double spiltTriangleProjectMeasure(com.earthview.world.spatial.math.Vector3 pointA, com.earthview.world.spatial.math.Vector3 pointB, com.earthview.world.spatial.math.Vector3 pointC, int insertNum)
	{
		long pointAParamValue = pointA.nativeObject.pointer;
		long pointBParamValue = pointB.nativeObject.pointer;
		long pointCParamValue = pointC.nativeObject.pointer;
		int insertNumParamValue = insertNum;
		double returnValue = spiltTriangleProjectMeasure_CVector3_CVector3_CVector3_ev_int32(this.nativeObject.pointer, pointAParamValue, pointBParamValue, pointCParamValue, insertNumParamValue);
		return returnValue;
	}
	native private double polygonSurfaceMeasure_VertexList(long pNativeObject, long pointList);
	/**
	 * 多边形区域地表面积
	 * @param pointList 多边形顶点列表（经度，纬度，0）
	 * @return 地表面积，-1表示无法完成计算
	 */
	public double polygonSurfaceMeasure(com.earthview.world.spatial.math.VertexList pointList)
	{
		long pointListParamValue = pointList.nativeObject.pointer;
		double returnValue = polygonSurfaceMeasure_VertexList(this.nativeObject.pointer, pointListParamValue);
		return returnValue;
	}
	native private void splitLine2GeoPosition_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(long pNativeObject, int number, double latA, double lonA, double latB, double lonB, boolean isGetAlti, long outPoints);
	/**
	 * 线段内插值，分成若干段，输出拆分后所有点的地理坐标
	 * @param number 插值个数
	 * @param latA 线段端点1纬度,角度值
	 * @param lonA 线段端点1经度,角度值
	 * @param latB 线段端点2纬度,角度值
	 * @param lonB 线段端点2经度,角度值
	 * @param isGetAlti 是否获取高程
	 * @param outPoints 拆分后所有点的地理坐标（经度，纬度，高程）的数组
	 */
	public void splitLine2GeoPosition(int number, double latA, double lonA, double latB, double lonB, boolean isGetAlti, com.earthview.world.spatial.math.VertexList outPoints)
	{
		int numberParamValue = number;
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		boolean isGetAltiParamValue = isGetAlti;
		long outPointsParamValue = outPoints.nativeObject.pointer;
		splitLine2GeoPosition_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(this.nativeObject.pointer, numberParamValue, latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, isGetAltiParamValue, outPointsParamValue);
	}
	native private void splitLine2WorldPosition_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(long pNativeObject, int number, double latA, double lonA, double latB, double lonB, boolean isGetAlti, long outPoints);
	/**
	 * 线段内插值，分成若干段，输出拆分后所有点的世界坐标
	 * @param number 拆分段数
	 * @param latA 线段端点1纬度,角度值
	 * @param lonA 线段端点1经度,角度值
	 * @param latB 线段端点2纬度,角度值
	 * @param lonB 线段端点2经度,角度值
	 * @param isGetAlti 是否获取高程
	 * @param outPoints 拆分后所有点的世界坐标（x,y,高程）的数组
	 */
	public void splitLine2WorldPosition(int number, double latA, double lonA, double latB, double lonB, boolean isGetAlti, com.earthview.world.spatial.math.VertexList outPoints)
	{
		int numberParamValue = number;
		double latAParamValue = latA;
		double lonAParamValue = lonA;
		double latBParamValue = latB;
		double lonBParamValue = lonB;
		boolean isGetAltiParamValue = isGetAlti;
		long outPointsParamValue = outPoints.nativeObject.pointer;
		splitLine2WorldPosition_ev_int32_ev_real64_ev_real64_ev_real64_ev_real64_ev_bool_VertexList(this.nativeObject.pointer, numberParamValue, latAParamValue, lonAParamValue, latBParamValue, lonBParamValue, isGetAltiParamValue, outPointsParamValue);
	}
	native private void splitPolylineGeoPosition_VertexList_ev_int32_ev_bool_VertexList(long pNativeObject, long inpoints, int insertNum, boolean isGetAlti, long outPoints);
	/**
	 * 折线插值，分成若干段，输出拆分后所有点的地理坐标
	 * @param inpoints 输入点列表
	 * @param insertNum 插值个数
	 * @param isGetAlti 是否获取高度
	 * @param outpoints 输出点列表
	 */
	public void splitPolylineGeoPosition(com.earthview.world.spatial.math.VertexList inpoints, int insertNum, boolean isGetAlti, com.earthview.world.spatial.math.VertexList outPoints)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		int insertNumParamValue = insertNum;
		boolean isGetAltiParamValue = isGetAlti;
		long outPointsParamValue = outPoints.nativeObject.pointer;
		splitPolylineGeoPosition_VertexList_ev_int32_ev_bool_VertexList(this.nativeObject.pointer, inpointsParamValue, insertNumParamValue, isGetAltiParamValue, outPointsParamValue);
	}
	native private void splitPolylineWorPosition_VertexList_ev_int32_ev_bool_VertexList(long pNativeObject, long inpoints, int insertNum, boolean isGetAlti, long outPoints);
	/**
	 * 折线插值，分成若干段，输出拆分后所有点的世界坐标
	 * @param inpoints 输入点列表
	 * @param insertNum 插值个数
	 * @param isGetAlti 是否获取高度
	 * @param outpoints 输出点列表
	 */
	public void splitPolylineWorPosition(com.earthview.world.spatial.math.VertexList inpoints, int insertNum, boolean isGetAlti, com.earthview.world.spatial.math.VertexList outPoints)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		int insertNumParamValue = insertNum;
		boolean isGetAltiParamValue = isGetAlti;
		long outPointsParamValue = outPoints.nativeObject.pointer;
		splitPolylineWorPosition_VertexList_ev_int32_ev_bool_VertexList(this.nativeObject.pointer, inpointsParamValue, insertNumParamValue, isGetAltiParamValue, outPointsParamValue);
	}
	native private void splitCircle2GeoPosition_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(long pNativeObject, double lati, double longi, double radius, int insertNum, long outPoints);
	/**
	 * 给定中心点和半径得出一个圆形区域的地理坐标链表
	 * @param lati 中心点纬度,角度值
	 * @param longi 中心点经度,角度值
	 * @param radius 半径,单位：米
	 * @param insertNum 圆弧上分成的段数
	 * @param outPoints 圆弧上的点的集合,地理坐标(经度，纬度，高程)
	 */
	public void splitCircle2GeoPosition(double lati, double longi, double radius, int insertNum, com.earthview.world.spatial.math.VertexList outPoints)
	{
		double latiParamValue = lati;
		double longiParamValue = longi;
		double radiusParamValue = radius;
		int insertNumParamValue = insertNum;
		long outPointsParamValue = outPoints.nativeObject.pointer;
		splitCircle2GeoPosition_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(this.nativeObject.pointer, latiParamValue, longiParamValue, radiusParamValue, insertNumParamValue, outPointsParamValue);
	}
	native private void splitCircle2WorldPosition_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(long pNativeObject, double lati, double longi, double radius, int insertNum, long outPoints);
	/**
	 * 给定中心点和半径得出一个圆形区域的世界坐标链表
	 * @param lati 中心点纬度,角度值
	 * @param longi 中心点经度,角度值
	 * @param radius 半径,单位：米
	 * @param insertNum 圆弧上分成的段数
	 * @param outPoints 圆弧上的点的集合,世界坐标
	 */
	public void splitCircle2WorldPosition(double lati, double longi, double radius, int insertNum, com.earthview.world.spatial.math.VertexList outPoints)
	{
		double latiParamValue = lati;
		double longiParamValue = longi;
		double radiusParamValue = radius;
		int insertNumParamValue = insertNum;
		long outPointsParamValue = outPoints.nativeObject.pointer;
		splitCircle2WorldPosition_ev_real64_ev_real64_ev_real64_ev_int32_VertexList(this.nativeObject.pointer, latiParamValue, longiParamValue, radiusParamValue, insertNumParamValue, outPointsParamValue);
	}
	public MathUtility3D(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MathUtility3D(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getAltitudeListener_void(long pNativeObject, String method);
	native protected void register_setAltitudeListener_CAltitude3DListener(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAltitudeListener_void(this.nativeObject.pointer, "getAltitudeListener_void_callback");
			this.register_setAltitudeListener_CAltitude3DListener(this.nativeObject.pointer, "setAltitudeListener_CAltitude3DListener_callback");
		}
	}
	
	public static MathUtility3D fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MathUtility3D obj = null;
 		if(baseObj instanceof MathUtility3D)
		{
			obj = (MathUtility3D)baseObj;
		} else {
			obj = new MathUtility3D(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMathUtility3D");
			obj.increaseCast();
		}

		return obj;
	}
}
