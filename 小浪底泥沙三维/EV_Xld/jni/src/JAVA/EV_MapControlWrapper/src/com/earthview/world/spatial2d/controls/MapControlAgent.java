package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地图控件代理对象
 */
public class MapControlAgent extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CMapControlAgent", new MapControlAgentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCMapControlAgentProxy", new MapControlAgentClassFactory());
	}

	public MapControlAgent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMapControlAgentProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial2d.controls.MapControlAgent".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long onGetMapCanvas_void_callback()
	{
		com.earthview.world.display.Ipaintdevice returnValue = onGetMapCanvas();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long onGetMapCanvas_void(long pNativeObject);
	/**
	 * 获取地图画面
	 * @param  
	 * @return 地图画面指针
	 */
	public com.earthview.world.display.Ipaintdevice onGetMapCanvas()
	{
		long returnValue = onGetMapCanvas_void(this.nativeObject.pointer);
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
	native private long onGetMapCanvas_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ipaintdevice onGetMapCanvas_NoVirtual()
	{
		long returnValue = onGetMapCanvas_void_NoVirtual(this.nativeObject.pointer);
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
	 * 刷新画布
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

	public MapControlAgent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapControlAgent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_onGetMapCanvas_void(long pNativeObject, String method);
	native protected void register_onRepaint_void(long pNativeObject, String method);
	native protected void register_onSetCursor_ev_int32(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onGetMapCanvas_void(this.nativeObject.pointer, "onGetMapCanvas_void_callback");
			this.register_onRepaint_void(this.nativeObject.pointer, "onRepaint_void_callback");
			this.register_onSetCursor_ev_int32(this.nativeObject.pointer, "onSetCursor_ev_int32_callback");
		}
	}
	
	public static MapControlAgent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapControlAgent obj = null;
 		if(baseObj instanceof MapControlAgent)
		{
			obj = (MapControlAgent)baseObj;
		} else {
			obj = new MapControlAgent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapControlAgent");
			obj.increaseCast();
		}

		return obj;
	}
}
