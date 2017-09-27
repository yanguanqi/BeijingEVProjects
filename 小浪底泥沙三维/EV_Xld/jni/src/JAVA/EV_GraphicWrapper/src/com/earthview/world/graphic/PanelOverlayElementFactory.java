package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PanelOverlayElementFactory extends com.earthview.world.graphic.OverlayElementFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPanelOverlayElementFactory", new PanelOverlayElementFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPanelOverlayElementFactoryProxy", new PanelOverlayElementFactoryClassFactory());
	}

	public PanelOverlayElementFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCPanelOverlayElementFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PanelOverlayElementFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long createOverlayElement_EVString(long pNativeObject, String instanceName);
	public com.earthview.world.graphic.OverlayElement createOverlayElement(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = createOverlayElement_EVString(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}
	native private long createOverlayElement_EVString_NoVirtual(long pNativeObject, String instanceName);
	protected com.earthview.world.graphic.OverlayElement createOverlayElement_NoVirtual(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		long returnValue = createOverlayElement_EVString_NoVirtual(this.nativeObject.pointer, instanceNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.OverlayElement __returnValue = new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate, "COverlayElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.OverlayElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "COverlayElement");
		}
		return __returnValue;
	}

	native private String getTypeName_void(long pNativeObject);
	public String getTypeName()
	{
		String returnValue = getTypeName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTypeName_void_NoVirtual(long pNativeObject);
	protected String getTypeName_NoVirtual()
	{
		String returnValue = getTypeName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public PanelOverlayElementFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PanelOverlayElementFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void destroyOverlayElement(com.earthview.world.graphic.OverlayElement pElement)
	{
		super.destroyOverlayElement_NoVirtual(pElement);
	}
	
	native protected void register_createOverlayElement_EVString(long pNativeObject, String method);
	native protected void register_destroyOverlayElement_COverlayElement(long pNativeObject, String method);
	native protected void register_getTypeName_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createOverlayElement_EVString(this.nativeObject.pointer, "createOverlayElement_EVString_callback");
			this.register_destroyOverlayElement_COverlayElement(this.nativeObject.pointer, "destroyOverlayElement_COverlayElement_callback");
			this.register_getTypeName_void(this.nativeObject.pointer, "getTypeName_void_callback");
		}
	}
	
	public static PanelOverlayElementFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PanelOverlayElementFactory obj = null;
 		if(baseObj instanceof PanelOverlayElementFactory)
		{
			obj = (PanelOverlayElementFactory)baseObj;
		} else {
			obj = new PanelOverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPanelOverlayElementFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
