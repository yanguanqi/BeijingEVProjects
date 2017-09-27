package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationAndZoomCameraEvent extends com.earthview.world.spatial.systemui.Guievent {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent", new RotationAndZoomCameraEventClassFactory());
	}

	/**
	 * 构造函数
	 */
	public RotationAndZoomCameraEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRotationAndZoomCameraEvent", null);
	}

	public RotationAndZoomCameraEvent(double x, double y, double rotationDegree, double zoomRatio) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer xPtr = new BasePointer(x);
		list.add("x", xPtr.get());
		BasePointer yPtr = new BasePointer(y);
		list.add("y", yPtr.get());
		BasePointer rotationDegreePtr = new BasePointer(rotationDegree);
		list.add("rotationDegree", rotationDegreePtr.get());
		BasePointer zoomRatioPtr = new BasePointer(zoomRatio);
		list.add("zoomRatio", zoomRatioPtr.get());
		Create("CRotationAndZoomCameraEvent", list);
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
	
	public RotationAndZoomCameraEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RotationAndZoomCameraEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RotationAndZoomCameraEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RotationAndZoomCameraEvent obj = null;
 		if(baseObj instanceof RotationAndZoomCameraEvent)
		{
			obj = (RotationAndZoomCameraEvent)baseObj;
		} else {
			obj = new RotationAndZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRotationAndZoomCameraEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
