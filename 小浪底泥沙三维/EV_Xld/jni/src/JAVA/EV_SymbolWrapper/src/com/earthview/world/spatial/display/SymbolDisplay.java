package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 符号呈现类，用于绘制symbol提供方法如下：设置绑定的符号绘制设备、获取已绑定符号绘制设备、解绑绘制设备、获取绘制设备的参数对象
 */
public class SymbolDisplay extends com.earthview.world.display.Idisplay2d {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CSymbolDisplay", new SymbolDisplayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCSymbolDisplayProxy", new SymbolDisplayClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public SymbolDisplay() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCSymbolDisplayProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.SymbolDisplay".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void fixDevice_IPaintDevice(long pNativeObject, long ref_device);
	/**
	 * 设置绑定的符号绘制设备
	 * @param  绘制设备
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

	native private long getDevice_void(long pNativeObject);
	/**
	 * 获取已绑定符号绘制设备
	 * @param  
	 * @return 绘制设备
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

	native private void unfixDevice_void(long pNativeObject);
	/**
	 * 解绑绘制设备
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

	native private long getDisplayOptions_void(long pNativeObject);
	/**
	 * 获取绘制设备的参数对象
	 * @param  
	 * @return 参数对象
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

	public SymbolDisplay(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SymbolDisplay(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static SymbolDisplay fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SymbolDisplay obj = null;
 		if(baseObj instanceof SymbolDisplay)
		{
			obj = (SymbolDisplay)baseObj;
		} else {
			obj = new SymbolDisplay(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CSymbolDisplay");
			obj.increaseCast();
		}

		return obj;
	}
}
