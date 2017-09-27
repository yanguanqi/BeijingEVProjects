package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 条状图表或者柱状图表类提供方法如下：获取与设置坐标系统符号、是否显示坐标系统、间隔值、宽度、柱子是否竖直获取符号类型、获取流、获取SLD	深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素	从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class BarStatisticsSymbol extends com.earthview.world.spatial.display.StatisticsSymbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CBarStatisticsSymbol", new BarStatisticsSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCBarStatisticsSymbolProxy", new BarStatisticsSymbolClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public BarStatisticsSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBarStatisticsSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.BarStatisticsSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean isShowAxes_void(long pNativeObject);
	/**
	 * 获取是否显示坐标系统
	 * @param  
	 * @return 返回值是true,则显示坐标系统；否则不显示
	 */
	public boolean isShowAxes()
	{
		boolean returnValue = isShowAxes_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShowAxes_ev_bool(long pNativeObject, boolean bShow);
	/**
	 * 设置是否显示坐标系统
	 * @param bShow 是否显示坐标系统
	 */
	public void setShowAxes(boolean bShow)
	{
		boolean bShowParamValue = bShow;
		setShowAxes_ev_bool(this.nativeObject.pointer, bShowParamValue);
	}
	native private long getAxesSymbol_void(long pNativeObject);
	/**
	 * 获取坐标系统符号
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.display.Isymbol getAxesSymbol()
	{
		long returnValue = getAxesSymbol_void(this.nativeObject.pointer);
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
	native private void setAxesSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置坐标系统符号
	 * @param symbol 坐标系统符号
	 */
	public void setAxesSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setAxesSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private double getSpacing_void(long pNativeObject);
	/**
	 * 获取间隔值
	 * @param  
	 * @return 间隔值
	 */
	public double getSpacing()
	{
		double returnValue = getSpacing_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSpacing_ev_real64(long pNativeObject, double dSpacing);
	/**
	 * 设置间隔值
	 * @param dSpacing 间隔值
	 */
	public void setSpacing(double dSpacing)
	{
		double dSpacingParamValue = dSpacing;
		setSpacing_ev_real64(this.nativeObject.pointer, dSpacingParamValue);
	}
	native private double getWidth_void(long pNativeObject);
	/**
	 * 获取柱子的宽度
	 * @param  
	 * @return 柱子的宽度
	 */
	public double getWidth()
	{
		double returnValue = getWidth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setWidth_ev_real64(long pNativeObject, double dWidth);
	/**
	 * 设置柱子的宽度
	 * @param dWidth 柱子的宽度
	 */
	public void setWidth(double dWidth)
	{
		double dWidthParamValue = dWidth;
		setWidth_ev_real64(this.nativeObject.pointer, dWidthParamValue);
	}
	native private boolean isVerticalBar_void(long pNativeObject);
	/**
	 * 获取柱子是否竖直
	 * @param  
	 * @return 柱子是否竖直
	 */
	public boolean isVerticalBar()
	{
		boolean returnValue = isVerticalBar_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setVerticalBar_ev_bool(long pNativeObject, boolean bVerticalBar);
	/**
	 * 设置柱子是否竖直
	 * @param bVerticalBar 柱子是否竖直
	 */
	public void setVerticalBar(boolean bVerticalBar)
	{
		boolean bVerticalBarParamValue = bVerticalBar;
		setVerticalBar_ev_bool(this.nativeObject.pointer, bVerticalBarParamValue);
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

	public BarStatisticsSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BarStatisticsSymbol(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static BarStatisticsSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BarStatisticsSymbol obj = null;
 		if(baseObj instanceof BarStatisticsSymbol)
		{
			obj = (BarStatisticsSymbol)baseObj;
		} else {
			obj = new BarStatisticsSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBarStatisticsSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
