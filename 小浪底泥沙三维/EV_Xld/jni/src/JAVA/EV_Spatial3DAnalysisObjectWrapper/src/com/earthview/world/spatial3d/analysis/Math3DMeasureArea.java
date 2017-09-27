package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 面积测量算法
 */
public class Math3DMeasureArea extends com.earthview.world.spatial3d.analysis.Math3DBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DMeasureArea", new Math3DMeasureAreaClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DMeasureAreaProxy", new Math3DMeasureAreaClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pAltitude3DListener 高度控件
	 */
	public Math3DMeasureArea(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pAltitude3DListener) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pAltitude3DListenerPtr = new BasePointer(ref_pAltitude3DListener);
		list.add("ref_pAltitude3DListener", ref_pAltitude3DListenerPtr.get());
		Create("JCMath3DMeasureAreaProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DMeasureArea".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getInterval_void(long pNativeObject);
	/**
	 * 获取间隔距离
	 * @param  
	 * @return 间隔距离
	 */
	public double getInterval()
	{
		double returnValue = getInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterval_ev_real64(long pNativeObject, double value);
	/**
	 * 设置间隔距离
	 * @param value 间隔距离
	 */
	public void setInterval(double value)
	{
		double valueParamValue = value;
		setInterval_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double calcuPolygonArea_VertexList_ev_bool_ev_real64(long pNativeObject, long inpoints, boolean calcuClampedArea, long clampedArea);
	/**
	 * 计算多边形面积（非递归实现方式）
	 * @param inpoints 多边形边界点集合,经纬度高程
	 * @param calcuClampedArea 是否计算贴地面积
	 * @param clampedArea 贴地面积
	 * @return 投影面积
	 */
	public double calcuPolygonArea(com.earthview.world.spatial.math.VertexList inpoints, boolean calcuClampedArea, DoublePointer clampedArea)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		boolean calcuClampedAreaParamValue = calcuClampedArea;
		long clampedAreaParamValue = clampedArea.nativeObject.pointer;
		double returnValue = calcuPolygonArea_VertexList_ev_bool_ev_real64(this.nativeObject.pointer, inpointsParamValue, calcuClampedAreaParamValue, clampedAreaParamValue);
		return returnValue;
	}
	native private double calcuClampedArea_VertexList(long pNativeObject, long inpoints);
	/**
	 * 计算多边形贴地面积
	 * @param inpoints 多边形边界点集合,经纬度高程
	 * @return 贴地面积
	 */
	public double calcuClampedArea(com.earthview.world.spatial.math.VertexList inpoints)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		double returnValue = calcuClampedArea_VertexList(this.nativeObject.pointer, inpointsParamValue);
		return returnValue;
	}
	native private double calcuProjectArea_VertexList(long pNativeObject, long inpoints);
	/**
	 * 计算多边形投影面积
	 * @param inpoints 多边形边界点集合，经纬度高程
	 * @return 投影面积
	 */
	public double calcuProjectArea(com.earthview.world.spatial.math.VertexList inpoints)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		double returnValue = calcuProjectArea_VertexList(this.nativeObject.pointer, inpointsParamValue);
		return returnValue;
	}
	native private void calculateOnServer_VertexList_ev_real64_ev_real64(long pNativeObject, long inpoints, long clampArea, long projArea);
	/**
	 * 计算多边形面积，供服务器调用
	 * @param inpoints 多边形边界点集合，经纬度高程
	 * @param clampArea 贴地面积
	 * @param projArea 投影面积
	 */
	public void calculateOnServer(com.earthview.world.spatial.math.VertexList inpoints, DoublePointer clampArea, DoublePointer projArea)
	{
		long inpointsParamValue = inpoints.nativeObject.pointer;
		long clampAreaParamValue = clampArea.nativeObject.pointer;
		long projAreaParamValue = projArea.nativeObject.pointer;
		calculateOnServer_VertexList_ev_real64_ev_real64(this.nativeObject.pointer, inpointsParamValue, clampAreaParamValue, projAreaParamValue);
	}
	public Math3DMeasureArea(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DMeasureArea(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Math3DMeasureArea fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DMeasureArea obj = null;
 		if(baseObj instanceof Math3DMeasureArea)
		{
			obj = (Math3DMeasureArea)baseObj;
		} else {
			obj = new Math3DMeasureArea(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DMeasureArea");
			obj.increaseCast();
		}

		return obj;
	}
}
