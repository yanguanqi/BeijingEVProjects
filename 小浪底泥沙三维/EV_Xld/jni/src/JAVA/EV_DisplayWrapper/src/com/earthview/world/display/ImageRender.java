package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图像渲染类
 */
public class ImageRender extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::CImageRender", new ImageRenderClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public ImageRender() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CImageRender", null);
	}

	native private void load_IPaintDevice(long pNativeObject, long ref_device);
	/**
	 * 加载设备
	 * @param device 设备
	 */
	public void load(com.earthview.world.display.Ipaintdevice ref_device)
	{
		long ref_deviceParamValue = (ref_device == null ? 0L : ref_device.nativeObject.pointer);
		load_IPaintDevice(this.nativeObject.pointer, ref_deviceParamValue);
	}
	native private void load_IPaintDevice_IDisplayOptions(long pNativeObject, long ref_device, long ref_displayOptions);
	/**
	 * 加载设备
	 * @param device 设备
	 * @param displayOptions 显示选项
	 */
	public void load(com.earthview.world.display.Ipaintdevice ref_device, com.earthview.world.display.Idisplayoptions ref_displayOptions)
	{
		long ref_deviceParamValue = (ref_device == null ? 0L : ref_device.nativeObject.pointer);
		long ref_displayOptionsParamValue = (ref_displayOptions == null ? 0L : ref_displayOptions.nativeObject.pointer);
		load_IPaintDevice_IDisplayOptions(this.nativeObject.pointer, ref_deviceParamValue, ref_displayOptionsParamValue);
	}
	native private void unload_void(long pNativeObject);
	/**
	 * 卸载设备
	 */
	public void unload()
	{
		unload_void(this.nativeObject.pointer);
	}
	native private void translate_ev_real64_ev_real64(long pNativeObject, double offsetX, double offsetY);
	/**
	 * 平移
	 * @param offsetX x偏移
	 * @param offsetY y偏移
	 */
	public void translate(double offsetX, double offsetY)
	{
		double offsetXParamValue = offsetX;
		double offsetYParamValue = offsetY;
		translate_ev_real64_ev_real64(this.nativeObject.pointer, offsetXParamValue, offsetYParamValue);
	}
	native private void scale_ev_real64_ev_real64(long pNativeObject, double scaleX, double scaleY);
	/**
	 * 按比例缩放
	 * @param scaleX x方向比例
	 * @param scaleY y方向比例
	 */
	public void scale(double scaleX, double scaleY)
	{
		double scaleXParamValue = scaleX;
		double scaleYParamValue = scaleY;
		scale_ev_real64_ev_real64(this.nativeObject.pointer, scaleXParamValue, scaleYParamValue);
	}
	native private void rotate_ev_real64(long pNativeObject, double angle);
	/**
	 * 旋转
	 * @param angle 旋转角度
	 */
	public void rotate(double angle)
	{
		double angleParamValue = angle;
		rotate_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void rotateAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double angle, double x, double y);
	/**
	 * 旋转到
	 * @param angle 旋转角度
	 * @param x x坐标
	 * @param y y坐标
	 */
	public void rotateAt(double angle, double x, double y)
	{
		double angleParamValue = angle;
		double xParamValue = x;
		double yParamValue = y;
		rotateAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, angleParamValue, xParamValue, yParamValue);
	}
	native private void setClip_CDataPath(long pNativeObject, long path);
	/**
	 * 剪切
	 * @param path 剪切范围
	 */
	public void setClip(com.earthview.world.display.DataPath path)
	{
		long pathParamValue = (path == null ? 0L : path.nativeObject.pointer);
		setClip_CDataPath(this.nativeObject.pointer, pathParamValue);
	}
	native private void setClip_CDataRegion(long pNativeObject, long region);
	public void setClip(com.earthview.world.display.DataRegion region)
	{
		long regionParamValue = (region == null ? 0L : region.nativeObject.pointer);
		setClip_CDataRegion(this.nativeObject.pointer, regionParamValue);
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void drawImage_IBitmap_IEnvelope(long pNativeObject, long bmp, long destExt);
	/**
	 * 绘制图像
	 * @param bmp 位图
	 * @param destExt 目标范围
	 */
	public void drawImage(com.earthview.world.display.Ibitmap bmp, com.earthview.world.spatial.geometry.Ienvelope destExt)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		long destExtParamValue = (destExt == null ? 0L : destExt.nativeObject.pointer);
		drawImage_IBitmap_IEnvelope(this.nativeObject.pointer, bmpParamValue, destExtParamValue);
	}
	native private void drawImage_IBitmap_IEnvelope_IEnvelope(long pNativeObject, long bmp, long destExt, long srcExt);
	/**
	 * 绘制图像
	 * @param bmp 位图
	 * @param destExt 目标范围
	 * @param srcExt 源范围
	 */
	public void drawImage(com.earthview.world.display.Ibitmap bmp, com.earthview.world.spatial.geometry.Ienvelope destExt, com.earthview.world.spatial.geometry.Ienvelope srcExt)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		long destExtParamValue = (destExt == null ? 0L : destExt.nativeObject.pointer);
		long srcExtParamValue = (srcExt == null ? 0L : srcExt.nativeObject.pointer);
		drawImage_IBitmap_IEnvelope_IEnvelope(this.nativeObject.pointer, bmpParamValue, destExtParamValue, srcExtParamValue);
	}
	native private void drawImage_IBitmap_ev_real64_ev_real64(long pNativeObject, long bmp, double x, double y);
	/**
	 * 绘制图像
	 * @param bmp 位图
	 * @param x 目标点x坐标
	 * @param y 目标点y坐标
	 */
	public void drawImage(com.earthview.world.display.Ibitmap bmp, double x, double y)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		drawImage_IBitmap_ev_real64_ev_real64(this.nativeObject.pointer, bmpParamValue, xParamValue, yParamValue);
	}
	native private void drawImage_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long bmp, double x, double y, double sx, double sy, double sw, double sh);
	/**
	 * 绘制图像
	 * @param bmp 位图
	 * @param x 目标点x坐标
	 * @param y 目标点y坐标
	 * @param sx 源点x坐标
	 * @param sy 源点y坐标
	 * @param sw 源图像宽度
	 * @param sh 源图像高度
	 */
	public void drawImage(com.earthview.world.display.Ibitmap bmp, double x, double y, double sx, double sy, double sw, double sh)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		drawImage_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, bmpParamValue, xParamValue, yParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
	}
	native private void drawImage_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long bmp, double x, double y, double w, double h);
	/**
	 * 绘制图像
	 * @param bmp 位图
	 * @param x 目标点x坐标
	 * @param y 目标点y坐标
	 * @param w 宽度
	 * @param h 高度
	 */
	public void drawImage(com.earthview.world.display.Ibitmap bmp, double x, double y, double w, double h)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		drawImage_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, bmpParamValue, xParamValue, yParamValue, wParamValue, hParamValue);
	}
	native private void drawImage_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long bmp, double x, double y, double w, double h, double sx, double sy, double sw, double sh);
	/**
	 * 绘制图像
	 * @param bmp 位图
	 * @param x 目标点x坐标
	 * @param y 目标点y坐标
	 * @param w 宽度
	 * @param h 高度
	 * @param sx 源点x坐标
	 * @param sy 源点y坐标
	 * @param sw 源图像宽度
	 * @param sh 源图像高度
	 */
	public void drawImage(com.earthview.world.display.Ibitmap bmp, double x, double y, double w, double h, double sx, double sy, double sw, double sh)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		drawImage_IBitmap_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, bmpParamValue, xParamValue, yParamValue, wParamValue, hParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
	}
	native private void drawImage_CMetaFile_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, long metafile, double x, double y, double w, double h, double sx, double sy, double sw, double sh);
	/**
	 * 绘制图元
	 * @param bmp 图元
	 * @param x 目标点x坐标
	 * @param y 目标点y坐标
	 * @param w 宽度
	 * @param h 高度
	 * @param sx 源点x坐标
	 * @param sy 源点y坐标
	 * @param sw 源图像宽度
	 * @param sh 源图像高度
	 */
	public void drawImage(com.earthview.world.display.MetaFile metafile, double x, double y, double w, double h, double sx, double sy, double sw, double sh)
	{
		long metafileParamValue = (metafile == null ? 0L : metafile.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		drawImage_CMetaFile_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, metafileParamValue, xParamValue, yParamValue, wParamValue, hParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
	}
	native private void drawCacheBitmap_ICachedBitmap_ev_real64_ev_real64(long pNativeObject, long bmp, double x, double y);
	/**
	 * 绘制缓存图像
	 * @param bmp 位图
	 * @param x 目标点x坐标
	 * @param y 目标点y坐标
	 */
	public void drawCacheBitmap(com.earthview.world.display.Icachedbitmap bmp, double x, double y)
	{
		long bmpParamValue = (bmp == null ? 0L : bmp.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		drawCacheBitmap_ICachedBitmap_ev_real64_ev_real64(this.nativeObject.pointer, bmpParamValue, xParamValue, yParamValue);
	}
	public ImageRender(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageRender(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ImageRender fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageRender obj = null;
 		if(baseObj instanceof ImageRender)
		{
			obj = (ImageRender)baseObj;
		} else {
			obj = new ImageRender(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageRender");
			obj.increaseCast();
		}

		return obj;
	}
}
