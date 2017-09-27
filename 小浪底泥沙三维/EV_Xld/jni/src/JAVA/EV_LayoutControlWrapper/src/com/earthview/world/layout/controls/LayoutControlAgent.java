package com.earthview.world.layout.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///纸上"握紧手"样式
public class LayoutControlAgent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutControlAgent", new LayoutControlAgentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutControlAgentProxy", new LayoutControlAgentClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public LayoutControlAgent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLayoutControlAgentProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.layout.controls.LayoutControlAgent".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long onGetLayoutCanvas_void_callback()
	{
		com.earthview.world.display.Ipaintdevice returnValue = onGetLayoutCanvas();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long onGetLayoutCanvas_void(long pNativeObject);
	/**
	 * 获取布局设备
	 * @param  
	 * @return 布局设备
	 */
	public com.earthview.world.display.Ipaintdevice onGetLayoutCanvas()
	{
		long returnValue = onGetLayoutCanvas_void(this.nativeObject.pointer);
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
	native private long onGetLayoutCanvas_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ipaintdevice onGetLayoutCanvas_NoVirtual()
	{
		long returnValue = onGetLayoutCanvas_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void onSetCursor_ev_int32_callback(int value)
	{
		int valueParamValue = value;
		onSetCursor(valueParamValue);
	}

	native private void onSetCursor_ev_int32(long pNativeObject, int value);
	/**
	 * 设置光标样式
	 * @param value 光标样式
	 */
	public void onSetCursor(int value)
	{
		int valueParamValue = value;
		onSetCursor_ev_int32(this.nativeObject.pointer, valueParamValue);
	}
	native private void onSetCursor_ev_int32_NoVirtual(long pNativeObject, int value);
	protected void onSetCursor_NoVirtual(int value)
	{
		int valueParamValue = value;
		onSetCursor_ev_int32_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	public LayoutControlAgent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LayoutControlAgent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onGetLayoutCanvas_void(long pNativeObject, String method);
	native protected void register_onRepaint_void(long pNativeObject, String method);
	native protected void register_onSetCursor_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onGetLayoutCanvas_void(this.nativeObject.pointer, "onGetLayoutCanvas_void_callback");
			this.register_onRepaint_void(this.nativeObject.pointer, "onRepaint_void_callback");
			this.register_onSetCursor_ev_int32(this.nativeObject.pointer, "onSetCursor_ev_int32_callback");
		}
	}
	
	public static LayoutControlAgent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LayoutControlAgent obj = null;
 		if(baseObj instanceof LayoutControlAgent)
		{
			obj = (LayoutControlAgent)baseObj;
		} else {
			obj = new LayoutControlAgent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLayoutControlAgent");
			obj.increaseCast();
		}

		return obj;
	}
}
