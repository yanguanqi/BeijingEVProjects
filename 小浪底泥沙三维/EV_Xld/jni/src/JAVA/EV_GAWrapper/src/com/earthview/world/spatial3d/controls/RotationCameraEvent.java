package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationCameraEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CRotationCameraEvent", new RotationCameraEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RotationCameraEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRotationCameraEvent", null);
	}

	/**
	 * 构造函数
	 * @param x 缩放点的Ｘ坐标
	 * @param y 缩放点的Y坐标
	 * @param rotationDegree 旋转的角度
	 */
	public RotationCameraEvent(int x, int y, double rotationDegree) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer rotationDegreePtr = new BasePointer(rotationDegree);
		list.add("rotationDegree", rotationDegreePtr.get());
		Create("CRotationCameraEvent", list);
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
	
	native private double get_mrotationDegree_void(long pNativeObject);
	public double get_mrotationDegree()
	{
		double jniValue = get_mrotationDegree_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mrotationDegree_ev_real64 (long pNativeObject, double value);
	public void set_mrotationDegree(double mrotationDegree)
	{
		double mrotationDegreeParamValue = mrotationDegree;
		
		set_mrotationDegree_ev_real64(this.nativeObject.pointer, mrotationDegreeParamValue);
	}
	
	public RotationCameraEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RotationCameraEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RotationCameraEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RotationCameraEvent obj = null;
 		if(baseObj instanceof RotationCameraEvent)
		{
			obj = (RotationCameraEvent)baseObj;
		} else {
			obj = new RotationCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRotationCameraEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
