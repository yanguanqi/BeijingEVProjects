package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 像素盒子类描述在存储器中线、面、体像素的存储
 */
public class PixelBox extends com.earthview.world.graphic.Box {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPixelBox", new PixelBoxClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public PixelBox() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CPixelBox", null);
	}

	/**
	 * 构造函数
	 * @param extents 数据层的范围
	 * @param pixelFormat 缓冲器的格式
	 */
	public PixelBox(com.earthview.world.graphic.Box extents, com.earthview.world.graphic.PixelFormat pixelFormat) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer extentsPtr = new BasePointer(extents);
		list.add("extents", extentsPtr.get());
		BasePointer pixelFormatPtr = new BasePointer(pixelFormat);
		list.add("pixelFormat", pixelFormatPtr.get());
		Create("CPixelBox", list);
	}

	/**
	 * 构造函数
	 * @param extents 数据层的范围
	 * @param pixelFormat 缓冲器的格式
	 * @param pixelData 指向目前数据的指针
	 */
	public PixelBox(com.earthview.world.graphic.Box extents, com.earthview.world.graphic.PixelFormat pixelFormat, VoidPointer pixelData) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer extentsPtr = new BasePointer(extents);
		list.add("extents", extentsPtr.get());
		BasePointer pixelFormatPtr = new BasePointer(pixelFormat);
		list.add("pixelFormat", pixelFormatPtr.get());
		BasePointer pixelDataPtr = new BasePointer(pixelData);
		list.add("pixelData", pixelDataPtr.get());
		Create("CPixelBox", list);
	}

	/**
	 * 构造函数
	 * @param width 区域的宽度
	 * @param height 区域的高度
	 * @param depth 区域的深度
	 * @param pixelFormat 缓冲器的格式
	 */
	public PixelBox(long width, long height, long depth, com.earthview.world.graphic.PixelFormat pixelFormat) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer depthPtr = new BasePointer(depth);
		list.add("depth", depthPtr.get());
		BasePointer pixelFormatPtr = new BasePointer(pixelFormat);
		list.add("pixelFormat", pixelFormatPtr.get());
		Create("CPixelBox", list);
	}

	/**
	 * 构造函数
	 * @param width 区域的宽度
	 * @param height 区域的高度
	 * @param depth 区域的深度
	 * @param pixelFormat 缓冲器的格式
	 * @param pixelData 指向目前数据的指针
	 */
	public PixelBox(long width, long height, long depth, com.earthview.world.graphic.PixelFormat pixelFormat, VoidPointer pixelData) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer widthPtr = new BasePointer(width);
		list.add("width", widthPtr.get());
		BasePointer heightPtr = new BasePointer(height);
		list.add("height", heightPtr.get());
		BasePointer depthPtr = new BasePointer(depth);
		list.add("depth", depthPtr.get());
		BasePointer pixelFormatPtr = new BasePointer(pixelFormat);
		list.add("pixelFormat", pixelFormatPtr.get());
		BasePointer pixelDataPtr = new BasePointer(pixelData);
		list.add("pixelData", pixelDataPtr.get());
		Create("CPixelBox", list);
	}

	native private long get_data_void(long pNativeObject);
	public VoidPointer get_data()
	{
		long jniValue = get_data_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		VoidPointer __returnValue = new VoidPointer(new InstancePointer(jniValue));
		return __returnValue;
	}
	
	native private void set_data_void (long pNativeObject, long value);
	public void set_data(VoidPointer data)
	{
		long dataParamValue = (data == null ? 0L : data.nativeObject.pointer);
		
		set_data_void(this.nativeObject.pointer, dataParamValue);
	}
	
	native private int get_format_void(long pNativeObject);
	public com.earthview.world.graphic.PixelFormat get_format()
	{
		int jniValue = get_format_void(this.nativeObject.pointer);
		
		return com.earthview.world.graphic.PixelFormat.toEnum(jniValue);
	}
	
	native private void set_format_PixelFormat (long pNativeObject, int value);
	public void set_format(com.earthview.world.graphic.PixelFormat format)
	{
		int formatParamValue = format.getValue();
		
		set_format_PixelFormat(this.nativeObject.pointer, formatParamValue);
	}
	
	native private long get_rowPitch_void(long pNativeObject);
	public long get_rowPitch()
	{
		long jniValue = get_rowPitch_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_rowPitch_ev_size_t (long pNativeObject, long value);
	public void set_rowPitch(long rowPitch)
	{
		long rowPitchParamValue = rowPitch;
		
		set_rowPitch_ev_size_t(this.nativeObject.pointer, rowPitchParamValue);
	}
	
	native private long get_slicePitch_void(long pNativeObject);
	public long get_slicePitch()
	{
		long jniValue = get_slicePitch_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_slicePitch_ev_size_t (long pNativeObject, long value);
	public void set_slicePitch(long slicePitch)
	{
		long slicePitchParamValue = slicePitch;
		
		set_slicePitch_ev_size_t(this.nativeObject.pointer, slicePitchParamValue);
	}
	
	native private void setConsecutive_void(long pNativeObject);
	/**
	 * 设置行间隔和各个部分的间隔，使得缓冲器能够连续的展开
	 * @param  
	 */
	public void setConsecutive()
	{
		setConsecutive_void(this.nativeObject.pointer);
	}
	native private long getRowSkip_void(long pNativeObject);
	/**
	 * 得到一行最右边的像素到下一行最左边的像素之间的元素
	 * @param  
	 * @return 返回元素个数
	 */
	public long getRowSkip()
	{
		long returnValue = getRowSkip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSliceSkip_void(long pNativeObject);
	/**
	 * 得到一部分的最右边顶部到下一部分的最左边的顶部之间的元素
	 * @param  
	 * @return 返回元素个数
	 */
	public long getSliceSkip()
	{
		long returnValue = getSliceSkip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isConsecutive_void(long pNativeObject);
	/**
	 * 判断这个缓冲期在存储器里是否是连续展开
	 * @param  
	 * @return 可以展开则返回true，否则返回false
	 */
	public boolean isConsecutive()
	{
		boolean returnValue = isConsecutive_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getConsecutiveSize_void(long pNativeObject);
	/**
	 * 得到这个图像在存储器中展开的大小（以字节作为单位）
	 * @param  
	 * @return 返回展开的大小（以字节作为单位）
	 */
	public long getConsecutiveSize()
	{
		long returnValue = getConsecutiveSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSubVolume_Box(long pNativeObject, long def);
	/**
	 * 得到像素盒子子程序
	 * @param def 子程序区域的边界
	 * @return 返回EarthView::World::Graphic::CPixelBox类的对象
	 */
	public com.earthview.world.graphic.PixelBox getSubVolume(com.earthview.world.graphic.Box def)
	{
		long defParamValue = def.nativeObject.pointer;
		long returnValue = getSubVolume_Box(this.nativeObject.pointer, defParamValue);
		com.earthview.world.graphic.PixelBox __returnValue = new com.earthview.world.graphic.PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.PixelBox)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CPixelBox");
		}
		return __returnValue;
	}
	native private long getColourAt_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long x, long y, long z);
	/**
	 * 得到在像素盒子中确定区域的颜色值
	 * @param x x轴值
	 * @param y y轴值
	 * @param z z轴值
	 * @return 返回EarthView::World::Graphic::CColourValue类的对象
	 */
	public com.earthview.world.graphic.ColourValue getColourAt(long x, long y, long z)
	{
		long xParamValue = x;
		long yParamValue = y;
		long zParamValue = z;
		long returnValue = getColourAt_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, xParamValue, yParamValue, zParamValue);
		com.earthview.world.graphic.ColourValue __returnValue = new com.earthview.world.graphic.ColourValue(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ColourValue)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColourValue");
		}
		return __returnValue;
	}
	native private void setColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(long pNativeObject, long cv, long x, long y, long z);
	/**
	 * 设置在像素盒子中确定区域的颜色值
	 * @param cv EarthView::World::Graphic::CColourValue的对象
	 * @param x x轴值
	 * @param y y轴值
	 * @param z z轴值
	 */
	public void setColourAt(com.earthview.world.graphic.ColourValue cv, long x, long y, long z)
	{
		long cvParamValue = cv.nativeObject.pointer;
		long xParamValue = x;
		long yParamValue = y;
		long zParamValue = z;
		setColourAt_CColourValue_ev_size_t_ev_size_t_ev_size_t(this.nativeObject.pointer, cvParamValue, xParamValue, yParamValue, zParamValue);
	}
	public PixelBox(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PixelBox(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static PixelBox fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PixelBox obj = null;
 		if(baseObj instanceof PixelBox)
		{
			obj = (PixelBox)baseObj;
		} else {
			obj = new PixelBox(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPixelBox");
			obj.increaseCast();
		}

		return obj;
	}
}
