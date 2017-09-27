package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 范围专题图基类
 */
public class Irangetheme extends com.earthview.world.spatial.theme.Itheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::IRangeTheme", new IrangethemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JIRangeThemeProxy", new IrangethemeClassFactory());
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
	 * 设置字段名
	 * @param field 字段名
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

	protected  String getSubCaption_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		String returnValue = getSubCaption(valueParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getSubCaption_ev_real64(long pNativeObject, double value);
	/**
	 * 获取指定字段值标题
	 * @param value 字段值
	 * @return 返回标题
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

	protected  void setSubCaption_ev_real64_EVString_callback(double value, String subCaption)
	{
		double valueParamValue = value;
		String subCaptionParamValue = subCaption;
		setSubCaption(valueParamValue, subCaptionParamValue);
	}

	native private void setSubCaption_ev_real64_EVString(long pNativeObject, double value, String subCaption);
	/**
	 * 设置指定字段值标题
	 * @param value 字段值
	 * @param subCaption 标题
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

	protected  long getSymbol_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		com.earthview.world.spatial.display.Isymbol returnValue = getSymbol(valueParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSymbol_ev_real64(long pNativeObject, double value);
	/**
	 * 获取指定字段值符号
	 * @param value 字段值
	 * @return 返回符号
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

	protected  long getSymbol_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.display.Isymbol returnValue = getSymbol(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getSymbol_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引符号
	 * @param index 索引
	 * @return 返回符号
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

	protected  void setSymbol_ev_real64_ISymbol_callback(double value, long symbol)
	{
		double valueParamValue = value;
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

	native private void setSymbol_ev_real64_ISymbol(long pNativeObject, double value, long symbol);
	/**
	 * 设置指定字段值符号
	 * @param value 字段值
	 * @param symbol 符号
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

	protected  void addBreak_ev_real64_EVString_ISymbol_callback(double value, String subCaption, long symbol)
	{
		double valueParamValue = value;
		String subCaptionParamValue = subCaption;
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
		addBreak(valueParamValue, subCaptionParamValue, symbolParamValue);
	}

	native private void addBreak_ev_real64_EVString_ISymbol(long pNativeObject, double value, String subCaption, long symbol);
	/**
	 * 添加分段
	 * @param value 字段值
	 * @param subCaption 标题
	 * @param symbol 符号
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

	protected  void removeBreak_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		removeBreak(valueParamValue);
	}

	native private void removeBreak_ev_real64(long pNativeObject, double value);
	/**
	 * 移除指定值的分段
	 * @param value 字段值
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

	protected  void removeBreak_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		removeBreak(indexParamValue);
	}

	native private void removeBreak_ev_uint32(long pNativeObject, long index);
	/**
	 * 移除指定索引的分段
	 * @param index 索引
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

	protected  void removeAll_void_callback()
	{
		removeAll();
	}

	native private void removeAll_void(long pNativeObject);
	/**
	 * 清空
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

	protected  double getBreakValue_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		double returnValue = getBreakValue(indexParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getBreakValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的分段值
	 * @param index 索引
	 * @return 分段值
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

	protected  long getBreakCount_void_callback()
	{
		long returnValue = getBreakCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getBreakCount_void(long pNativeObject);
	/**
	 * 获取分段数
	 * @param  
	 * @return 分段数
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

	protected  double getMaxValue_void_callback()
	{
		double returnValue = getMaxValue();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getMaxValue_void(long pNativeObject);
	/**
	 * 设置最大值
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

	protected  double getMinValue_void_callback()
	{
		double returnValue = getMinValue();
		double __returnValue = returnValue;
		return __returnValue;
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

	protected  void setMinValue_ev_real64_callback(double minValue)
	{
		double minValueParamValue = minValue;
		setMinValue(minValueParamValue);
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

	public Irangetheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Irangetheme(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Irangetheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Irangetheme obj = null;
 		if(baseObj instanceof Irangetheme)
		{
			obj = (Irangetheme)baseObj;
		} else {
			obj = new Irangetheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IRangeTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
