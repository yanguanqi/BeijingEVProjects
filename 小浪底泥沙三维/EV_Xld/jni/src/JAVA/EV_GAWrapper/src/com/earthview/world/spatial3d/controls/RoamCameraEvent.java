package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RoamCameraEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CRoamCameraEvent", new RoamCameraEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RoamCameraEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRoamCameraEvent", null);
	}

	/**
	 * 构造函数
	 * @param originX 动画的XML节点
	 * @param originY 动画的XML节点
	 * @param lastX 动画的XML节点
	 * @param lastY 动画的XML节点
	 */
	public RoamCameraEvent(int originX, int originY, int lastX, int lastY) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer originXPtr = new BasePointer(originX);
		list.add("originX", originXPtr.get());
		BasePointer originYPtr = new BasePointer(originY);
		list.add("originY", originYPtr.get());
		BasePointer lastXPtr = new BasePointer(lastX);
		list.add("lastX", lastXPtr.get());
		BasePointer lastYPtr = new BasePointer(lastY);
		list.add("lastY", lastYPtr.get());
		Create("CRoamCameraEvent", list);
	}

	native private int get_moriginX_void(long pNativeObject);
	public int get_moriginX()
	{
		int jniValue = get_moriginX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_moriginX_ev_int32 (long pNativeObject, int value);
	public void set_moriginX(int moriginX)
	{
		int moriginXParamValue = moriginX;
		
		set_moriginX_ev_int32(this.nativeObject.pointer, moriginXParamValue);
	}
	
	native private int get_moriginY_void(long pNativeObject);
	public int get_moriginY()
	{
		int jniValue = get_moriginY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_moriginY_ev_int32 (long pNativeObject, int value);
	public void set_moriginY(int moriginY)
	{
		int moriginYParamValue = moriginY;
		
		set_moriginY_ev_int32(this.nativeObject.pointer, moriginYParamValue);
	}
	
	native private int get_mlastX_void(long pNativeObject);
	public int get_mlastX()
	{
		int jniValue = get_mlastX_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlastX_ev_int32 (long pNativeObject, int value);
	public void set_mlastX(int mlastX)
	{
		int mlastXParamValue = mlastX;
		
		set_mlastX_ev_int32(this.nativeObject.pointer, mlastXParamValue);
	}
	
	native private int get_mlastY_void(long pNativeObject);
	public int get_mlastY()
	{
		int jniValue = get_mlastY_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlastY_ev_int32 (long pNativeObject, int value);
	public void set_mlastY(int mlastY)
	{
		int mlastYParamValue = mlastY;
		
		set_mlastY_ev_int32(this.nativeObject.pointer, mlastYParamValue);
	}
	
	public RoamCameraEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RoamCameraEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RoamCameraEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RoamCameraEvent obj = null;
 		if(baseObj instanceof RoamCameraEvent)
		{
			obj = (RoamCameraEvent)baseObj;
		} else {
			obj = new RoamCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRoamCameraEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
