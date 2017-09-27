package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 导航器控件
 */
public class CompassWidget extends com.earthview.world.spatial3d.controls.Widget {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCompassWidget", new CompassWidgetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCompassWidgetProxy", new CompassWidgetClassFactory());
	}

	/**
	 * 构造函数
	 * @param name 名字
	 * @param camera 相机
	 */
	public CompassWidget(String name, com.earthview.world.spatial3d.GlobeCamera ref_camera) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		Create("JCCompassWidgetProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CompassWidget".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setHandleEnable_ev_bool(long pNativeObject, boolean canHandle);
	/**
	 * 是否能处理事件
	 * @param canHandle 
	 */
	public void setHandleEnable(boolean canHandle)
	{
		boolean canHandleParamValue = canHandle;
		setHandleEnable_ev_bool(this.nativeObject.pointer, canHandleParamValue);
	}
	native private void additionMouseUp_void(long pNativeObject);
	/**
	 * 滑动滑块松开鼠标的处理
	 */
	public void additionMouseUp()
	{
		additionMouseUp_void(this.nativeObject.pointer);
	}
	native private void additionMouseUp_void_NoVirtual(long pNativeObject);
	protected void additionMouseUp_NoVirtual()
	{
		additionMouseUp_void_NoVirtual(this.nativeObject.pointer);
	}

	native private boolean handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, long event, long viewport);
	/**
	 * 处理帧事件
	 * @param event 事件对象
	 * @param viewport 视口
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_CViewport_NoVirtual(long pNativeObject, long event, long viewport);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event, com.earthview.world.graphic.Viewport viewport)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		long viewportParamValue = (viewport == null ? 0L : viewport.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_CViewport_NoVirtual(this.nativeObject.pointer, eventParamValue, viewportParamValue);
		return returnValue;
	}

	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标按下事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseDownEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleMouseDownEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	native private boolean handleMouseUpEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标松开事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseUpEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleMouseUpEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理鼠标移动事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseMoveEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleMouseMoveEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long event);
	/**
	 * 处理处定义事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}
	native private boolean handleUserEvent_CGUIEvent_NoVirtual(long pNativeObject, long event);
	protected boolean handleUserEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent event)
	{
		long eventParamValue = (event == null ? 0L : event.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, eventParamValue);
		return returnValue;
	}

	public CompassWidget(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompassWidget(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 处理鼠标按键双击按下事件
	 * @param event 事件对象
	 */
	public boolean handeMouseDbClickEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handeMouseDbClickEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘按下事件
	 * @param event 事件对象
	 */
	public boolean handleKeyDownEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyDownEvent_NoVirtual(event);
	}
	/**
	 * 处理键盘松开事件
	 * @param event 事件对象
	 */
	public boolean handleKeyUpEvent(com.earthview.world.spatial.systemui.Guievent event)
	{
		return super.handleKeyUpEvent_NoVirtual(event);
	}
	
	native protected void register_additionMouseUp_void(long pNativeObject, String method);
	native protected void register_handleMouseUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseMoveEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handeMouseDbClickEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyUpEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent_CViewport(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_additionMouseUp_void(this.nativeObject.pointer, "additionMouseUp_void_callback");
			this.register_handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseUpEvent_CGUIEvent_callback");
			this.register_handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseMoveEvent_CGUIEvent_callback");
			this.register_handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseDownEvent_CGUIEvent_callback");
			this.register_handeMouseDbClickEvent_CGUIEvent(this.nativeObject.pointer, "handeMouseDbClickEvent_CGUIEvent_callback");
			this.register_handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyDownEvent_CGUIEvent_callback");
			this.register_handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyUpEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent_CViewport(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_CViewport_callback");
		}
	}
	
	public static CompassWidget fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompassWidget obj = null;
 		if(baseObj instanceof CompassWidget)
		{
			obj = (CompassWidget)baseObj;
		} else {
			obj = new CompassWidget(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCompassWidget");
			obj.increaseCast();
		}

		return obj;
	}
}
