package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 2D显示基类
 */
public class Idisplay2d extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::IDisplay2D", new Idisplay2dClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JIDisplay2DProxy", new Idisplay2dClassFactory());
	}

	protected  void fixDevice_IPaintDevice_callback(long ref_device)
	{
		com.earthview.world.display.Ipaintdevice ref_deviceParamValue = (ref_device == 0L ? null : new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_deviceParamValue != null)
		{
		ref_deviceParamValue.setDelegate(true);
		ref_deviceParamValue.setInstancePointer(new InstancePointer(ref_device));
		IClassFactory ref_deviceParamValueClassFactory = GlobalClassFactoryMap.get(ref_deviceParamValue.getCppInstanceTypeName());
		if (ref_deviceParamValueClassFactory != null)
		{
			ref_deviceParamValue.setDelegate(true);
			ref_deviceParamValue = (com.earthview.world.display.Ipaintdevice)ref_deviceParamValueClassFactory.create();
			ref_deviceParamValue.setDelegate(true);
			ref_deviceParamValue.setInstancePointer(new InstancePointer(ref_device));
		}
		}
		fixDevice(ref_deviceParamValue);
	}

	native private void fixDevice_IPaintDevice(long pNativeObject, long ref_device);
	/**
	 * 固定设备
	 * @param device 设备
	 */
	public void fixDevice(com.earthview.world.display.Ipaintdevice ref_device)
	{
		long ref_deviceParamValue = (ref_device == null ? 0L : ref_device.nativeObject.pointer);
		fixDevice_IPaintDevice(this.nativeObject.pointer, ref_deviceParamValue);
	}
	native private void fixDevice_IPaintDevice_NoVirtual(long pNativeObject, long ref_device);
	protected void fixDevice_NoVirtual(com.earthview.world.display.Ipaintdevice ref_device)
	{
		long ref_deviceParamValue = (ref_device == null ? 0L : ref_device.nativeObject.pointer);
		fixDevice_IPaintDevice_NoVirtual(this.nativeObject.pointer, ref_deviceParamValue);
	}

	protected  long getDevice_void_callback()
	{
		com.earthview.world.display.Ipaintdevice returnValue = getDevice();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDevice_void(long pNativeObject);
	/**
	 * 获取设备
	 * @param  
	 * @return 返回设备
	 */
	public com.earthview.world.display.Ipaintdevice getDevice()
	{
		long returnValue = getDevice_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}
	native private long getDevice_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ipaintdevice getDevice_NoVirtual()
	{
		long returnValue = getDevice_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}

	protected  void unfixDevice_void_callback()
	{
		unfixDevice();
	}

	native private void unfixDevice_void(long pNativeObject);
	/**
	 * 解开设备
	 * @param  
	 */
	public void unfixDevice()
	{
		unfixDevice_void(this.nativeObject.pointer);
	}
	native private void unfixDevice_void_NoVirtual(long pNativeObject);
	protected void unfixDevice_NoVirtual()
	{
		unfixDevice_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getDisplayOptions_void_callback()
	{
		com.earthview.world.display.Idisplayoptions returnValue = getDisplayOptions();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getDisplayOptions_void(long pNativeObject);
	/**
	 * 获取显示选项
	 * @param  
	 * @return 返回显示选项
	 */
	public com.earthview.world.display.Idisplayoptions getDisplayOptions()
	{
		long returnValue = getDisplayOptions_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Idisplayoptions __returnValue = new com.earthview.world.display.Idisplayoptions(CreatedWhenConstruct.CWC_NotToCreate, "IDisplayOptions");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Idisplayoptions)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDisplayOptions");
		}
		return __returnValue;
	}
	native private long getDisplayOptions_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Idisplayoptions getDisplayOptions_NoVirtual()
	{
		long returnValue = getDisplayOptions_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Idisplayoptions __returnValue = new com.earthview.world.display.Idisplayoptions(CreatedWhenConstruct.CWC_NotToCreate, "IDisplayOptions");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Idisplayoptions)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDisplayOptions");
		}
		return __returnValue;
	}

	protected  int getDisplayResolution_void_callback()
	{
		int returnValue = getDisplayResolution();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getDisplayResolution_void(long pNativeObject);
	/**
	 * 获取显示分辨率
	 * @param  
	 * @return 返回显示分辨率
	 */
	public int getDisplayResolution()
	{
		int returnValue = getDisplayResolution_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getDisplayResolution_void_NoVirtual(long pNativeObject);
	protected int getDisplayResolution_NoVirtual()
	{
		int returnValue = getDisplayResolution_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setDisplayResolution_ev_int32_callback(int resolution)
	{
		int resolutionParamValue = resolution;
		setDisplayResolution(resolutionParamValue);
	}

	native private void setDisplayResolution_ev_int32(long pNativeObject, int resolution);
	/**
	 * 设置显示分辨率
	 * @param  
	 * @return 返回显示分辨率
	 */
	public void setDisplayResolution(int resolution)
	{
		int resolutionParamValue = resolution;
		setDisplayResolution_ev_int32(this.nativeObject.pointer, resolutionParamValue);
	}
	native private void setDisplayResolution_ev_int32_NoVirtual(long pNativeObject, int resolution);
	protected void setDisplayResolution_NoVirtual(int resolution)
	{
		int resolutionParamValue = resolution;
		setDisplayResolution_ev_int32_NoVirtual(this.nativeObject.pointer, resolutionParamValue);
	}

	public Idisplay2d(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Idisplay2d(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_fixDevice_IPaintDevice(long pNativeObject, String method);
	native protected void register_getDevice_void(long pNativeObject, String method);
	native protected void register_unfixDevice_void(long pNativeObject, String method);
	native protected void register_getDisplayOptions_void(long pNativeObject, String method);
	native protected void register_getDisplayResolution_void(long pNativeObject, String method);
	native protected void register_setDisplayResolution_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_fixDevice_IPaintDevice(this.nativeObject.pointer, "fixDevice_IPaintDevice_callback");
			this.register_getDevice_void(this.nativeObject.pointer, "getDevice_void_callback");
			this.register_unfixDevice_void(this.nativeObject.pointer, "unfixDevice_void_callback");
			this.register_getDisplayOptions_void(this.nativeObject.pointer, "getDisplayOptions_void_callback");
			this.register_getDisplayResolution_void(this.nativeObject.pointer, "getDisplayResolution_void_callback");
			this.register_setDisplayResolution_ev_int32(this.nativeObject.pointer, "setDisplayResolution_ev_int32_callback");
		}
	}
	
	public static Idisplay2d fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Idisplay2d obj = null;
 		if(baseObj instanceof Idisplay2d)
		{
			obj = (Idisplay2d)baseObj;
		} else {
			obj = new Idisplay2d(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IDisplay2D");
			obj.increaseCast();
		}

		return obj;
	}
}
