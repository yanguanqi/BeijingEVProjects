package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 颜色接口
 */
public class Icolor extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::IColor", new IcolorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JIColorProxy", new IcolorClassFactory());
	}

	protected  int getType_void_callback()
	{
		com.earthview.world.spatial.display.EVColorSpaceType returnValue = getType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取颜色空间类型
	 * @param  
	 * @return 颜色空间类型枚举
	 */
	public com.earthview.world.spatial.display.EVColorSpaceType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorSpaceType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVColorSpaceType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorSpaceType.toEnum(returnValue);
	}

	protected  void getCIELab_ev_real64_ev_real64_ev_real64_callback(long L, long a, long b)
	{
		DoublePointer LParamValue = new DoublePointer(new InstancePointer(L));
		DoublePointer aParamValue = new DoublePointer(new InstancePointer(a));
		DoublePointer bParamValue = new DoublePointer(new InstancePointer(b));
		getCIELab(LParamValue, aParamValue, bParamValue);
	}

	native private void getCIELab_ev_real64_ev_real64_ev_real64(long pNativeObject, long L, long a, long b);
	/**
	 * 获取CIELab颜色空间值
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

	protected  long getCOLORREF_void_callback()
	{
		long returnValue = getCOLORREF();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getCOLORREF_void(long pNativeObject);
	/**
	 * 获取COLORREF类型的值
	 * @return COLORREF值
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

	protected  long getRgbValue_void_callback()
	{
		long returnValue = getRgbValue();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getRgbValue_void(long pNativeObject);
	/**
	 * 获取Rgb的值，一般是一个整数。
	 * @return Rgb值
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

	protected  short getRed_void_callback()
	{
		short returnValue = getRed();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getRed_void(long pNativeObject);
	/**
	 * 获取RGB颜色空间的R值
	 * @return R值,范围[0，255]
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

	protected  short getGreen_void_callback()
	{
		short returnValue = getGreen();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getGreen_void(long pNativeObject);
	/**
	 * 获取RGB颜色空间的G值
	 * @return G值,范围[0，255]
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

	protected  short getBlue_void_callback()
	{
		short returnValue = getBlue();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getBlue_void(long pNativeObject);
	/**
	 * 获取RGB颜色空间的B值
	 * @return B值,范围[0，255]
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

	protected  void getRGB_ev_uint8_ev_uint8_ev_uint8_callback(long red, long green, long blue)
	{
		UBytePointer redParamValue = new UBytePointer(new InstancePointer(red));
		UBytePointer greenParamValue = new UBytePointer(new InstancePointer(green));
		UBytePointer blueParamValue = new UBytePointer(new InstancePointer(blue));
		getRGB(redParamValue, greenParamValue, blueParamValue);
	}

	native private void getRGB_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, long red, long green, long blue);
	/**
	 * 获取RGB颜色空间的R,G,B值
	 * @param red 输出类型,R值,范围[0，255]
	 * @param green 输出类型,G值,范围[0，255]
	 * @param blue 输出类型,B值,范围[0，255]
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

	protected  short getTransparent_void_callback()
	{
		short returnValue = getTransparent();
		short __returnValue = returnValue;
		return __returnValue;
	}

	native private short getTransparent_void(long pNativeObject);
	/**
	 * 获取RGB颜色空间的Alpha通道
	 * @return Alpha通道值，范围[0，255]
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

	protected  boolean isNULL_void_callback()
	{
		boolean returnValue = isNULL();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isNULL_void(long pNativeObject);
	/**
	 * 判断颜色是否为空
	 * @return True,为空；False,该对象有效
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

	protected  void setCIELab_ev_real64_ev_real64_ev_real64_callback(double L, double a, double b)
	{
		double LParamValue = L;
		double aParamValue = a;
		double bParamValue = b;
		setCIELab(LParamValue, aParamValue, bParamValue);
	}

	native private void setCIELab_ev_real64_ev_real64_ev_real64(long pNativeObject, double L, double a, double b);
	/**
	 * 设置CIELab颜色空间值
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

	protected  void setRGB_ev_uint8_ev_uint8_ev_uint8_callback(short red, short green, short blue)
	{
		short redParamValue = red;
		short greenParamValue = green;
		short blueParamValue = blue;
		setRGB(redParamValue, greenParamValue, blueParamValue);
	}

	native private void setRGB_ev_uint8_ev_uint8_ev_uint8(long pNativeObject, short red, short green, short blue);
	/**
	 * 设置RGB颜色空间值
	 * @param red R值
	 * @param green G值
	 * @param blue B值
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

	protected  void setNULL_ev_bool_callback(boolean value)
	{
		boolean valueParamValue = value;
		setNULL(valueParamValue);
	}

	native private void setNULL_ev_bool(long pNativeObject, boolean value);
	/**
	 * 设置颜色是否为空
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

	protected  void setTransparent_ev_uint8_callback(short value)
	{
		short valueParamValue = value;
		setTransparent(valueParamValue);
	}

	native private void setTransparent_ev_uint8(long pNativeObject, short value);
	/**
	 * 设置颜色Alpha通道值
	 * @param value Alpha值，范围[0，255]
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

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.display.Icolor returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  void toStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		toStream(streamParamValue);
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 转化为数据流
	 * @param stream 需要导出的数据流对象
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

	protected  String toRGBString_void_callback()
	{
		String returnValue = toRGBString();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String toRGBString_void(long pNativeObject);
	/**
	 * 转化为RGB字符串格式
	 * @return RGB字符串格式
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

	protected  void fromXmlElement_CXmlElement_callback(long element)
	{
		com.earthview.world.core.XmlElement elementParamValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		elementParamValue.setDelegate(true);
		elementParamValue.setInstancePointer(new InstancePointer(element));
		IClassFactory elementParamValueClassFactory = GlobalClassFactoryMap.get(elementParamValue.getCppInstanceTypeName());
		if (elementParamValueClassFactory != null)
		{
			elementParamValue.setDelegate(true);
			elementParamValue = (com.earthview.world.core.XmlElement)elementParamValueClassFactory.create();
			elementParamValue.setDelegate(true);
			elementParamValue.setInstancePointer(new InstancePointer(element));
		}
		fromXmlElement(elementParamValue);
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML节点转化得到颜色对象
	 * @param element XML节点对象
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

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 转化为一个XML节点对象
	 * @return XML节点对象
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

	protected  boolean equal_IColor_callback(long pColor)
	{
		com.earthview.world.spatial.display.Icolor pColorParamValue = (pColor == 0L ? null : new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate));
		if(pColorParamValue != null)
		{
		pColorParamValue.setDelegate(true);
		pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		IClassFactory pColorParamValueClassFactory = GlobalClassFactoryMap.get(pColorParamValue.getCppInstanceTypeName());
		if (pColorParamValueClassFactory != null)
		{
			pColorParamValue.setDelegate(true);
			pColorParamValue = (com.earthview.world.spatial.display.Icolor)pColorParamValueClassFactory.create();
			pColorParamValue.setDelegate(true);
			pColorParamValue.setInstancePointer(new InstancePointer(pColor));
		}
		}
		boolean returnValue = equal(pColorParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean equal_IColor(long pNativeObject, long pColor);
	/**
	 * 判断两个颜色是否相同
	 * @param pColor 需要判断的颜色对象
	 * @return true，则相等；false，则不相等
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 转化为一个格式为XML的字符串
	 * @return 字符串
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	protected  void fromStream_CDataStream_callback(long stream)
	{
		com.earthview.world.core.DataStream streamParamValue = new com.earthview.world.core.DataStream(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.DataStream)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		fromStream(streamParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从一个流中恢复颜色对象
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

	public Icolor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Icolor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static Icolor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Icolor obj = null;
 		if(baseObj instanceof Icolor)
		{
			obj = (Icolor)baseObj;
		} else {
			obj = new Icolor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IColor");
			obj.increaseCast();
		}

		return obj;
	}
}
