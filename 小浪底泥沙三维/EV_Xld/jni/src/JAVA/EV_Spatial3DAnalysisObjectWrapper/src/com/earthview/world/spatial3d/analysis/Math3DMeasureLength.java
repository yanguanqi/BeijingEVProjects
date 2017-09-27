package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维分析之距离测量算法
 */
public class Math3DMeasureLength extends com.earthview.world.spatial3d.analysis.Math3DBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureLength", new Math3DMeasureLengthClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DMeasureLengthProxy", new Math3DMeasureLengthClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pAltitude3DListener 高度控件
	 */
	public Math3DMeasureLength(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pAltitude3DListener) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pAltitude3DListenerPtr = new BasePointer(ref_pAltitude3DListener);
		list.add("ref_pAltitude3DListener", ref_pAltitude3DListenerPtr.get());
		Create("JCMath3DMeasureLengthProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DMeasureLength".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double calcuClampedDistance_ev_int32_CVector3_CVector3_VertexList(long pNativeObject, int num, long p0, long p1, long vertices);
	/**
	 * 计算两点之间的贴地距离
	 * @param num 插入点数目
	 * @param p0 输入点,地理坐标（经度、纬度、高程或0）
	 * @param p1 输入点,地理坐标（经度、纬度、高程或0）
	 * @param vertices 插值后的点列表
	 * @return 贴地距离
	 */
	public double calcuClampedDistance(int num, com.earthview.world.spatial.math.Vector3 p0, com.earthview.world.spatial.math.Vector3 p1, com.earthview.world.spatial.math.VertexList vertices)
	{
		int numParamValue = num;
		long p0ParamValue = p0.nativeObject.pointer;
		long p1ParamValue = p1.nativeObject.pointer;
		long verticesParamValue = vertices.nativeObject.pointer;
		double returnValue = calcuClampedDistance_ev_int32_CVector3_CVector3_VertexList(this.nativeObject.pointer, numParamValue, p0ParamValue, p1ParamValue, verticesParamValue);
		return returnValue;
	}
	native private double calcuStraightDistance_CVector3_CVector3(long pNativeObject, long p0, long p1);
	/**
	 * 计算两点之间的直线距离
	 * @param p0 输入点,地理坐标（经度、纬度、高程）
	 * @param p1 输入点,地理坐标（经度、纬度、高程）
	 * @return 直线距离
	 */
	public double calcuStraightDistance(com.earthview.world.spatial.math.Vector3 p0, com.earthview.world.spatial.math.Vector3 p1)
	{
		long p0ParamValue = p0.nativeObject.pointer;
		long p1ParamValue = p1.nativeObject.pointer;
		double returnValue = calcuStraightDistance_CVector3_CVector3(this.nativeObject.pointer, p0ParamValue, p1ParamValue);
		return returnValue;
	}
	native private double calcuProjectDistance_CVector3_CVector3(long pNativeObject, long p0, long p1);
	/**
	 * 计算两点之间的投影距离
	 * @param p0 输入点,地理坐标（经度、纬度、高程或0）
	 * @param p1 输入点,地理坐标（经度、纬度、高程或0）
	 * @return 投影距离
	 */
	public double calcuProjectDistance(com.earthview.world.spatial.math.Vector3 p0, com.earthview.world.spatial.math.Vector3 p1)
	{
		long p0ParamValue = p0.nativeObject.pointer;
		long p1ParamValue = p1.nativeObject.pointer;
		double returnValue = calcuProjectDistance_CVector3_CVector3(this.nativeObject.pointer, p0ParamValue, p1ParamValue);
		return returnValue;
	}
	native private boolean calcuMiddlePoints_VertexList_VertexList(long pNativeObject, long inpoints, long middlepoints);
	/**
	 * 计算每两个点的中点用于渲染折线此方法可能不用
	 * @param inpoints 用户采集的计算点的集合，地理坐标
	 * @param middlepoints 每条线段的中点，世界坐标
	 * @return true为计算成功，false为计算失败
	 */
	public boolean calcuMiddlePoints(com.earthview.world.spatial.math.VertexList inpoints, com.earthview.world.spatial.math.VertexList middlepoints)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		long middlepointsParamValue = middlepoints.nativeObject.pointer;
		boolean returnValue = calcuMiddlePoints_VertexList_VertexList(this.nativeObject.pointer, inpointsParamValue, middlepointsParamValue);
		return returnValue;
	}
	native private boolean calcuInterWorldPoints_VertexList_VertexList(long pNativeObject, long inpoints, long outpoints);
	/**
	 * 获取贴地直线离散点用于渲染贴地直线此方法可能不用
	 * @param inpoints 用户采集的计算点的集合，地理坐标
	 * @param outpoints 插值后的点的集合，世界坐标，带高程
	 * @return true为插值成功，false为插值失败
	 */
	public boolean calcuInterWorldPoints(com.earthview.world.spatial.math.VertexList inpoints, com.earthview.world.spatial.math.VertexList outpoints)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		long outpointsParamValue = outpoints.nativeObject.pointer;
		boolean returnValue = calcuInterWorldPoints_VertexList_VertexList(this.nativeObject.pointer, inpointsParamValue, outpointsParamValue);
		return returnValue;
	}
	native private void calculateOnServer_ev_int32_VertexList_ev_real64_ev_real64_ev_real64(long pNativeObject, int num, long inpoints, long clampedDistance, long straightDistance, long projectDistance);
	/**
	 * 服务器端计算
	 * @param num 插入点数目
	 * @param inpoints 输入点集合，地理坐标
	 * @param clampedDistance 贴地距离
	 * @param straightDistance 直线距离
	 * @param projectDistance 投影距离
	 */
	public void calculateOnServer(int num, com.earthview.world.spatial.math.VertexList inpoints, DoublePointer clampedDistance, DoublePointer straightDistance, DoublePointer projectDistance)
	{
		int numParamValue = num;
		long inpointsParamValue = inpoints.nativeObject.pointer;
		long clampedDistanceParamValue = clampedDistance.nativeObject.pointer;
		long straightDistanceParamValue = straightDistance.nativeObject.pointer;
		long projectDistanceParamValue = projectDistance.nativeObject.pointer;
		calculateOnServer_ev_int32_VertexList_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, numParamValue, inpointsParamValue, clampedDistanceParamValue, straightDistanceParamValue, projectDistanceParamValue);
	}
	public Math3DMeasureLength(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DMeasureLength(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取高程控件指针
	 * @param  
	 * @return 高程控件
	 */
	public com.earthview.world.spatial3d.analysis.Altitude3DListener getAltitude3DListener()
	{
		return super.getAltitude3DListener_NoVirtual();
	}
	/**
	 * 设置高程控件指针
	 * @param pListener 高程控件
	 */
	public void setAltitude3DListener(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pListener)
	{
		super.setAltitude3DListener_NoVirtual(ref_pListener);
	}
	
	native protected void register_getAltitude3DListener_void(long pNativeObject, String method);
	native protected void register_setAltitude3DListener_CAltitude3DListener(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAltitude3DListener_void(this.nativeObject.pointer, "getAltitude3DListener_void_callback");
			this.register_setAltitude3DListener_CAltitude3DListener(this.nativeObject.pointer, "setAltitude3DListener_CAltitude3DListener_callback");
		}
	}
	
	public static Math3DMeasureLength fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DMeasureLength obj = null;
 		if(baseObj instanceof Math3DMeasureLength)
		{
			obj = (Math3DMeasureLength)baseObj;
		} else {
			obj = new Math3DMeasureLength(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DMeasureLength");
			obj.increaseCast();
		}

		return obj;
	}
}
