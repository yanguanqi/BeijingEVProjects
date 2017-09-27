package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 范围专题图提供方法如下：获取专题图类型、添加间断点、获取间断点个数、移除某一间断点、移除所有间断点获取与设置标题、默认符号、是否使用默认符号、字段值、指定子标题获取与设置指定专题图的符号对象、间断点值、最小值、最大值深度copy专题对象、获取流、将Theme属性写入XML元素、从XML元素中恢复Theme属性判断两个Theme是否属性相同、从数据流恢复Color属性
 */
public class RangeTheme extends com.earthview.world.spatial.theme.Irangetheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CRangeTheme", new RangeThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCRangeThemeProxy", new RangeThemeClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public RangeTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRangeThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.theme.RangeTheme".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取专题图类型
	 * @param  
	 * @return 专题图类型
	 */
	public com.earthview.world.spatial.theme.EVThemeType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVThemeType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.EVThemeType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVThemeType.toEnum(returnValue);
	}

	native private String getCaption_void(long pNativeObject);
	/**
	 * 获取标题
	 * @param  
	 * @return 标题字符串
	 */
	public String getCaption()
	{
		String returnValue = getCaption_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getCaption_void_NoVirtual(long pNativeObject);
	protected String getCaption_NoVirtual()
	{
		String returnValue = getCaption_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setCaption_EVString(long pNativeObject, String caption);
	/**
	 * 设置标题
	 * @param caption 标题字符串
	 */
	public void setCaption(String caption)
	{
		String captionParamValue = caption;
		setCaption_EVString(this.nativeObject.pointer, captionParamValue);
	}
	native private void setCaption_EVString_NoVirtual(long pNativeObject, String caption);
	protected void setCaption_NoVirtual(String caption)
	{
		String captionParamValue = caption;
		setCaption_EVString_NoVirtual(this.nativeObject.pointer, captionParamValue);
	}

	native private boolean useDefaultSymbol_void(long pNativeObject);
	/**
	 * 获取是否使用默认符号
	 * @param  
	 */
	public boolean useDefaultSymbol()
	{
		boolean returnValue = useDefaultSymbol_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean useDefaultSymbol_void_NoVirtual(long pNativeObject);
	protected boolean useDefaultSymbol_NoVirtual()
	{
		boolean returnValue = useDefaultSymbol_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setUseDefaultSymbol_ev_bool(long pNativeObject, boolean usable);
	/**
	 * 设置是否使用默认符号
	 * @param usable bool值
	 */
	public void setUseDefaultSymbol(boolean usable)
	{
		boolean usableParamValue = usable;
		setUseDefaultSymbol_ev_bool(this.nativeObject.pointer, usableParamValue);
	}
	native private void setUseDefaultSymbol_ev_bool_NoVirtual(long pNativeObject, boolean usable);
	protected void setUseDefaultSymbol_NoVirtual(boolean usable)
	{
		boolean usableParamValue = usable;
		setUseDefaultSymbol_ev_bool_NoVirtual(this.nativeObject.pointer, usableParamValue);
	}

	native private long getDefaultSymbol_void(long pNativeObject);
	/**
	 * 获取默认符号
	 * @param  
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.Isymbol getDefaultSymbol()
	{
		long returnValue = getDefaultSymbol_void(this.nativeObject.pointer);
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
	native private long getDefaultSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getDefaultSymbol_NoVirtual()
	{
		long returnValue = getDefaultSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setDefaultSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置默认符号
	 * @param symbol 符号
	 */
	public void setDefaultSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDefaultSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setDefaultSymbol_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setDefaultSymbol_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setDefaultSymbol_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度copy专题对象
	 * @param  
	 * @return 专题对象
	 */
	public com.earthview.world.spatial.theme.Itheme ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.Itheme ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
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

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将Theme属性写入XML元素
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML元素中恢复Theme属性
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

	native private String getFieldString_void(long pNativeObject);
	/**
	 * 获取字段值
	 * @param  
	 * @return 字段值
	 */
	public String getFieldString()
	{
		String returnValue = getFieldString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFieldString_void_NoVirtual(long pNativeObject);
	protected String getFieldString_NoVirtual()
	{
		String returnValue = getFieldString_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setFieldString_EVString(long pNativeObject, String field);
	/**
	 * 设置字段值
	 * @param field 字段值
	 */
	public void setFieldString(String field)
	{
		String fieldParamValue = field;
		setFieldString_EVString(this.nativeObject.pointer, fieldParamValue);
	}
	native private void setFieldString_EVString_NoVirtual(long pNativeObject, String field);
	protected void setFieldString_NoVirtual(String field)
	{
		String fieldParamValue = field;
		setFieldString_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
	}

	native private String getSubCaption_ev_real64(long pNativeObject, double value);
	/**
	 * 获取指定子标题
	 * @param value 在一个范围中的某个值
	 * @return 子标题字符串
	 */
	public String getSubCaption(double value)
	{
		double valueParamValue = value;
		String returnValue = getSubCaption_ev_real64(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private String getSubCaption_ev_real64_NoVirtual(long pNativeObject, double value);
	protected String getSubCaption_NoVirtual(double value)
	{
		double valueParamValue = value;
		String returnValue = getSubCaption_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}

	native private void setSubCaption_ev_real64_EVString(long pNativeObject, double value, String subCaption);
	/**
	 * 设置指定子标题
	 * @param value 在一个范围中的某个值
	 * @param subCaption 子标题字符串
	 */
	public void setSubCaption(double value, String subCaption)
	{
		double valueParamValue = value;
		String subCaptionParamValue = subCaption;
		setSubCaption_ev_real64_EVString(this.nativeObject.pointer, valueParamValue, subCaptionParamValue);
	}
	native private void setSubCaption_ev_real64_EVString_NoVirtual(long pNativeObject, double value, String subCaption);
	protected void setSubCaption_NoVirtual(double value, String subCaption)
	{
		double valueParamValue = value;
		String subCaptionParamValue = subCaption;
		setSubCaption_ev_real64_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue, subCaptionParamValue);
	}

	native private String getSubCaption_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定子标题
	 * @param index 子标题序列号
	 * @return 子标题字符串
	 */
	public String getSubCaption(long index)
	{
		long indexParamValue = index;
		String returnValue = getSubCaption_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setSubCaption_ev_uint32_EVString(long pNativeObject, long index, String subCaption);
	/**
	 * 设置指定子标题
	 * @param index 子标题序列号
	 * @param subCaption 子标题字符串
	 */
	public void setSubCaption(long index, String subCaption)
	{
		long indexParamValue = index;
		String subCaptionParamValue = subCaption;
		setSubCaption_ev_uint32_EVString(this.nativeObject.pointer, indexParamValue, subCaptionParamValue);
	}
	native private long getSymbol_ev_real64(long pNativeObject, double value);
	/**
	 * 获取指定专题图的符号对象
	 * @param value 专题图值
	 * @return 符号对象
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol(double value)
	{
		double valueParamValue = value;
		long returnValue = getSymbol_ev_real64(this.nativeObject.pointer, valueParamValue);
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
	native private long getSymbol_ev_real64_NoVirtual(long pNativeObject, double value);
	protected com.earthview.world.spatial.display.Isymbol getSymbol_NoVirtual(double value)
	{
		double valueParamValue = value;
		long returnValue = getSymbol_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
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

	native private long getSymbol_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定专题图的符号对象
	 * @param index 专题图索引号
	 * @return 符号对象
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol(long index)
	{
		long indexParamValue = index;
		long returnValue = getSymbol_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getSymbol_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.display.Isymbol getSymbol_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getSymbol_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	native private void setSymbol_ev_real64_ISymbol(long pNativeObject, double value, long symbol);
	/**
	 * 设置指定专题图的符号对象
	 * @param value 专题图值
	 * @param symbol 符号对象
	 */
	public void setSymbol(double value, com.earthview.world.spatial.display.Isymbol symbol)
	{
		double valueParamValue = value;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ev_real64_ISymbol(this.nativeObject.pointer, valueParamValue, symbolParamValue);
	}
	native private void setSymbol_ev_real64_ISymbol_NoVirtual(long pNativeObject, double value, long symbol);
	protected void setSymbol_NoVirtual(double value, com.earthview.world.spatial.display.Isymbol symbol)
	{
		double valueParamValue = value;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ev_real64_ISymbol_NoVirtual(this.nativeObject.pointer, valueParamValue, symbolParamValue);
	}

	native private void addBreak_ev_real64_EVString_ISymbol(long pNativeObject, double value, String subCaption, long symbol);
	/**
	 * 添加间断点
	 * @param value 间断点值
	 * @param subCaption 间断点子标题
	 * @param symbol 间断点符号
	 */
	public void addBreak(double value, String subCaption, com.earthview.world.spatial.display.Isymbol symbol)
	{
		double valueParamValue = value;
		String subCaptionParamValue = subCaption;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addBreak_ev_real64_EVString_ISymbol(this.nativeObject.pointer, valueParamValue, subCaptionParamValue, symbolParamValue);
	}
	native private void addBreak_ev_real64_EVString_ISymbol_NoVirtual(long pNativeObject, double value, String subCaption, long symbol);
	protected void addBreak_NoVirtual(double value, String subCaption, com.earthview.world.spatial.display.Isymbol symbol)
	{
		double valueParamValue = value;
		String subCaptionParamValue = subCaption;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addBreak_ev_real64_EVString_ISymbol_NoVirtual(this.nativeObject.pointer, valueParamValue, subCaptionParamValue, symbolParamValue);
	}

	native private void setBreakValue_ev_uint32_ev_real64(long pNativeObject, long index, double breakValue);
	/**
	 * 设置间断点值
	 * @param index 间断点索引
	 * @param breakValue 间断点值
	 */
	public void setBreakValue(long index, double breakValue)
	{
		long indexParamValue = index;
		double breakValueParamValue = breakValue;
		setBreakValue_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, breakValueParamValue);
	}
	native private double getBreakValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取间断点值
	 * @param index 间断点索引
	 * @return 间断点值
	 */
	public double getBreakValue(long index)
	{
		long indexParamValue = index;
		double returnValue = getBreakValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private double getBreakValue_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected double getBreakValue_NoVirtual(long index)
	{
		long indexParamValue = index;
		double returnValue = getBreakValue_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private long getBreakCount_void(long pNativeObject);
	/**
	 * 获取间断点个数
	 * @param  
	 * @return 个数
	 */
	public long getBreakCount()
	{
		long returnValue = getBreakCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getBreakCount_void_NoVirtual(long pNativeObject);
	protected long getBreakCount_NoVirtual()
	{
		long returnValue = getBreakCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void removeBreak_ev_real64(long pNativeObject, double value);
	/**
	 * 移除某一间断点
	 * @param value 间断点值
	 */
	public void removeBreak(double value)
	{
		double valueParamValue = value;
		removeBreak_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void removeBreak_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void removeBreak_NoVirtual(double value)
	{
		double valueParamValue = value;
		removeBreak_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private void removeBreak_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除某一间断点
	 * @param index 间断点索引
	 */
	public void removeBreak(long index)
	{
		long indexParamValue = index;
		removeBreak_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeBreak_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected void removeBreak_NoVirtual(long index)
	{
		long indexParamValue = index;
		removeBreak_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
	}

	native private void removeAll_void(long pNativeObject);
	/**
	 * 移除所有间断点
	 * @param  
	 */
	public void removeAll()
	{
		removeAll_void(this.nativeObject.pointer);
	}
	native private void removeAll_void_NoVirtual(long pNativeObject);
	protected void removeAll_NoVirtual()
	{
		removeAll_void_NoVirtual(this.nativeObject.pointer);
	}

	native private double getMaxValue_void(long pNativeObject);
	/**
	 * 获取最大值
	 * @param  
	 * @return 最大值
	 */
	public double getMaxValue()
	{
		double returnValue = getMaxValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxValue_void_NoVirtual(long pNativeObject);
	protected double getMaxValue_NoVirtual()
	{
		double returnValue = getMaxValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMinValue_void(long pNativeObject);
	/**
	 * 获取最小值
	 * @param  
	 * @return 最小值
	 */
	public double getMinValue()
	{
		double returnValue = getMinValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinValue_void_NoVirtual(long pNativeObject);
	protected double getMinValue_NoVirtual()
	{
		double returnValue = getMinValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setMinValue_ev_real64(long pNativeObject, double minValue);
	/**
	 * 设置最小值
	 * @param minValue 最小值
	 */
	public void setMinValue(double minValue)
	{
		double minValueParamValue = minValue;
		setMinValue_ev_real64(this.nativeObject.pointer, minValueParamValue);
	}
	native private void setMinValue_ev_real64_NoVirtual(long pNativeObject, double minValue);
	protected void setMinValue_NoVirtual(double minValue)
	{
		double minValueParamValue = minValue;
		setMinValue_ev_real64_NoVirtual(this.nativeObject.pointer, minValueParamValue);
	}

	native private void setMaxValue_ev_real64(long pNativeObject, double maxValue);
	/**
	 * 设置最大值
	 * @param maxValue 最大值
	 */
	public void setMaxValue(double maxValue)
	{
		double maxValueParamValue = maxValue;
		setMaxValue_ev_real64(this.nativeObject.pointer, maxValueParamValue);
	}
	native private boolean ev_equals_ITheme(long pNativeObject, long theme);
	/**
	 * 判断两个Theme是否属性相同
	 * @param theme Theme对象
	 */
	public boolean ev_equals(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		boolean returnValue = ev_equals_ITheme(this.nativeObject.pointer, themeParamValue);
		return returnValue;
	}
	native private boolean ev_equals_ITheme_NoVirtual(long pNativeObject, long theme);
	protected boolean ev_equals_NoVirtual(com.earthview.world.spatial.theme.Itheme theme)
	{
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		boolean returnValue = ev_equals_ITheme_NoVirtual(this.nativeObject.pointer, themeParamValue);
		return returnValue;
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Color属性
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

	public RangeTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RangeTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	
	native protected void register_getFieldString_void(long pNativeObject, String method);
	native protected void register_setFieldString_EVString(long pNativeObject, String method);
	native protected void register_getSubCaption_ev_real64(long pNativeObject, String method);
	native protected void register_setSubCaption_ev_real64_EVString(long pNativeObject, String method);
	native protected void register_getSymbol_ev_real64(long pNativeObject, String method);
	native protected void register_getSymbol_ev_uint32(long pNativeObject, String method);
	native protected void register_setSymbol_ev_real64_ISymbol(long pNativeObject, String method);
	native protected void register_addBreak_ev_real64_EVString_ISymbol(long pNativeObject, String method);
	native protected void register_removeBreak_ev_real64(long pNativeObject, String method);
	native protected void register_removeBreak_ev_uint32(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_getBreakValue_ev_uint32(long pNativeObject, String method);
	native protected void register_getBreakCount_void(long pNativeObject, String method);
	native protected void register_getMaxValue_void(long pNativeObject, String method);
	native protected void register_getMinValue_void(long pNativeObject, String method);
	native protected void register_setMinValue_ev_real64(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getCaption_void(long pNativeObject, String method);
	native protected void register_setCaption_EVString(long pNativeObject, String method);
	native protected void register_useDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setUseDefaultSymbol_ev_bool(long pNativeObject, String method);
	native protected void register_getDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setDefaultSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_ev_equals_ITheme(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_onBeforeQuery_IFeatureClass_IQueryFilter(long pNativeObject, String method);
	native protected void register_onAfterQuery_IFeatureSelection_IGeometry(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFieldString_void(this.nativeObject.pointer, "getFieldString_void_callback");
			this.register_setFieldString_EVString(this.nativeObject.pointer, "setFieldString_EVString_callback");
			this.register_getSubCaption_ev_real64(this.nativeObject.pointer, "getSubCaption_ev_real64_callback");
			this.register_setSubCaption_ev_real64_EVString(this.nativeObject.pointer, "setSubCaption_ev_real64_EVString_callback");
			this.register_getSymbol_ev_real64(this.nativeObject.pointer, "getSymbol_ev_real64_callback");
			this.register_getSymbol_ev_uint32(this.nativeObject.pointer, "getSymbol_ev_uint32_callback");
			this.register_setSymbol_ev_real64_ISymbol(this.nativeObject.pointer, "setSymbol_ev_real64_ISymbol_callback");
			this.register_addBreak_ev_real64_EVString_ISymbol(this.nativeObject.pointer, "addBreak_ev_real64_EVString_ISymbol_callback");
			this.register_removeBreak_ev_real64(this.nativeObject.pointer, "removeBreak_ev_real64_callback");
			this.register_removeBreak_ev_uint32(this.nativeObject.pointer, "removeBreak_ev_uint32_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_getBreakValue_ev_uint32(this.nativeObject.pointer, "getBreakValue_ev_uint32_callback");
			this.register_getBreakCount_void(this.nativeObject.pointer, "getBreakCount_void_callback");
			this.register_getMaxValue_void(this.nativeObject.pointer, "getMaxValue_void_callback");
			this.register_getMinValue_void(this.nativeObject.pointer, "getMinValue_void_callback");
			this.register_setMinValue_ev_real64(this.nativeObject.pointer, "setMinValue_ev_real64_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getCaption_void(this.nativeObject.pointer, "getCaption_void_callback");
			this.register_setCaption_EVString(this.nativeObject.pointer, "setCaption_EVString_callback");
			this.register_useDefaultSymbol_void(this.nativeObject.pointer, "useDefaultSymbol_void_callback");
			this.register_setUseDefaultSymbol_ev_bool(this.nativeObject.pointer, "setUseDefaultSymbol_ev_bool_callback");
			this.register_getDefaultSymbol_void(this.nativeObject.pointer, "getDefaultSymbol_void_callback");
			this.register_setDefaultSymbol_ISymbol(this.nativeObject.pointer, "setDefaultSymbol_ISymbol_callback");
			this.register_ev_equals_ITheme(this.nativeObject.pointer, "ev_equals_ITheme_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_onBeforeQuery_IFeatureClass_IQueryFilter(this.nativeObject.pointer, "onBeforeQuery_IFeatureClass_IQueryFilter_callback");
			this.register_onAfterQuery_IFeatureSelection_IGeometry(this.nativeObject.pointer, "onAfterQuery_IFeatureSelection_IGeometry_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static RangeTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RangeTheme obj = null;
 		if(baseObj instanceof RangeTheme)
		{
			obj = (RangeTheme)baseObj;
		} else {
			obj = new RangeTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRangeTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
