package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 所有色带类的基类	提供方法如下：创建色带、深度拷贝、判断相同类型的对象属性是否一致、清空颜色列表			获取色带中颜色的个数、获取指定索引的颜色、获取ColorRamp的类型转换成XML字符串、转换成二进制、将属性信息转为XML从XMLElement中恢复信息、从数据流恢复Color属性
 */
public class ColorRamp extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorRamp", new ColorRampClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorRampProxy", new ColorRampClassFactory());
	}

	protected  void createRamp_ev_uint32_callback(long count)
	{
		long countParamValue = count;
		createRamp(countParamValue);
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

	protected  long getColorCount_void_callback()
	{
		long returnValue = getColorCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getColorCount_void(long pNativeObject);
	/**
	 * 获取色带中颜色的个数
	 * @param  
	 * @return 颜色个数
	 */
	public long getColorCount()
	{
		long returnValue = getColorCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getColorCount_void_NoVirtual(long pNativeObject);
	protected long getColorCount_NoVirtual()
	{
		long returnValue = getColorCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long getColorRef_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial.display.Icolor returnValue = getColorRef(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getColorRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的颜色
	 * @param index 指定索引
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getColorRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}
	native private long getColorRef_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.display.Icolor getColorRef_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getColorRef_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Icolor __returnValue = new com.earthview.world.spatial.display.Icolor(CreatedWhenConstruct.CWC_NotToCreate, "IColor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Icolor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IColor");
		}
		return __returnValue;
	}

	protected  int getColorRampType_void_callback()
	{
		com.earthview.world.spatial.display.EVColorRampType returnValue = getColorRampType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getColorRampType_void(long pNativeObject);
	/**
	 * 获取ColorRamp的类型
	 * @param  
	 * @return ColorRamp的类型
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

	protected  long ev_clone_void_callback()
	{
		com.earthview.world.spatial.display.ColorRamp returnValue = ev_clone();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	native private String toXML_void(long pNativeObject);
	/**
	 * 转换成XML字符串
	 * @param  
	 * @return xml字符串
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
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

	protected  long toXmlElement_void_callback()
	{
		com.earthview.world.core.XmlElement returnValue = toXmlElement();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  boolean equal_CColorRamp_callback(long pColorRamp)
	{
		com.earthview.world.spatial.display.ColorRamp pColorRampParamValue = (pColorRamp == 0L ? null : new com.earthview.world.spatial.display.ColorRamp(CreatedWhenConstruct.CWC_NotToCreate));
		if(pColorRampParamValue != null)
		{
		pColorRampParamValue.setDelegate(true);
		pColorRampParamValue.setInstancePointer(new InstancePointer(pColorRamp));
		IClassFactory pColorRampParamValueClassFactory = GlobalClassFactoryMap.get(pColorRampParamValue.getCppInstanceTypeName());
		if (pColorRampParamValueClassFactory != null)
		{
			pColorRampParamValue.setDelegate(true);
			pColorRampParamValue = (com.earthview.world.spatial.display.ColorRamp)pColorRampParamValueClassFactory.create();
			pColorRampParamValue.setDelegate(true);
			pColorRampParamValue.setInstancePointer(new InstancePointer(pColorRamp));
		}
		}
		boolean returnValue = equal(pColorRampParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	public ColorRamp(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColorRamp(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static ColorRamp fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColorRamp obj = null;
 		if(baseObj instanceof ColorRamp)
		{
			obj = (ColorRamp)baseObj;
		} else {
			obj = new ColorRamp(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColorRamp");
			obj.increaseCast();
		}

		return obj;
	}
}
