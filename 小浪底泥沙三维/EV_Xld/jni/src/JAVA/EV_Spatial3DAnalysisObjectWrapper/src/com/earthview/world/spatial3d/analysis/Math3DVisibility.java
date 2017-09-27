package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维分析之通视分析类
 */
public class Math3DVisibility extends com.earthview.world.spatial3d.analysis.Math3DBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DVisibility", new Math3DVisibilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DVisibilityProxy", new Math3DVisibilityClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pAltitude3DListener 高度控件
	 */
	public Math3DVisibility(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pAltitude3DListener) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pAltitude3DListenerPtr = new BasePointer(ref_pAltitude3DListener);
		list.add("ref_pAltitude3DListener", ref_pAltitude3DListenerPtr.get());
		Create("JCMath3DVisibilityProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DVisibility".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean getNeedStop_void(long pNativeObject);
	/**
	 * 获取是否停止计算
	 * @param  
	 * @return 是否停止计算
	 */
	public boolean getNeedStop()
	{
		boolean returnValue = getNeedStop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setNeedStop_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否停止计算
	 * @param value 是否停止计算
	 */
	public void setNeedStop(boolean value)
	{
		boolean valueParamValue = value;
		setNeedStop_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean calcuPointVisibility_CVector3_ev_real64_CVector3_ev_real64_ev_int32(long pNativeObject, long view, double viewH, long target, double targetH, int number);
	/**
	 * 判断两点是否通视
	 * @param center 观察点地理坐标（经度，纬度，高程）
	 * @param centerH 观察点离地高度
	 * @param target 目标点地理坐标（经度，纬度，高程）
	 * @param targetH 目标点离地高度
	 * @param number 插值个数
	 * @return 是否通视
	 */
	public boolean calcuPointVisibility(com.earthview.world.spatial.math.Vector3 view, double viewH, com.earthview.world.spatial.math.Vector3 target, double targetH, int number)
	{
		long viewParamValue = view.nativeObject.pointer;
		double viewHParamValue = viewH;
		long targetParamValue = target.nativeObject.pointer;
		double targetHParamValue = targetH;
		int numberParamValue = number;
		boolean returnValue = calcuPointVisibility_CVector3_ev_real64_CVector3_ev_real64_ev_int32(this.nativeObject.pointer, viewParamValue, viewHParamValue, targetParamValue, targetHParamValue, numberParamValue);
		return returnValue;
	}
	native private double calcuLineVisibility_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VertexList_VertexList(long pNativeObject, long center, double centerH, long target, int number, boolean isViewShed, long visibilityline, long invisibilityline);
	/**
	 * 计算线通视对象或者面通视的一条线
	 * @param center 观察点地理坐标（经度，纬度，高程）
	 * @param centerH 观察点离地高度
	 * @param target 目标点地理坐标（经度，纬度，高程）
	 * @param number 插值个数
	 * @param isViewShed 是否为面通视的一条线
	 * @param visibilityline 可见线顶点数组,世界坐标
	 * @param invisibilityline 不可见线顶点数组,世界坐标
	 * @return 遮挡率
	 */
	public double calcuLineVisibility(com.earthview.world.spatial.math.Vector3 center, double centerH, com.earthview.world.spatial.math.Vector3 target, int number, boolean isViewShed, com.earthview.world.spatial.math.VertexList visibilityline, com.earthview.world.spatial.math.VertexList invisibilityline)
	{
		long centerParamValue = center.nativeObject.pointer;
		double centerHParamValue = centerH;
		long targetParamValue = target.nativeObject.pointer;
		int numberParamValue = number;
		boolean isViewShedParamValue = isViewShed;
		long visibilitylineParamValue = visibilityline.nativeObject.pointer;
		long invisibilitylineParamValue = invisibilityline.nativeObject.pointer;
		double returnValue = calcuLineVisibility_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VertexList_VertexList(this.nativeObject.pointer, centerParamValue, centerHParamValue, targetParamValue, numberParamValue, isViewShedParamValue, visibilitylineParamValue, invisibilitylineParamValue);
		return returnValue;
	}
	native private double calcuLineVisibility_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList(long pNativeObject, long center, double centerH, long target, int number, boolean isViewShed, long outputPts);
	/**
	 * 计算线通视对象或者面通视的一条线
	 * @param center 观察点地理坐标（经度，纬度，高程）
	 * @param centerH 观察点离地高度
	 * @param target 目标点地理坐标（经度，纬度，高程）
	 * @param number 插值个数
	 * @param isViewShed 是否为面通视的一条线
	 * @param outputPts 通视分析顶点集合,世界坐标
	 * @return 遮挡率
	 */
	public double calcuLineVisibility(com.earthview.world.spatial.math.Vector3 center, double centerH, com.earthview.world.spatial.math.Vector3 target, int number, boolean isViewShed, com.earthview.world.spatial3d.analysis.VisibilityPointList outputPts)
	{
		long centerParamValue = center.nativeObject.pointer;
		double centerHParamValue = centerH;
		long targetParamValue = target.nativeObject.pointer;
		int numberParamValue = number;
		boolean isViewShedParamValue = isViewShed;
		long outputPtsParamValue = outputPts.nativeObject.pointer;
		double returnValue = calcuLineVisibility_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList(this.nativeObject.pointer, centerParamValue, centerHParamValue, targetParamValue, numberParamValue, isViewShedParamValue, outputPtsParamValue);
		return returnValue;
	}
	native private void calculateOnServer_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList_ev_real64(long pNativeObject, long center, double centerH, long target, int number, boolean isViewShed, long outputPts, long shadePercent);
	/**
	 * 服务器端计算
	 * @param center 观察点地理坐标（经度，纬度，高程）
	 * @param centerH 观察点离地高度
	 * @param target 目标点地理坐标（经度，纬度，高程）
	 * @param number 插值个数
	 * @param isViewShed 是否为面通视的一条线
	 * @param outputPts 通视分析顶点集合,世界坐标
	 * @param shadePercent 遮挡率
	 */
	public void calculateOnServer(com.earthview.world.spatial.math.Vector3 center, double centerH, com.earthview.world.spatial.math.Vector3 target, int number, boolean isViewShed, com.earthview.world.spatial3d.analysis.VisibilityPointList outputPts, DoublePointer shadePercent)
	{
		long centerParamValue = center.nativeObject.pointer;
		double centerHParamValue = centerH;
		long targetParamValue = target.nativeObject.pointer;
		int numberParamValue = number;
		boolean isViewShedParamValue = isViewShed;
		long outputPtsParamValue = outputPts.nativeObject.pointer;
		long shadePercentParamValue = shadePercent.nativeObject.pointer;
		calculateOnServer_CVector3_ev_real64_CVector3_ev_int32_ev_bool_VisibilityPointList_ev_real64(this.nativeObject.pointer, centerParamValue, centerHParamValue, targetParamValue, numberParamValue, isViewShedParamValue, outputPtsParamValue, shadePercentParamValue);
	}
	public Math3DVisibility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DVisibility(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Math3DVisibility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DVisibility obj = null;
 		if(baseObj instanceof Math3DVisibility)
		{
			obj = (Math3DVisibility)baseObj;
		} else {
			obj = new Math3DVisibility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DVisibility");
			obj.increaseCast();
		}

		return obj;
	}
}
