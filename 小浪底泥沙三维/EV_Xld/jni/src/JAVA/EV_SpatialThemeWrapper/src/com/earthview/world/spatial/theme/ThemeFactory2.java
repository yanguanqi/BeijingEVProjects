package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CTheme类的创建工厂提供方法如下：获取专题图工厂指针、销毁专题图、销毁所有专题图通过数据流恢复专题图信息、通过xmlElement恢复专题图信息
 */
public class ThemeFactory2 extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CThemeFactory2", new ThemeFactory2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JCThemeFactory2Proxy", new ThemeFactory2ClassFactory());
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
		com.earthview.world.spatial.theme.Itheme returnValue = create(keyParamValue);
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
	public com.earthview.world.spatial.theme.Itheme create(String key)
	{
		String keyParamValue = key;
		long returnValue = create_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long create_EVString_NoVirtual(long pNativeObject, String key);
	protected com.earthview.world.spatial.theme.Itheme create_NoVirtual(String key)
	{
		String keyParamValue = key;
		long returnValue = create_EVString_NoVirtual(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	protected  long createThemeFromStream_CDataStream_callback(long stream)
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
		com.earthview.world.spatial.theme.Itheme returnValue = createThemeFromStream(streamParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createThemeFromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 通过数据流恢复专题图信息
	 * @param stream 数据流
	 * @return 符号
	 */
	public com.earthview.world.spatial.theme.Itheme createThemeFromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createThemeFromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long createThemeFromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected com.earthview.world.spatial.theme.Itheme createThemeFromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		long returnValue = createThemeFromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
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
		com.earthview.world.spatial.theme.Itheme returnValue = createThemeFromXmlElement(elementParamValue);
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
	public com.earthview.world.spatial.theme.Itheme createThemeFromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createThemeFromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}
	native private long createThemeFromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected com.earthview.world.spatial.theme.Itheme createThemeFromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		long returnValue = createThemeFromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.Itheme __returnValue = new com.earthview.world.spatial.theme.Itheme(CreatedWhenConstruct.CWC_NotToCreate, "ITheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.Itheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITheme");
		}
		return __returnValue;
	}

	native private void destroyTheme_ITheme(long pNativeObject, long pTheme);
	/**
	 * 销毁专题图
	 * @param pSymbol 专题图对象
	 */
	public void destroyTheme(com.earthview.world.spatial.theme.Itheme pTheme)
	{
		long pThemeParamValue = (pTheme == null ? 0L : pTheme.nativeObject.pointer);
		destroyTheme_ITheme(this.nativeObject.pointer, pThemeParamValue);
	}
	/**
	 * 默认构造函数
	 * @param  
	 */
	public ThemeFactory2() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCThemeFactory2Proxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.theme.ThemeFactory2".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void initialize_void(long pNativeObject);
	public void initialize()
	{
		initialize_void(this.nativeObject.pointer);
	}
	public ThemeFactory2(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ThemeFactory2(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_create_EVString(long pNativeObject, String method);
	native protected void register_createThemeFromStream_CDataStream(long pNativeObject, String method);
	native protected void register_createThemeFromXmlElement_CXmlElement(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_create_EVString(this.nativeObject.pointer, "create_EVString_callback");
			this.register_createThemeFromStream_CDataStream(this.nativeObject.pointer, "createThemeFromStream_CDataStream_callback");
			this.register_createThemeFromXmlElement_CXmlElement(this.nativeObject.pointer, "createThemeFromXmlElement_CXmlElement_callback");
		}
	}
	
	public static ThemeFactory2 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ThemeFactory2 obj = null;
 		if(baseObj instanceof ThemeFactory2)
		{
			obj = (ThemeFactory2)baseObj;
		} else {
			obj = new ThemeFactory2(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CThemeFactory2");
			obj.increaseCast();
		}

		return obj;
	}
}
