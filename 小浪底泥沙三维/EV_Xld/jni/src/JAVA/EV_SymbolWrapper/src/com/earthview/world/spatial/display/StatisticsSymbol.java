package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 图表基类提供方法如下：获取与设置是否显示3D效果、厚度、倾斜度、外边框、统计的最大值、指定索引处的值与风格、最大尺寸获取风格的个数、增加一个风格、删除指定索引处的风格、清空所有的风格、移动风格到新的索引处获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class StatisticsSymbol extends com.earthview.world.spatial.display.Symbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CStatisticsSymbol", new StatisticsSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCStatisticsSymbolProxy", new StatisticsSymbolClassFactory());
	}

	native private boolean isDisplay3D_void(long pNativeObject);
	/**
	 * 获取是否显示3D效果
	 * @param  
	 * @return 是否显示3D
	 */
	public boolean isDisplay3D()
	{
		boolean returnValue = isDisplay3D_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setDisplay3D_ev_bool(long pNativeObject, boolean b3D);
	/**
	 * 设置是否显示3D效果
	 * @param b3D 是否显示3D
	 */
	public void setDisplay3D(boolean b3D)
	{
		boolean b3DParamValue = b3D;
		setDisplay3D_ev_bool(this.nativeObject.pointer, b3DParamValue);
	}
	native private double getThickness_void(long pNativeObject);
	/**
	 * 获取厚度
	 * @param  
	 * @return 厚度
	 */
	public double getThickness()
	{
		double returnValue = getThickness_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setThickness_ev_real64(long pNativeObject, double dThickness);
	/**
	 * 设置厚度
	 * @param dThickness 厚度
	 */
	public void setThickness(double dThickness)
	{
		double dThicknessParamValue = dThickness;
		setThickness_ev_real64(this.nativeObject.pointer, dThicknessParamValue);
	}
	native private int getTilt_void(long pNativeObject);
	/**
	 * 获取倾斜度
	 * @param  
	 * @return 倾斜度
	 */
	public int getTilt()
	{
		int returnValue = getTilt_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTilt_ev_int32(long pNativeObject, int nTilt);
	/**
	 * 设置倾斜度
	 * @param nTilt 倾斜度
	 */
	public void setTilt(int nTilt)
	{
		int nTiltParamValue = nTilt;
		setTilt_ev_int32(this.nativeObject.pointer, nTiltParamValue);
	}
	native private long getOutline_void(long pNativeObject);
	/**
	 * 获取外边框
	 * @param  
	 * @return 外边框
	 */
	public com.earthview.world.spatial.display.Isymbol getOutline()
	{
		long returnValue = getOutline_void(this.nativeObject.pointer);
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
	native private void setOutline_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 设置外边框
	 * @param pSymbol 外边框
	 */
	public void setOutline(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		setOutline_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
	}
	native private double getMaxValue_void(long pNativeObject);
	/**
	 * 获取统计的最大值
	 * @param  
	 * @return 统计的最大值
	 */
	public double getMaxValue()
	{
		double returnValue = getMaxValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxValue_ev_real64(long pNativeObject, double dMaxValue);
	/**
	 * 设置统计的最大值
	 * @param dMaxValue 统计的最大值
	 */
	public void setMaxValue(double dMaxValue)
	{
		double dMaxValueParamValue = dMaxValue;
		setMaxValue_ev_real64(this.nativeObject.pointer, dMaxValueParamValue);
	}
	native private double getValue_ev_int32(long pNativeObject, int index);
	/**
	 * 获取指定索引处的值
	 * @param index 指定索引
	 * @return 指定索引处的值
	 */
	public double getValue(int index)
	{
		int indexParamValue = index;
		double returnValue = getValue_ev_int32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private void setValue_ev_int32_ev_real64(long pNativeObject, int index, double value);
	/**
	 * 设置指定索引处的值
	 * @param index 指定索引
	 * @param value 统计值
	 */
	public void setValue(int index, double value)
	{
		int indexParamValue = index;
		double valueParamValue = value;
		setValue_ev_int32_ev_real64(this.nativeObject.pointer, indexParamValue, valueParamValue);
	}
	native private int getSymbolCount_void(long pNativeObject);
	/**
	 * 获取风格的个数
	 * @param  
	 * @return 风格的个数
	 */
	public int getSymbolCount()
	{
		int returnValue = getSymbolCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getSymbol_ev_int32(long pNativeObject, int index);
	/**
	 * 获取指定索引处的风格
	 * @param index 指定索引
	 * @return 风格
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
	 * 设置指定索引处的风格
	 * @param index 指定索引
	 * @param symbol 风格
	 */
	public void setSymbol(int index, com.earthview.world.spatial.display.Isymbol symbol)
	{
		int indexParamValue = index;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setSymbol_ev_int32_ISymbol(this.nativeObject.pointer, indexParamValue, symbolParamValue);
	}
	native private void addSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 增加一个风格
	 * @param symbol 风格
	 */
	public void addSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void addSymbol_ISymbol_ev_real64(long pNativeObject, long pSymbol, double value);
	public void addSymbol(com.earthview.world.spatial.display.Isymbol pSymbol, double value)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		double valueParamValue = value;
		addSymbol_ISymbol_ev_real64(this.nativeObject.pointer, pSymbolParamValue, valueParamValue);
	}
	native private void deleteSymbol_ev_int32(long pNativeObject, int index);
	/**
	 * 删除指定索引处的风格
	 * @param index 指定索引
	 */
	public void deleteSymbol(int index)
	{
		int indexParamValue = index;
		deleteSymbol_ev_int32(this.nativeObject.pointer, indexParamValue);
	}
	native private void clearSymbols_void(long pNativeObject);
	/**
	 * 清空所有的风格
	 * @param  
	 */
	public void clearSymbols()
	{
		clearSymbols_void(this.nativeObject.pointer);
	}
	native private boolean moveSymbol_ev_int32_ev_int32(long pNativeObject, int fromIndex, int toIndex);
	/**
	 * 移动风格到新的索引处
	 * @param fromIndex 原索引
	 * @param toIndex 新索引
	 */
	public boolean moveSymbol(int fromIndex, int toIndex)
	{
		int fromIndexParamValue = fromIndex;
		int toIndexParamValue = toIndex;
		boolean returnValue = moveSymbol_ev_int32_ev_int32(this.nativeObject.pointer, fromIndexParamValue, toIndexParamValue);
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

	native private double getMaxSize_void(long pNativeObject);
	/**
	 * 获取最大尺寸
	 * @param  
	 * @return 最大尺寸
	 */
	public double getMaxSize()
	{
		double returnValue = getMaxSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMaxSize_ev_real64(long pNativeObject, double dMaxSize);
	/**
	 * 设置最大尺寸
	 * @param  最大尺寸
	 */
	public void setMaxSize(double dMaxSize)
	{
		double dMaxSizeParamValue = dMaxSize;
		setMaxSize_ev_real64(this.nativeObject.pointer, dMaxSizeParamValue);
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

	public StatisticsSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public StatisticsSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static StatisticsSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		StatisticsSymbol obj = null;
 		if(baseObj instanceof StatisticsSymbol)
		{
			obj = (StatisticsSymbol)baseObj;
		} else {
			obj = new StatisticsSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CStatisticsSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
