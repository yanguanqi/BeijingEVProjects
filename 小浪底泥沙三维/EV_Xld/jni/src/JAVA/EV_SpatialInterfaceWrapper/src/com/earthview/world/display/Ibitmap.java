package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 位图基类
 */
public class Ibitmap extends com.earthview.world.display.Ipaintdevice {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Display::IBitmap", new IbitmapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Display::JIBitmapProxy", new IbitmapClassFactory());
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

	protected  void setTransparent_ev_uint8_callback(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparent(transparentParamValue);
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
	native private void setTransparent_ev_uint8_NoVirtual(long pNativeObject, short transparent);
	protected void setTransparent_NoVirtual(short transparent)
	{
		short transparentParamValue = transparent;
		setTransparent_ev_uint8_NoVirtual(this.nativeObject.pointer, transparentParamValue);
	}

	protected  long getNativeGraphics_void_callback()
	{
		VoidPointer returnValue = getNativeGraphics();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
	native private long getNativeGraphics_void_NoVirtual(long pNativeObject);
	protected VoidPointer getNativeGraphics_NoVirtual()
	{
		long returnValue = getNativeGraphics_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  String getFilePath_void_callback()
	{
		String returnValue = getFilePath();
		String __returnValue = returnValue;
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
	native private String getFilePath_void_NoVirtual(long pNativeObject);
	protected String getFilePath_NoVirtual()
	{
		String returnValue = getFilePath_void_NoVirtual(this.nativeObject.pointer);
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
	 * @param color 颜色，格式为aarrggbb
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

	protected  long data_void_callback()
	{
		UBytePointer returnValue = data();
		if(returnValue == null) {
			return 0L;
		}
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long data_void(long pNativeObject);
	/**
	 * 获取内部数据
	 * @param  
	 * @return 返回内部数据
	 */
	public UBytePointer data()
	{
		long returnValue = data_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long data_void_NoVirtual(long pNativeObject);
	protected UBytePointer data_NoVirtual()
	{
		long returnValue = data_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		UBytePointer __returnValue = new UBytePointer(new InstancePointer(returnValue));
		return __returnValue;
	}

	protected  boolean save_EVString_callback(String path)
	{
		String pathParamValue = path;
		boolean returnValue = save(pathParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean save_EVString(long pNativeObject, String path);
	/**
	 * 保存位图
	 * @param path 指定的路径
	 * @return 保存成功返回true；否则返回false
	 */
	public boolean save(String path)
	{
		String pathParamValue = path;
		boolean returnValue = save_EVString(this.nativeObject.pointer, pathParamValue);
		return returnValue;
	}
	native private boolean save_EVString_NoVirtual(long pNativeObject, String path);
	protected boolean save_NoVirtual(String path)
	{
		String pathParamValue = path;
		boolean returnValue = save_EVString_NoVirtual(this.nativeObject.pointer, pathParamValue);
		return returnValue;
	}

	protected  long saveToStream_EVString_callback(String type)
	{
		String typeParamValue = type;
		com.earthview.world.core.MemoryDataStreamPtr returnValue = saveToStream(typeParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long saveToStream_EVString(long pNativeObject, String type);
	/**
	 * 保存位图至内存流
	 * @param type 类型
	 * @return 返回保存的流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr saveToStream(String type)
	{
		String typeParamValue = type;
		long returnValue = saveToStream_EVString(this.nativeObject.pointer, typeParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long saveToStream_EVString_NoVirtual(long pNativeObject, String type);
	protected com.earthview.world.core.MemoryDataStreamPtr saveToStream_NoVirtual(String type)
	{
		String typeParamValue = type;
		long returnValue = saveToStream_EVString_NoVirtual(this.nativeObject.pointer, typeParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}

	protected  boolean save_EVString_ev_char_int_callback(String type, long buffer, long size)
	{
		String typeParamValue = type;
		BytePointer bufferParamValue = (buffer == 0L ? null : new BytePointer(new InstancePointer(buffer)));
		IntegerPointer sizeParamValue = new IntegerPointer(new InstancePointer(size));
		boolean returnValue = save(typeParamValue, bufferParamValue, sizeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean save_EVString_ev_char_int(long pNativeObject, String type, long buffer, long size);
	/**
	 * 保存位图至流
	 * @param type 类型
	 * @param buffer 流缓冲区
	 * @param size 大小
	 * @return 保存成功返回true；否则返回false
	 */
	public boolean save(String type, BytePointer buffer, IntegerPointer size)
	{
		String typeParamValue = type;
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long sizeParamValue = size.nativeObject.pointer;
		boolean returnValue = save_EVString_ev_char_int(this.nativeObject.pointer, typeParamValue, bufferParamValue, sizeParamValue);
		return returnValue;
	}
	native private boolean save_EVString_ev_char_int_NoVirtual(long pNativeObject, String type, long buffer, long size);
	protected boolean save_NoVirtual(String type, BytePointer buffer, IntegerPointer size)
	{
		String typeParamValue = type;
		long bufferParamValue = (buffer == null ? 0L : buffer.nativeObject.pointer);
		long sizeParamValue = size.nativeObject.pointer;
		boolean returnValue = save_EVString_ev_char_int_NoVirtual(this.nativeObject.pointer, typeParamValue, bufferParamValue, sizeParamValue);
		return returnValue;
	}

	protected  long getHIcon_void_callback()
	{
		long returnValue = getHIcon();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getHIcon_void(long pNativeObject);
	/**
	 * 获取图标句柄
	 * @param  
	 * @return 返回图标句柄
	 */
	public long getHIcon()
	{
		long returnValue = getHIcon_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getHIcon_void_NoVirtual(long pNativeObject);
	protected long getHIcon_NoVirtual()
	{
		long returnValue = getHIcon_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getHBITMAP_ev_int32_callback(int background)
	{
		int backgroundParamValue = background;
		long returnValue = getHBITMAP(backgroundParamValue);
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getHBITMAP_ev_int32(long pNativeObject, int background);
	/**
	 * 获取位图句柄
	 * @param background 背景色
	 * @return 返回位图句柄
	 */
	public long getHBITMAP(int background)
	{
		int backgroundParamValue = background;
		long returnValue = getHBITMAP_ev_int32(this.nativeObject.pointer, backgroundParamValue);
		return returnValue;
	}
	native private long getHBITMAP_ev_int32_NoVirtual(long pNativeObject, int background);
	protected long getHBITMAP_NoVirtual(int background)
	{
		int backgroundParamValue = background;
		long returnValue = getHBITMAP_ev_int32_NoVirtual(this.nativeObject.pointer, backgroundParamValue);
		return returnValue;
	}

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.display.Ibitmap returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制位图
	 * @param  
	 * @return 返回复制的位图
	 */
	public com.earthview.world.display.Ibitmap ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	protected  void render_IPaintDevice_IEnvelope_callback(long destDevice, long destExt)
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
		com.earthview.world.spatial.geometry.Ienvelope destExtParamValue = (destExt == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(destExtParamValue != null)
		{
		destExtParamValue.setDelegate(true);
		destExtParamValue.setInstancePointer(new InstancePointer(destExt));
		IClassFactory destExtParamValueClassFactory = GlobalClassFactoryMap.get(destExtParamValue.getCppInstanceTypeName());
		if (destExtParamValueClassFactory != null)
		{
			destExtParamValue.setDelegate(true);
			destExtParamValue = (com.earthview.world.spatial.geometry.Ienvelope)destExtParamValueClassFactory.create();
			destExtParamValue.setDelegate(true);
			destExtParamValue.setInstancePointer(new InstancePointer(destExt));
		}
		}
		render(destDeviceParamValue, destExtParamValue);
	}

	native private void render_IPaintDevice_IEnvelope(long pNativeObject, long destDevice, long destExt);
	/**
	 * 将位图渲染到指定设备的指定区域
	 * @param destDevice 指定设备
	 * @param destExt 指定区域
	 */
	public void render(com.earthview.world.display.Ipaintdevice destDevice, com.earthview.world.spatial.geometry.Ienvelope destExt)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		long destExtParamValue = (destExt == null ? 0L : destExt.nativeObject.pointer);
		render_IPaintDevice_IEnvelope(this.nativeObject.pointer, destDeviceParamValue, destExtParamValue);
	}
	native private void render_IPaintDevice_IEnvelope_NoVirtual(long pNativeObject, long destDevice, long destExt);
	protected void render_NoVirtual(com.earthview.world.display.Ipaintdevice destDevice, com.earthview.world.spatial.geometry.Ienvelope destExt)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		long destExtParamValue = (destExt == null ? 0L : destExt.nativeObject.pointer);
		render_IPaintDevice_IEnvelope_NoVirtual(this.nativeObject.pointer, destDeviceParamValue, destExtParamValue);
	}

	protected  void render_IPaintDevice_IEnvelope_IEnvelope_callback(long destDevice, long destExt, long srcExt)
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
		com.earthview.world.spatial.geometry.Ienvelope destExtParamValue = (destExt == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(destExtParamValue != null)
		{
		destExtParamValue.setDelegate(true);
		destExtParamValue.setInstancePointer(new InstancePointer(destExt));
		IClassFactory destExtParamValueClassFactory = GlobalClassFactoryMap.get(destExtParamValue.getCppInstanceTypeName());
		if (destExtParamValueClassFactory != null)
		{
			destExtParamValue.setDelegate(true);
			destExtParamValue = (com.earthview.world.spatial.geometry.Ienvelope)destExtParamValueClassFactory.create();
			destExtParamValue.setDelegate(true);
			destExtParamValue.setInstancePointer(new InstancePointer(destExt));
		}
		}
		com.earthview.world.spatial.geometry.Ienvelope srcExtParamValue = (srcExt == 0L ? null : new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate));
		if(srcExtParamValue != null)
		{
		srcExtParamValue.setDelegate(true);
		srcExtParamValue.setInstancePointer(new InstancePointer(srcExt));
		IClassFactory srcExtParamValueClassFactory = GlobalClassFactoryMap.get(srcExtParamValue.getCppInstanceTypeName());
		if (srcExtParamValueClassFactory != null)
		{
			srcExtParamValue.setDelegate(true);
			srcExtParamValue = (com.earthview.world.spatial.geometry.Ienvelope)srcExtParamValueClassFactory.create();
			srcExtParamValue.setDelegate(true);
			srcExtParamValue.setInstancePointer(new InstancePointer(srcExt));
		}
		}
		render(destDeviceParamValue, destExtParamValue, srcExtParamValue);
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
	native private void render_IPaintDevice_IEnvelope_IEnvelope_NoVirtual(long pNativeObject, long destDevice, long destExt, long srcExt);
	protected void render_NoVirtual(com.earthview.world.display.Ipaintdevice destDevice, com.earthview.world.spatial.geometry.Ienvelope destExt, com.earthview.world.spatial.geometry.Ienvelope srcExt)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		long destExtParamValue = (destExt == null ? 0L : destExt.nativeObject.pointer);
		long srcExtParamValue = (srcExt == null ? 0L : srcExt.nativeObject.pointer);
		render_IPaintDevice_IEnvelope_IEnvelope_NoVirtual(this.nativeObject.pointer, destDeviceParamValue, destExtParamValue, srcExtParamValue);
	}

	protected  void render_IPaintDevice_ev_real64_ev_real64_callback(long destDevice, double x, double y)
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
		double xParamValue = x;
		double yParamValue = y;
		render(destDeviceParamValue, xParamValue, yParamValue);
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
	native private void render_IPaintDevice_ev_real64_ev_real64_NoVirtual(long pNativeObject, long destDevice, double x, double y);
	protected void render_NoVirtual(com.earthview.world.display.Ipaintdevice destDevice, double x, double y)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		render_IPaintDevice_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue);
	}

	protected  void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(long destDevice, double x, double y, double sx, double sy, double sw, double sh)
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
		double xParamValue = x;
		double yParamValue = y;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		render(destDeviceParamValue, xParamValue, yParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
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
	native private void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long destDevice, double x, double y, double sx, double sy, double sw, double sh);
	protected void render_NoVirtual(com.earthview.world.display.Ipaintdevice destDevice, double x, double y, double sx, double sy, double sw, double sh)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
	}

	protected  void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback(long destDevice, double x, double y, double w, double h)
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
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		render(destDeviceParamValue, xParamValue, yParamValue, wParamValue, hParamValue);
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
	native private void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long destDevice, double x, double y, double w, double h);
	protected void render_NoVirtual(com.earthview.world.display.Ipaintdevice destDevice, double x, double y, double w, double h)
	{
		long destDeviceParamValue = (destDevice == null ? 0L : destDevice.nativeObject.pointer);
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue, wParamValue, hParamValue);
	}

	protected  void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(long destDevice, double x, double y, double w, double h, double sx, double sy, double sw, double sh)
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
		double xParamValue = x;
		double yParamValue = y;
		double wParamValue = w;
		double hParamValue = h;
		double sxParamValue = sx;
		double syParamValue = sy;
		double swParamValue = sw;
		double shParamValue = sh;
		render(destDeviceParamValue, xParamValue, yParamValue, wParamValue, hParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
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
	native private void render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long destDevice, double x, double y, double w, double h, double sx, double sy, double sw, double sh);
	protected void render_NoVirtual(com.earthview.world.display.Ipaintdevice destDevice, double x, double y, double w, double h, double sx, double sy, double sw, double sh)
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
		render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, destDeviceParamValue, xParamValue, yParamValue, wParamValue, hParamValue, sxParamValue, syParamValue, swParamValue, shParamValue);
	}

	public Ibitmap(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ibitmap(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setTransparent_ev_uint8(long pNativeObject, String method);
	native protected void register_getNativeGraphics_void(long pNativeObject, String method);
	native protected void register_getFilePath_void(long pNativeObject, String method);
	native protected void register_data_void(long pNativeObject, String method);
	native protected void register_save_EVString(long pNativeObject, String method);
	native protected void register_saveToStream_EVString(long pNativeObject, String method);
	native protected void register_save_EVString_ev_char_int(long pNativeObject, String method);
	native protected void register_getHIcon_void(long pNativeObject, String method);
	native protected void register_getHBITMAP_ev_int32(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_render_IPaintDevice_IEnvelope(long pNativeObject, String method);
	native protected void register_render_IPaintDevice_IEnvelope_IEnvelope(long pNativeObject, String method);
	native protected void register_render_IPaintDevice_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getDC_void(long pNativeObject, String method);
	native protected void register_releaseDC_void(long pNativeObject, String method);
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_getHeight_void(long pNativeObject, String method);
	native protected void register_fill_IColor(long pNativeObject, String method);
	native protected void register_fill_ev_int32(long pNativeObject, String method);
	native protected void register_getResolution_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setTransparent_ev_uint8(this.nativeObject.pointer, "setTransparent_ev_uint8_callback");
			this.register_getNativeGraphics_void(this.nativeObject.pointer, "getNativeGraphics_void_callback");
			this.register_getFilePath_void(this.nativeObject.pointer, "getFilePath_void_callback");
			this.register_data_void(this.nativeObject.pointer, "data_void_callback");
			this.register_save_EVString(this.nativeObject.pointer, "save_EVString_callback");
			this.register_saveToStream_EVString(this.nativeObject.pointer, "saveToStream_EVString_callback");
			this.register_save_EVString_ev_char_int(this.nativeObject.pointer, "save_EVString_ev_char_int_callback");
			this.register_getHIcon_void(this.nativeObject.pointer, "getHIcon_void_callback");
			this.register_getHBITMAP_ev_int32(this.nativeObject.pointer, "getHBITMAP_ev_int32_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_render_IPaintDevice_IEnvelope(this.nativeObject.pointer, "render_IPaintDevice_IEnvelope_callback");
			this.register_render_IPaintDevice_IEnvelope_IEnvelope(this.nativeObject.pointer, "render_IPaintDevice_IEnvelope_IEnvelope_callback");
			this.register_render_IPaintDevice_ev_real64_ev_real64(this.nativeObject.pointer, "render_IPaintDevice_ev_real64_ev_real64_callback");
			this.register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "render_IPaintDevice_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getDC_void(this.nativeObject.pointer, "getDC_void_callback");
			this.register_releaseDC_void(this.nativeObject.pointer, "releaseDC_void_callback");
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_getHeight_void(this.nativeObject.pointer, "getHeight_void_callback");
			this.register_fill_IColor(this.nativeObject.pointer, "fill_IColor_callback");
			this.register_fill_ev_int32(this.nativeObject.pointer, "fill_ev_int32_callback");
			this.register_getResolution_void(this.nativeObject.pointer, "getResolution_void_callback");
		}
	}
	
	public static Ibitmap fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ibitmap obj = null;
 		if(baseObj instanceof Ibitmap)
		{
			obj = (Ibitmap)baseObj;
		} else {
			obj = new Ibitmap(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IBitmap");
			obj.increaseCast();
		}

		return obj;
	}
}
