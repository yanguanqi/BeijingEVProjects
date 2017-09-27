package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图片填充面类提供方法如下：获取与设置旋转角度、背景色、X轴与Y轴缩放比例、X轴与Y轴偏移量、X轴与Y轴间隔量获取与设置是否交换前景色和背景色、图片的透明颜色、指定图片的数据	获取图片大小、获取图片的个数、获取指定图片的ID、是否为二值图、是否含有图片获取符号类型、获取流、获取SLD深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class PictureFillSymbol extends com.earthview.world.spatial.display.FillSymbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CPictureFillSymbol", new PictureFillSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCPictureFillSymbolProxy", new PictureFillSymbolClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public PictureFillSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPictureFillSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.PictureFillSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getAngle_void(long pNativeObject);
	/**
	 * 获取旋转角度
	 * @param  
	 * @return 角度
	 */
	public double getAngle()
	{
		double returnValue = getAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBackgroundColor_void(long pNativeObject);
	/**
	 * 获取背景色
	 * @param  
	 * @return 背景色
	 */
	public com.earthview.world.spatial.display.Icolor getBackgroundColor()
	{
		long returnValue = getBackgroundColor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private int getPictureSize_void(long pNativeObject);
	/**
	 * 获取图片大小
	 * @param  
	 * @return 图片大小
	 */
	public int getPictureSize()
	{
		int returnValue = getPictureSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScaleX_void(long pNativeObject);
	/**
	 * 获取X轴缩放比例
	 * @param  
	 * @return 缩放比例
	 */
	public double getScaleX()
	{
		double returnValue = getScaleX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getScaleY_void(long pNativeObject);
	/**
	 * 获取Y轴缩放比例
	 * @param  
	 * @return 缩放比例
	 */
	public double getScaleY()
	{
		double returnValue = getScaleY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isSwapColor_void(long pNativeObject);
	/**
	 * 是否交换前景色和背景色只有在图片为二值图时，才有效
	 * @param  
	 * @return 是否交换
	 */
	public boolean isSwapColor()
	{
		boolean returnValue = isSwapColor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isOneBit_void(long pNativeObject);
	/**
	 * 是否为二值图
	 * @param  
	 * @return 返回true，为二值图；否则不是
	 */
	public boolean isOneBit()
	{
		boolean returnValue = isOneBit_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getTransparentColor_void(long pNativeObject);
	/**
	 * 获取图片的透明颜色
	 * @param  
	 * @return 透明颜色
	 */
	public com.earthview.world.spatial.display.Icolor getTransparentColor()
	{
		long returnValue = getTransparentColor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private double getOffsetX_void(long pNativeObject);
	/**
	 * 获取X轴的偏移量
	 * @param  
	 * @return 间隔量
	 */
	public double getOffsetX()
	{
		double returnValue = getOffsetX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOffsetY_void(long pNativeObject);
	/**
	 * 获取Y轴的偏移量
	 * @param  
	 * @return 间隔量
	 */
	public double getOffsetY()
	{
		double returnValue = getOffsetY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSeparationX_void(long pNativeObject);
	/**
	 * 获取X轴的间隔量
	 * @param value 间隔量
	 */
	public double getSeparationX()
	{
		double returnValue = getSeparationX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSeparationY_void(long pNativeObject);
	/**
	 * 获取Y轴的间隔量
	 * @param value 间隔量
	 */
	public double getSeparationY()
	{
		double returnValue = getSeparationY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAngle_ev_real64(long pNativeObject, double value);
	/**
	 * 设置旋转角度
	 * @param value 旋转角度
	 */
	public void setAngle(double value)
	{
		double valueParamValue = value;
		setAngle_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setBackgroundColor_IColor(long pNativeObject, long color);
	/**
	 * 设置背景色
	 * @param color 背景色
	 */
	public void setBackgroundColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setBackgroundColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void setScaleX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置X轴缩放比例
	 * @param value 缩放比例
	 */
	public void setScaleX(double value)
	{
		double valueParamValue = value;
		setScaleX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setScaleY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Y轴缩放比例
	 * @param value 缩放比例
	 */
	public void setScaleY(double value)
	{
		double valueParamValue = value;
		setScaleY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSwapColor_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否交换前景色和背景色只有在图片为二值图时，才有效
	 * @param value 是否交换
	 */
	public void setSwapColor(boolean value)
	{
		boolean valueParamValue = value;
		setSwapColor_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setTransparentColor_IColor(long pNativeObject, long color);
	/**
	 * 设置图片的透明颜色
	 * @param color 透明颜色
	 */
	public void setTransparentColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setTransparentColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void setOffsetX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置X轴的偏移量
	 * @param value 偏移量
	 */
	public void setOffsetX(double value)
	{
		double valueParamValue = value;
		setOffsetX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setOffsetY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Y轴的偏移量
	 * @param value 偏移量
	 */
	public void setOffsetY(double value)
	{
		double valueParamValue = value;
		setOffsetY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSeparationX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置X轴的间隔量
	 * @param value 间隔量
	 */
	public void setSeparationX(double value)
	{
		double valueParamValue = value;
		setSeparationX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSeparationY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Y轴的间隔量
	 * @param value 间隔量
	 */
	public void setSeparationY(double value)
	{
		double valueParamValue = value;
		setSeparationY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private int getSymbolType_void(long pNativeObject);
	/**
	 * 获取符号类型
	 * @param  
	 * @return 符号类型
	 */
	public int getSymbolType()
	{
		int returnValue = getSymbolType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSymbolType_void_NoVirtual(long pNativeObject);
	protected int getSymbolType_NoVirtual()
	{
		int returnValue = getSymbolType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度copy风格对象
	 * @param  
	 * @return 风格对象
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 获取流
	 * @param stream 流对象
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private String toSLD_void(long pNativeObject);
	/**
	 * 获取SLD
	 * @param  
	 * @return SLD字符串
	 */
	public String toSLD()
	{
		String returnValue = toSLD_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toSLD_void_NoVirtual(long pNativeObject);
	protected String toSLD_NoVirtual()
	{
		String returnValue = toSLD_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML元素中恢复Symbol属性
	 * @param xml XML字符串
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将Symbol属性写入XML元素
	 * @param xml XML字符串
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	native private boolean equal_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否属性相同
	 * @param pSymbol Symbol对象
	 */
	public boolean equal(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean equal_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	native private boolean hasImage_void(long pNativeObject);
	/**
	 * 是否含有图片
	 * @param  
	 */
	public boolean hasImage()
	{
		boolean returnValue = hasImage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasImage_void_NoVirtual(long pNativeObject);
	protected boolean hasImage_NoVirtual()
	{
		boolean returnValue = hasImage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getImageCount_void(long pNativeObject);
	/**
	 * 获取图片的个数
	 * @param  
	 * @return 图片个数
	 */
	public long getImageCount()
	{
		long returnValue = getImageCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getImageCount_void_NoVirtual(long pNativeObject);
	protected long getImageCount_NoVirtual()
	{
		long returnValue = getImageCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getImageID_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片的ID
	 * @param index 图片序列号
	 * @return 图片ID
	 */
	public String getImageID(long index)
	{
		long indexParamValue = index;
		String returnValue = getImageID_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getImageID_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getImageID_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getImageID_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getImage_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定图片的数据
	 * @param index 图片序列号
	 * @return 图片数据流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		long indexParamValue = index;
		long returnValue = getImage_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getImage_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.core.MemoryDataStreamPtr getImage_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getImage_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	native private void setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, long index, String imageID, long stream);
	/**
	 * 设置指定图片的数据
	 * @param index 图片序列号
	 * @param imageID 图片ID
	 * @param stream 图片数据流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long indexParamValue = index;
		String imageIDParamValue = imageID;
		long streamParamValue = stream.nativeObject.pointer;
		setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, indexParamValue, imageIDParamValue, streamParamValue);
	}
	native private void setImage_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long index, String imageID, long stream);
	protected void setImage_NoVirtual(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long indexParamValue = index;
		String imageIDParamValue = imageID;
		long streamParamValue = stream.nativeObject.pointer;
		setImage_ev_uint32_EVString_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, indexParamValue, imageIDParamValue, streamParamValue);
	}

	native private void fromSLD_EVString(long pNativeObject, long sld);
	/**
	 * 从SLD恢复Symbol属性
	 * @param sld SLD字符串
	 */
	public void fromSLD(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString(this.nativeObject.pointer, sldParamValue);
	}
	native private void fromSLD_EVString_NoVirtual(long pNativeObject, long sld);
	protected void fromSLD_NoVirtual(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString_NoVirtual(this.nativeObject.pointer, sldParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Symbol属性
	 * @param stream 流对象
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public PictureFillSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PictureFillSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取外边框对象
	 * @param  
	 * @return 外边框
	 */
	public com.earthview.world.spatial.display.Isymbol getOutline()
	{
		return super.getOutline_NoVirtual();
	}
	/**
	 * 设置外边框对象
	 * @param outline 外边框指针
	 */
	public void setOutline(com.earthview.world.spatial.display.Isymbol outline)
	{
		super.setOutline_NoVirtual(outline);
	}
	/**
	 * 是否使用外边框
	 * @param  
	 * @return 如果使用，则返回true；否则，返回false
	 */
	public boolean isUseOutline()
	{
		return super.isUseOutline_NoVirtual();
	}
	/**
	 * 设置是否使用外边框
	 * @param bUse 是否使用
	 */
	public void setUseOutline(boolean bUse)
	{
		super.setUseOutline_NoVirtual(bUse);
	}
	/**
	 * 是否填充
	 * @param  
	 * @return 如果填充，则返回true；否则，返回false
	 */
	public boolean isFill()
	{
		return super.isFill_NoVirtual();
	}
	/**
	 * 设置是否填充
	 * @param bUse 是否填充
	 */
	public void setFill(boolean bFill)
	{
		super.setFill_NoVirtual(bFill);
	}
	/**
	 * 获取符号大小
	 * @param  
	 * @return 返回符号大小
	 */
	public double getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef()
	{
		return super.getColorRef_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColor()
	{
		return super.getColor_NoVirtual();
	}
	/**
	 * 设置符号颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setColor_NoVirtual(color);
	}
	/**
	 * 获取符号名称
	 * @param  
	 * @return 返回符号名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置符号名称
	 * @param szName 符号名称
	 */
	public void setName(String szName)
	{
		super.setName_NoVirtual(szName);
	}
	
	native protected void register_getOutline_void(long pNativeObject, String method);
	native protected void register_setOutline_ISymbol(long pNativeObject, String method);
	native protected void register_isUseOutline_void(long pNativeObject, String method);
	native protected void register_setUseOutline_ev_bool(long pNativeObject, String method);
	native protected void register_isFill_void(long pNativeObject, String method);
	native protected void register_setFill_ev_bool(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getColorRef_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toSLD_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_setColor_IColor(long pNativeObject, String method);
	native protected void register_getSymbolType_void(long pNativeObject, String method);
	native protected void register_hasImage_void(long pNativeObject, String method);
	native protected void register_getImageCount_void(long pNativeObject, String method);
	native protected void register_getImageID_ev_uint32(long pNativeObject, String method);
	native protected void register_getImage_ev_uint32(long pNativeObject, String method);
	native protected void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_equal_ISymbol(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromSLD_EVString(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getOutline_void(this.nativeObject.pointer, "getOutline_void_callback");
			this.register_setOutline_ISymbol(this.nativeObject.pointer, "setOutline_ISymbol_callback");
			this.register_isUseOutline_void(this.nativeObject.pointer, "isUseOutline_void_callback");
			this.register_setUseOutline_ev_bool(this.nativeObject.pointer, "setUseOutline_ev_bool_callback");
			this.register_isFill_void(this.nativeObject.pointer, "isFill_void_callback");
			this.register_setFill_ev_bool(this.nativeObject.pointer, "setFill_ev_bool_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getColorRef_void(this.nativeObject.pointer, "getColorRef_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toSLD_void(this.nativeObject.pointer, "toSLD_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_setColor_IColor(this.nativeObject.pointer, "setColor_IColor_callback");
			this.register_getSymbolType_void(this.nativeObject.pointer, "getSymbolType_void_callback");
			this.register_hasImage_void(this.nativeObject.pointer, "hasImage_void_callback");
			this.register_getImageCount_void(this.nativeObject.pointer, "getImageCount_void_callback");
			this.register_getImageID_ev_uint32(this.nativeObject.pointer, "getImageID_ev_uint32_callback");
			this.register_getImage_ev_uint32(this.nativeObject.pointer, "getImage_ev_uint32_callback");
			this.register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
			this.register_equal_ISymbol(this.nativeObject.pointer, "equal_ISymbol_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromSLD_EVString(this.nativeObject.pointer, "fromSLD_EVString_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static PictureFillSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PictureFillSymbol obj = null;
 		if(baseObj instanceof PictureFillSymbol)
		{
			obj = (PictureFillSymbol)baseObj;
		} else {
			obj = new PictureFillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPictureFillSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
