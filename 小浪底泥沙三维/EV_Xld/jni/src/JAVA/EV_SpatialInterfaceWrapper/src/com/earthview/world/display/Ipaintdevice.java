package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 绘制设备基类
 */
public class Ipaintdevice extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::IPaintDevice", new IpaintdeviceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JIPaintDeviceProxy", new IpaintdeviceClassFactory());
	}

	protected  long getDC_void_callback()
	{
		long returnValue = getDC();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getDC_void(long pNativeObject);
	/**
	 * 获取DC
	 * @param  
	 * @return 返回DC
	 */
	public long getDC()
	{
		long returnValue = getDC_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getDC_void_NoVirtual(long pNativeObject);
	protected long getDC_NoVirtual()
	{
		long returnValue = getDC_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void releaseDC_void_callback()
	{
		releaseDC();
	}

	native private void releaseDC_void(long pNativeObject);
	/**
	 * 释放DC
	 * @param  
	 */
	public void releaseDC()
	{
		releaseDC_void(this.nativeObject.pointer);
	}
	native private void releaseDC_void_NoVirtual(long pNativeObject);
	protected void releaseDC_NoVirtual()
	{
		releaseDC_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  int getWidth_void_callback()
	{
		int returnValue = getWidth();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getWidth_void(long pNativeObject);
	/**
	 * 获取设备宽度
	 * @param  
	 * @return 返回宽度
	 */
	public int getWidth()
	{
		int returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWidth_void_NoVirtual(long pNativeObject);
	protected int getWidth_NoVirtual()
	{
		int returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getHeight_void_callback()
	{
		int returnValue = getHeight();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getHeight_void(long pNativeObject);
	/**
	 * 获取设备高度
	 * @param  
	 * @return 返回高度
	 */
	public int getHeight()
	{
		int returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHeight_void_NoVirtual(long pNativeObject);
	protected int getHeight_NoVirtual()
	{
		int returnValue = getHeight_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void fill_IColor_callback(long color)
	{
		com.earthview.world.spatial.display.Icolor colorParamValue = (color == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(colorParamValue != null)
		{
		colorParamValue.setDelegate(true);
		colorParamValue.setInstancePointer(new InstancePointer(color));
		IClassFactory colorParamValueClassFactory = GlobalClassFactoryMap.get(colorParamValue.getCppInstanceTypeName());
		if (colorParamValueClassFactory != null)
		{
			colorParamValue.setDelegate(true);
			colorParamValue = (com.earthview.world.spatial.display.Icolor)colorParamValueClassFactory.create();
			colorParamValue.setDelegate(true);
			colorParamValue.setInstancePointer(new InstancePointer(color));
		}
		}
		fill(colorParamValue);
	}

	native private void fill_IColor(long pNativeObject, long color);
	/**
	 * 以指定颜色填充
	 * @param color 颜色
	 */
	public void fill(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		fill_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void fill_IColor_NoVirtual(long pNativeObject, long color);
	protected void fill_NoVirtual(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		fill_IColor_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	protected  void fill_ev_int32_callback(int color)
	{
		int colorParamValue = color;
		fill(colorParamValue);
	}

	native private void fill_ev_int32(long pNativeObject, int color);
	/**
	 * 以指定颜色填充
	 * @param color 颜色（aarrggbb）
	 */
	public void fill(int color)
	{
		int colorParamValue = color;
		fill_ev_int32(this.nativeObject.pointer, colorParamValue);
	}
	native private void fill_ev_int32_NoVirtual(long pNativeObject, int color);
	protected void fill_NoVirtual(int color)
	{
		int colorParamValue = color;
		fill_ev_int32_NoVirtual(this.nativeObject.pointer, colorParamValue);
	}

	protected  int getResolution_void_callback()
	{
		int returnValue = getResolution();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getResolution_void(long pNativeObject);
	/**
	 * 获取设备分辨率
	 * @return 返回设备分辨率
	 */
	public int getResolution()
	{
		int returnValue = getResolution_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getResolution_void_NoVirtual(long pNativeObject);
	protected int getResolution_NoVirtual()
	{
		int returnValue = getResolution_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public Ipaintdevice(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ipaintdevice(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getDC_void(long pNativeObject, String method);
	native protected void register_releaseDC_void(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_fill_IColor(long pNativeObject, String method);
	native protected void register_fill_ev_int32(long pNativeObject, String method);
	native protected void register_getResolution_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getDC_void(this.nativeObject.pointer, "getDC_void_callback");
			this.register_releaseDC_void(this.nativeObject.pointer, "releaseDC_void_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_fill_IColor(this.nativeObject.pointer, "fill_IColor_callback");
			this.register_fill_ev_int32(this.nativeObject.pointer, "fill_ev_int32_callback");
			this.register_getResolution_void(this.nativeObject.pointer, "getResolution_void_callback");
		}
	}
	
	public static Ipaintdevice fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ipaintdevice obj = null;
 		if(baseObj instanceof Ipaintdevice)
		{
			obj = (Ipaintdevice)baseObj;
		} else {
			obj = new Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IPaintDevice");
			obj.increaseCast();
		}

		return obj;
	}
}
