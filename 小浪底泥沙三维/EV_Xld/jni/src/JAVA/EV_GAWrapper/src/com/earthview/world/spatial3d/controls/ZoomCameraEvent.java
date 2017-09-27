package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ZoomCameraEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CZoomCameraEvent", new ZoomCameraEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ZoomCameraEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CZoomCameraEvent", null);
	}

	/**
	 * 构造函数
	 * @param x 缩放点的Ｘ坐标
	 * @param y 缩放点的Y坐标
	 * @param zoomRatio 缩放比例
	 */
	public ZoomCameraEvent(int x, int y, double zoomRatio) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer zoomRatioPtr = new BasePointer(zoomRatio);
		list.add("zoomRatio", zoomRatioPtr.get());
		Create("CZoomCameraEvent", list);
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
	
	native private double get_mzoomRatio_void(long pNativeObject);
	public double get_mzoomRatio()
	{
		double jniValue = get_mzoomRatio_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mzoomRatio_ev_real64 (long pNativeObject, double value);
	public void set_mzoomRatio(double mzoomRatio)
	{
		double mzoomRatioParamValue = mzoomRatio;
		
		set_mzoomRatio_ev_real64(this.nativeObject.pointer, mzoomRatioParamValue);
	}
	
	public ZoomCameraEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ZoomCameraEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ZoomCameraEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ZoomCameraEvent obj = null;
 		if(baseObj instanceof ZoomCameraEvent)
		{
			obj = (ZoomCameraEvent)baseObj;
		} else {
			obj = new ZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CZoomCameraEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
