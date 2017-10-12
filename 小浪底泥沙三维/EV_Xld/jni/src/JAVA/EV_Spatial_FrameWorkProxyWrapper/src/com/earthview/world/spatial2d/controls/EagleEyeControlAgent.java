package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EagleEyeControlAgent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CEagleEyeControlAgent", new EagleEyeControlAgentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCEagleEyeControlAgentProxy", new EagleEyeControlAgentClassFactory());
	}

	public EagleEyeControlAgent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCEagleEyeControlAgentProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.EagleEyeControlAgent".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long getEagleEyeCanvas_void_callback()
	{
		com.earthview.world.display.Ipaintdevice returnValue = getEagleEyeCanvas();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getEagleEyeCanvas_void(long pNativeObject);
	/**
	 * 获取鹰眼画布
	 * @param  
	 * @return 鹰眼画布
	 */
	public com.earthview.world.display.Ipaintdevice getEagleEyeCanvas()
	{
		long returnValue = getEagleEyeCanvas_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}
	native private long getEagleEyeCanvas_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ipaintdevice getEagleEyeCanvas_NoVirtual()
	{
		long returnValue = getEagleEyeCanvas_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ipaintdevice __returnValue = new com.earthview.world.display.Ipaintdevice(CreatedWhenConstruct.CWC_NotToCreate, "IPaintDevice");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ipaintdevice)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPaintDevice");
		}
		return __returnValue;
	}

	protected  void onRepaint_void_callback()
	{
		onRepaint();
	}

	native private void onRepaint_void(long pNativeObject);
	/**
	 * 重绘
	 * @param  
	 */
	public void onRepaint()
	{
		onRepaint_void(this.nativeObject.pointer);
	}
	native private void onRepaint_void_NoVirtual(long pNativeObject);
	protected void onRepaint_NoVirtual()
	{
		onRepaint_void_NoVirtual(this.nativeObject.pointer);
	}

	public EagleEyeControlAgent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EagleEyeControlAgent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getEagleEyeCanvas_void(long pNativeObject, String method);
	native protected void register_onRepaint_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getEagleEyeCanvas_void(this.nativeObject.pointer, "getEagleEyeCanvas_void_callback");
			this.register_onRepaint_void(this.nativeObject.pointer, "onRepaint_void_callback");
		}
	}
	
	public static EagleEyeControlAgent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EagleEyeControlAgent obj = null;
 		if(baseObj instanceof EagleEyeControlAgent)
		{
			obj = (EagleEyeControlAgent)baseObj;
		} else {
			obj = new EagleEyeControlAgent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEagleEyeControlAgent");
			obj.increaseCast();
		}

		return obj;
	}
}
