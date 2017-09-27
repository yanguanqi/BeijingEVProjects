package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TouchPoint extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CTouchPoint", new TouchPointClassFactory());
	}

	/**
	 * 构造函数
	 */
	public TouchPoint() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CTouchPoint", null);
	}

	/**
	 * 构造函数
	 * @param in_id 触摸点的ＩＤ
	 * @param in_phase 触摸点的类型
	 * @param in_x 触摸点的X坐标
	 * @param in_y 触摸点的Ｙ坐标
	 * @param in_tap_count 总点数
	 */
	public TouchPoint(long in_id, com.earthview.world.spatial.systemui.GUITouchPhase in_phase, float in_x, float in_y, long in_tap_count) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer in_idPtr = new BasePointer(in_id);
		list.add("in_id", in_idPtr.get());
		BasePointer in_phasePtr = new BasePointer(in_phase);
		list.add("in_phase", in_phasePtr.get());
		BasePointer in_xPtr = new BasePointer(in_x);
		list.add("in_x", in_xPtr.get());
		BasePointer in_yPtr = new BasePointer(in_y);
		list.add("in_y", in_yPtr.get());
		BasePointer in_tap_countPtr = new BasePointer(in_tap_count);
		list.add("in_tap_count", in_tap_countPtr.get());
		Create("CTouchPoint", list);
	}

	/**
	 * 挎贝构造函数
	 */
	public TouchPoint(com.earthview.world.spatial.systemui.TouchPoint rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CTouchPoint", list);
	}

	native private long get_mid_void(long pNativeObject);
	public long get_mid()
	{
		long jniValue = get_mid_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mid_ev_uint32 (long pNativeObject, long value);
	public void set_mid(long mid)
	{
		long midParamValue = mid;
		
		set_mid_ev_uint32(this.nativeObject.pointer, midParamValue);
	}
	
	native private int get_mphase_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.GUITouchPhase get_mphase()
	{
		int jniValue = get_mphase_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial.systemui.GUITouchPhase.toEnum(jniValue);
	}
	
	native private void set_mphase_GUITouchPhase (long pNativeObject, int value);
	public void set_mphase(com.earthview.world.spatial.systemui.GUITouchPhase mphase)
	{
		int mphaseParamValue = mphase.getValue();
		
		set_mphase_GUITouchPhase(this.nativeObject.pointer, mphaseParamValue);
	}
	
	native private float get_x_void(long pNativeObject);
	public float get_x()
	{
		float jniValue = get_x_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_x_ev_real32 (long pNativeObject, float value);
	public void set_x(float x)
	{
		float xParamValue = x;
		
		set_x_ev_real32(this.nativeObject.pointer, xParamValue);
	}
	
	native private float get_y_void(long pNativeObject);
	public float get_y()
	{
		float jniValue = get_y_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_y_ev_real32 (long pNativeObject, float value);
	public void set_y(float y)
	{
		float yParamValue = y;
		
		set_y_ev_real32(this.nativeObject.pointer, yParamValue);
	}
	
	native private long get_mtapCount_void(long pNativeObject);
	public long get_mtapCount()
	{
		long jniValue = get_mtapCount_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mtapCount_ev_uint32 (long pNativeObject, long value);
	public void set_mtapCount(long mtapCount)
	{
		long mtapCountParamValue = mtapCount;
		
		set_mtapCount_ev_uint32(this.nativeObject.pointer, mtapCountParamValue);
	}
	
	public TouchPoint(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TouchPoint(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static TouchPoint fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TouchPoint obj = null;
 		if(baseObj instanceof TouchPoint)
		{
			obj = (TouchPoint)baseObj;
		} else {
			obj = new TouchPoint(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTouchPoint");
			obj.increaseCast();
		}

		return obj;
	}
}
