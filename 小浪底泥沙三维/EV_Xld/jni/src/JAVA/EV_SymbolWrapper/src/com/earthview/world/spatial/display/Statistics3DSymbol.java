package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维统计图符号基类
 */
public class Statistics3DSymbol extends com.earthview.world.spatial.display.Symbol3D {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CStatistics3DSymbol", new Statistics3DSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCStatistics3DSymbolProxy", new Statistics3DSymbolClassFactory());
	}

	/**
	 * 三维统计图延伸方向
	 */
	public enum EVSymbol3DExtensionFace implements INativeEnum<EVSymbol3DExtensionFace> {
		SEF_Upwards(EVSymbol3DExtensionFaceHelper.ENUM_VALUES[0]),
		SEF_Downwards(EVSymbol3DExtensionFaceHelper.ENUM_VALUES[1]);
		private int value;
		EVSymbol3DExtensionFace(int i) {
			this.value = i;
		}
		public EVSymbol3DExtensionFace getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVSymbol3DExtensionFace toEnum(int retval) {
			if(retval == SEF_Upwards.value){
				return SEF_Upwards;
			}
			else if(retval == SEF_Downwards.value){
				return SEF_Downwards;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVSymbol3DExtensionFaceHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 三维统计图注记显示
	 */
	public enum EVStatisticsLabelFormat implements INativeEnum<EVStatisticsLabelFormat> {
		STTLF_Caption(EVStatisticsLabelFormatHelper.ENUM_VALUES[0]),
		STTLF_Value(EVStatisticsLabelFormatHelper.ENUM_VALUES[1]),
		STTLF_Percent(EVStatisticsLabelFormatHelper.ENUM_VALUES[2]),
		STTLF_CaptionAndValue(EVStatisticsLabelFormatHelper.ENUM_VALUES[3]),
		STTLF_CaptionAndPercent(EVStatisticsLabelFormatHelper.ENUM_VALUES[4]),
		STTLF_ValueAndPercent(EVStatisticsLabelFormatHelper.ENUM_VALUES[5]),
		STTLF_All(EVStatisticsLabelFormatHelper.ENUM_VALUES[6]);
		private int value;
		EVStatisticsLabelFormat(int i) {
			this.value = i;
		}
		public EVStatisticsLabelFormat getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final EVStatisticsLabelFormat toEnum(int retval) {
			if(retval == STTLF_Caption.value){
				return STTLF_Caption;
			}
			else if(retval == STTLF_Value.value){
				return STTLF_Value;
			}
			else if(retval == STTLF_Percent.value){
				return STTLF_Percent;
			}
			else if(retval == STTLF_CaptionAndValue.value){
				return STTLF_CaptionAndValue;
			}
			else if(retval == STTLF_CaptionAndPercent.value){
				return STTLF_CaptionAndPercent;
			}
			else if(retval == STTLF_ValueAndPercent.value){
				return STTLF_ValueAndPercent;
			}
			else if(retval == STTLF_All.value){
				return STTLF_All;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class EVStatisticsLabelFormatHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 默认构造函数
	 * @param  
	 */
	public Statistics3DSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCStatistics3DSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.Statistics3DSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getGeometryHeight_void(long pNativeObject);
	/**
	 * 获取符号的高度
	 * @param  
	 * @return 符号高度
	 */
	public double getGeometryHeight()
	{
		double returnValue = getGeometryHeight_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGeometryHeight_ev_real64(long pNativeObject, double height);
	/**
	 * 设置符号的高度
	 * @param height 高度值
	 */
	public void setGeometryHeight(double height)
	{
		double heightParamValue = height;
		setGeometryHeight_ev_real64(this.nativeObject.pointer, heightParamValue);
	}
	native private double getGeometryRadius_void(long pNativeObject);
	/**
	 * 获取符号的半径
	 * @param  
	 * @return 符号半径
	 */
	public double getGeometryRadius()
	{
		double returnValue = getGeometryRadius_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGeometryRadius_ev_real64(long pNativeObject, double radius);
	/**
	 * 设置符号的半径
	 * @param radius 半径值
	 */
	public void setGeometryRadius(double radius)
	{
		double radiusParamValue = radius;
		setGeometryRadius_ev_real64(this.nativeObject.pointer, radiusParamValue);
	}
	native private double getValue_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字段值
	 * @param index 索引值
	 * @return 字段值
	 */
	public double getValue(long index)
	{
		long indexParamValue = index;
		double returnValue = getValue_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setValue_ev_uint32_ev_real64(long pNativeObject, long index, double value);
	/**
	 * 设置字段值
	 * @param index 索引值
	 * @param value 字段值
	 */
	public void setValue(long index, double value)
	{
		long indexParamValue = index;
		double valueParamValue = value;
		setValue_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private double getValueRatio_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字段值的比例
	 * @param index 索引值
	 * @return 字段值比例
	 */
	public double getValueRatio(long index)
	{
		long indexParamValue = index;
		double returnValue = getValueRatio_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setValueRatio_ev_uint32_ev_real64(long pNativeObject, long index, double value);
	/**
	 * 设置字段值比例
	 * @param index 索引值
	 * @param value 字段比例
	 */
	public void setValueRatio(long index, double value)
	{
		long indexParamValue = index;
		double valueParamValue = value;
		setValueRatio_ev_uint32_ev_real64(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private String getFieldName_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取字段名称
	 * @param index 索引值
	 * @return 字段名
	 */
	public String getFieldName(long index)
	{
		long indexParamValue = index;
		String returnValue = getFieldName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setFieldName_ev_uint32_EVString(long pNativeObject, long index, String name);
	/**
	 * 设置字段名称
	 * @param index 索引值
	 * @param name 字段名
	 */
	public void setFieldName(long index, String name)
	{
		long indexParamValue = index;
		String nameParamValue = name;
		setFieldName_ev_uint32_EVString(this.nativeObject.pointer, indexParamValue, nameParamValue);
	}
	native private long getSymbolCount_void(long pNativeObject);
	/**
	 * 获取符号的个数
	 * @param  
	 * @return 符号个数
	 */
	public long getSymbolCount()
	{
		long returnValue = getSymbolCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSymbol_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取符号
	 * @param index 索引值
	 * @return 符号
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
	native private void setSymbol_ev_uint32_ISymbol(long pNativeObject, long index, long symbol);
	/**
	 * 设置符号
	 * @param index 索引值
	 * @param symbol 符号
	 */
	public void setSymbol(long index, com.earthview.world.spatial.display.Isymbol symbol)
	{
		long indexParamValue = index;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ev_uint32_ISymbol(this.nativeObject.pointer, indexParamValue, symbolParamValue);
	}
	native private void addSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 添加符号
	 * @param symbol 符号
	 */
	public void addSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void addSymbol_ISymbol_ev_real64(long pNativeObject, long pSymbol, double value);
	/**
	 * 添加符号
	 * @param pSymbol 符号
	 * @param value 字段值
	 */
	public void addSymbol(com.earthview.world.spatial.display.Isymbol pSymbol, double value)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		double valueParamValue = value;
		addSymbol_ISymbol_ev_real64(this.nativeObject.pointer, pSymbolParamValue, valueParamValue);
	}
	native private void addSymbol_ISymbol_EVString(long pNativeObject, long pSymbol, String name);
	/**
	 * 添加符号
	 * @param pSymbol 符号
	 * @param name 字段名
	 */
	public void addSymbol(com.earthview.world.spatial.display.Isymbol pSymbol, String name)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		String nameParamValue = name;
		addSymbol_ISymbol_EVString(this.nativeObject.pointer, pSymbolParamValue, nameParamValue);
	}
	native private void addSymbol_ISymbol_EVString_ev_real64(long pNativeObject, long pSymbol, String name, double value);
	/**
	 * 添加符号
	 * @param pSymbol 符号
	 * @param name 字段名
	 * @param value 字段值
	 */
	public void addSymbol(com.earthview.world.spatial.display.Isymbol pSymbol, String name, double value)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		String nameParamValue = name;
		double valueParamValue = value;
		addSymbol_ISymbol_EVString_ev_real64(this.nativeObject.pointer, pSymbolParamValue, nameParamValue, valueParamValue);
	}
	native private boolean moveSymbol_ev_uint32_ev_uint32(long pNativeObject, long fromIndex, long toIndex);
	/**
	 * 移动符号
	 * @param fromIndex 原始索引
	 * @param toIndex 目标索引
	 * @return 返回true，移动成功，否则移动失败
	 */
	public boolean moveSymbol(long fromIndex, long toIndex)
	{
		long fromIndexParamValue = fromIndex;
		long toIndexParamValue = toIndex;
		boolean returnValue = moveSymbol_ev_uint32_ev_uint32(this.nativeObject.pointer, fromIndexParamValue, toIndexParamValue);
		return returnValue;
	}
	native private void deleteSymbol_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除符号
	 * @param index 索引
	 */
	public void deleteSymbol(long index)
	{
		long indexParamValue = index;
		deleteSymbol_ev_uint32(this.nativeObject.pointer, indexParamValue);
	}
	native private void clearSymbols_void(long pNativeObject);
	/**
	 * 清空符号容器
	 * @param  
	 */
	public void clearSymbols()
	{
		clearSymbols_void(this.nativeObject.pointer);
	}
	native private void setSizeRatio_ev_real64(long pNativeObject, double ratio);
	/**
	 * 设置符号大小比例
	 * @param ratio 比例
	 */
	public void setSizeRatio(double ratio)
	{
		double ratioParamValue = ratio;
		setSizeRatio_ev_real64(this.nativeObject.pointer, ratioParamValue);
	}
	native private double getSizeRatio_void(long pNativeObject);
	/**
	 * 获取符号大小比例
	 * @param  
	 * @return 符号大小比例
	 */
	public double getSizeRatio()
	{
		double returnValue = getSizeRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getInterval_void(long pNativeObject);
	/**
	 * 获取符号间隔
	 * @param  
	 * @return 符号间隔
	 */
	public double getInterval()
	{
		double returnValue = getInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setInterval_ev_real64(long pNativeObject, double interval);
	/**
	 * 设置符号间隔
	 * @param interval 间隔值
	 */
	public void setInterval(double interval)
	{
		double intervalParamValue = interval;
		setInterval_ev_real64(this.nativeObject.pointer, intervalParamValue);
	}
	native private void setLabelMaxDistance_ev_real64(long pNativeObject, double distancevalue);
	/**
	 * 设置符号上注记的最大可视距离
	 * @param distancevalue 距离
	 */
	public void setLabelMaxDistance(double distancevalue)
	{
		double distancevalueParamValue = distancevalue;
		setLabelMaxDistance_ev_real64(this.nativeObject.pointer, distancevalueParamValue);
	}
	native private double getLabelMaxDistance_void(long pNativeObject);
	/**
	 * 获得符号上注记的最大可视距离
	 * @param  
	 * @return 最大可视距离
	 */
	public double getLabelMaxDistance()
	{
		double returnValue = getLabelMaxDistance_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLabelFormat_EVStatisticsLabelFormat(long pNativeObject, int format);
	/**
	 * 设置符号上的注记显示方式
	 * @param format EVStatisticsLabelFormat枚举值
	 */
	public void setLabelFormat(com.earthview.world.spatial.display.Statistics3DSymbol.EVStatisticsLabelFormat format)
	{
		int formatParamValue = format.getValue();
		setLabelFormat_EVStatisticsLabelFormat(this.nativeObject.pointer, formatParamValue);
	}
	native private int getLabelFormat_void(long pNativeObject);
	/**
	 * 获取符号上的注记显示方式
	 * @param  
	 * @return EVStatisticsLabelFormat枚举值
	 */
	public com.earthview.world.spatial.display.Statistics3DSymbol.EVStatisticsLabelFormat getLabelFormat()
	{
		int returnValue = getLabelFormat_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.Statistics3DSymbol.EVStatisticsLabelFormat.toEnum(returnValue);
	}
	native private void setSymbolExtensionFace_EVSymbol3DExtensionFace(long pNativeObject, int extension);
	/**
	 * 设置符号延伸方式
	 * @param extension EVSymbol3DExtensionFace枚举值
	 */
	public void setSymbolExtensionFace(com.earthview.world.spatial.display.Statistics3DSymbol.EVSymbol3DExtensionFace extension)
	{
		int extensionParamValue = extension.getValue();
		setSymbolExtensionFace_EVSymbol3DExtensionFace(this.nativeObject.pointer, extensionParamValue);
	}
	native private int getSymbolExtensionFace_void(long pNativeObject);
	/**
	 * 获取符号延伸方式
	 * @param  
	 * @return EVSymbol3DExtensionFace枚举值
	 */
	public com.earthview.world.spatial.display.Statistics3DSymbol.EVSymbol3DExtensionFace getSymbolExtensionFace()
	{
		int returnValue = getSymbolExtensionFace_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.Statistics3DSymbol.EVSymbol3DExtensionFace.toEnum(returnValue);
	}
	native private void setSymbolExtensionValue_ev_real64(long pNativeObject, double value);
	/**
	 * 设置符号延伸值
	 * @param value 延伸值
	 */
	public void setSymbolExtensionValue(double value)
	{
		double valueParamValue = value;
		setSymbolExtensionValue_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getSymbolExtensionValue_void(long pNativeObject);
	/**
	 * 获取符号延伸值
	 * @param  
	 * @return 延伸值
	 */
	public double getSymbolExtensionValue()
	{
		double returnValue = getSymbolExtensionValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean equal_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 符号相等的比较
	 * @param pSymbol 符号
	 * @return 如果返回true，则两个符号相等，否则两者不等
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

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 符号克隆
	 * @param  
	 * @return 如果新的符号，需要外部释放
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

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml中恢复
	 * @param element CXmlElement对象
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
	 * 写到xml中
	 * @param  
	 * @return CXmlElement对象
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

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 写入流中
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流中恢复
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

	public Statistics3DSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Statistics3DSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 判断两个Symbol是否相似如果相似，则可以同一批次创建三维渲染对象
	 * @param pSymbol Symbol对象
	 */
	public boolean similar(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		return super.similar_NoVirtual(pSymbol);
	}
	/**
	 * 获取风格颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getFontColor()
	{
		return super.getFontColor_NoVirtual();
	}
	/**
	 * 获取字体边框颜色
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.Icolor getFontOutlineColor()
	{
		return super.getFontOutlineColor_NoVirtual();
	}
	/**
	 * 设置字体边框颜色
	 * @param color 字体边框颜色
	 */
	public void setFontOutlineColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setFontOutlineColor_NoVirtual(color);
	}
	/**
	 * 设置风格颜色
	 * @param color 风格颜色
	 */
	public void setFontColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setFontColor_NoVirtual(color);
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
	 * 将符号输出到SLD字符串
	 * @param  
	 * @return 返回SLD字符串
	 */
	public String toSLD()
	{
		return super.toSLD_NoVirtual();
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
	/**
	 * 从SLD读取符号
	 * @param sld SLD
	 */
	public void fromSLD(StringPointer sld)
	{
		super.fromSLD_NoVirtual(sld);
	}
	
	native protected void register_similar_ISymbol(long pNativeObject, String method);
	native protected void register_getFontColor_void(long pNativeObject, String method);
	native protected void register_getFontOutlineColor_void(long pNativeObject, String method);
	native protected void register_setFontOutlineColor_IColor(long pNativeObject, String method);
	native protected void register_setFontColor_IColor(long pNativeObject, String method);
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
			this.register_similar_ISymbol(this.nativeObject.pointer, "similar_ISymbol_callback");
			this.register_getFontColor_void(this.nativeObject.pointer, "getFontColor_void_callback");
			this.register_getFontOutlineColor_void(this.nativeObject.pointer, "getFontOutlineColor_void_callback");
			this.register_setFontOutlineColor_IColor(this.nativeObject.pointer, "setFontOutlineColor_IColor_callback");
			this.register_setFontColor_IColor(this.nativeObject.pointer, "setFontColor_IColor_callback");
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
	
	public static Statistics3DSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Statistics3DSymbol obj = null;
 		if(baseObj instanceof Statistics3DSymbol)
		{
			obj = (Statistics3DSymbol)baseObj;
		} else {
			obj = new Statistics3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStatistics3DSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
