package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 单值专题图提供方法如下：获取专题图类型、添加值、移除值、移除所有值、获取值、是否包含值获取与设置标题、默认符号、是否使用默认符号、默认标题、字段值、指定子标题、指定符号对象深度copy专题对象、获取流、将Theme属性写入XML元素、从XML元素中恢复Theme属性、判断两个Theme是否属性相同、从数据流恢复Color属性
 */
public class UniqueValueTheme extends com.earthview.world.spatial.theme.Iuniquetheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CUniqueValueTheme", new UniqueValueThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCUniqueValueThemeProxy", new UniqueValueThemeClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public UniqueValueTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCUniqueValueThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.theme.UniqueValueTheme".equals(this.getClass().getName()))
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

	native private String getDefaultCaption_void(long pNativeObject);
	/**
	 * 获取默认标题
	 * @param  
	 * @return 标题字符串
	 */
	public String getDefaultCaption()
	{
		String returnValue = getDefaultCaption_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDefaultCaption_EVString(long pNativeObject, String defaultCaption);
	/**
	 * 设置默认标题
	 * @param defaultCaption 标题字符串
	 */
	public void setDefaultCaption(String defaultCaption)
	{
		String defaultCaptionParamValue = defaultCaption;
		setDefaultCaption_EVString(this.nativeObject.pointer, defaultCaptionParamValue);
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
	native private String getSubCaption_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getSubCaption_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getSubCaption_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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
	native private void setSubCaption_ev_uint32_EVString_NoVirtual(long pNativeObject, long index, String subCaption);
	protected void setSubCaption_NoVirtual(long index, String subCaption)
	{
		long indexParamValue = index;
		String subCaptionParamValue = subCaption;
		setSubCaption_ev_uint32_EVString_NoVirtual(this.nativeObject.pointer, indexParamValue, subCaptionParamValue);
	}

	native private long getSymbol_EVString(long pNativeObject, String value);
	/**
	 * 获取指定专题图的符号对象
	 * @param value 专题图值
	 * @return 符号对象
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol(String value)
	{
		String valueParamValue = value;
		long returnValue = getSymbol_EVString(this.nativeObject.pointer, valueParamValue);
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
	native private long getSymbol_EVString_NoVirtual(long pNativeObject, String value);
	protected com.earthview.world.spatial.display.Isymbol getSymbol_NoVirtual(String value)
	{
		String valueParamValue = value;
		long returnValue = getSymbol_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
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

	native private long getSymbol_ev_int32(long pNativeObject, int index);
	/**
	 * 获取指定专题图的符号对象
	 * @param index 专题图索引号
	 * @return 符号对象
	 */
	public com.earthview.world.spatial.display.Isymbol getSymbol(int index)
	{
		int indexParamValue = index;
		long returnValue = getSymbol_ev_int32(this.nativeObject.pointer, indexParamValue);
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
	native private void setSymbol_ev_int32_ISymbol(long pNativeObject, int index, long symbol);
	/**
	 * 设置指定专题图的符号对象
	 * @param index 索引
	 * @param symbol 符号对象
	 */
	public void setSymbol(int index, com.earthview.world.spatial.display.Isymbol symbol)
	{
		int indexParamValue = index;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ev_int32_ISymbol(this.nativeObject.pointer, indexParamValue, symbolParamValue);
	}
	native private void addValue_EVString_EVString_ISymbol(long pNativeObject, String value, String caption, long symbol);
	/**
	 * 添加值
	 * @param value 字符串值
	 * @param caption 标题字符串
	 * @param symbol 符号
	 */
	public void addValue(String value, String caption, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String valueParamValue = value;
		String captionParamValue = caption;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addValue_EVString_EVString_ISymbol(this.nativeObject.pointer, valueParamValue, captionParamValue, symbolParamValue);
	}
	native private void addValue_EVString_EVString_ISymbol_NoVirtual(long pNativeObject, String value, String caption, long symbol);
	protected void addValue_NoVirtual(String value, String caption, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String valueParamValue = value;
		String captionParamValue = caption;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addValue_EVString_EVString_ISymbol_NoVirtual(this.nativeObject.pointer, valueParamValue, captionParamValue, symbolParamValue);
	}

	native private void removeValue_ev_int32(long pNativeObject, int index);
	/**
	 * 移除值
	 * @param index 索引
	 */
	public void removeValue(int index)
	{
		int indexParamValue = index;
		removeValue_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private void removeAll_void(long pNativeObject);
	/**
	 * 移除所有值
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

	native private long getValueCount_void(long pNativeObject);
	/**
	 * 获取值的总数
	 * @param  
	 * @return 个数
	 */
	public long getValueCount()
	{
		long returnValue = getValueCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getValueCount_void_NoVirtual(long pNativeObject);
	protected long getValueCount_NoVirtual()
	{
		long returnValue = getValueCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取值
	 * @param index 索引
	 * @return 字符串值
	 */
	public String getValue(long index)
	{
		long indexParamValue = index;
		String returnValue = getValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getValue_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getValue_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getValue_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private boolean containsValue_EVString(long pNativeObject, String value);
	/**
	 * 是否包含值
	 * @param value 字符串值
	 * @return bool值
	 */
	public boolean containsValue(String value)
	{
		String valueParamValue = value;
		boolean returnValue = containsValue_EVString(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}
	native private boolean containsValue_EVString_NoVirtual(long pNativeObject, String value);
	protected boolean containsValue_NoVirtual(String value)
	{
		String valueParamValue = value;
		boolean returnValue = containsValue_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
		return returnValue;
	}

	native private boolean getGradeDrawEnable_void(long pNativeObject);
	public boolean getGradeDrawEnable()
	{
		boolean returnValue = getGradeDrawEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGradeDrawEnable_ev_bool(long pNativeObject, boolean bFlag);
	public void setGradeDrawEnable(boolean bFlag)
	{
		boolean bFlagParamValue = bFlag;
		setGradeDrawEnable_ev_bool(this.nativeObject.pointer, bFlagParamValue);
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

	public UniqueValueTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UniqueValueTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 设置指定值的显示符号
	 * @param value 值
	 * @param symbol 符号
	 */
	public void setSymbol(String value, com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setSymbol_NoVirtual(value, symbol);
	}
	/**
	 * 移除指定值
	 * @param value 值
	 */
	public void removeValue(String value)
	{
		super.removeValue_NoVirtual(value);
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
	native protected void register_getSubCaption_ev_uint32(long pNativeObject, String method);
	native protected void register_setSubCaption_ev_uint32_EVString(long pNativeObject, String method);
	native protected void register_getSymbol_EVString(long pNativeObject, String method);
	native protected void register_setSymbol_EVString_ISymbol(long pNativeObject, String method);
	native protected void register_addValue_EVString_EVString_ISymbol(long pNativeObject, String method);
	native protected void register_removeValue_EVString(long pNativeObject, String method);
	native protected void register_removeAll_void(long pNativeObject, String method);
	native protected void register_getValueCount_void(long pNativeObject, String method);
	native protected void register_getValue_ev_uint32(long pNativeObject, String method);
	native protected void register_containsValue_EVString(long pNativeObject, String method);
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
			this.register_getSubCaption_ev_uint32(this.nativeObject.pointer, "getSubCaption_ev_uint32_callback");
			this.register_setSubCaption_ev_uint32_EVString(this.nativeObject.pointer, "setSubCaption_ev_uint32_EVString_callback");
			this.register_getSymbol_EVString(this.nativeObject.pointer, "getSymbol_EVString_callback");
			this.register_setSymbol_EVString_ISymbol(this.nativeObject.pointer, "setSymbol_EVString_ISymbol_callback");
			this.register_addValue_EVString_EVString_ISymbol(this.nativeObject.pointer, "addValue_EVString_EVString_ISymbol_callback");
			this.register_removeValue_EVString(this.nativeObject.pointer, "removeValue_EVString_callback");
			this.register_removeAll_void(this.nativeObject.pointer, "removeAll_void_callback");
			this.register_getValueCount_void(this.nativeObject.pointer, "getValueCount_void_callback");
			this.register_getValue_ev_uint32(this.nativeObject.pointer, "getValue_ev_uint32_callback");
			this.register_containsValue_EVString(this.nativeObject.pointer, "containsValue_EVString_callback");
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
	
	public static UniqueValueTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UniqueValueTheme obj = null;
 		if(baseObj instanceof UniqueValueTheme)
		{
			obj = (UniqueValueTheme)baseObj;
		} else {
			obj = new UniqueValueTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUniqueValueTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
