package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawThemeFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactory", new DrawThemeFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::JCDrawThemeFactoryProxy", new DrawThemeFactoryClassFactory());
	}

	public DrawThemeFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDrawThemeFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.renderer.DrawThemeFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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
		com.earthview.world.spatial2d.renderer.DrawTheme returnValue = create(keyParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long create_EVString(long pNativeObject, String key);
	public com.earthview.world.spatial2d.renderer.DrawTheme create(String key)
	{
		String keyParamValue = key;
		long returnValue = create_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.renderer.DrawTheme __returnValue = new com.earthview.world.spatial2d.renderer.DrawTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.renderer.DrawTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawTheme");
		}
		return __returnValue;
	}
	native private long create_EVString_NoVirtual(long pNativeObject, String key);
	protected com.earthview.world.spatial2d.renderer.DrawTheme create_NoVirtual(String key)
	{
		String keyParamValue = key;
		long returnValue = create_EVString_NoVirtual(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.renderer.DrawTheme __returnValue = new com.earthview.world.spatial2d.renderer.DrawTheme(CreatedWhenConstruct.CWC_NotToCreate, "CDrawTheme");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.renderer.DrawTheme)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawTheme");
		}
		return __returnValue;
	}

	native private void destroy_CDrawTheme(long pNativeObject, long obj);
	public void destroy(com.earthview.world.spatial2d.renderer.DrawTheme obj)
	{
		long objParamValue = (obj == null ? 0L : obj.nativeObject.pointer);
		destroy_CDrawTheme(this.nativeObject.pointer, objParamValue);
	}
	native private void initialize_void(long pNativeObject);
	public void initialize()
	{
		initialize_void(this.nativeObject.pointer);
	}
	public DrawThemeFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawThemeFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_create_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_create_EVString(this.nativeObject.pointer, "create_EVString_callback");
		}
	}
	
	public static DrawThemeFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawThemeFactory obj = null;
 		if(baseObj instanceof DrawThemeFactory)
		{
			obj = (DrawThemeFactory)baseObj;
		} else {
			obj = new DrawThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawThemeFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
