package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ThemeFactoryRegistry extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::CThemeFactoryRegistry", new ThemeFactoryRegistryClassFactory());
	}

	public ThemeFactoryRegistry() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CThemeFactoryRegistry", null);
	}

	native private int registryFactory_CThemeFactory2(long pNativeObject, long factory);
	public int registryFactory(com.earthview.world.spatial.theme.ThemeFactory2 factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		int returnValue = registryFactory_CThemeFactory2(this.nativeObject.pointer, factoryParamValue);
		return returnValue;
	}
	native private long getFactory_EVString(long pNativeObject, String key);
	public com.earthview.world.spatial.theme.ThemeFactory2 getFactory(String key)
	{
		String keyParamValue = key;
		long returnValue = getFactory_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.theme.ThemeFactory2 __returnValue = new com.earthview.world.spatial.theme.ThemeFactory2(CreatedWhenConstruct.CWC_NotToCreate, "CThemeFactory2");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.theme.ThemeFactory2)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CThemeFactory2");
		}
		return __returnValue;
	}
	public ThemeFactoryRegistry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ThemeFactoryRegistry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ThemeFactoryRegistry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ThemeFactoryRegistry obj = null;
 		if(baseObj instanceof ThemeFactoryRegistry)
		{
			obj = (ThemeFactoryRegistry)baseObj;
		} else {
			obj = new ThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CThemeFactoryRegistry");
			obj.increaseCast();
		}

		return obj;
	}
}
