package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * ColorRamp类工厂提供方法如下：获取Color工厂的指针、通过数据流创建IColor、通过xmlElement恢复Color信息销毁颜色、销毁所有颜色
 */
public class ColorRampFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CColorRampFactory", new ColorRampFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCColorRampFactoryProxy", new ColorRampFactoryClassFactory());
	}

	native private static long getInstance_void();
	/**
	 * 获取Color工厂的指针
	 * @param  
	 * @return Color工厂的指针
	 */
	public static com.earthview.world.spatial.display.ColorRampFactory getInstance()
	{
		long returnValue = getInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.ColorRampFactory __returnValue = new com.earthview.world.spatial.display.ColorRampFactory(CreatedWhenConstruct.CWC_NotToCreate, "CColorRampFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.ColorRampFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CColorRampFactory");
		}
		return __returnValue;
	}
	protected  long createColorRampFromStream_CDataStream_callback(long stream)
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
		com.earthview.world.spatial.display.ColorRamp returnValue = createColorRampFromStream(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createColorRampFromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 通过数据流创建IColor
	 * @param  
	 * @return IColor指针
	 */
	public com.earthview.world.spatial.display.ColorRamp createColorRampFromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createColorRampFromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
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
	native private long createColorRampFromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial.display.ColorRamp createColorRampFromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createColorRampFromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
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

	protected  long createColorRampFromXmlElement_CXmlElement_callback(long element)
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
		com.earthview.world.spatial.display.ColorRamp returnValue = createColorRampFromXmlElement(elementParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createColorRampFromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 通过xmlElement恢复Color信息
	 * @param xmlText xmlElement字符串
	 */
	public com.earthview.world.spatial.display.ColorRamp createColorRampFromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createColorRampFromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
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
	native private long createColorRampFromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.spatial.display.ColorRamp createColorRampFromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createColorRampFromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
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

	protected  void destroyColorRamp_CColorRamp_callback(long pColorRamp)
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
		destroyColorRamp(pColorRampParamValue);
	}

	native private void destroyColorRamp_CColorRamp(long pNativeObject, long pColorRamp);
	/**
	 * 销毁颜色
	 * @param pColor 颜色对象
	 */
	public void destroyColorRamp(com.earthview.world.spatial.display.ColorRamp pColorRamp)
	{
		long pColorRampParamValue = (pColorRamp == null ? 0L : pColorRamp.nativeObject.pointer);
		destroyColorRamp_CColorRamp(this.nativeObject.pointer, pColorRampParamValue);
	}
	native private void destroyColorRamp_CColorRamp_NoVirtual(long pNativeObject, long pColorRamp);
	protected void destroyColorRamp_NoVirtual(com.earthview.world.spatial.display.ColorRamp pColorRamp)
	{
		long pColorRampParamValue = (pColorRamp == null ? 0L : pColorRamp.nativeObject.pointer);
		destroyColorRamp_CColorRamp_NoVirtual(this.nativeObject.pointer, pColorRampParamValue);
	}

	protected  void destroyColorRamps_void_callback()
	{
		destroyColorRamps();
	}

	native private void destroyColorRamps_void(long pNativeObject);
	/**
	 * 销毁所有颜色
	 * @param  
	 */
	public void destroyColorRamps()
	{
		destroyColorRamps_void(this.nativeObject.pointer);
	}
	native private void destroyColorRamps_void_NoVirtual(long pNativeObject);
	protected void destroyColorRamps_NoVirtual()
	{
		destroyColorRamps_void_NoVirtual(this.nativeObject.pointer);
	}

	public ColorRampFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ColorRampFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_createColorRampFromStream_CDataStream(long pNativeObject, String method);
	native protected void register_createColorRampFromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_destroyColorRamp_CColorRamp(long pNativeObject, String method);
	native protected void register_destroyColorRamps_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createColorRampFromStream_CDataStream(this.nativeObject.pointer, "createColorRampFromStream_CDataStream_callback");
			this.register_createColorRampFromXmlElement_CXmlElement(this.nativeObject.pointer, "createColorRampFromXmlElement_CXmlElement_callback");
			this.register_destroyColorRamp_CColorRamp(this.nativeObject.pointer, "destroyColorRamp_CColorRamp_callback");
			this.register_destroyColorRamps_void(this.nativeObject.pointer, "destroyColorRamps_void_callback");
		}
	}
	
	public static ColorRampFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ColorRampFactory obj = null;
 		if(baseObj instanceof ColorRampFactory)
		{
			obj = (ColorRampFactory)baseObj;
		} else {
			obj = new ColorRampFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CColorRampFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
