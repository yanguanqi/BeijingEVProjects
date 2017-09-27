package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存位图基类
 */
public class Icachedbitmap extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::ICachedBitmap", new IcachedbitmapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JICachedBitmapProxy", new IcachedbitmapClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public Icachedbitmap() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JICachedBitmapProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.display.Icachedbitmap".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void load_IBitmap_IPaintDevice_callback(long bmp, long ref_destDevice)
	{
		com.earthview.world.display.Ibitmap bmpParamValue = (bmp == 0L ? null : new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate));
		if(bmpParamValue != null)
		{
		bmpParamValue.setDelegate(true);
		bmpParamValue.setInstancePointer(new InstancePointer(bmp));
		IClassFactory bmpParamValueClassFactory = GlobalClassFactoryMap.get(bmpParamValue.getCppInstanceTypeName());
		if (bmpParamValueClassFactory != null)
		{
			bmpParamValue.setDelegate(true);
			bmpParamValue = (com.earthview.world.display.Ibitmap)bmpParamValueClassFactory.create();
			bmpParamValue.setDelegate(true);
			bmpParamValue.setInstancePointer(new InstancePointer(bmp));
		}
		}
		com.earthview.world.display.Ipaintdevice ref_destDeviceParamValue = (ref_destDevice == 0L ? null : new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_destDeviceParamValue != null)
		{
		ref_destDeviceParamValue.setDelegate(true);
		ref_destDeviceParamValue.setInstancePointer(new InstancePointer(ref_destDevice));
		IClassFactory ref_destDeviceParamValueClassFactory = GlobalClassFactoryMap.get(ref_destDeviceParamValue.getCppInstanceTypeName());
		if (ref_destDeviceParamValueClassFactory != null)
		{
			ref_destDeviceParamValue.setDelegate(true);
			ref_destDeviceParamValue = (com.earthview.world.display.Ipaintdevice)ref_destDeviceParamValueClassFactory.create();
			ref_destDeviceParamValue.setDelegate(true);
			ref_destDeviceParamValue.setInstancePointer(new InstancePointer(ref_destDevice));
		}
		}
		load(bmpParamValue, ref_destDeviceParamValue);
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

	protected  void render_ev_int32_ev_int32_callback(int x, int y)
	{
		int xParamValue = x;
		int yParamValue = y;
		render(xParamValue, yParamValue);
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

	protected  void render_IPaintDevice_ev_int32_ev_int32_callback(long destDevice, int x, int y)
	{
		com.earthview.world.display.Ipaintdevice destDeviceParamValue = (destDevice == 0L ? null : new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate));
		if(destDeviceParamValue != null)
		{
		destDeviceParamValue.setDelegate(true);
		destDeviceParamValue.setInstancePointer(new InstancePointer(destDevice));
		IClassFactory destDeviceParamValueClassFactory = GlobalClassFactoryMap.get(destDeviceParamValue.getCppInstanceTypeName());
		if (destDeviceParamValueClassFactory != null)
		{
			destDeviceParamValue.setDelegate(true);
			destDeviceParamValue = (com.earthview.world.display.Ipaintdevice)destDeviceParamValueClassFactory.create();
			destDeviceParamValue.setDelegate(true);
			destDeviceParamValue.setInstancePointer(new InstancePointer(destDevice));
		}
		}
		int xParamValue = x;
		int yParamValue = y;
		render(destDeviceParamValue, xParamValue, yParamValue);
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

	public Icachedbitmap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Icachedbitmap(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Icachedbitmap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Icachedbitmap obj = null;
 		if(baseObj instanceof Icachedbitmap)
		{
			obj = (Icachedbitmap)baseObj;
		} else {
			obj = new Icachedbitmap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ICachedBitmap");
			obj.increaseCast();
		}

		return obj;
	}
}
