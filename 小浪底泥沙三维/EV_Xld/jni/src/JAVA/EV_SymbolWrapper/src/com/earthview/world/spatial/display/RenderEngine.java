package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderEngine extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CRenderEngine", new RenderEngineClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCRenderEngineProxy", new RenderEngineClassFactory());
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long createDrawSymbol_ev_int32_callback(int symbolType)
	{
		int symbolTypeParamValue = symbolType;
		com.earthview.world.spatial.display.DrawSymbol returnValue = createDrawSymbol(symbolTypeParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createDrawSymbol_ev_int32(long pNativeObject, int symbolType);
	public com.earthview.world.spatial.display.DrawSymbol createDrawSymbol(int symbolType)
	{
		int symbolTypeParamValue = symbolType;
		long returnValue = createDrawSymbol_ev_int32(this.nativeObject.pointer, symbolTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawSymbol __returnValue = new com.earthview.world.spatial.display.DrawSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CDrawSymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawSymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDrawSymbol");
		}
		return __returnValue;
	}
	native private long createDrawSymbol_ev_int32_NoVirtual(long pNativeObject, int symbolType);
	protected com.earthview.world.spatial.display.DrawSymbol createDrawSymbol_NoVirtual(int symbolType)
	{
		int symbolTypeParamValue = symbolType;
		long returnValue = createDrawSymbol_ev_int32_NoVirtual(this.nativeObject.pointer, symbolTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.DrawSymbol __returnValue = new com.earthview.world.spatial.display.DrawSymbol(CreatedWhenConstruct.CWC_NotToCreate, "CDrawSymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.DrawSymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDrawSymbol");
		}
		return __returnValue;
	}

	public RenderEngine(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderEngine(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_createDrawSymbol_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_createDrawSymbol_ev_int32(this.nativeObject.pointer, "createDrawSymbol_ev_int32_callback");
		}
	}
	
	public static RenderEngine fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderEngine obj = null;
 		if(baseObj instanceof RenderEngine)
		{
			obj = (RenderEngine)baseObj;
		} else {
			obj = new RenderEngine(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderEngine");
			obj.increaseCast();
		}

		return obj;
	}
}
