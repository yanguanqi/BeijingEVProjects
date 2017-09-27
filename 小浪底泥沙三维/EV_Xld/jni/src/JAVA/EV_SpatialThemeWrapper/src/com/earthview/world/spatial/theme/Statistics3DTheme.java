package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维统计专题图基类
 */
public class Statistics3DTheme extends com.earthview.world.spatial.theme.Istatisticstheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CStatistics3DTheme", new Statistics3DThemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCStatistics3DThemeProxy", new Statistics3DThemeClassFactory());
	}

	/**
	 * 符号大小的策略
	 */
	public enum EVStatistics3DSymbolSizePolicy implements INativeEnum<EVStatistics3DSymbolSizePolicy> {
		SSSP_FixSize(EVStatistics3DSymbolSizePolicyHelper.ENUM_VALUES[0]),
		SSSP_AdaptToSum(EVStatistics3DSymbolSizePolicyHelper.ENUM_VALUES[1]),
		SSSP_AdaptToField(EVStatistics3DSymbolSizePolicyHelper.ENUM_VALUES[2]);
		private int value;
		EVStatistics3DSymbolSizePolicy(int i) {
			this.value = i;
		}
		public EVStatistics3DSymbolSizePolicy getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVStatistics3DSymbolSizePolicy toEnum(int retval) {
			if(retval == SSSP_FixSize.value){
				return SSSP_FixSize;
			}
			else if(retval == SSSP_AdaptToSum.value){
				return SSSP_AdaptToSum;
			}
			else if(retval == SSSP_AdaptToField.value){
				return SSSP_AdaptToField;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVStatistics3DSymbolSizePolicyHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 字段值的策略
	 */
	public enum EVStatisticsFieldValuePolicy implements INativeEnum<EVStatisticsFieldValuePolicy> {
		SFVP_NormalValue(EVStatisticsFieldValuePolicyHelper.ENUM_VALUES[0]),
		SFVP_LogValue(EVStatisticsFieldValuePolicyHelper.ENUM_VALUES[1]),
		SFVP_SqrtValue(EVStatisticsFieldValuePolicyHelper.ENUM_VALUES[2]);
		private int value;
		EVStatisticsFieldValuePolicy(int i) {
			this.value = i;
		}
		public EVStatisticsFieldValuePolicy getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVStatisticsFieldValuePolicy toEnum(int retval) {
			if(retval == SFVP_NormalValue.value){
				return SFVP_NormalValue;
			}
			else if(retval == SFVP_LogValue.value){
				return SFVP_LogValue;
			}
			else if(retval == SFVP_SqrtValue.value){
				return SFVP_SqrtValue;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVStatisticsFieldValuePolicyHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Statistics3DTheme() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCStatistics3DThemeProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.theme.Statistics3DTheme".equals(this.getClass().getName()))
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

	native private void addField_EVString_ISymbol(long pNativeObject, String field, long symbol);
	/**
	 * 添加字段值
	 * @param field 字段值
	 * @param symbol 符号对象
	 */
	public void addField(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addField_EVString_ISymbol(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}
	native private void addField_EVString_ISymbol_NoVirtual(long pNativeObject, String field, long symbol);
	protected void addField_NoVirtual(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addField_EVString_ISymbol_NoVirtual(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}

	native private void deleteField_EVString(long pNativeObject, String field);
	/**
	 * 根据字段名删除字段
	 * @param field 字段值
	 */
	public void deleteField(String field)
	{
		String fieldParamValue = field;
		deleteField_EVString(this.nativeObject.pointer, fieldParamValue);
	}
	native private void deleteField_EVString_NoVirtual(long pNativeObject, String field);
	protected void deleteField_NoVirtual(String field)
	{
		String fieldParamValue = field;
		deleteField_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
	}

	native private void deleteField_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引删除字段
	 * @param index 索引
	 */
	public void deleteField(long index)
	{
		long indexParamValue = index;
		deleteField_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void deleteAllField_void(long pNativeObject);
	/**
	 * 删除所有字段
	 * @param  
	 */
	public void deleteAllField()
	{
		deleteAllField_void(this.nativeObject.pointer);
	}
	native private void deleteAllField_void_NoVirtual(long pNativeObject);
	protected void deleteAllField_NoVirtual()
	{
		deleteAllField_void_NoVirtual(this.nativeObject.pointer);
	}

	native private long getFieldCount_void(long pNativeObject);
	/**
	 * 获取字段总数
	 * @param  
	 * @return 个数
	 */
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldCount_void_NoVirtual(long pNativeObject);
	protected long getFieldCount_NoVirtual()
	{
		long returnValue = getFieldCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private String getFieldName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字段值
	 * @param index 索引
	 * @return 字段值
	 */
	public String getFieldName(long index)
	{
		long indexParamValue = index;
		String returnValue = getFieldName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getFieldName_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getFieldName_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getFieldName_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	native private void moveField_ev_uint32_ev_uint32(long pNativeObject, long oldIndex, long newIndex);
	/**
	 * 移动字段到某处
	 * @param oldIndex 旧位置
	 * @param newIndex 新位置
	 */
	public void moveField(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveField_ev_uint32_ev_uint32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveField_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long oldIndex, long newIndex);
	protected void moveField_NoVirtual(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveField_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	native private long getBackground_void(long pNativeObject);
	/**
	 * 获取背景符号
	 * @param  
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.Isymbol getBackground()
	{
		long returnValue = getBackground_void(this.nativeObject.pointer);
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
	native private long getBackground_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getBackground_NoVirtual()
	{
		long returnValue = getBackground_void_NoVirtual(this.nativeObject.pointer);
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

	native private void setBackground_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置背景符号
	 * @param symbol 符号
	 */
	public void setBackground(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setBackground_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setBackground_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setBackground_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setBackground_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	native private long getFieldSymbol_EVString(long pNativeObject, String field);
	/**
	 * 获取字段符号
	 * @param field 字段
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.Isymbol getFieldSymbol(String field)
	{
		String fieldParamValue = field;
		long returnValue = getFieldSymbol_EVString(this.nativeObject.pointer, fieldParamValue);
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
	native private long getFieldSymbol_EVString_NoVirtual(long pNativeObject, String field);
	protected com.earthview.world.spatial.display.Isymbol getFieldSymbol_NoVirtual(String field)
	{
		String fieldParamValue = field;
		long returnValue = getFieldSymbol_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
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

	native private long getFieldSymbol_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字段符号
	 * @param index 索引
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.Isymbol getFieldSymbol(long index)
	{
		long indexParamValue = index;
		long returnValue = getFieldSymbol_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private void setFieldSymbol_EVString_ISymbol(long pNativeObject, String field, long symbol);
	/**
	 * 设置字段符号
	 * @param field 字段
	 * @param symbol 符号
	 */
	public void setFieldSymbol(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setFieldSymbol_EVString_ISymbol(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}
	native private void setFieldSymbol_EVString_ISymbol_NoVirtual(long pNativeObject, String field, long symbol);
	protected void setFieldSymbol_NoVirtual(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setFieldSymbol_EVString_ISymbol_NoVirtual(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}

	native private void setFieldSymbol_ev_uint32_ISymbol(long pNativeObject, long index, long symbol);
	/**
	 * 设置字段符号
	 * @param index 索引
	 * @param symbol 符号
	 */
	public void setFieldSymbol(long index, com.earthview.world.spatial.display.Isymbol symbol)
	{
		long indexParamValue = index;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setFieldSymbol_ev_uint32_ISymbol(this.nativeObject.pointer, indexParamValue, symbolParamValue);
	}
	native private int getStatisticsType_void(long pNativeObject);
	/**
	 * 获取统计专题图类型
	 * @param  
	 * @return 统计专题图类型
	 */
	public com.earthview.world.spatial.theme.EVStatisticsThemeType getStatisticsType()
	{
		int returnValue = getStatisticsType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVStatisticsThemeType.toEnum(returnValue);
	}
	native private int getStatisticsType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.EVStatisticsThemeType getStatisticsType_NoVirtual()
	{
		int returnValue = getStatisticsType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVStatisticsThemeType.toEnum(returnValue);
	}

	native private void setStatisticsType_EVStatisticsThemeType(long pNativeObject, int type);
	/**
	 * 设置统计专题图类型
	 * @param type 统计专题图类型
	 */
	public void setStatisticsType(com.earthview.world.spatial.theme.EVStatisticsThemeType type)
	{
		int typeParamValue = type.getValue();
		setStatisticsType_EVStatisticsThemeType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setStatisticsType_EVStatisticsThemeType_NoVirtual(long pNativeObject, int type);
	protected void setStatisticsType_NoVirtual(com.earthview.world.spatial.theme.EVStatisticsThemeType type)
	{
		int typeParamValue = type.getValue();
		setStatisticsType_EVStatisticsThemeType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	native private long getStatisticsSymbol_void(long pNativeObject);
	/**
	 * 获取统计专题图符号
	 * @param  
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.Isymbol getStatisticsSymbol()
	{
		long returnValue = getStatisticsSymbol_void(this.nativeObject.pointer);
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
	native private long getStatisticsSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getStatisticsSymbol_NoVirtual()
	{
		long returnValue = getStatisticsSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	native private String getAdaptFieldName_void(long pNativeObject);
	/**
	 * 当符合大小策略为SSSP_AdaptToField时，设置字段名称
	 * @param  
	 * @return 字段名
	 */
	public String getAdaptFieldName()
	{
		String returnValue = getAdaptFieldName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setAdaptFieldName_EVString(long pNativeObject, String name);
	/**
	 * 当符号大小策略为SSSP_AdaptToField时，获取字段名称
	 * @param name 字段名
	 */
	public void setAdaptFieldName(String name)
	{
		String nameParamValue = name;
		setAdaptFieldName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private int getSymbolSizePolicy_void(long pNativeObject);
	/**
	 * 获取统计图整体符号的大小策略
	 * @param  
	 * @return 饼状图大小策略
	 */
	public com.earthview.world.spatial.theme.Statistics3DTheme.EVStatistics3DSymbolSizePolicy getSymbolSizePolicy()
	{
		int returnValue = getSymbolSizePolicy_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.Statistics3DTheme.EVStatistics3DSymbolSizePolicy.toEnum(returnValue);
	}
	native private void setSymbolSizePolicy_EVStatistics3DSymbolSizePolicy(long pNativeObject, int policy);
	/**
	 * 设置统计图整体符号的大小策略
	 * @param policy 饼状图大小策略
	 */
	public void setSymbolSizePolicy(com.earthview.world.spatial.theme.Statistics3DTheme.EVStatistics3DSymbolSizePolicy policy)
	{
		int policyParamValue = policy.getValue();
		setSymbolSizePolicy_EVStatistics3DSymbolSizePolicy(this.nativeObject.pointer, policyParamValue);
	}
	native private boolean ev_equals_ITheme(long pNativeObject, long theme);
	/**
	 * 比较主题图
	 * @param theme 专题图
	 * @return 如果返回true，说明两者相等，否则两者不等
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

	native private boolean useDefaultSymbol_void(long pNativeObject);
	/**
	 * 获取是否使用默认符号
	 * @param  
	 * @return 如果返回true，则使用，否则不使用
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

	native private int getFieldValuePolicy_void(long pNativeObject);
	/**
	 * 获取专题统计图的字段值处理策略
	 * @param  
	 * @return 字段值处理策略
	 */
	public com.earthview.world.spatial.theme.Statistics3DTheme.EVStatisticsFieldValuePolicy getFieldValuePolicy()
	{
		int returnValue = getFieldValuePolicy_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.Statistics3DTheme.EVStatisticsFieldValuePolicy.toEnum(returnValue);
	}
	native private void setFieldValuePolicy_EVStatisticsFieldValuePolicy(long pNativeObject, int policy);
	/**
	 * 设置专题统计图的字段值处理策略
	 * @param policy 字段值处理策略
	 */
	public void setFieldValuePolicy(com.earthview.world.spatial.theme.Statistics3DTheme.EVStatisticsFieldValuePolicy policy)
	{
		int policyParamValue = policy.getValue();
		setFieldValuePolicy_EVStatisticsFieldValuePolicy(this.nativeObject.pointer, policyParamValue);
	}
	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 写入流
	 * @param stream 流
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流恢复
	 * @param stream 流
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

	public Statistics3DTheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Statistics3DTheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * ��ȡ��ͼ��С����
	 * @param  
	 * @return ��ͼ��С����
	 */
	public com.earthview.world.spatial.theme.EVPieSizePolicy getPieSizePolicy()
	{
		return super.getPieSizePolicy_NoVirtual();
	}
	/**
	 * ���ñ�ͼ��С����
	 * @param policy ��ͼ��С����
	 */
	public void setPieSizePolicy(com.earthview.world.spatial.theme.EVPieSizePolicy policy)
	{
		super.setPieSizePolicy_NoVirtual(policy);
	}
	/**
	 * ��ȡ�����ֶ�
	 * @param  
	 * @return �����ֶ���
	 */
	public String getProportionField()
	{
		return super.getProportionField_NoVirtual();
	}
	/**
	 * ���ñ����ֶ�
	 * @param field �����ֶ�
	 */
	public void setProportionField(String field)
	{
		super.setProportionField_NoVirtual(field);
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
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	
	native protected void register_addField_EVString_ISymbol(long pNativeObject, String method);
	native protected void register_deleteField_EVString(long pNativeObject, String method);
	native protected void register_deleteAllField_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFieldName_ev_uint32(long pNativeObject, String method);
	native protected void register_moveField_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getBackground_void(long pNativeObject, String method);
	native protected void register_setBackground_ISymbol(long pNativeObject, String method);
	native protected void register_getFieldSymbol_EVString(long pNativeObject, String method);
	native protected void register_setFieldSymbol_EVString_ISymbol(long pNativeObject, String method);
	native protected void register_getStatisticsType_void(long pNativeObject, String method);
	native protected void register_setStatisticsType_EVStatisticsThemeType(long pNativeObject, String method);
	native protected void register_getStatisticsSymbol_void(long pNativeObject, String method);
	native protected void register_getPieSizePolicy_void(long pNativeObject, String method);
	native protected void register_setPieSizePolicy_EVPieSizePolicy(long pNativeObject, String method);
	native protected void register_getProportionField_void(long pNativeObject, String method);
	native protected void register_setProportionField_EVString(long pNativeObject, String method);
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
			this.register_addField_EVString_ISymbol(this.nativeObject.pointer, "addField_EVString_ISymbol_callback");
			this.register_deleteField_EVString(this.nativeObject.pointer, "deleteField_EVString_callback");
			this.register_deleteAllField_void(this.nativeObject.pointer, "deleteAllField_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFieldName_ev_uint32(this.nativeObject.pointer, "getFieldName_ev_uint32_callback");
			this.register_moveField_ev_uint32_ev_uint32(this.nativeObject.pointer, "moveField_ev_uint32_ev_uint32_callback");
			this.register_getBackground_void(this.nativeObject.pointer, "getBackground_void_callback");
			this.register_setBackground_ISymbol(this.nativeObject.pointer, "setBackground_ISymbol_callback");
			this.register_getFieldSymbol_EVString(this.nativeObject.pointer, "getFieldSymbol_EVString_callback");
			this.register_setFieldSymbol_EVString_ISymbol(this.nativeObject.pointer, "setFieldSymbol_EVString_ISymbol_callback");
			this.register_getStatisticsType_void(this.nativeObject.pointer, "getStatisticsType_void_callback");
			this.register_setStatisticsType_EVStatisticsThemeType(this.nativeObject.pointer, "setStatisticsType_EVStatisticsThemeType_callback");
			this.register_getStatisticsSymbol_void(this.nativeObject.pointer, "getStatisticsSymbol_void_callback");
			this.register_getPieSizePolicy_void(this.nativeObject.pointer, "getPieSizePolicy_void_callback");
			this.register_setPieSizePolicy_EVPieSizePolicy(this.nativeObject.pointer, "setPieSizePolicy_EVPieSizePolicy_callback");
			this.register_getProportionField_void(this.nativeObject.pointer, "getProportionField_void_callback");
			this.register_setProportionField_EVString(this.nativeObject.pointer, "setProportionField_EVString_callback");
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
	
	public static Statistics3DTheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Statistics3DTheme obj = null;
 		if(baseObj instanceof Statistics3DTheme)
		{
			obj = (Statistics3DTheme)baseObj;
		} else {
			obj = new Statistics3DTheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStatistics3DTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
