package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawServerLayerThemeFactoryRegistry extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CDrawServerLayerThemeFactoryRegistry", new DrawServerLayerThemeFactoryRegistryClassFactory());
	}

	public DrawServerLayerThemeFactoryRegistry() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CDrawServerLayerThemeFactoryRegistry", null);
	}

	native private int registryFactory_CDrawServerLayerThemeFactory(long pNativeObject, long factory);
	public int registryFactory(com.earthview.world.spatial.display.DrawServerLayerThemeFactory factory)
	{
		long factoryParamValue = (factory == null ? 0L : factory.nativeObject.pointer);
		int returnValue = registryFactory_CDrawServerLayerThemeFactory(this.nativeObject.pointer, factoryParamValue);
		return returnValue;
	}
	native private long getFactory_EVString(long pNativeObject, String key);
	public com.earthview.world.spatial.display.DrawServerLayerThemeFactory getFactory(String key)
	{
		String keyParamValue = key;
		long returnValue = getFactory_EVString(this.nativeObject.pointer, keyParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawServerLayerThemeFactory __returnValue = new com.earthview.world.spatial.display.DrawServerLayerThemeFactory(CreatedWhenConstruct.CWC_NotToCreate, "CDrawServerLayerThemeFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawServerLayerThemeFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CDrawServerLayerThemeFactory");
		}
		return __returnValue;
	}
	public DrawServerLayerThemeFactoryRegistry(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DrawServerLayerThemeFactoryRegistry(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DrawServerLayerThemeFactoryRegistry fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DrawServerLayerThemeFactoryRegistry obj = null;
 		if(baseObj instanceof DrawServerLayerThemeFactoryRegistry)
		{
			obj = (DrawServerLayerThemeFactoryRegistry)baseObj;
		} else {
			obj = new DrawServerLayerThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDrawServerLayerThemeFactoryRegistry");
			obj.increaseCast();
		}

		return obj;
	}
}
