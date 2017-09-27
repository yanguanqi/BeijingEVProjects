package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ViewportInformation extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CViewportInformation", new ViewportInformationClassFactory());
	}

	public ViewportInformation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CViewportInformation", null);
	}

	native private long get_mviewPort_void(long pNativeObject);
	public com.earthview.world.graphic.Viewport get_mviewPort()
	{
		long jniValue = get_mviewPort_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	
	native private void set_mviewPort_CViewport (long pNativeObject, long value);
	public void set_mviewPort(com.earthview.world.graphic.Viewport mviewPort)
	{
		long mviewPortParamValue = (mviewPort == null ? 0L : mviewPort.nativeObject.pointer);
		
		set_mviewPort_CViewport(this.nativeObject.pointer, mviewPortParamValue);
	}
	
	native private double get_mlastViewPortWidth_void(long pNativeObject);
	public double get_mlastViewPortWidth()
	{
		double jniValue = get_mlastViewPortWidth_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlastViewPortWidth_ev_real64 (long pNativeObject, double value);
	public void set_mlastViewPortWidth(double mlastViewPortWidth)
	{
		double mlastViewPortWidthParamValue = mlastViewPortWidth;
		
		set_mlastViewPortWidth_ev_real64(this.nativeObject.pointer, mlastViewPortWidthParamValue);
	}
	
	native private double get_mlastViewPortHeight_void(long pNativeObject);
	public double get_mlastViewPortHeight()
	{
		double jniValue = get_mlastViewPortHeight_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlastViewPortHeight_ev_real64 (long pNativeObject, double value);
	public void set_mlastViewPortHeight(double mlastViewPortHeight)
	{
		double mlastViewPortHeightParamValue = mlastViewPortHeight;
		
		set_mlastViewPortHeight_ev_real64(this.nativeObject.pointer, mlastViewPortHeightParamValue);
	}
	
	native private int get_mlastOrientationMode_void(long pNativeObject);
	public int get_mlastOrientationMode()
	{
		int jniValue = get_mlastOrientationMode_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_mlastOrientationMode_ev_int32 (long pNativeObject, int value);
	public void set_mlastOrientationMode(int mlastOrientationMode)
	{
		int mlastOrientationModeParamValue = mlastOrientationMode;
		
		set_mlastOrientationMode_ev_int32(this.nativeObject.pointer, mlastOrientationModeParamValue);
	}
	
	public ViewportInformation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ViewportInformation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ViewportInformation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ViewportInformation obj = null;
 		if(baseObj instanceof ViewportInformation)
		{
			obj = (ViewportInformation)baseObj;
		} else {
			obj = new ViewportInformation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CViewportInformation");
			obj.increaseCast();
		}

		return obj;
	}
}
