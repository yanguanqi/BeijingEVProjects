package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TiltCameraEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTiltCameraEvent", new TiltCameraEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TiltCameraEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTiltCameraEvent", null);
	}

	/**
	 * 构造函数
	 * @param x 鼠标的Ｘ坐标
	 * @param y 鼠标的Y坐标
	 * @param tiltDegree 倾斜的角度
	 */
	public TiltCameraEvent(double x, double y, double tiltDegree) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer tiltDegreePtr = new BasePointer(tiltDegree);
		list.add("tiltDegree", tiltDegreePtr.get());
		Create("CTiltCameraEvent", list);
	}

	native private double get_mPointx_void(long pNativeObject);
	public double get_mPointx()
	{
		double jniValue = get_mPointx_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPointx_ev_real64 (long pNativeObject, double value);
	public void set_mPointx(double mPointx)
	{
		double mPointxParamValue = mPointx;
		
		set_mPointx_ev_real64(this.nativeObject.pointer, mPointxParamValue);
	}
	
	native private double get_mPointy_void(long pNativeObject);
	public double get_mPointy()
	{
		double jniValue = get_mPointy_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mPointy_ev_real64 (long pNativeObject, double value);
	public void set_mPointy(double mPointy)
	{
		double mPointyParamValue = mPointy;
		
		set_mPointy_ev_real64(this.nativeObject.pointer, mPointyParamValue);
	}
	
	native private double get_mtiltDegree_void(long pNativeObject);
	public double get_mtiltDegree()
	{
		double jniValue = get_mtiltDegree_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtiltDegree_ev_real64 (long pNativeObject, double value);
	public void set_mtiltDegree(double mtiltDegree)
	{
		double mtiltDegreeParamValue = mtiltDegree;
		
		set_mtiltDegree_ev_real64(this.nativeObject.pointer, mtiltDegreeParamValue);
	}
	
	public TiltCameraEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TiltCameraEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TiltCameraEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TiltCameraEvent obj = null;
 		if(baseObj instanceof TiltCameraEvent)
		{
			obj = (TiltCameraEvent)baseObj;
		} else {
			obj = new TiltCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTiltCameraEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
