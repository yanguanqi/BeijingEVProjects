package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 随机色带类提供方法如下：获取与设置Hue值最小值、最大值，获取与设置Saturation值最小值、最大值，获取与设置Value值最小值、最大值获取色带类型、获取与设置是否使用种子、获取与设置种子、创建色带、深度拷贝	转换成二进制、将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复ColorRamp属性	判断相同类型的对象属性是否一致、获取指定范围内的一个随机值
 */
public class RandomColorRamp extends com.earthview.world.spatial.display.ColorRamp {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CRandomColorRamp", new RandomColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCRandomColorRampProxy", new RandomColorRampClassFactory());
	}

	/**
	 * 默认函数
	 * @param  
	 */
	public RandomColorRamp() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCRandomColorRampProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.RandomColorRamp".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getColorRampType_void(long pNativeObject);
	/**
	 * 获取色带类型
	 * @param  
	 * @return 色带类型
	 */
	public com.earthview.world.spatial.display.EVColorRampType getColorRampType()
	{
		int returnValue = getColorRampType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorRampType.toEnum(returnValue);
	}
	native private int getColorRampType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.EVColorRampType getColorRampType_NoVirtual()
	{
		int returnValue = getColorRampType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVColorRampType.toEnum(returnValue);
	}

	native private int getMinHue_void(long pNativeObject);
	/**
	 * 获取Hue值最小值
	 * @param  
	 * @return Hue值最小值
	 */
	public int getMinHue()
	{
		int returnValue = getMinHue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxHue_void(long pNativeObject);
	/**
	 * 获取Hue值最大值
	 * @param  
	 * @return Hue值最大值
	 */
	public int getMaxHue()
	{
		int returnValue = getMaxHue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinSaturation_void(long pNativeObject);
	/**
	 * 获取Saturation值最小值
	 * @param  
	 * @return Saturation值最小值
	 */
	public int getMinSaturation()
	{
		int returnValue = getMinSaturation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxSaturation_void(long pNativeObject);
	/**
	 * 获取Saturation值最大值
	 * @param  
	 * @return Saturation值最大值
	 */
	public int getMaxSaturation()
	{
		int returnValue = getMaxSaturation_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinValue_void(long pNativeObject);
	/**
	 * 获取Value值最小值
	 * @param  
	 * @return Value值最小值
	 */
	public int getMinValue()
	{
		int returnValue = getMinValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxValue_void(long pNativeObject);
	/**
	 * 获取Value值最大值
	 * @param  
	 * @return Value值最大值
	 */
	public int getMaxValue()
	{
		int returnValue = getMaxValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean useSeed_void(long pNativeObject);
	/**
	 * 是否使用种子如果不使用种子，则默认使用系统时间
	 * @param  
	 * @return 是否使用
	 */
	public boolean useSeed()
	{
		boolean returnValue = useSeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSeed_void(long pNativeObject);
	/**
	 * 获取种子
	 * @param  
	 * @return 种子
	 */
	public int getSeed()
	{
		int returnValue = getSeed_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMinHue_ev_int32(long pNativeObject, int value);
	/**
	 * 设置Hue值最小值
	 * @param value Hue值
	 */
	public void setMinHue(int value)
	{
		int valueParamValue = value;
		setMinHue_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMaxHue_ev_int32(long pNativeObject, int value);
	/**
	 * 设置Hue值最大值
	 * @param value Hue值
	 */
	public void setMaxHue(int value)
	{
		int valueParamValue = value;
		setMaxHue_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMinSaturation_ev_int32(long pNativeObject, int value);
	/**
	 * 设置Saturation值最小值
	 * @param value Saturation值
	 */
	public void setMinSaturation(int value)
	{
		int valueParamValue = value;
		setMinSaturation_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMaxSaturation_ev_int32(long pNativeObject, int value);
	/**
	 * 设置Saturation值最大值
	 * @param value Saturation值
	 */
	public void setMaxSaturation(int value)
	{
		int valueParamValue = value;
		setMaxSaturation_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMinValue_ev_int32(long pNativeObject, int value);
	/**
	 * 设置Value值最小值
	 * @param value Value值
	 */
	public void setMinValue(int value)
	{
		int valueParamValue = value;
		setMinValue_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setMaxValue_ev_int32(long pNativeObject, int value);
	/**
	 * 设置Value值最大值
	 * @param value Value值
	 */
	public void setMaxValue(int value)
	{
		int valueParamValue = value;
		setMaxValue_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void setSeed_ev_int32(long pNativeObject, int seed);
	/**
	 * 设置种子
	 * @param seed 种子数字
	 */
	public void setSeed(int seed)
	{
		int seedParamValue = seed;
		setSeed_ev_int32(this.nativeObject.pointer, seedParamValue);
	}
	native private void setUseSeed_ev_bool(long pNativeObject, boolean used);
	/**
	 * 设置是否使用种子
	 * @param used 是否使用
	 */
	public void setUseSeed(boolean used)
	{
		boolean usedParamValue = used;
		setUseSeed_ev_bool(this.nativeObject.pointer, usedParamValue);
	}
	native private void createRamp_ev_uint32(long pNativeObject, long count);
	/**
	 * 创建色带
	 * @param count 指定大小
	 */
	public void createRamp(long count)
	{
		long countParamValue = count;
		createRamp_ev_uint32(this.nativeObject.pointer, countParamValue);
	}
	native private void createRamp_ev_uint32_NoVirtual(long pNativeObject, long count);
	protected void createRamp_NoVirtual(long count)
	{
		long countParamValue = count;
		createRamp_ev_uint32_NoVirtual(this.nativeObject.pointer, countParamValue);
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度拷贝内存需要外部释放
	 * @param  
	 * @return 颜色对象
	 */
	public com.earthview.world.spatial.display.ColorRamp ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorRamp __returnValue = new com.earthview.world.spatial.display.ColorRamp(CreatedWhenConstruct.CWC_NotToCreate, "CColorRamp");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorRamp)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColorRamp");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.ColorRamp ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorRamp __returnValue = new com.earthview.world.spatial.display.ColorRamp(CreatedWhenConstruct.CWC_NotToCreate, "CColorRamp");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorRamp)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CColorRamp");
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

	native private boolean equal_CColorRamp(long pNativeObject, long pColorRamp);
	/**
	 * 判断相同类型的对象属性是否一致
	 * @param pColor Color对象
	 */
	public boolean equal(com.earthview.world.spatial.display.ColorRamp pColorRamp)
	{
		long pColorRampParamValue = (pColorRamp == null ? 0L : pColorRamp.nativeObject.pointer);
		boolean returnValue = equal_CColorRamp(this.nativeObject.pointer, pColorRampParamValue);
		return returnValue;
	}
	native private boolean equal_CColorRamp_NoVirtual(long pNativeObject, long pColorRamp);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.ColorRamp pColorRamp)
	{
		long pColorRampParamValue = (pColorRamp == null ? 0L : pColorRamp.nativeObject.pointer);
		boolean returnValue = equal_CColorRamp_NoVirtual(this.nativeObject.pointer, pColorRampParamValue);
		return returnValue;
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复ColorRamp属性
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

	public RandomColorRamp(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RandomColorRamp(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取色带中颜色的个数
	 * @param  
	 * @return 颜色个数
	 */
	public long getColorCount()
	{
		return super.getColorCount_NoVirtual();
	}
	/**
	 * 获取指定索引的颜色
	 * @param index 指定索引
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef(long index)
	{
		return super.getColorRef_NoVirtual(index);
	}
	
	native protected void register_createRamp_ev_uint32(long pNativeObject, String method);
	native protected void register_getColorCount_void(long pNativeObject, String method);
	native protected void register_getColorRef_ev_uint32(long pNativeObject, String method);
	native protected void register_getColorRampType_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_equal_CColorRamp(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createRamp_ev_uint32(this.nativeObject.pointer, "createRamp_ev_uint32_callback");
			this.register_getColorCount_void(this.nativeObject.pointer, "getColorCount_void_callback");
			this.register_getColorRef_ev_uint32(this.nativeObject.pointer, "getColorRef_ev_uint32_callback");
			this.register_getColorRampType_void(this.nativeObject.pointer, "getColorRampType_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_equal_CColorRamp(this.nativeObject.pointer, "equal_CColorRamp_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static RandomColorRamp fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RandomColorRamp obj = null;
 		if(baseObj instanceof RandomColorRamp)
		{
			obj = (RandomColorRamp)baseObj;
		} else {
			obj = new RandomColorRamp(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRandomColorRamp");
			obj.increaseCast();
		}

		return obj;
	}
}
