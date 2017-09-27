package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 线填充类，是所有线填充类的基类提供方法如下：获取与设置线宽度、拐点类型、端点类型、上下偏移量获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class LineSymbol extends com.earthview.world.spatial.display.Symbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CLineSymbol", new LineSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCLineSymbolProxy", new LineSymbolClassFactory());
	}

	protected  double getWidth_void_callback()
	{
		double returnValue = getWidth();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getWidth_void(long pNativeObject);
	/**
	 * 获取线宽度
	 * @param  
	 * @return 线宽
	 */
	public double getWidth()
	{
		double returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getWidth_void_NoVirtual(long pNativeObject);
	protected double getWidth_NoVirtual()
	{
		double returnValue = getWidth_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setWidth_ev_real64_callback(double dWidth)
	{
		double dWidthParamValue = dWidth;
		setWidth(dWidthParamValue);
	}

	native private void setWidth_ev_real64(long pNativeObject, double dWidth);
	/**
	 * 设置线宽度
	 * @param dWidth 线宽度
	 */
	public void setWidth(double dWidth)
	{
		double dWidthParamValue = dWidth;
		setWidth_ev_real64(this.nativeObject.pointer, dWidthParamValue);
	}
	native private void setWidth_ev_real64_NoVirtual(long pNativeObject, double dWidth);
	protected void setWidth_NoVirtual(double dWidth)
	{
		double dWidthParamValue = dWidth;
		setWidth_ev_real64_NoVirtual(this.nativeObject.pointer, dWidthParamValue);
	}

	protected  int getJoinType_void_callback()
	{
		com.earthview.world.spatial.display.EVLineJoinType returnValue = getJoinType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getJoinType_void(long pNativeObject);
	/**
	 * 获取拐点类型
	 * @param  
	 * @return 拐点类型
	 */
	public com.earthview.world.spatial.display.EVLineJoinType getJoinType()
	{
		int returnValue = getJoinType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVLineJoinType.toEnum(returnValue);
	}
	native private int getJoinType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVLineJoinType getJoinType_NoVirtual()
	{
		int returnValue = getJoinType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVLineJoinType.toEnum(returnValue);
	}

	protected  int getCapType_void_callback()
	{
		com.earthview.world.spatial.display.EVLineCapType returnValue = getCapType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getCapType_void(long pNativeObject);
	/**
	 * 获取端点类型
	 * @param  
	 * @return 端点类型
	 */
	public com.earthview.world.spatial.display.EVLineCapType getCapType()
	{
		int returnValue = getCapType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVLineCapType.toEnum(returnValue);
	}
	native private int getCapType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVLineCapType getCapType_NoVirtual()
	{
		int returnValue = getCapType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVLineCapType.toEnum(returnValue);
	}

	protected  void setJoinType_EVLineJoinType_callback(int nType)
	{
		com.earthview.world.spatial.display.EVLineJoinType nTypeParamValue = com.earthview.world.spatial.display.EVLineJoinType.toEnum(nType);
		setJoinType(nTypeParamValue);
	}

	native private void setJoinType_EVLineJoinType(long pNativeObject, int nType);
	/**
	 * 设置拐点类型
	 * @param nType 拐点类型
	 */
	public void setJoinType(com.earthview.world.spatial.display.EVLineJoinType nType)
	{
		int nTypeParamValue = nType.getValue();
		setJoinType_EVLineJoinType(this.nativeObject.pointer, nTypeParamValue);
	}
	native private void setJoinType_EVLineJoinType_NoVirtual(long pNativeObject, int nType);
	protected void setJoinType_NoVirtual(com.earthview.world.spatial.display.EVLineJoinType nType)
	{
		int nTypeParamValue = nType.getValue();
		setJoinType_EVLineJoinType_NoVirtual(this.nativeObject.pointer, nTypeParamValue);
	}

	protected  void setCapType_EVLineCapType_callback(int nType)
	{
		com.earthview.world.spatial.display.EVLineCapType nTypeParamValue = com.earthview.world.spatial.display.EVLineCapType.toEnum(nType);
		setCapType(nTypeParamValue);
	}

	native private void setCapType_EVLineCapType(long pNativeObject, int nType);
	/**
	 * 设置端点类型
	 * @param nType 端点类型
	 */
	public void setCapType(com.earthview.world.spatial.display.EVLineCapType nType)
	{
		int nTypeParamValue = nType.getValue();
		setCapType_EVLineCapType(this.nativeObject.pointer, nTypeParamValue);
	}
	native private void setCapType_EVLineCapType_NoVirtual(long pNativeObject, int nType);
	protected void setCapType_NoVirtual(com.earthview.world.spatial.display.EVLineCapType nType)
	{
		int nTypeParamValue = nType.getValue();
		setCapType_EVLineCapType_NoVirtual(this.nativeObject.pointer, nTypeParamValue);
	}

	protected  double getOffset_void_callback()
	{
		double returnValue = getOffset();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getOffset_void(long pNativeObject);
	/**
	 * 获取上下偏移量
	 * @param  
	 * @return 偏移量
	 */
	public double getOffset()
	{
		double returnValue = getOffset_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOffset_void_NoVirtual(long pNativeObject);
	protected double getOffset_NoVirtual()
	{
		double returnValue = getOffset_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setOffset_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setOffset(valueParamValue);
	}

	native private void setOffset_ev_real64(long pNativeObject, double value);
	/**
	 * 设置上下偏移量
	 * @param value 偏移量
	 */
	public void setOffset(double value)
	{
		double valueParamValue = value;
		setOffset_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setOffset_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setOffset_NoVirtual(double value)
	{
		double valueParamValue = value;
		setOffset_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
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

	public LineSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LineSymbol(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	native protected void register_getWidth_void(long pNativeObject, String method);
	native protected void register_setWidth_ev_real64(long pNativeObject, String method);
	native protected void register_getJoinType_void(long pNativeObject, String method);
	native protected void register_getCapType_void(long pNativeObject, String method);
	native protected void register_setJoinType_EVLineJoinType(long pNativeObject, String method);
	native protected void register_setCapType_EVLineCapType(long pNativeObject, String method);
	native protected void register_getOffset_void(long pNativeObject, String method);
	native protected void register_setOffset_ev_real64(long pNativeObject, String method);
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
			this.register_getWidth_void(this.nativeObject.pointer, "getWidth_void_callback");
			this.register_setWidth_ev_real64(this.nativeObject.pointer, "setWidth_ev_real64_callback");
			this.register_getJoinType_void(this.nativeObject.pointer, "getJoinType_void_callback");
			this.register_getCapType_void(this.nativeObject.pointer, "getCapType_void_callback");
			this.register_setJoinType_EVLineJoinType(this.nativeObject.pointer, "setJoinType_EVLineJoinType_callback");
			this.register_setCapType_EVLineCapType(this.nativeObject.pointer, "setCapType_EVLineCapType_callback");
			this.register_getOffset_void(this.nativeObject.pointer, "getOffset_void_callback");
			this.register_setOffset_ev_real64(this.nativeObject.pointer, "setOffset_ev_real64_callback");
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
	
	public static LineSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LineSymbol obj = null;
 		if(baseObj instanceof LineSymbol)
		{
			obj = (LineSymbol)baseObj;
		} else {
			obj = new LineSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLineSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
