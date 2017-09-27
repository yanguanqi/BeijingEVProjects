package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 唯一值专题图基类
 */
public class Iuniquetheme extends com.earthview.world.spatial.theme.Itheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::IUniqueTheme", new IuniquethemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JIUniqueThemeProxy", new IuniquethemeClassFactory());
	}

	protected  String getFieldString_void_callback()
	{
		String returnValue = getFieldString();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFieldString_void(long pNativeObject);
	/**
	 * 获取字段名
	 * @param  
	 * @return 返回字段名
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

	protected  void setFieldString_EVString_callback(String field)
	{
		String fieldParamValue = field;
		setFieldString(fieldParamValue);
	}

	native private void setFieldString_EVString(long pNativeObject, String field);
	/**
	 * 设置字段
	 * @param field 字段
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

	protected  String getSubCaption_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getSubCaption(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSubCaption_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取index索引处的标题
	 * @param index 索引
	 * @return 返回标题
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

	protected  void setSubCaption_ev_uint32_EVString_callback(long index, String subCaption)
	{
		long indexParamValue = index;
		String subCaptionParamValue = subCaption;
		setSubCaption(indexParamValue, subCaptionParamValue);
	}

	native private void setSubCaption_ev_uint32_EVString(long pNativeObject, long index, String subCaption);
	/**
	 * 设置指定索引处标题
	 * @param index 索引
	 * @param subCaption 标题
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

	protected  long getSymbol_EVString_callback(String value)
	{
		String valueParamValue = value;
		com.earthview.world.spatial.display.Isymbol returnValue = getSymbol(valueParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSymbol_EVString(long pNativeObject, String value);
	/**
	 * 获取指定值显示的符号
	 * @param value 指定值
	 * @return 返回符号
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

	protected  void setSymbol_EVString_ISymbol_callback(String value, long symbol)
	{
		String valueParamValue = value;
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setSymbol(valueParamValue, symbolParamValue);
	}

	native private void setSymbol_EVString_ISymbol(long pNativeObject, String value, long symbol);
	/**
	 * 设置指定值的显示符号
	 * @param value 值
	 * @param symbol 符号
	 */
	public void setSymbol(String value, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String valueParamValue = value;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_EVString_ISymbol(this.nativeObject.pointer, valueParamValue, symbolParamValue);
	}
	native private void setSymbol_EVString_ISymbol_NoVirtual(long pNativeObject, String value, long symbol);
	protected void setSymbol_NoVirtual(String value, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String valueParamValue = value;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_EVString_ISymbol_NoVirtual(this.nativeObject.pointer, valueParamValue, symbolParamValue);
	}

	protected  void addValue_EVString_EVString_ISymbol_callback(String value, String caption, long symbol)
	{
		String valueParamValue = value;
		String captionParamValue = caption;
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		addValue(valueParamValue, captionParamValue, symbolParamValue);
	}

	native private void addValue_EVString_EVString_ISymbol(long pNativeObject, String value, String caption, long symbol);
	/**
	 * 添加值（值，标题，符号）
	 * @param value 值
	 * @param caption 标题
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

	protected  void removeValue_EVString_callback(String value)
	{
		String valueParamValue = value;
		removeValue(valueParamValue);
	}

	native private void removeValue_EVString(long pNativeObject, String value);
	/**
	 * 移除指定值
	 * @param value 值
	 */
	public void removeValue(String value)
	{
		String valueParamValue = value;
		removeValue_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void removeValue_EVString_NoVirtual(long pNativeObject, String value);
	protected void removeValue_NoVirtual(String value)
	{
		String valueParamValue = value;
		removeValue_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  void removeAll_void_callback()
	{
		removeAll();
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

	protected  long getValueCount_void_callback()
	{
		long returnValue = getValueCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getValueCount_void(long pNativeObject);
	/**
	 * 获取所有值数量
	 * @param  
	 * @return 返回所有值数量
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

	protected  String getValue_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getValue(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的值
	 * @param index 索引位置
	 * @return 返回值
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

	protected  boolean containsValue_EVString_callback(String value)
	{
		String valueParamValue = value;
		boolean returnValue = containsValue(valueParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean containsValue_EVString(long pNativeObject, String value);
	/**
	 * 是否包含给定的值
	 * @param value 给定值
	 * @return 包含返回true；否则返回false
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

	public Iuniquetheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iuniquetheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取专题图类型
	 * @param  
	 * @return 返回专题图类型
	 */
	public com.earthview.world.spatial.theme.EVThemeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 获取标题
	 * @param  
	 * @return 返回标题
	 */
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	/**
	 * 设置标题
	 * @param caption 标题
	 */
	public void setCaption(String caption)
	{
		super.setCaption_NoVirtual(caption);
	}
	/**
	 * 是否为用户自定义符号
	 * @param  
	 * @return 如果是返回true；否则返回false
	 */
	public boolean useDefaultSymbol()
	{
		return super.useDefaultSymbol_NoVirtual();
	}
	/**
	 * 设置是否为用户自定义符号
	 * @param usable 是否用户自定义
	 */
	public void setUseDefaultSymbol(boolean usable)
	{
		super.setUseDefaultSymbol_NoVirtual(usable);
	}
	/**
	 * 获取自定义符号
	 * @param  
	 * @return 返回符号
	 */
	public com.earthview.world.spatial.display.Isymbol getDefaultSymbol()
	{
		return super.getDefaultSymbol_NoVirtual();
	}
	/**
	 * 设置自定义符号
	 * @param symbol 自定义符号
	 */
	public void setDefaultSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setDefaultSymbol_NoVirtual(symbol);
	}
	/**
	 * 是否与指定专题图相同
	 * @param theme 指定的专题图
	 * @return 如果是返回true；否则返回false
	 */
	public boolean ev_equals(com.earthview.world.spatial.theme.Itheme theme)
	{
		return super.ev_equals_NoVirtual(theme);
	}
	/**
	 * 复制专题图
	 * @param  
	 * @return 返回复制的专题图
	 */
	public com.earthview.world.spatial.theme.Itheme ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 将专题图输出到流
	 * @param stream 输出参数，流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	/**
	 * 将专题图输出为EarthView::World::Core::CXmlElement
	 * @param  
	 * @return 返回EarthView::World::Core::CXmlElement
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		return super.toXmlElement_NoVirtual();
	}
	/**
	 * 从EarthView::World::Core::CXmlElement读取专题图
	 * @param element 指定的EarthView::World::Core::CXmlElement
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
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
	
	public static Iuniquetheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iuniquetheme obj = null;
 		if(baseObj instanceof Iuniquetheme)
		{
			obj = (Iuniquetheme)baseObj;
		} else {
			obj = new Iuniquetheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IUniqueTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
