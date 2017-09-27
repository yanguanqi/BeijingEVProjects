package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TiltCameraEventEX extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CTiltCameraEventEX", new TiltCameraEventEXClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TiltCameraEventEX() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTiltCameraEventEX", null);
	}

	/**
	 * 构造函数
	 * @param x 缩放点的Ｘ坐标
	 * @param y 缩放点的Y坐标
	 * @param tiltDegree 倾斜的角度
	 */
	public TiltCameraEventEX(int x, int y, double tiltDegree) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer tiltDegreePtr = new BasePointer(tiltDegree);
		list.add("tiltDegree", tiltDegreePtr.get());
		Create("CTiltCameraEventEX", list);
	}

	native private int get_mx_void(long pNativeObject);
	public int get_mx()
	{
		int jniValue = get_mx_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mx_ev_int32 (long pNativeObject, int value);
	public void set_mx(int mx)
	{
		int mxParamValue = mx;
		
		set_mx_ev_int32(this.nativeObject.pointer, mxParamValue);
	}
	
	native private int get_my_void(long pNativeObject);
	public int get_my()
	{
		int jniValue = get_my_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_my_ev_int32 (long pNativeObject, int value);
	public void set_my(int my)
	{
		int myParamValue = my;
		
		set_my_ev_int32(this.nativeObject.pointer, myParamValue);
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
	
	public TiltCameraEventEX(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TiltCameraEventEX(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TiltCameraEventEX fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TiltCameraEventEX obj = null;
 		if(baseObj instanceof TiltCameraEventEX)
		{
			obj = (TiltCameraEventEX)baseObj;
		} else {
			obj = new TiltCameraEventEX(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTiltCameraEventEX");
			obj.increaseCast();
		}

		return obj;
	}
}
