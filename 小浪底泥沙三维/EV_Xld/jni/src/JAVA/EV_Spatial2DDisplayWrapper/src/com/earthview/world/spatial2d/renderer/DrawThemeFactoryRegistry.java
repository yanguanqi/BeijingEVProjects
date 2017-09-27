package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawThemeFactoryRegistry extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Renderer::CDrawThemeFactoryRegistry", new DrawThemeFactoryRegistryClassFactory());
	}

	public DrawThemeFactoryRegistry() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDrawThemeFactoryRegistry", null);
	}

	native private int registryFactory_CDrawThemeFactory(long pNativeObject, long factory);
	public int registryFactory(com.earthview.world.spatial2d.renderer.DrawThemeFactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		int returnValue = registryFactory_CDrawThemeFactory(this.nativeObject.pointer, factoryParamValue);
		return returnValue;
	}
	native private long getFactory_EVString(long pNativeObject, String key);
	public com.earthview.world.spatial2d.renderer.DrawThemeFactory getFactory(String key)
	{
		String keyParamValue = key;
		long returnValue = getFactory_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial2d.renderer.DrawThemeFactory __returnValue = new com.earthview.world.spatial2d.renderer.DrawThemeFactory(CreatedWhenConstruct.CWC_NotToCreate, "CDrawThemeFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial2d.renderer.DrawThemeFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawThemeFactory");
		}
		return __returnValue;
	}
	public DrawThemeFactoryRegistry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawThemeFactoryRegistry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DrawThemeFactoryRegistry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawThemeFactoryRegistry obj = null;
 		if(baseObj instanceof DrawThemeFactoryRegistry)
		{
			obj = (DrawThemeFactoryRegistry)baseObj;
		} else {
			obj = new DrawThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawThemeFactoryRegistry");
			obj.increaseCast();
		}

		return obj;
	}
}
