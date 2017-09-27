package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 位图缓存
 */
public class CacheBitmap extends com.earthview.world.display.Icachedbitmap {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CCacheBitmap", new CacheBitmapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCCacheBitmapProxy", new CacheBitmapClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public CacheBitmap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCacheBitmapProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.display.CacheBitmap".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void load_IBitmap_IPaintDevice(long pNativeObject, long bmp, long ref_destDevice);
	/**
	 * 加载
	 * @param bmp 位图
	 * @param destDevice 目标设备
	 */
	public void load(com.earthview.world.display.Ibitmap bmp, com.earthview.world.display.Ipaintdevice ref_destDevice)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		long ref_destDeviceParamValue = (ref_destDevice == null ? 0L : ref_destDevice.nativeObject.pointer);
		load_IBitmap_IPaintDevice(this.nativeObject.pointer, bmpParamValue, ref_destDeviceParamValue);
	}
	native private void load_IBitmap_IPaintDevice_NoVirtual(long pNativeObject, long bmp, long ref_destDevice);
	protected void load_NoVirtual(com.earthview.world.display.Ibitmap bmp, com.earthview.world.display.Ipaintdevice ref_destDevice)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		long ref_destDeviceParamValue = (ref_destDevice == null ? 0L : ref_destDevice.nativeObject.pointer);
		load_IBitmap_IPaintDevice_NoVirtual(this.nativeObject.pointer, bmpParamValue, ref_destDeviceParamValue);
	}

	native private int getWidth_void(long pNativeObject);
	/**
	 * 获取图片宽度
	 * @param  
	 * @return 图片宽度
	 */
	public int getWidth()
	{
		int returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getHeight_void(long pNativeObject);
	/**
	 * 获取图片高度
	 * @param  
	 * @return 获取图片高度
	 */
	public int getHeight()
	{
		int returnValue = getHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void render_ev_int32_ev_int32(long pNativeObject, int x, int y);
	/**
	 * 渲染
	 * @param x x坐标
	 * @param y y坐标
	 */
	public void render(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		render_ev_int32_ev_int32(this.nativeObject.pointer, xParamValue, yParamValue);
	}
	native private void render_ev_int32_ev_int32_NoVirtual(long pNativeObject, int x, int y);
	protected void render_NoVirtual(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		render_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue);
	}

	native private void render_IPaintDevice_ev_int32_ev_int32(long pNativeObject, long destDevice, int x, int y);
	/**
	 * 渲染
	 * @param destDevice 目标设备
	 * @param x x坐标
	 * @param y y坐标
	 */
	public void render(com.earthview.world.display.Ipaintdevice destDevice, int x, int y)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		int xParamValue = x;
		int yParamValue = y;
		render_IPaintDevice_ev_int32_ev_int32(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue);
	}
	native private void render_IPaintDevice_ev_int32_ev_int32_NoVirtual(long pNativeObject, long destDevice, int x, int y);
	protected void render_NoVirtual(com.earthview.world.display.Ipaintdevice destDevice, int x, int y)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		int xParamValue = x;
		int yParamValue = y;
		render_IPaintDevice_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue);
	}

	public CacheBitmap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheBitmap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_load_IBitmap_IPaintDevice(long pNativeObject, String method);
	native protected void register_render_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_render_IPaintDevice_ev_int32_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_load_IBitmap_IPaintDevice(this.nativeObject.pointer, "load_IBitmap_IPaintDevice_callback");
			this.register_render_ev_int32_ev_int32(this.nativeObject.pointer, "render_ev_int32_ev_int32_callback");
			this.register_render_IPaintDevice_ev_int32_ev_int32(this.nativeObject.pointer, "render_IPaintDevice_ev_int32_ev_int32_callback");
		}
	}
	
	public static CacheBitmap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheBitmap obj = null;
 		if(baseObj instanceof CacheBitmap)
		{
			obj = (CacheBitmap)baseObj;
		} else {
			obj = new CacheBitmap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCacheBitmap");
			obj.increaseCast();
		}

		return obj;
	}
}
