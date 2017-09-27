package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 位图类
 */
public class MetaFile extends com.earthview.world.display.Ipaintdevice {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CMetaFile", new MetaFileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JCMetaFileProxy", new MetaFileClassFactory());
	}

	/**
	 * 构造函数
	 * @param width 位图宽度
	 * @param height 位图高度
	 */
	public MetaFile(com.earthview.world.display.Ipaintdevice device, int width, int height) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer devicePtr = new BasePointer(device);
		list.add("device", devicePtr.get());
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		Create("JCMetaFileProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.display.MetaFile".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param pszFileName 指定文件路径
	 */
	public MetaFile(String pszFileName) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer pszFileNamePtr = new BasePointer(pszFileName);
		list.add("pszFileName", pszFileNamePtr.get());
		Create("JCMetaFileProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.display.MetaFile".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	native private long getNativeGraphics_void(long pNativeObject);
	/**
	 * 获取内部GpGraphics*
	 * @param  
	 * @return 返回内部GpGraphics*
	 */
	public VoidPointer getNativeGraphics()
	{
		long returnValue = getNativeGraphics_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private String getFilePath_void(long pNativeObject);
	/**
	 * 获取文件路径
	 * @param  
	 * @return 返回路径
	 */
	public String getFilePath()
	{
		String returnValue = getFilePath_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getWidth_void(long pNativeObject);
	/**
	 * 获取位图宽度
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

	native private int getHeight_void(long pNativeObject);
	/**
	 * 获取位图高度
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

	native private void fill_IColor(long pNativeObject, long color);
	/**
	 * 以指定颜色填充位图
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

	native private void fill_ev_int32(long pNativeObject, int color);
	/**
	 * 以指定颜色填充位图
	 * @param color 颜色aarrggbb
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

	native private void render_IPaintDevice_IEnvelope(long pNativeObject, long destDevice, long destExt);
	public void render(com.earthview.world.display.Ipaintdevice destDevice, com.earthview.world.spatial.geometry.Ienvelope destExt)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		long destExtParamValue = (destExt == null ? 0L : destExt.nativeObject.pointer);
		render_IPaintDevice_IEnvelope(this.nativeObject.pointer, destDeviceParamValue, destExtParamValue);
	}
	native private void render_IPaintDevice_IEnvelope_IEnvelope(long pNativeObject, long destDevice, long destExt, long srcExt);
	/**
	 * 将位图渲染到指定设备的指定区域
	 * @param destDevice 指定设备
	 * @param destExt 指定区域
	 * @param srcExt 源区域
	 */
	public void render(com.earthview.world.display.Ipaintdevice destDevice, com.earthview.world.spatial.geometry.Ienvelope destExt, com.earthview.world.spatial.geometry.Ienvelope srcExt)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		long destExtParamValue = (destExt == null ? 0L : destExt.nativeObject.pointer);
		long srcExtParamValue = (srcExt == null ? 0L : srcExt.nativeObject.pointer);
		render_IPaintDevice_IEnvelope_IEnvelope(this.nativeObject.pointer, destDeviceParamValue, destExtParamValue, srcExtParamValue);
	}
	native private void render_IPaintDevice_ev_real64_ev_real64(long pNativeObject, long destDevice, double x, double y);
	/**
	 * 将位图渲染到指定设备的指定位置
	 * @param destDevice 指定设备
	 * @param x 起点x坐标
	 * @param y 起点y坐标
	 */
	public void render(com.earthview.world.display.Ipaintdevice destDevice, double x, double y)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		render_IPaintDevice_ev_real64_ev_real64(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue);
	}
	native private void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long destDevice, double x, double y, double sx, double sy, double sw, double sh);
	/**
	 * 将位图渲染到指定设备的指定位置
	 * @param destDevice 指定设备
	 * @param x 起点x坐标
	 * @param y 起点y坐标
	 * @param sx 源点x坐标
	 * @param sy 源点y坐标
	 * @param sw 源宽度
	 * @param wh 源高度
	 */
	public void render(com.earthview.world.display.Ipaintdevice destDevice, double x, double y, double sx, double sy, double sw, double sh)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
	}
	native private void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long destDevice, double x, double y, double w, double h);
	/**
	 * 将位图渲染到指定设备的指定位置
	 * @param destDevice 指定设备
	 * @param x 起点x坐标
	 * @param y 起点y坐标
	 * @param w 宽度
	 * @param h 高度
	 */
	public void render(com.earthview.world.display.Ipaintdevice destDevice, double x, double y, double w, double h)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue, wParamValue, hParamValue);
	}
	native private void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long destDevice, double x, double y, double w, double h, double sx, double sy, double sw, double sh);
	/**
	 * 将位图渲染到指定设备的指定位置
	 * @param destDevice 指定设备
	 * @param x 起点x坐标
	 * @param y 起点y坐标
	 * @param w 宽度
	 * @param h 高度
	 * @param sx 源点x坐标
	 * @param sy 源点y坐标
	 * @param sw 源宽度
	 * @param wh 源高度
	 */
	public void render(com.earthview.world.display.Ipaintdevice destDevice, double x, double y, double w, double h, double sx, double sy, double sw, double sh)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue, wParamValue, hParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
	}
	native private void setTransparent_ev_uint8(long pNativeObject, short transparent);
	/**
	 * 设置透明度
	 * @param transparent 透明度
	 */
	public void setTransparent(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparent_ev_uint8(this.nativeObject.pointer, transparentParamValue);
	}
	native private void save_void(long pNativeObject);
	public void save()
	{
		save_void(this.nativeObject.pointer);
	}
	public MetaFile(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MetaFile(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取设备分辨率
	 * @return 返回设备分辨率
	 */
	public int getResolution()
	{
		return super.getResolution_NoVirtual();
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
	
	public static MetaFile fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MetaFile obj = null;
 		if(baseObj instanceof MetaFile)
		{
			obj = (MetaFile)baseObj;
		} else {
			obj = new MetaFile(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMetaFile");
			obj.increaseCast();
		}

		return obj;
	}
}
