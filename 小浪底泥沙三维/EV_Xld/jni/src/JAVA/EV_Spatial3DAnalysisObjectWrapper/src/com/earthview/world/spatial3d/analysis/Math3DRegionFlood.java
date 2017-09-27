package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DRegionFlood extends com.earthview.world.spatial3d.analysis.Math3DBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood", new Math3DRegionFloodClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DRegionFloodProxy", new Math3DRegionFloodClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pAltitudeListener 高程控件
	 */
	public Math3DRegionFlood(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pAltitudeListener) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pAltitudeListenerPtr = new BasePointer(ref_pAltitudeListener);
		list.add("ref_pAltitudeListener", ref_pAltitudeListenerPtr.get());
		Create("JCMath3DRegionFloodProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DRegionFlood".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getSearchRadius_void(long pNativeObject);
	/**
	 * 获取搜索半径
	 */
	public double getSearchRadius()
	{
		double returnValue = getSearchRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSearchRadius_ev_real64(long pNativeObject, double value);
	/**
	 * 设置搜索半径
	 * @param value 搜索半径
	 */
	public void setSearchRadius(double value)
	{
		double valueParamValue = value;
		setSearchRadius_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getInterval_void(long pNativeObject);
	/**
	 * 获取搜索间隔距离
	 * @param  
	 * @return 搜索间隔距离
	 */
	public double getInterval()
	{
		double returnValue = getInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterval_ev_real64(long pNativeObject, double value);
	/**
	 * 设置搜索间隔距离
	 * @param value 搜索间隔距离
	 */
	public void setInterval(double value)
	{
		double valueParamValue = value;
		setInterval_ev_real64(this.nativeObject.pointer, valueParamValue);
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
	native private double getAlphaDivision_void(long pNativeObject);
	/**
	 * 获取透明度被除系数
	 * @param  
	 * @return 透明度被除系数
	 */
	public double getAlphaDivision()
	{
		double returnValue = getAlphaDivision_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAlphaDivision_ev_real64(long pNativeObject, double value);
	/**
	 * 设置透明度被除系数
	 * @param value 透明度被除系数
	 */
	public void setAlphaDivision(double value)
	{
		double valueParamValue = value;
		setAlphaDivision_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private int getSignLength_void(long pNativeObject);
	/**
	 * 获取长度
	 * @param  
	 * @return 长度
	 */
	public int getSignLength()
	{
		int returnValue = getSignLength_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSignLength_ev_int32(long pNativeObject, int value);
	/**
	 * 设置长度
	 * @param value 长度
	 */
	public void setSignLength(int value)
	{
		int valueParamValue = value;
		setSignLength_ev_int32(this.nativeObject.pointer, valueParamValue);
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
	native private double getFloodSurfaceArea_void(long pNativeObject);
	/**
	 * 获取淹没水面面积
	 * @param  
	 * @return 水面面积
	 */
	public double getFloodSurfaceArea()
	{
		double returnValue = getFloodSurfaceArea_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFloodGroundArea_void(long pNativeObject);
	/**
	 * 获取淹没贴地面积
	 * @param  
	 * @return 贴地面积
	 */
	public double getFloodGroundArea()
	{
		double returnValue = getFloodGroundArea_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getFloodVolume_void(long pNativeObject);
	/**
	 * 获取淹没体积
	 * @param  
	 * @return 淹没体积
	 */
	public double getFloodVolume()
	{
		double returnValue = getFloodVolume_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void calcuFloodParam_CVector3_ev_real64(long pNativeObject, long center, double altitude);
	/**
	 * 计算淹没参数
	 * @param center 淹没中心
	 * @param altitude 淹没高度
	 */
	public void calcuFloodParam(com.earthview.world.spatial.math.Vector3 center, double altitude)
	{
		long centerParamValue = center.nativeObject.pointer;
		double altitudeParamValue = altitude;
		calcuFloodParam_CVector3_ev_real64(this.nativeObject.pointer, centerParamValue, altitudeParamValue);
	}
	native private void calcuRenderData_CFRenderBlockSet(long pNativeObject, long renderBlockList);
	/**
	 * 计算渲染参数
	 * @param renderBlockList 淹没区块数据池
	 */
	public void calcuRenderData(com.earthview.world.spatial3d.analysis.Frenderblockset renderBlockList)
	{
		long renderBlockListParamValue = renderBlockList.nativeObject.pointer;
		calcuRenderData_CFRenderBlockSet(this.nativeObject.pointer, renderBlockListParamValue);
	}
	native private double calcuFloodAltitude_CVector3_ev_real64_ev_real64(long pNativeObject, long center, double floodVolume, double error);
	/**
	 * 计算淹没高度
	 * @param center 淹没中心
	 * @param floodVolume 淹没体积
	 * @param error 容错率
	 * @return 淹没高度
	 */
	public double calcuFloodAltitude(com.earthview.world.spatial.math.Vector3 center, double floodVolume, double error)
	{
		long centerParamValue = center.nativeObject.pointer;
		double floodVolumeParamValue = floodVolume;
		double errorParamValue = error;
		double returnValue = calcuFloodAltitude_CVector3_ev_real64_ev_real64(this.nativeObject.pointer, centerParamValue, floodVolumeParamValue, errorParamValue);
		return returnValue;
	}
	native private void calculateOnServer_CVector3_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long center, double altitude, long floodArea, long groundArea, long floodVolume);
	/**
	 * 服务器端计算
	 * @param center 淹没中心
	 * @param altitude 淹没高度
	 * @param floodArea 淹没水面面积
	 * @param groundArea 淹没贴地面积
	 * @param floodVolume 淹没体积
	 */
	public void calculateOnServer(com.earthview.world.spatial.math.Vector3 center, double altitude, DoublePointer floodArea, DoublePointer groundArea, DoublePointer floodVolume)
	{
		long centerParamValue = center.nativeObject.pointer;
		double altitudeParamValue = altitude;
		long floodAreaParamValue = floodArea.nativeObject.pointer;
		long groundAreaParamValue = groundArea.nativeObject.pointer;
		long floodVolumeParamValue = floodVolume.nativeObject.pointer;
		calculateOnServer_CVector3_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, centerParamValue, altitudeParamValue, floodAreaParamValue, groundAreaParamValue, floodVolumeParamValue);
	}
	public Math3DRegionFlood(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DRegionFlood(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Math3DRegionFlood fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DRegionFlood obj = null;
 		if(baseObj instanceof Math3DRegionFlood)
		{
			obj = (Math3DRegionFlood)baseObj;
		} else {
			obj = new Math3DRegionFlood(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DRegionFlood");
			obj.increaseCast();
		}

		return obj;
	}
}
