package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * HSV颜色类提供方法如下：获取与设置Hue、Saturation、Value值，设置Color值、设置CIELab值、设置RGB值深度拷贝、获取颜色类型、判断相同类型的对象属性是否一致转换成二进制、将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复Color属性判断HSV转成Lab是否成功、判断Lab转成HSV是否成功
 */
public class HsvColor extends com.earthview.world.spatial.display.Color {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CHsvColor", new HsvColorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCHsvColorProxy", new HsvColorClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public HsvColor() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCHsvColorProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.HsvColor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param hue H值
	 * @param Saturation S值
	 * @param value V值
	 */
	public HsvColor(int hue, int Saturation, int value) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer huePtr = new BasePointer(hue);
		list.add("hue", huePtr.get());
		BasePointer SaturationPtr = new BasePointer(Saturation);
		list.add("Saturation", SaturationPtr.get());
		BasePointer valuePtr = new BasePointer(value);
		list.add("value", valuePtr.get());
		Create("JCHsvColorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.HsvColor".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getHue_void(long pNativeObject);
	/**
	 * 获取Hue值
	 * @param  
	 * @return Hue值
	 */
	public int getHue()
	{
		int returnValue = getHue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSaturation_void(long pNativeObject);
	/**
	 * 获取Saturation值
	 * @param  
	 * @return Saturation值
	 */
	public int getSaturation()
	{
		int returnValue = getSaturation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getValue_void(long pNativeObject);
	/**
	 * 获取Value值
	 * @param  
	 * @return Value值
	 */
	public int getValue()
	{
		int returnValue = getValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setHue_ev_int32(long pNativeObject, int h);
	/**
	 * 设置Hue值
	 * @param h Hue值
	 */
	public void setHue(int h)
	{
		int hParamValue = h;
		setHue_ev_int32(this.nativeObject.pointer, hParamValue);
	}
	native private void setSaturation_ev_int32(long pNativeObject, int s);
	/**
	 * 设置Saturation值
	 * @param s Saturation值
	 */
	public void setSaturation(int s)
	{
		int sParamValue = s;
		setSaturation_ev_int32(this.nativeObject.pointer, sParamValue);
	}
	native private void setValue_ev_int32(long pNativeObject, int v);
	/**
	 * 设置Value值
	 * @param v Value值
	 */
	public void setValue(int v)
	{
		int vParamValue = v;
		setValue_ev_int32(this.nativeObject.pointer, vParamValue);
	}
	native private void setColor_ev_int32_ev_int32_ev_int32(long pNativeObject, int h, int s, int v);
	/**
	 * 设置Color值
	 * @param h hue值
	 * @param s saturation值
	 * @param v value值
	 */
	public void setColor(int h, int s, int v)
	{
		int hParamValue = h;
		int sParamValue = s;
		int vParamValue = v;
		setColor_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, hParamValue, sParamValue, vParamValue);
	}
	native private void setCIELab_ev_real64_ev_real64_ev_real64(long pNativeObject, double L, double a, double b);
	/**
	 * 设置CIELab值重载其类函数
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

	protected  void setRGB_ev_int32_ev_int32_ev_int32_callback(int red, int green, int blue)
	{
		int redParamValue = red;
		int greenParamValue = green;
		int blueParamValue = blue;
		setRGB(redParamValue, greenParamValue, blueParamValue);
	}

	native private void setRGB_ev_int32_ev_int32_ev_int32(long pNativeObject, int red, int green, int blue);
	/**
	 * 设置RGB值
	 * @param red red值
	 * @param green green值
	 * @param blue blue值
	 */
	public void setRGB(int red, int green, int blue)
	{
		int redParamValue = red;
		int greenParamValue = green;
		int blueParamValue = blue;
		setRGB_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}
	native private void setRGB_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int red, int green, int blue);
	protected void setRGB_NoVirtual(int red, int green, int blue)
	{
		int redParamValue = red;
		int greenParamValue = green;
		int blueParamValue = blue;
		setRGB_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, redParamValue, greenParamValue, blueParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝内存需要外部释放
	 * @param  
	 * @return 颜色对象
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

	native private int getType_void(long pNativeObject);
	/**
	 * 获取颜色类型
	 * @param  
	 * @return 颜色类型
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

	public HsvColor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public HsvColor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取CIELab颜色空间值
	 * @param L L值
	 * @param a a值
	 * @param b b值
	 */
	public void getCIELab(DoublePointer L, DoublePointer a, DoublePointer b)
	{
		super.getCIELab_NoVirtual(L, a, b);
	}
	/**
	 * 获取COLORREF类型的值
	 * @return COLORREF值
	 */
	public long getCOLORREF()
	{
		return super.getCOLORREF_NoVirtual();
	}
	/**
	 * 获取Rgb的值，一般是一个整数。
	 * @return Rgb值
	 */
	public long getRgbValue()
	{
		return super.getRgbValue_NoVirtual();
	}
	/**
	 * 获取RGB颜色空间的R值
	 * @return R值,范围[0，255]
	 */
	public short getRed()
	{
		return super.getRed_NoVirtual();
	}
	/**
	 * 获取RGB颜色空间的G值
	 * @return G值,范围[0，255]
	 */
	public short getGreen()
	{
		return super.getGreen_NoVirtual();
	}
	/**
	 * 获取RGB颜色空间的B值
	 * @return B值,范围[0，255]
	 */
	public short getBlue()
	{
		return super.getBlue_NoVirtual();
	}
	/**
	 * 获取RGB颜色空间的R,G,B值
	 * @param red 输出类型,R值,范围[0，255]
	 * @param green 输出类型,G值,范围[0，255]
	 * @param blue 输出类型,B值,范围[0，255]
	 */
	public void getRGB(UBytePointer red, UBytePointer green, UBytePointer blue)
	{
		super.getRGB_NoVirtual(red, green, blue);
	}
	/**
	 * 获取RGB颜色空间的Alpha通道
	 * @return Alpha通道值，范围[0，255]
	 */
	public short getTransparent()
	{
		return super.getTransparent_NoVirtual();
	}
	/**
	 * 判断颜色是否为空
	 * @return True,为空；False,该对象有效
	 */
	public boolean isNULL()
	{
		return super.isNULL_NoVirtual();
	}
	/**
	 * 设置RGB颜色空间值
	 * @param red R值
	 * @param green G值
	 * @param blue B值
	 */
	public void setRGB(short red, short green, short blue)
	{
		super.setRGB_NoVirtual(red, green, blue);
	}
	/**
	 * 设置颜色是否为空
	 */
	public void setNULL(boolean value)
	{
		super.setNULL_NoVirtual(value);
	}
	/**
	 * 设置颜色Alpha通道值
	 * @param value Alpha值，范围[0，255]
	 */
	public void setTransparent(short value)
	{
		super.setTransparent_NoVirtual(value);
	}
	/**
	 * 转化为RGB字符串格式
	 * @return RGB字符串格式
	 */
	public String toRGBString()
	{
		return super.toRGBString_NoVirtual();
	}
	
	native protected void register_setRGB_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
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
			this.register_setRGB_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "setRGB_ev_int32_ev_int32_ev_int32_callback");
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
	
	public static HsvColor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		HsvColor obj = null;
 		if(baseObj instanceof HsvColor)
		{
			obj = (HsvColor)baseObj;
		} else {
			obj = new HsvColor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CHsvColor");
			obj.increaseCast();
		}

		return obj;
	}
}
