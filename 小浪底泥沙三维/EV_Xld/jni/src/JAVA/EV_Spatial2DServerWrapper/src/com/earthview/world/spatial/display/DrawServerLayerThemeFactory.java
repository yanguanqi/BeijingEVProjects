package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * WMS图层专题图基类
 */
public class DrawServerLayerThemeFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactory", new DrawServerLayerThemeFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCDrawServerLayerThemeFactoryProxy", new DrawServerLayerThemeFactoryClassFactory());
	}

	native private long getKeys_void(long pNativeObject);
	/**
	 * 获取支持的专题图关键字
	 * @return 关键字列表
	 */
	public com.earthview.world.core.StringArray getKeys()
	{
		long returnValue = getKeys_void(this.nativeObject.pointer);
		com.earthview.world.core.StringArray __returnValue = new com.earthview.world.core.StringArray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringArray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CStringArray");
		}
		return __returnValue;
	}
	native private boolean isSupported_EVString(long pNativeObject, String key);
	/**
	 * 判断是否支持该关键字的专题图创建
	 * @param key 关键字
	 * @return 支持返回true，不支持返回false
	 */
	public boolean isSupported(String key)
	{
		String keyParamValue = key;
		boolean returnValue = isSupported_EVString(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	protected  long create_EVString_callback(String key)
	{
		String keyParamValue = key;
		com.earthview.world.spatial.display.DrawServerLayerTheme returnValue = create(keyParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString(long pNativeObject, String key);
	/**
	 * 通过关键字创建专题图
	 * @param key 关键字
	 * @return 专题图对象指针
	 */
	public com.earthview.world.spatial.display.DrawServerLayerTheme create(String key)
	{
		String keyParamValue = key;
		long returnValue = create_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawServerLayerTheme __returnValue = new com.earthview.world.spatial.display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawServerLayerTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawServerLayerTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawServerLayerTheme");
		}
		return __returnValue;
	}
	native private long create_EVString_NoVirtual(long pNativeObject, String key);
	protected com.earthview.world.spatial.display.DrawServerLayerTheme create_NoVirtual(String key)
	{
		String keyParamValue = key;
		long returnValue = create_EVString_NoVirtual(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawServerLayerTheme __returnValue = new com.earthview.world.spatial.display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawServerLayerTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawServerLayerTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawServerLayerTheme");
		}
		return __returnValue;
	}

	protected  long createRenderFromStream_CDataStream_callback(long stream)
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
		com.earthview.world.spatial.display.DrawServerLayerTheme returnValue = createRenderFromStream(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createRenderFromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 通过数据流恢复专题图信息
	 * @param stream 数据流
	 * @return 符号
	 */
	public com.earthview.world.spatial.display.DrawServerLayerTheme createRenderFromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createRenderFromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawServerLayerTheme __returnValue = new com.earthview.world.spatial.display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawServerLayerTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawServerLayerTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawServerLayerTheme");
		}
		return __returnValue;
	}
	native private long createRenderFromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial.display.DrawServerLayerTheme createRenderFromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createRenderFromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawServerLayerTheme __returnValue = new com.earthview.world.spatial.display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawServerLayerTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawServerLayerTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawServerLayerTheme");
		}
		return __returnValue;
	}

	protected  long createThemeFromXmlElement_CXmlElement_callback(long element)
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
		com.earthview.world.spatial.display.DrawServerLayerTheme returnValue = createThemeFromXmlElement(elementParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createThemeFromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 通过xmlElement恢复专题图信息
	 * @param xmlText xmlElement字符串
	 */
	public com.earthview.world.spatial.display.DrawServerLayerTheme createThemeFromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createThemeFromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawServerLayerTheme __returnValue = new com.earthview.world.spatial.display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawServerLayerTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawServerLayerTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawServerLayerTheme");
		}
		return __returnValue;
	}
	native private long createThemeFromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.spatial.display.DrawServerLayerTheme createThemeFromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createThemeFromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawServerLayerTheme __returnValue = new com.earthview.world.spatial.display.DrawServerLayerTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawServerLayerTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawServerLayerTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawServerLayerTheme");
		}
		return __returnValue;
	}

	native private void destroyRender_CDrawServerLayerTheme(long pNativeObject, long pRender);
	/**
	 * 销毁专题图
	 * @param pSymbol 专题图对象
	 */
	public void destroyRender(com.earthview.world.spatial.display.DrawServerLayerTheme pRender)
	{
		long pRenderParamValue = (pRender == null ? 0L : pRender.nativeObject.pointer);
		destroyRender_CDrawServerLayerTheme(this.nativeObject.pointer, pRenderParamValue);
	}
	/**
	 * 默认构造函数
	 * @param  
	 */
	public DrawServerLayerThemeFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDrawServerLayerThemeFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.DrawServerLayerThemeFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void initialize_void(long pNativeObject);
	public void initialize()
	{
		initialize_void(this.nativeObject.pointer);
	}
	public DrawServerLayerThemeFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawServerLayerThemeFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_create_EVString(long pNativeObject, String method);
	native protected void register_createRenderFromStream_CDataStream(long pNativeObject, String method);
	native protected void register_createThemeFromXmlElement_CXmlElement(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_create_EVString(this.nativeObject.pointer, "create_EVString_callback");
			this.register_createRenderFromStream_CDataStream(this.nativeObject.pointer, "createRenderFromStream_CDataStream_callback");
			this.register_createThemeFromXmlElement_CXmlElement(this.nativeObject.pointer, "createThemeFromXmlElement_CXmlElement_callback");
		}
	}
	
	public static DrawServerLayerThemeFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawServerLayerThemeFactory obj = null;
 		if(baseObj instanceof DrawServerLayerThemeFactory)
		{
			obj = (DrawServerLayerThemeFactory)baseObj;
		} else {
			obj = new DrawServerLayerThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawServerLayerThemeFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
