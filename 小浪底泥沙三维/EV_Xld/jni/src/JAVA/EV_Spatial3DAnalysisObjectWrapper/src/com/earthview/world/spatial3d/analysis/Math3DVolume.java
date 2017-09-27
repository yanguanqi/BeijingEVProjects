package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 动态计算类根据平面动态位置计算平面下填方体积，平面上挖方体积默认100米为间隔进行拆分
 */
public class Math3DVolume extends com.earthview.world.spatial3d.analysis.Math3DBaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CMath3DVolume", new Math3DVolumeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCMath3DVolumeProxy", new Math3DVolumeClassFactory());
	}

	/**
	 * 构造函数
	 * @param pAltitude3DListener 高度控件
	 */
	public Math3DVolume(com.earthview.world.spatial3d.analysis.Altitude3DListener ref_pAltitude3DListener) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pAltitude3DListenerPtr = new BasePointer(ref_pAltitude3DListener);
		list.add("ref_pAltitude3DListener", ref_pAltitude3DListenerPtr.get());
		Create("JCMath3DVolumeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.Math3DVolume".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getCalcuStyle_void(long pNativeObject);
	/**
	 * 体积计算方式
	 */
	public com.earthview.world.spatial3d.analysis.VolumeCalcuStyle getCalcuStyle()
	{
		int returnValue = getCalcuStyle_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.analysis.VolumeCalcuStyle.toEnum(returnValue);
	}
	native private void setCalcuStyle_VolumeCalcuStyle(long pNativeObject, int value);
	/**
	 * 设置计算方式
	 * @param value 计算方式
	 */
	public void setCalcuStyle(com.earthview.world.spatial3d.analysis.VolumeCalcuStyle value)
	{
		int valueParamValue = value.getValue();
		setCalcuStyle_VolumeCalcuStyle(this.nativeObject.pointer, valueParamValue);
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
	native private double getDepth_void(long pNativeObject);
	/**
	 * 获取基准面高程
	 * @return 深度
	 */
	public double getDepth()
	{
		double returnValue = getDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDepth_ev_real64(long pNativeObject, double value);
	/**
	 * 设置基准面高程
	 * @param value 深度
	 */
	public void setDepth(double value)
	{
		double valueParamValue = value;
		setDepth_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private boolean getDefaultDepth_void(long pNativeObject);
	/**
	 * 是否根据地形确定基准面高程
	 */
	public boolean getDefaultDepth()
	{
		boolean returnValue = getDefaultDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultDepth_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否根据地形确定基准面高程
	 * @param value 
	 */
	public void setDefaultDepth(boolean value)
	{
		boolean valueParamValue = value;
		setDefaultDepth_ev_bool(this.nativeObject.pointer, valueParamValue);
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
	native private double getMinAltiPointZ_void(long pNativeObject);
	/**
	 * 获取所选范围最低点高程（tool里渲染面扩展用）
	 * @return 所选范围最低点高程
	 */
	public double getMinAltiPointZ()
	{
		double returnValue = getMinAltiPointZ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double calcuVolume_VertexList_ev_real64_ev_real64(long pNativeObject, long pts, long fillVolume, long digVolume);
	/**
	 * 土方计算过程
	 * @param pts 计算范围边界点列表
	 * @param fillVolume 填方体积
	 * @param digVolume 挖方体积
	 * @return 贴地面积
	 */
	public double calcuVolume(com.earthview.world.spatial.math.VertexList pts, DoublePointer fillVolume, DoublePointer digVolume)
	{
		long ptsParamValue = pts.nativeObject.pointer;
		long fillVolumeParamValue = fillVolume.nativeObject.pointer;
		long digVolumeParamValue = digVolume.nativeObject.pointer;
		double returnValue = calcuVolume_VertexList_ev_real64_ev_real64(this.nativeObject.pointer, ptsParamValue, fillVolumeParamValue, digVolumeParamValue);
		return returnValue;
	}
	native private void calculateOnServer_VertexList_ev_real64_ev_real64_ev_real64(long pNativeObject, long pts, long fillVolume, long digVolume, long groundArea);
	/**
	 * 服务器端计算
	 * @param pts 计算范围边界点列表
	 * @param height 相对于海平面的绝对高度值
	 * @param fillVolume 填方体积
	 * @param digVolume 挖方体积
	 * @param groundArea 贴地面积
	 */
	public void calculateOnServer(com.earthview.world.spatial.math.VertexList pts, DoublePointer fillVolume, DoublePointer digVolume, DoublePointer groundArea)
	{
		long ptsParamValue = pts.nativeObject.pointer;
		long fillVolumeParamValue = fillVolume.nativeObject.pointer;
		long digVolumeParamValue = digVolume.nativeObject.pointer;
		long groundAreaParamValue = groundArea.nativeObject.pointer;
		calculateOnServer_VertexList_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, ptsParamValue, fillVolumeParamValue, digVolumeParamValue, groundAreaParamValue);
	}
	public Math3DVolume(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Math3DVolume(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Math3DVolume fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Math3DVolume obj = null;
 		if(baseObj instanceof Math3DVolume)
		{
			obj = (Math3DVolume)baseObj;
		} else {
			obj = new Math3DVolume(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMath3DVolume");
			obj.increaseCast();
		}

		return obj;
	}
}
