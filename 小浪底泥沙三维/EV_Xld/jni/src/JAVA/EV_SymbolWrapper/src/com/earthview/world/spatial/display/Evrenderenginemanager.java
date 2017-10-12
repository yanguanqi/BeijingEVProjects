package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evrenderenginemanager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::EVRenderEngineManager", new EvrenderenginemanagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	public static com.earthview.world.spatial.display.Evrenderenginemanager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Evrenderenginemanager __returnValue = new com.earthview.world.spatial.display.Evrenderenginemanager(CreatedWhenConstruct.CWC_NotToCreate, "EVRenderEngineManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Evrenderenginemanager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "EVRenderEngineManager");
		}
		return __returnValue;
	}
	native private void setCurrentRenderEngine_CRenderEngine(long pNativeObject, long renderEngine);
	/**
	 * 设置当前绘制引擎，设置NULL使用默认引擎
	 */
	public void setCurrentRenderEngine(com.earthview.world.spatial.display.RenderEngine renderEngine)
	{
		long renderEngineParamValue = (renderEngine == null ? 0L : renderEngine.nativeObject.pointer);
		setCurrentRenderEngine_CRenderEngine(this.nativeObject.pointer, renderEngineParamValue);
	}
	native private long getCurrentRenderEngine_void(long pNativeObject);
	/**
	 * 获取当前绘制引擎
	 */
	public com.earthview.world.spatial.display.RenderEngine getCurrentRenderEngine()
	{
		long returnValue = getCurrentRenderEngine_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.RenderEngine __returnValue = new com.earthview.world.spatial.display.RenderEngine(CreatedWhenConstruct.CWC_NotToCreate, "CRenderEngine");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.RenderEngine)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderEngine");
		}
		return __returnValue;
	}
	native private void registerRenderEngine_CRenderEngine(long pNativeObject, long pEngine);
	public void registerRenderEngine(com.earthview.world.spatial.display.RenderEngine pEngine)
	{
		long pEngineParamValue = (pEngine == null ? 0L : pEngine.nativeObject.pointer);
		registerRenderEngine_CRenderEngine(this.nativeObject.pointer, pEngineParamValue);
	}
	native private long getRenderEngine_EVString(long pNativeObject, String engineName);
	public com.earthview.world.spatial.display.RenderEngine getRenderEngine(String engineName)
	{
		String engineNameParamValue = engineName;
		long returnValue = getRenderEngine_EVString(this.nativeObject.pointer, engineNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.RenderEngine __returnValue = new com.earthview.world.spatial.display.RenderEngine(CreatedWhenConstruct.CWC_NotToCreate, "CRenderEngine");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.RenderEngine)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderEngine");
		}
		return __returnValue;
	}
	native private long getRenderEngine_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.display.RenderEngine getRenderEngine(long index)
	{
		long indexParamValue = index;
		long returnValue = getRenderEngine_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.RenderEngine __returnValue = new com.earthview.world.spatial.display.RenderEngine(CreatedWhenConstruct.CWC_NotToCreate, "CRenderEngine");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.RenderEngine)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CRenderEngine");
		}
		return __returnValue;
	}
	native private long getRenderEngineCount_void(long pNativeObject);
	public long getRenderEngineCount()
	{
		long returnValue = getRenderEngineCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void loadEngines_void(long pNativeObject);
	public void loadEngines()
	{
		loadEngines_void(this.nativeObject.pointer);
	}
	public Evrenderenginemanager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evrenderenginemanager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evrenderenginemanager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evrenderenginemanager obj = null;
 		if(baseObj instanceof Evrenderenginemanager)
		{
			obj = (Evrenderenginemanager)baseObj;
		} else {
			obj = new Evrenderenginemanager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EVRenderEngineManager");
			obj.increaseCast();
		}

		return obj;
	}
}
