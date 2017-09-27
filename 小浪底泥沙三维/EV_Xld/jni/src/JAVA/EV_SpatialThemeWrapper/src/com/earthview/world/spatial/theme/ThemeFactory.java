package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CTheme类的创建工厂提供方法如下：获取专题图工厂指针、销毁专题图、销毁所有专题图通过数据流恢复专题图信息、通过xmlElement恢复专题图信息
 */
public class ThemeFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CThemeFactory", new ThemeFactoryClassFactory());
	}

	native private static long getInstance_void();
	/**
	 * 获取专题图工厂指针
	 * @param  
	 * @return 专题图工厂指针
	 */
	public static com.earthview.world.spatial.theme.ThemeFactory getInstance()
	{
		long returnValue = getInstance_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.ThemeFactory __returnValue = new com.earthview.world.spatial.theme.ThemeFactory(CreatedWhenConstruct.CWC_NotToCreate, "CThemeFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.ThemeFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CThemeFactory");
		}
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
	public ThemeFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ThemeFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ThemeFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ThemeFactory obj = null;
 		if(baseObj instanceof ThemeFactory)
		{
			obj = (ThemeFactory)baseObj;
		} else {
			obj = new ThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CThemeFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
