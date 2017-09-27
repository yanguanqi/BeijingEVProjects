package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 所有颜色类的基类提供方法如下：获取与设置CIELab颜色空间值、COLORREF值、RGB值、RGBA单值的几种方法转换成字符串、转换成二进制、判断是否无色、判断相同类型的对象属性是否一致将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复Color属性从流中读取和写入字符串，并将流位置向后提升
 */
public class Color extends com.earthview.world.spatial.display.Icolor {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColor", new ColorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorProxy", new ColorClassFactory());
	}

	native private void getCIELab_ev_real64_ev_real64_ev_real64(long pNativeObject, long L, long a, long b);
	/**
	 * 获取CIELab颜色空间的值
	 * @param L L值
	 * @param a a值
	 * @param b b值
	 */
	public void getCIELab(DoublePointer L, DoublePointer a, DoublePointer b)
	{
		long LParamValue = L.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		getCIELab_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, LParamValue, aParamValue, bParamValue);
	}
	native private void getCIELab_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, long L, long a, long b);
	protected void getCIELab_NoVirtual(DoublePointer L, DoublePointer a, DoublePointer b)
	{
		long LParamValue = L.nativeObject.pointer;
		long aParamValue = a.nativeObject.pointer;
		long bParamValue = b.nativeObject.pointer;
		getCIELab_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, LParamValue, aParamValue, bParamValue);
	}

	native private void setCIELab_ev_real64_ev_real64_ev_real64(long pNativeObject, double L, double a, double b);
	/**
	 * 设置CIELab颜色空间的颜色值
	 * @param L L值
	 * @param a a值
	 * @param b b值
	 */
	public void setCIELab(double L, double a, double b)
	{
		double LParamValue = L;
		double aParamValue = a;
		double bParamValue = b;
		setCIELab_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, LParamValue, aParamValue, bParamValue);
	}
	native private void setCIELab_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double L, double a, double b);
	protected void setCIELab_NoVirtual(double L, double a, double b)
	{
		double LParamValue = L;
		double aParamValue = a;
		double bParamValue = b;
		setCIELab_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, LParamValue, aParamValue, bParamValue);
	}

	native private long getCOLORREF_void(long pNativeObject);
	/**
	 * 获取COLORREF值格式为0xbbggrr
	 * @param  
	 */
	public long getCOLORREF()
	{
		long returnValue = getCOLORREF_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getCOLORREF_void_NoVirtual(long pNativeObject);
	protected long getCOLORREF_NoVirtual()
	{
		long returnValue = getCOLORREF_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long getRgbValue_void(long pNativeObject);
	/**
	 * 获取RGB值格式为0xffrrggbb
	 * @param  
	 * @return RGB值
	 */
	public long getRgbValue()
	{
		long returnValue = getRgbValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getRgbValue_void_NoVirtual(long pNativeObject);
	protected long getRgbValue_NoVirtual()
	{
		long returnValue = getRgbValue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private short getRed_void(long pNativeObject);
	/**
	 * 获取Red值
	 * @param  
	 * @return Red值
	 */
	public short getRed()
	{
		short returnValue = getRed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getRed_void_NoVirtual(long pNativeObject);
	protected short getRed_NoVirtual()
	{
		short returnValue = getRed_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private short getGreen_void(long pNativeObject);
	/**
	 * 获取Green值
	 * @param  
	 * @return Green值
	 */
	public short getGreen()
	{
		short returnValue = getGreen_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getGreen_void_NoVirtual(long pNativeObject);
	protected short getGreen_NoVirtual()
	{
		short returnValue = getGreen_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private short getBlue_void(long pNativeObject);
	/**
	 * 获取Blue值
	 * @param  
	 * @return Blue值
	 */
	public short getBlue()
	{
		short returnValue = getBlue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getBlue_void_NoVirtual(long pNativeObject);
	protected short getBlue_NoVirtual()
	{
		short returnValue = getBlue_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void getRGB_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, long red, long green, long blue);
	/**
	 * 获取RGB值
	 * @param red red值
	 * @param green green值
	 * @param blue blue值
	 */
	public void getRGB(UBytePointer red, UBytePointer green, UBytePointer blue)
	{
		long redParamValue = red.nativeObject.pointer;
		long greenParamValue = green.nativeObject.pointer;
		long blueParamValue = blue.nativeObject.pointer;
		getRGB_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void getRGB_ev_uint8_ev_uint8_ev_uint8_NoVirtual(long pNativeObject, long red, long green, long blue);
	protected void getRGB_NoVirtual(UBytePointer red, UBytePointer green, UBytePointer blue)
	{
		long redParamValue = red.nativeObject.pointer;
		long greenParamValue = green.nativeObject.pointer;
		long blueParamValue = blue.nativeObject.pointer;
		getRGB_ev_uint8_ev_uint8_ev_uint8_NoVirtual(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}

	native private void setRGB_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, short red, short green, short blue);
	/**
	 * 设置RGB值
	 * @param red red值
	 * @param green green值
	 * @param blue blue值
	 */
	public void setRGB(short red, short green, short blue)
	{
		short redParamValue = red;
		short greenParamValue = green;
		short blueParamValue = blue;
		setRGB_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setRGB_ev_uint8_ev_uint8_ev_uint8_NoVirtual(long pNativeObject, short red, short green, short blue);
	protected void setRGB_NoVirtual(short red, short green, short blue)
	{
		short redParamValue = red;
		short greenParamValue = green;
		short blueParamValue = blue;
		setRGB_ev_uint8_ev_uint8_ev_uint8_NoVirtual(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}

	native private String toRGBString_void(long pNativeObject);
	/**
	 * 转换成字符串如#FFFFFF，白色
	 * @param  
	 * @return 颜色字符串
	 */
	public String toRGBString()
	{
		String returnValue = toRGBString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toRGBString_void_NoVirtual(long pNativeObject);
	protected String toRGBString_NoVirtual()
	{
		String returnValue = toRGBString_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean isNULL_void(long pNativeObject);
	/**
	 * 判断是否无色
	 * @param  
	 * @return 是否无色
	 */
	public boolean isNULL()
	{
		boolean returnValue = isNULL_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isNULL_void_NoVirtual(long pNativeObject);
	protected boolean isNULL_NoVirtual()
	{
		boolean returnValue = isNULL_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setNULL_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置是否无色
	 * @param value 是否无色
	 */
	public void setNULL(boolean value)
	{
		boolean valueParamValue = value;
		setNULL_ev_bool(this.nativeObject.pointer, valueParamValue);
	}
	native private void setNULL_ev_bool_NoVirtual(long pNativeObject, boolean value);
	protected void setNULL_NoVirtual(boolean value)
	{
		boolean valueParamValue = value;
		setNULL_ev_bool_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private short getTransparent_void(long pNativeObject);
	/**
	 * 获取透明值
	 * @param  
	 * @return 透明值
	 */
	public short getTransparent()
	{
		short returnValue = getTransparent_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private short getTransparent_void_NoVirtual(long pNativeObject);
	protected short getTransparent_NoVirtual()
	{
		short returnValue = getTransparent_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setTransparent_ev_uint8(long pNativeObject, short value);
	/**
	 * 设置透明度
	 * @param value 透明度
	 */
	public void setTransparent(short value)
	{
		short valueParamValue = value;
		setTransparent_ev_uint8(this.nativeObject.pointer, valueParamValue);
	}
	native private void setTransparent_ev_uint8_NoVirtual(long pNativeObject, short value);
	protected void setTransparent_NoVirtual(short value)
	{
		short valueParamValue = value;
		setTransparent_ev_uint8_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 克隆
	 * @return 克隆对象，需要外部释放。
	 */
	public com.earthview.world.spatial.display.Icolor ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Icolor ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 转换成二进制
	 * @param stream 流对象
	 * @return xml
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
	 * 将属性信息转为XML
	 * @param xmlFile xml文件
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
	 * 从XMLElement中恢复信息
	 * @param element 要素
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

	native private boolean equal_IColor(long pNativeObject, long pColor);
	/**
	 * 判断相同类型的对象属性是否一致
	 * @param pColor Color对象
	 */
	public boolean equal(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		boolean returnValue = equal_IColor(this.nativeObject.pointer, pColorParamValue);
		return returnValue;
	}
	native private boolean equal_IColor_NoVirtual(long pNativeObject, long pColor);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.Icolor pColor)
	{
		long pColorParamValue = (pColor == null ? 0L : pColor.nativeObject.pointer);
		boolean returnValue = equal_IColor_NoVirtual(this.nativeObject.pointer, pColorParamValue);
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

	public Color(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Color(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取颜色空间类型
	 * @param  
	 * @return 颜色空间类型枚举
	 */
	public com.earthview.world.spatial.display.EVColorSpaceType getType()
	{
		return super.getType_NoVirtual();
	}
	
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getCIELab_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getCOLORREF_void(long pNativeObject, String method);
	native protected void register_getRgbValue_void(long pNativeObject, String method);
	native protected void register_getRed_void(long pNativeObject, String method);
	native protected void register_getGreen_void(long pNativeObject, String method);
	native protected void register_getBlue_void(long pNativeObject, String method);
	native protected void register_getRGB_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, String method);
	native protected void register_getTransparent_void(long pNativeObject, String method);
	native protected void register_isNULL_void(long pNativeObject, String method);
	native protected void register_setCIELab_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_setRGB_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, String method);
	native protected void register_setNULL_ev_bool(long pNativeObject, String method);
	native protected void register_setTransparent_ev_uint8(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toRGBString_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_equal_IColor(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getCIELab_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getCIELab_ev_real64_ev_real64_ev_real64_callback");
			this.register_getCOLORREF_void(this.nativeObject.pointer, "getCOLORREF_void_callback");
			this.register_getRgbValue_void(this.nativeObject.pointer, "getRgbValue_void_callback");
			this.register_getRed_void(this.nativeObject.pointer, "getRed_void_callback");
			this.register_getGreen_void(this.nativeObject.pointer, "getGreen_void_callback");
			this.register_getBlue_void(this.nativeObject.pointer, "getBlue_void_callback");
			this.register_getRGB_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, "getRGB_ev_uint8_ev_uint8_ev_uint8_callback");
			this.register_getTransparent_void(this.nativeObject.pointer, "getTransparent_void_callback");
			this.register_isNULL_void(this.nativeObject.pointer, "isNULL_void_callback");
			this.register_setCIELab_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "setCIELab_ev_real64_ev_real64_ev_real64_callback");
			this.register_setRGB_ev_uint8_ev_uint8_ev_uint8(this.nativeObject.pointer, "setRGB_ev_uint8_ev_uint8_ev_uint8_callback");
			this.register_setNULL_ev_bool(this.nativeObject.pointer, "setNULL_ev_bool_callback");
			this.register_setTransparent_ev_uint8(this.nativeObject.pointer, "setTransparent_ev_uint8_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toRGBString_void(this.nativeObject.pointer, "toRGBString_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_equal_IColor(this.nativeObject.pointer, "equal_IColor_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Color fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Color obj = null;
 		if(baseObj instanceof Color)
		{
			obj = (Color)baseObj;
		} else {
			obj = new Color(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColor");
			obj.increaseCast();
		}

		return obj;
	}
}
