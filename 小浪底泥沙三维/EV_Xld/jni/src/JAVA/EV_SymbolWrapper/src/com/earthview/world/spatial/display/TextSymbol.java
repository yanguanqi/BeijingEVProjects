package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 文本符号基类提供方法如下：获取与设置文本大小、文本字体、文本旋转角度、文本X轴与Y轴偏移量、文本水平与垂直停靠方式、	获取与设置渲染文本、文体读取方向获取与设置文本是否是粗体、斜体、下划线、删除线获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class TextSymbol extends com.earthview.world.spatial.display.Symbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CTextSymbol", new TextSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCTextSymbolProxy", new TextSymbolClassFactory());
	}

	native private void setSize_ev_real64(long pNativeObject, double size);
	/**
	 * 设置文本大小
	 * @param size 文本大小
	 */
	public void setSize(double size)
	{
		double sizeParamValue = size;
		setSize_ev_real64(this.nativeObject.pointer, sizeParamValue);
	}
	native private double getSize_void(long pNativeObject);
	/**
	 * 获取文本大小
	 * @param  
	 * @return 文本大小
	 */
	public double getSize()
	{
		double returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSize_void_NoVirtual(long pNativeObject);
	protected double getSize_NoVirtual()
	{
		double returnValue = getSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setFont_EVString(long pNativeObject, String name);
	/**
	 * 设置文本字体
	 * @param name 文本字体
	 */
	public void setFont(String name)
	{
		String nameParamValue = name;
		setFont_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private String getFont_void(long pNativeObject);
	/**
	 * 获取文本字体
	 * @param  
	 * @return 文本字体
	 */
	public String getFont()
	{
		String returnValue = getFont_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBold_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置文本粗体
	 * @param enable 文本粗体
	 */
	public void setBold(boolean enable)
	{
		boolean enableParamValue = enable;
		setBold_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean isBold_void(long pNativeObject);
	/**
	 * 获取文本是否是粗体
	 * @param  
	 * @return 是否是粗体
	 */
	public boolean isBold()
	{
		boolean returnValue = isBold_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setItalic_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置文本斜体
	 * @param enable 文本是否斜体
	 */
	public void setItalic(boolean enable)
	{
		boolean enableParamValue = enable;
		setItalic_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean isItalic_void(long pNativeObject);
	/**
	 * 获取文本是否是斜体
	 * @param  
	 * @return 是否是斜体
	 */
	public boolean isItalic()
	{
		boolean returnValue = isItalic_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUnderline_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置文本下划线
	 * @param enable 文本是否有下划线
	 */
	public void setUnderline(boolean enable)
	{
		boolean enableParamValue = enable;
		setUnderline_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean isUnderline_void(long pNativeObject);
	/**
	 * 获取文本是否有下划线
	 * @param  
	 * @return 是否有下划线
	 */
	public boolean isUnderline()
	{
		boolean returnValue = isUnderline_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setStrikeOut_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置文本删除线
	 * @param enable 文本是否有删除线
	 */
	public void setStrikeOut(boolean enable)
	{
		boolean enableParamValue = enable;
		setStrikeOut_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean isStrikeOut_void(long pNativeObject);
	/**
	 * 获取文本是否有删除线
	 * @param  
	 * @return 是否有删除线
	 */
	public boolean isStrikeOut()
	{
		boolean returnValue = isStrikeOut_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOffsetX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置X轴偏移量
	 * @param value 文本X轴偏移量
	 */
	public void setOffsetX(double value)
	{
		double valueParamValue = value;
		setOffsetX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getOffsetX_void(long pNativeObject);
	/**
	 * 获取文本X轴偏移量
	 * @param  
	 * @return X轴偏移量
	 */
	public double getOffsetX()
	{
		double returnValue = getOffsetX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOffsetY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Y轴偏移量
	 * @param value 文本Y轴偏移量
	 */
	public void setOffsetY(double value)
	{
		double valueParamValue = value;
		setOffsetY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getOffsetY_void(long pNativeObject);
	/**
	 * 获取文本Y轴偏移量
	 * @param  
	 * @return Y轴偏移量
	 */
	public double getOffsetY()
	{
		double returnValue = getOffsetY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAngle_ev_real64(long pNativeObject, double angle);
	/**
	 * 设置旋转角度
	 * @param angle 文本旋转角度
	 */
	public void setAngle(double angle)
	{
		double angleParamValue = angle;
		setAngle_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private double getAngle_void(long pNativeObject);
	/**
	 * 获取文本旋转角度
	 * @param  
	 * @return 旋转角度
	 */
	public double getAngle()
	{
		double returnValue = getAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHorizontalAlignment_EVTextHorizontalAlignment(long pNativeObject, int flag);
	/**
	 * 设置文本水平停靠方式
	 * @param flag 文本水平停靠方式
	 */
	public void setHorizontalAlignment(com.earthview.world.core.EVTextHorizontalAlignment flag)
	{
		int flagParamValue = flag.getValue();
		setHorizontalAlignment_EVTextHorizontalAlignment(this.nativeObject.pointer, flagParamValue);
	}
	native private int getHorizontalAlignment_void(long pNativeObject);
	/**
	 * 获取文本水平停靠方式
	 * @param  
	 * @return 水平停靠方式
	 */
	public com.earthview.world.core.EVTextHorizontalAlignment getHorizontalAlignment()
	{
		int returnValue = getHorizontalAlignment_void(this.nativeObject.pointer);
		return com.earthview.world.core.EVTextHorizontalAlignment.toEnum(returnValue);
	}
	native private void setVerticalAlignment_EVTextVerticalAlignment(long pNativeObject, int flag);
	/**
	 * 设置文本垂直停靠方式
	 * @param flag 文本垂直停靠方式
	 */
	public void setVerticalAlignment(com.earthview.world.core.EVTextVerticalAlignment flag)
	{
		int flagParamValue = flag.getValue();
		setVerticalAlignment_EVTextVerticalAlignment(this.nativeObject.pointer, flagParamValue);
	}
	native private int getVerticalAlignment_void(long pNativeObject);
	/**
	 * 获取文本垂直停靠方式
	 * @param  
	 * @return 垂直停靠方式
	 */
	public com.earthview.world.core.EVTextVerticalAlignment getVerticalAlignment()
	{
		int returnValue = getVerticalAlignment_void(this.nativeObject.pointer);
		return com.earthview.world.core.EVTextVerticalAlignment.toEnum(returnValue);
	}
	native private void setText_EVString(long pNativeObject, String text);
	/**
	 * 设置渲染文本
	 * @param text 文本
	 */
	public void setText(String text)
	{
		String textParamValue = text;
		setText_EVString(this.nativeObject.pointer, textParamValue);
	}
	native private String getText_void(long pNativeObject);
	/**
	 * 获取渲染文本
	 * @param  
	 * @return 文本
	 */
	public String getText()
	{
		String returnValue = getText_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setRightToLeft_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置文体读取方向
	 * @param enable 文体读取方向
	 */
	public void setRightToLeft(boolean enable)
	{
		boolean enableParamValue = enable;
		setRightToLeft_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean isRightToLeft_void(long pNativeObject);
	/**
	 * 获取文体读取方向
	 * @param  
	 * @return 文体读取方向
	 */
	public boolean isRightToLeft()
	{
		boolean returnValue = isRightToLeft_void(this.nativeObject.pointer);
		return returnValue;
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

	protected  void getTextSize_ev_int64_EVString_ev_real64_ev_real64_callback(long hdc, String text, long xSize, long ySize)
	{
		long hdcParamValue = hdc;
		String textParamValue = text;
		DoublePointer xSizeParamValue = (xSize == 0L ? null : new DoublePointer(new InstancePointer(xSize)));
		DoublePointer ySizeParamValue = (ySize == 0L ? null : new DoublePointer(new InstancePointer(ySize)));
		getTextSize(hdcParamValue, textParamValue, xSizeParamValue, ySizeParamValue);
	}

	native private void getTextSize_ev_int64_EVString_ev_real64_ev_real64(long pNativeObject, long hdc, String text, long xSize, long ySize);
	public void getTextSize(long hdc, String text, DoublePointer xSize, DoublePointer ySize)
	{
		long hdcParamValue = hdc;
		String textParamValue = text;
		long xSizeParamValue = (xSize == null ? 0L : xSize.nativeObject.pointer);
		long ySizeParamValue = (ySize == null ? 0L : ySize.nativeObject.pointer);
		getTextSize_ev_int64_EVString_ev_real64_ev_real64(this.nativeObject.pointer, hdcParamValue, textParamValue, xSizeParamValue, ySizeParamValue);
	}
	native private void getTextSize_ev_int64_EVString_ev_real64_ev_real64_NoVirtual(long pNativeObject, long hdc, String text, long xSize, long ySize);
	protected void getTextSize_NoVirtual(long hdc, String text, DoublePointer xSize, DoublePointer ySize)
	{
		long hdcParamValue = hdc;
		String textParamValue = text;
		long xSizeParamValue = (xSize == null ? 0L : xSize.nativeObject.pointer);
		long ySizeParamValue = (ySize == null ? 0L : ySize.nativeObject.pointer);
		getTextSize_ev_int64_EVString_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, hdcParamValue, textParamValue, xSizeParamValue, ySizeParamValue);
	}

	protected  void getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_callback(long paintDevice, String text, long xSize, long ySize)
	{
		com.earthview.world.display.Ipaintdevice paintDeviceParamValue = (paintDevice == 0L ? null : new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate));
		if(paintDeviceParamValue != null)
		{
		paintDeviceParamValue.setDelegate(true);
		paintDeviceParamValue.setInstancePointer(new InstancePointer(paintDevice));
		IClassFactory paintDeviceParamValueClassFactory = GlobalClassFactoryMap.get(paintDeviceParamValue.getCppInstanceTypeName());
		if (paintDeviceParamValueClassFactory != null)
		{
			paintDeviceParamValue.setDelegate(true);
			paintDeviceParamValue = (com.earthview.world.display.Ipaintdevice)paintDeviceParamValueClassFactory.create();
			paintDeviceParamValue.setDelegate(true);
			paintDeviceParamValue.setInstancePointer(new InstancePointer(paintDevice));
		}
		}
		String textParamValue = text;
		DoublePointer xSizeParamValue = (xSize == 0L ? null : new DoublePointer(new InstancePointer(xSize)));
		DoublePointer ySizeParamValue = (ySize == 0L ? null : new DoublePointer(new InstancePointer(ySize)));
		getTextSize(paintDeviceParamValue, textParamValue, xSizeParamValue, ySizeParamValue);
	}

	native private void getTextSize_IPaintDevice_EVString_ev_real64_ev_real64(long pNativeObject, long paintDevice, String text, long xSize, long ySize);
	public void getTextSize(com.earthview.world.display.Ipaintdevice paintDevice, String text, DoublePointer xSize, DoublePointer ySize)
	{
		long paintDeviceParamValue = (paintDevice == null ? 0L : paintDevice.nativeObject.pointer);
		String textParamValue = text;
		long xSizeParamValue = (xSize == null ? 0L : xSize.nativeObject.pointer);
		long ySizeParamValue = (ySize == null ? 0L : ySize.nativeObject.pointer);
		getTextSize_IPaintDevice_EVString_ev_real64_ev_real64(this.nativeObject.pointer, paintDeviceParamValue, textParamValue, xSizeParamValue, ySizeParamValue);
	}
	native private void getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_NoVirtual(long pNativeObject, long paintDevice, String text, long xSize, long ySize);
	protected void getTextSize_NoVirtual(com.earthview.world.display.Ipaintdevice paintDevice, String text, DoublePointer xSize, DoublePointer ySize)
	{
		long paintDeviceParamValue = (paintDevice == null ? 0L : paintDevice.nativeObject.pointer);
		String textParamValue = text;
		long xSizeParamValue = (xSize == null ? 0L : xSize.nativeObject.pointer);
		long ySizeParamValue = (ySize == null ? 0L : ySize.nativeObject.pointer);
		getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, paintDeviceParamValue, textParamValue, xSizeParamValue, ySizeParamValue);
	}

	protected  long getOutlineColor_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = getOutlineColor();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getOutlineColor_void(long pNativeObject);
	/**
	 * 获取字体边框颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getOutlineColor()
	{
		long returnValue = getOutlineColor_void(this.nativeObject.pointer);
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
	native private long getOutlineColor_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor getOutlineColor_NoVirtual()
	{
		long returnValue = getOutlineColor_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setOutlineColor_IColor_callback(long color)
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
		setOutlineColor(colorParamValue);
	}

	native private void setOutlineColor_IColor(long pNativeObject, long color);
	/**
	 * 设置字体边框颜色
	 * @param color 字体边框颜色
	 */
	public void setOutlineColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setOutlineColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private void setOutlineColor_IColor_NoVirtual(long pNativeObject, long color);
	protected void setOutlineColor_NoVirtual(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setOutlineColor_IColor_NoVirtual(this.nativeObject.pointer, colorParamValue);
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

	public TextSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TextSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	 * 复制符号
	 * @param  
	 * @return 返回复制的符号
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		return super.ev_clone_NoVirtual();
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
	 * 获取符号类型
	 * @param  
	 * @return 返回类型
	 */
	public int getSymbolType()
	{
		return super.getSymbolType_NoVirtual();
	}
	/**
	 * 符号知否包含图像
	 * @param  
	 * @return 如果包含返回true；否则返回false
	 */
	public boolean hasImage()
	{
		return super.hasImage_NoVirtual();
	}
	/**
	 * 获取包含图像数量
	 * @param  
	 * @return 返回包含图像数量
	 */
	public long getImageCount()
	{
		return super.getImageCount_NoVirtual();
	}
	/**
	 * 获取指定索引处图像ID
	 * @param index 指定位置
	 * @return 返回图像ID
	 */
	public String getImageID(long index)
	{
		return super.getImageID_NoVirtual(index);
	}
	/**
	 * 以内存流的形式获取指定索引处图像
	 * @param index 指定位置
	 * @return 返回图像流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		return super.getImage_NoVirtual(index);
	}
	/**
	 * 设置指定索引的图像
	 * @param index 指定位置
	 * @param imageID 输出，图像
	 * @param stream 输入，流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		super.setImage_NoVirtual(index, imageID, stream);
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
	
	native protected void register_getTextSize_ev_int64_EVString_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getTextSize_IPaintDevice_EVString_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getOutlineColor_void(long pNativeObject, String method);
	native protected void register_setOutlineColor_IColor(long pNativeObject, String method);
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
			this.register_getTextSize_ev_int64_EVString_ev_real64_ev_real64(this.nativeObject.pointer, "getTextSize_ev_int64_EVString_ev_real64_ev_real64_callback");
			this.register_getTextSize_IPaintDevice_EVString_ev_real64_ev_real64(this.nativeObject.pointer, "getTextSize_IPaintDevice_EVString_ev_real64_ev_real64_callback");
			this.register_getOutlineColor_void(this.nativeObject.pointer, "getOutlineColor_void_callback");
			this.register_setOutlineColor_IColor(this.nativeObject.pointer, "setOutlineColor_IColor_callback");
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
	
	public static TextSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TextSymbol obj = null;
 		if(baseObj instanceof TextSymbol)
		{
			obj = (TextSymbol)baseObj;
		} else {
			obj = new TextSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTextSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
