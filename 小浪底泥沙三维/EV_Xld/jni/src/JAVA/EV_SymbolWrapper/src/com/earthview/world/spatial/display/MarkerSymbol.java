package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点填充类，是所有点填充类的基类提供方法如下：获取与设置旋转角度、风格大小、X轴与Y轴偏移量获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class MarkerSymbol extends com.earthview.world.spatial.display.Symbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CMarkerSymbol", new MarkerSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCMarkerSymbolProxy", new MarkerSymbolClassFactory());
	}

	protected  double getAngle_void_callback()
	{
		double returnValue = getAngle();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getAngle_void(long pNativeObject);
	/**
	 * 获取旋转角度单位为度
	 * @param  
	 * @return 角度
	 */
	public double getAngle()
	{
		double returnValue = getAngle_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getAngle_void_NoVirtual(long pNativeObject);
	protected double getAngle_NoVirtual()
	{
		double returnValue = getAngle_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setAngle_ev_real64_callback(double angle)
	{
		double angleParamValue = angle;
		setAngle(angleParamValue);
	}

	native private void setAngle_ev_real64(long pNativeObject, double angle);
	/**
	 * 设置旋转角度
	 * @param angle 角度
	 */
	public void setAngle(double angle)
	{
		double angleParamValue = angle;
		setAngle_ev_real64(this.nativeObject.pointer, angleParamValue);
	}
	native private void setAngle_ev_real64_NoVirtual(long pNativeObject, double angle);
	protected void setAngle_NoVirtual(double angle)
	{
		double angleParamValue = angle;
		setAngle_ev_real64_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	native private double getSize_void(long pNativeObject);
	/**
	 * 获取风格大小
	 * @param  
	 * @return 大小
	 */
	public double getSize()
	{
		double returnValue = getSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getSize_void_NoVirtual(long pNativeObject);
	protected double getSize_NoVirtual()
	{
		double returnValue = getSize_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setSize_ev_real64_callback(double size)
	{
		double sizeParamValue = size;
		setSize(sizeParamValue);
	}

	native private void setSize_ev_real64(long pNativeObject, double size);
	/**
	 * 设置风格大小
	 * @param size 大小
	 */
	public void setSize(double size)
	{
		double sizeParamValue = size;
		setSize_ev_real64(this.nativeObject.pointer, sizeParamValue);
	}
	native private void setSize_ev_real64_NoVirtual(long pNativeObject, double size);
	protected void setSize_NoVirtual(double size)
	{
		double sizeParamValue = size;
		setSize_ev_real64_NoVirtual(this.nativeObject.pointer, sizeParamValue);
	}

	protected  double getOffsetX_void_callback()
	{
		double returnValue = getOffsetX();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getOffsetX_void(long pNativeObject);
	/**
	 * 获取X轴偏移量
	 * @param  
	 * @return 偏移量
	 */
	public double getOffsetX()
	{
		double returnValue = getOffsetX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOffsetX_void_NoVirtual(long pNativeObject);
	protected double getOffsetX_NoVirtual()
	{
		double returnValue = getOffsetX_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setOffsetX_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setOffsetX(valueParamValue);
	}

	native private void setOffsetX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置X轴偏移量
	 * @param value 偏移量
	 */
	public void setOffsetX(double value)
	{
		double valueParamValue = value;
		setOffsetX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setOffsetX_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setOffsetX_NoVirtual(double value)
	{
		double valueParamValue = value;
		setOffsetX_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	protected  double getOffsetY_void_callback()
	{
		double returnValue = getOffsetY();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getOffsetY_void(long pNativeObject);
	/**
	 * 获取Y轴偏移量
	 * @param  
	 * @return 偏移量
	 */
	public double getOffsetY()
	{
		double returnValue = getOffsetY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOffsetY_void_NoVirtual(long pNativeObject);
	protected double getOffsetY_NoVirtual()
	{
		double returnValue = getOffsetY_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setOffsetY_ev_real64_callback(double value)
	{
		double valueParamValue = value;
		setOffsetY(valueParamValue);
	}

	native private void setOffsetY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置Y轴偏移量
	 * @param value 偏移量
	 */
	public void setOffsetY(double value)
	{
		double valueParamValue = value;
		setOffsetY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setOffsetY_ev_real64_NoVirtual(long pNativeObject, double value);
	protected void setOffsetY_NoVirtual(double value)
	{
		double valueParamValue = value;
		setOffsetY_ev_real64_NoVirtual(this.nativeObject.pointer, valueParamValue);
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

	public MarkerSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MarkerSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_getAngle_void(long pNativeObject, String method);
	native protected void register_setAngle_ev_real64(long pNativeObject, String method);
	native protected void register_setSize_ev_real64(long pNativeObject, String method);
	native protected void register_getOffsetX_void(long pNativeObject, String method);
	native protected void register_setOffsetX_ev_real64(long pNativeObject, String method);
	native protected void register_getOffsetY_void(long pNativeObject, String method);
	native protected void register_setOffsetY_ev_real64(long pNativeObject, String method);
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
			this.register_getAngle_void(this.nativeObject.pointer, "getAngle_void_callback");
			this.register_setAngle_ev_real64(this.nativeObject.pointer, "setAngle_ev_real64_callback");
			this.register_setSize_ev_real64(this.nativeObject.pointer, "setSize_ev_real64_callback");
			this.register_getOffsetX_void(this.nativeObject.pointer, "getOffsetX_void_callback");
			this.register_setOffsetX_ev_real64(this.nativeObject.pointer, "setOffsetX_ev_real64_callback");
			this.register_getOffsetY_void(this.nativeObject.pointer, "getOffsetY_void_callback");
			this.register_setOffsetY_ev_real64(this.nativeObject.pointer, "setOffsetY_ev_real64_callback");
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
	
	public static MarkerSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MarkerSymbol obj = null;
 		if(baseObj instanceof MarkerSymbol)
		{
			obj = (MarkerSymbol)baseObj;
		} else {
			obj = new MarkerSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMarkerSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
