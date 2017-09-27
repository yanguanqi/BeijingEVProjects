package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OverlayElementFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::COverlayElementFactory", new OverlayElementFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCOverlayElementFactoryProxy", new OverlayElementFactoryClassFactory());
	}

	public OverlayElementFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCOverlayElementFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.OverlayElementFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long createOverlayElement_EVString_callback(String instanceName)
	{
		String instanceNameParamValue = instanceName;
		com.earthview.world.graphic.OverlayElement returnValue = createOverlayElement(instanceNameParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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

	protected  void destroyOverlayElement_COverlayElement_callback(long pElement)
	{
		com.earthview.world.graphic.OverlayElement pElementParamValue = (pElement == 0L ? null : new com.earthview.world.graphic.OverlayElement(CreatedWhenConstruct.CWC_NotToCreate));
		if(pElementParamValue != null)
		{
		pElementParamValue.setDelegate(true);
		pElementParamValue.setInstancePointer(new InstancePointer(pElement));
		IClassFactory pElementParamValueClassFactory = GlobalClassFactoryMap.get(pElementParamValue.getCppInstanceTypeName());
		if (pElementParamValueClassFactory != null)
		{
			pElementParamValue.setDelegate(true);
			pElementParamValue = (com.earthview.world.graphic.OverlayElement)pElementParamValueClassFactory.create();
			pElementParamValue.setDelegate(true);
			pElementParamValue.setInstancePointer(new InstancePointer(pElement));
		}
		}
		destroyOverlayElement(pElementParamValue);
	}

	native private void destroyOverlayElement_COverlayElement(long pNativeObject, long pElement);
	public void destroyOverlayElement(com.earthview.world.graphic.OverlayElement pElement)
	{
		long pElementParamValue = (pElement == null ? 0L : pElement.nativeObject.pointer);
		destroyOverlayElement_COverlayElement(this.nativeObject.pointer, pElementParamValue);
	}
	native private void destroyOverlayElement_COverlayElement_NoVirtual(long pNativeObject, long pElement);
	protected void destroyOverlayElement_NoVirtual(com.earthview.world.graphic.OverlayElement pElement)
	{
		long pElementParamValue = (pElement == null ? 0L : pElement.nativeObject.pointer);
		destroyOverlayElement_COverlayElement_NoVirtual(this.nativeObject.pointer, pElementParamValue);
	}

	protected  String getTypeName_void_callback()
	{
		String returnValue = getTypeName();
		String __returnValue = returnValue;
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

	public OverlayElementFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OverlayElementFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static OverlayElementFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OverlayElementFactory obj = null;
 		if(baseObj instanceof OverlayElementFactory)
		{
			obj = (OverlayElementFactory)baseObj;
		} else {
			obj = new OverlayElementFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COverlayElementFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
