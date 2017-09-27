package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间显示基类
 */
public class Ispatialdisplay extends com.earthview.world.display.Idisplay2d {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::ISpatialDisplay", new IspatialdisplayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JISpatialDisplayProxy", new IspatialdisplayClassFactory());
	}

	protected  long getSpatialReference_void_callback()
	{
		com.earthview.world.spatial.geometry.Ispatialreference returnValue = getSpatialReference();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取空间引用
	 * @param   
	 * @return 空间引用对象
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	protected  void setSpatialReference_ISpatialReference_callback(long ref_sr)
	{
		com.earthview.world.spatial.geometry.Ispatialreference ref_srParamValue = (ref_sr == 0L ? null : new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_srParamValue != null)
		{
		ref_srParamValue.setDelegate(true);
		ref_srParamValue.setInstancePointer(new InstancePointer(ref_sr));
		IClassFactory ref_srParamValueClassFactory = GlobalClassFactoryMap.get(ref_srParamValue.getCppInstanceTypeName());
		if (ref_srParamValueClassFactory != null)
		{
			ref_srParamValue.setDelegate(true);
			ref_srParamValue = (com.earthview.world.spatial.geometry.Ispatialreference)ref_srParamValueClassFactory.create();
			ref_srParamValue.setDelegate(true);
			ref_srParamValue.setInstancePointer(new InstancePointer(ref_sr));
		}
		}
		setSpatialReference(ref_srParamValue);
	}

	native private void setSpatialReference_ISpatialReference(long pNativeObject, long ref_sr);
	/**
	 * 设置空间引用
	 * @param sr 空间引用对象
	 * @return 
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference(this.nativeObject.pointer, ref_srParamValue);
	}
	native private void setSpatialReference_ISpatialReference_NoVirtual(long pNativeObject, long ref_sr);
	protected void setSpatialReference_NoVirtual(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		long ref_srParamValue = (ref_sr == null ? 0L : ref_sr.nativeObject.pointer);
		setSpatialReference_ISpatialReference_NoVirtual(this.nativeObject.pointer, ref_srParamValue);
	}

	protected  long getSpatialTransformer_void_callback()
	{
		com.earthview.world.spatial.display.Ispatialtransformer returnValue = getSpatialTransformer();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSpatialTransformer_void(long pNativeObject);
	/**
	 * 获取空间转换器
	 * @param  
	 * @return 空间转换器对象
	 */
	public com.earthview.world.spatial.display.Ispatialtransformer getSpatialTransformer()
	{
		long returnValue = getSpatialTransformer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialtransformer __returnValue = new com.earthview.world.spatial.display.Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialTransformer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialtransformer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialTransformer");
		}
		return __returnValue;
	}
	native private long getSpatialTransformer_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Ispatialtransformer getSpatialTransformer_NoVirtual()
	{
		long returnValue = getSpatialTransformer_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Ispatialtransformer __returnValue = new com.earthview.world.spatial.display.Ispatialtransformer(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialTransformer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Ispatialtransformer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialTransformer");
		}
		return __returnValue;
	}

	protected  boolean isCancelled_void_callback()
	{
		boolean returnValue = isCancelled();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isCancelled_void(long pNativeObject);
	/**
	 * 是否取消
	 * @param trans 
	 * @return 
	 */
	public boolean isCancelled()
	{
		boolean returnValue = isCancelled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isCancelled_void_NoVirtual(long pNativeObject);
	protected boolean isCancelled_NoVirtual()
	{
		boolean returnValue = isCancelled_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void start_void_callback()
	{
		start();
	}

	native private void start_void(long pNativeObject);
	/**
	 * 开始
	 * @param trans 
	 * @return 
	 */
	public void start()
	{
		start_void(this.nativeObject.pointer);
	}
	native private void start_void_NoVirtual(long pNativeObject);
	protected void start_NoVirtual()
	{
		start_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void cancel_void_callback()
	{
		cancel();
	}

	native private void cancel_void(long pNativeObject);
	/**
	 * 取消
	 * @param trans 
	 * @return 
	 */
	public void cancel()
	{
		cancel_void(this.nativeObject.pointer);
	}
	native private void cancel_void_NoVirtual(long pNativeObject);
	protected void cancel_NoVirtual()
	{
		cancel_void_NoVirtual(this.nativeObject.pointer);
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

	public Ispatialdisplay(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ispatialdisplay(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_getSpatialTransformer_void(long pNativeObject, String method);
	native protected void register_isCancelled_void(long pNativeObject, String method);
	native protected void register_start_void(long pNativeObject, String method);
	native protected void register_cancel_void(long pNativeObject, String method);
	native protected void register_fixDevice_IPaintDevice(long pNativeObject, String method);
	native protected void register_getDevice_void(long pNativeObject, String method);
	native protected void register_unfixDevice_void(long pNativeObject, String method);
	native protected void register_getDisplayOptions_void(long pNativeObject, String method);
	native protected void register_getDisplayResolution_void(long pNativeObject, String method);
	native protected void register_setDisplayResolution_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_getSpatialTransformer_void(this.nativeObject.pointer, "getSpatialTransformer_void_callback");
			this.register_isCancelled_void(this.nativeObject.pointer, "isCancelled_void_callback");
			this.register_start_void(this.nativeObject.pointer, "start_void_callback");
			this.register_cancel_void(this.nativeObject.pointer, "cancel_void_callback");
			this.register_fixDevice_IPaintDevice(this.nativeObject.pointer, "fixDevice_IPaintDevice_callback");
			this.register_getDevice_void(this.nativeObject.pointer, "getDevice_void_callback");
			this.register_unfixDevice_void(this.nativeObject.pointer, "unfixDevice_void_callback");
			this.register_getDisplayOptions_void(this.nativeObject.pointer, "getDisplayOptions_void_callback");
			this.register_getDisplayResolution_void(this.nativeObject.pointer, "getDisplayResolution_void_callback");
			this.register_setDisplayResolution_ev_int32(this.nativeObject.pointer, "setDisplayResolution_ev_int32_callback");
		}
	}
	
	public static Ispatialdisplay fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ispatialdisplay obj = null;
 		if(baseObj instanceof Ispatialdisplay)
		{
			obj = (Ispatialdisplay)baseObj;
		} else {
			obj = new Ispatialdisplay(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ISpatialDisplay");
			obj.increaseCast();
		}

		return obj;
	}
}
