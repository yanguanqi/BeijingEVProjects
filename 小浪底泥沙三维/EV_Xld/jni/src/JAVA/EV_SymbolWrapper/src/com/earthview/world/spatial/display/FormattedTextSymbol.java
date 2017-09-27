package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 高级文本类提供方法如下：获取与设置文本大小写、字符间距、字符宽度、翻转角度、字据调整、行间距、词间距获取与设置阴影x与y偏移、是否使用符号填充、是否使用背景、风格颜色、是否使用阴影获取与设置符号填充、文本背景、文本背景框在X轴与Y轴方向延伸长度获取文本在x和y轴上大小获取符号类型、获取流、获取SLD深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class FormattedTextSymbol extends com.earthview.world.spatial.display.TextSymbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CFormattedTextSymbol", new FormattedTextSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCFormattedTextSymbolProxy", new FormattedTextSymbolClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public FormattedTextSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFormattedTextSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.FormattedTextSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setTextCapitalization_EVCapitalizatoinFlag(long pNativeObject, int flag);
	/**
	 * 设置文本大小写
	 * @param flag 大小写标识
	 */
	public void setTextCapitalization(com.earthview.world.spatial.display.EVCapitalizatoinFlag flag)
	{
		int flagParamValue = flag.getValue();
		setTextCapitalization_EVCapitalizatoinFlag(this.nativeObject.pointer, flagParamValue);
	}
	native private int getTextCapitalization_void(long pNativeObject);
	/**
	 * 获取文本大小写
	 * @param  
	 * @return 大小写类型
	 */
	public com.earthview.world.spatial.display.EVCapitalizatoinFlag getTextCapitalization()
	{
		int returnValue = getTextCapitalization_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVCapitalizatoinFlag.toEnum(returnValue);
	}
	native private void setCharacterSpacing_ev_real64(long pNativeObject, double value);
	/**
	 * 设置字符间距
	 * @param value 字符间距
	 */
	public void setCharacterSpacing(double value)
	{
		double valueParamValue = value;
		setCharacterSpacing_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getCharacterSpacing_void(long pNativeObject);
	/**
	 * 获取字符间距
	 * @param  
	 * @return 字符间距
	 */
	public double getCharacterSpacing()
	{
		double returnValue = getCharacterSpacing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCharacterWidth_ev_real64(long pNativeObject, double value);
	/**
	 * 设置字符宽度
	 * @param value 字符宽度
	 */
	public void setCharacterWidth(double value)
	{
		double valueParamValue = value;
		setCharacterWidth_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getCharacterWidth_void(long pNativeObject);
	/**
	 * 获取字符宽度
	 * @param  
	 * @return 字符宽度
	 */
	public double getCharacterWidth()
	{
		double returnValue = getCharacterWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFlipAngle_ev_real64(long pNativeObject, double value);
	/**
	 * 设置翻转角度
	 * @param value 翻转角度
	 */
	public void setFlipAngle(double value)
	{
		double valueParamValue = value;
		setFlipAngle_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getFlipAngle_void(long pNativeObject);
	/**
	 * 获取翻转角度
	 * @param  
	 * @return 翻转角度
	 */
	public double getFlipAngle()
	{
		double returnValue = getFlipAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void getTextSize_ev_real64_ev_real64_callback(long xSize, long ySize)
	{
		DoublePointer xSizeParamValue = (xSize == 0L ? null : new DoublePointer(new InstancePointer(xSize)));
		DoublePointer ySizeParamValue = (ySize == 0L ? null : new DoublePointer(new InstancePointer(ySize)));
		getTextSize(xSizeParamValue, ySizeParamValue);
	}

	native private void getTextSize_ev_real64_ev_real64(long pNativeObject, long xSize, long ySize);
	/**
	 * 获取文本在x和y轴上大小
	 * @param xSize 文本在x轴大小
	 * @param xSize 文本在y轴大小
	 */
	public void getTextSize(DoublePointer xSize, DoublePointer ySize)
	{
		long xSizeParamValue = (xSize == null ? 0L : xSize.nativeObject.pointer);
		long ySizeParamValue = (ySize == null ? 0L : ySize.nativeObject.pointer);
		getTextSize_ev_real64_ev_real64(this.nativeObject.pointer, xSizeParamValue, ySizeParamValue);
	}
	native private void getTextSize_ev_real64_ev_real64_NoVirtual(long pNativeObject, long xSize, long ySize);
	protected void getTextSize_NoVirtual(DoublePointer xSize, DoublePointer ySize)
	{
		long xSizeParamValue = (xSize == null ? 0L : xSize.nativeObject.pointer);
		long ySizeParamValue = (ySize == null ? 0L : ySize.nativeObject.pointer);
		getTextSize_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, xSizeParamValue, ySizeParamValue);
	}

	native private void setKerning_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置字据调整
	 * @param enable 字据调整
	 */
	public void setKerning(boolean enable)
	{
		boolean enableParamValue = enable;
		setKerning_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getKerning_void(long pNativeObject);
	/**
	 * 获取字据调整
	 * @param  
	 * @return 是否调整
	 */
	public boolean getKerning()
	{
		boolean returnValue = getKerning_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLeading_ev_real64(long pNativeObject, double value);
	/**
	 * 设置行间距
	 * @param value 行间距
	 */
	public void setLeading(double value)
	{
		double valueParamValue = value;
		setLeading_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getLeading_void(long pNativeObject);
	/**
	 * 获取行间距
	 * @param  
	 * @return 行间距
	 */
	public double getLeading()
	{
		double returnValue = getLeading_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadowOffsetX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置阴影x偏移
	 * @param value 阴影x偏移
	 */
	public void setShadowOffsetX(double value)
	{
		double valueParamValue = value;
		setShadowOffsetX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getShadowOffsetX_void(long pNativeObject);
	/**
	 * 获取阴影x偏移
	 * @param  
	 * @return 阴影x偏移
	 */
	public double getShadowOffsetX()
	{
		double returnValue = getShadowOffsetX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadowOffsetY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置阴影y偏移
	 * @param value 阴影y偏移
	 */
	public void setShadowOffsetY(double value)
	{
		double valueParamValue = value;
		setShadowOffsetY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getShadowOffsetY_void(long pNativeObject);
	/**
	 * 获取阴影y偏移
	 * @param  
	 * @return 阴影y偏移
	 */
	public double getShadowOffsetY()
	{
		double returnValue = getShadowOffsetY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isFillWithSymbol_void(long pNativeObject);
	/**
	 * 获取是否使用符号填充
	 * @param  
	 * @return 是否使用
	 */
	public boolean isFillWithSymbol()
	{
		boolean returnValue = isFillWithSymbol_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFillWithSymbol_ev_bool(long pNativeObject, boolean bFill);
	/**
	 * 设置是否使用符号填充
	 * @param bFill 是否使用
	 */
	public void setFillWithSymbol(boolean bFill)
	{
		boolean bFillParamValue = bFill;
		setFillWithSymbol_ev_bool(this.nativeObject.pointer, bFillParamValue);
	}
	native private boolean isUseBackground_void(long pNativeObject);
	/**
	 * 获取是否使用背景
	 * @param  
	 * @return 是否使用
	 */
	public boolean isUseBackground()
	{
		boolean returnValue = isUseBackground_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUseBackground_ev_bool(long pNativeObject, boolean bUse);
	/**
	 * 设置是否使用背景
	 * @param bUse 是否使用
	 */
	public void setUseBackground(boolean bUse)
	{
		boolean bUseParamValue = bUse;
		setUseBackground_ev_bool(this.nativeObject.pointer, bUseParamValue);
	}
	native private void setWordSpacing_ev_real64(long pNativeObject, double value);
	/**
	 * 设置词间距
	 * @param value 词间距
	 */
	public void setWordSpacing(double value)
	{
		double valueParamValue = value;
		setWordSpacing_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getWordSpacing_void(long pNativeObject);
	/**
	 * 获取词间距
	 * @param  
	 * @return 词间距
	 */
	public double getWordSpacing()
	{
		double returnValue = getWordSpacing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShadowColor_IColor(long pNativeObject, long color);
	/**
	 * 设置风格颜色
	 * @param color 风格颜色
	 */
	public void setShadowColor(com.earthview.world.spatial.display.Icolor color)
	{
		long colorParamValue = (color == null ? 0L : color.nativeObject.pointer);
		setShadowColor_IColor(this.nativeObject.pointer, colorParamValue);
	}
	native private long getShadowColor_void(long pNativeObject);
	/**
	 * 获取风格颜色
	 * @param  
	 * @return 风格颜色
	 */
	public com.earthview.world.spatial.display.Icolor getShadowColor()
	{
		long returnValue = getShadowColor_void(this.nativeObject.pointer);
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
	native private void setHasShadow_ev_bool(long pNativeObject, boolean bHas);
	/**
	 * 设置是否使用阴影
	 * @param bHas 是否使用阴影
	 */
	public void setHasShadow(boolean bHas)
	{
		boolean bHasParamValue = bHas;
		setHasShadow_ev_bool(this.nativeObject.pointer, bHasParamValue);
	}
	native private boolean getHasShadow_void(long pNativeObject);
	/**
	 * 获取是否使用阴影
	 * @param  
	 * @return 是否使用阴影
	 */
	public boolean getHasShadow()
	{
		boolean returnValue = getHasShadow_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setFillSymbol_ISymbol(long pNativeObject, long fillSymbol);
	/**
	 * 设置符号填充
	 * @param fillSymbol 填充符号
	 */
	public void setFillSymbol(com.earthview.world.spatial.display.Isymbol fillSymbol)
	{
		long fillSymbolParamValue = (fillSymbol == null ? 0L : fillSymbol.nativeObject.pointer);
		setFillSymbol_ISymbol(this.nativeObject.pointer, fillSymbolParamValue);
	}
	native private long getFillSymbol_void(long pNativeObject);
	/**
	 * 获取符号填充
	 * @param  
	 * @return 填充符号
	 */
	public com.earthview.world.spatial.display.Isymbol getFillSymbol()
	{
		long returnValue = getFillSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setBackgroundSymbol_ISymbol(long pNativeObject, long background);
	/**
	 * 设置文本背景
	 * @param background 文本背景
	 */
	public void setBackgroundSymbol(com.earthview.world.spatial.display.Isymbol background)
	{
		long backgroundParamValue = (background == null ? 0L : background.nativeObject.pointer);
		setBackgroundSymbol_ISymbol(this.nativeObject.pointer, backgroundParamValue);
	}
	native private long getBackgroundSymbol_void(long pNativeObject);
	/**
	 * 获取文本背景
	 * @param  
	 * @return 文本背景
	 */
	public com.earthview.world.spatial.display.Isymbol getBackgroundSymbol()
	{
		long returnValue = getBackgroundSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setBackgroundStretchX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置文本背景框在X轴方向延伸长度
	 * @param value X轴方向的延伸长度
	 */
	public void setBackgroundStretchX(double value)
	{
		double valueParamValue = value;
		setBackgroundStretchX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getBackgroundStretchX_void(long pNativeObject);
	/**
	 * 获取文本背景框在X轴方向延伸长度
	 * @param  
	 * @return X轴方向的延伸长度
	 */
	public double getBackgroundStretchX()
	{
		double returnValue = getBackgroundStretchX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setBackgroundStretchY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置文本背景框在Y轴方向延伸长度
	 * @param value Y轴方向的延伸长度
	 */
	public void setBackgroundStretchY(double value)
	{
		double valueParamValue = value;
		setBackgroundStretchY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getBackgroundStretchY_void(long pNativeObject);
	/**
	 * 获取文本背景框在Y轴方向延伸长度
	 * @param  
	 * @return Y轴方向的延伸长度
	 */
	public double getBackgroundStretchY()
	{
		double returnValue = getBackgroundStretchY_void(this.nativeObject.pointer);
		return returnValue;
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

	public FormattedTextSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FormattedTextSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void getTextSize(long hdc, String text, DoublePointer xSize, DoublePointer ySize)
	{
		super.getTextSize_NoVirtual(hdc, text, xSize, ySize);
	}
	public void getTextSize(com.earthview.world.display.Ipaintdevice paintDevice, String text, DoublePointer xSize, DoublePointer ySize)
	{
		super.getTextSize_NoVirtual(paintDevice, text, xSize, ySize);
	}
	/**
	 * 获取字体边框颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getOutlineColor()
	{
		return super.getOutlineColor_NoVirtual();
	}
	/**
	 * 设置字体边框颜色
	 * @param color 字体边框颜色
	 */
	public void setOutlineColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setOutlineColor_NoVirtual(color);
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
	
	native protected void register_getTextSize_ev_real64_ev_real64(long pNativeObject, String method);
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
			this.register_getTextSize_ev_real64_ev_real64(this.nativeObject.pointer, "getTextSize_ev_real64_ev_real64_callback");
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
	
	public static FormattedTextSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FormattedTextSymbol obj = null;
 		if(baseObj instanceof FormattedTextSymbol)
		{
			obj = (FormattedTextSymbol)baseObj;
		} else {
			obj = new FormattedTextSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFormattedTextSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
