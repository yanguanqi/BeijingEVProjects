package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeCamUnderGroundHandler extends com.earthview.world.spatial3d.controls.GlobeLockCameraHandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeCamUnderGroundHandler", new GlobeCamUnderGroundHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGlobeCamUnderGroundHandlerProxy", new GlobeCamUnderGroundHandlerClassFactory());
	}

	/**
	 * 构造函数
	 * @param sceneManager 场景管理器
	 * @param camera 相机
	 * @param cameraManipulator 相机漫游器
	 */
	public GlobeCamUnderGroundHandler(com.earthview.world.spatial3d.GlobeCamera camera, com.earthview.world.spatial3d.GeoSceneManager sceneManager, com.earthview.world.graphic.Viewport viewport, com.earthview.world.spatial3d.controls.GlobeCameraManipulator cameraManipulator) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cameraPtr = new BasePointer(camera);
		list.add("camera", cameraPtr.get());
		BasePointer sceneManagerPtr = new BasePointer(sceneManager);
		list.add("sceneManager", sceneManagerPtr.get());
		BasePointer viewportPtr = new BasePointer(viewport);
		list.add("viewport", viewportPtr.get());
		BasePointer cameraManipulatorPtr = new BasePointer(cameraManipulator);
		list.add("cameraManipulator", cameraManipulatorPtr.get());
		Create("JCGlobeCamUnderGroundHandlerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GlobeCamUnderGroundHandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 事件处理
	 * @param guiEvent 事件对象
	 * @return 事件是否已被处理
	 */
	public boolean handleEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	native private double computeAltitudeDelta_CVector3(long pNativeObject, long v);
	/**
	 * 判断传入点高程是否大于指定高程
	 * @param v 传入点
	 * @return 传入点高程与指定高程的高差
	 */
	public double computeAltitudeDelta(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		double returnValue = computeAltitudeDelta_CVector3(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}
	native private double computeAltitudeDelta_CVector3_NoVirtual(long pNativeObject, long v);
	protected double computeAltitudeDelta_NoVirtual(com.earthview.world.spatial.math.Vector3 v)
	{
		long vParamValue = v.nativeObject.pointer;
		double returnValue = computeAltitudeDelta_CVector3_NoVirtual(this.nativeObject.pointer, vParamValue);
		return returnValue;
	}

	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 鼠标移动事件处理
	 * @param mouseEvent 鼠标事件对象
	 * @return 事件是否已被处理
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseMoveEvent_CGUIEvent_NoVirtual(long pNativeObject, long mouseEvent);
	protected boolean handleMouseMoveEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}

	native private boolean handleMouseWheelEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 鼠标滚轮事件处理
	 * @param mouseEvent 鼠标事件对象
	 * @return 事件是否已被处理
	 */
	public boolean handleMouseWheelEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseWheelEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseWheelEvent_CGUIEvent_NoVirtual(long pNativeObject, long mouseEvent);
	protected boolean handleMouseWheelEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseWheelEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}

	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 鼠标按下事件处理
	 * @param mouseEvent 鼠标事件对象
	 * @return 事件是否已被处理
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseDownEvent_CGUIEvent_NoVirtual(long pNativeObject, long mouseEvent);
	protected boolean handleMouseDownEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}

	native private boolean handleMouseUp_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 鼠标抬起事件处理
	 * @param mouseEvent 鼠标事件对象
	 * @return 事件是否已被处理
	 */
	public boolean handleMouseUp(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUp_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseUp_CGUIEvent_NoVirtual(long pNativeObject, long mouseEvent);
	protected boolean handleMouseUp_NoVirtual(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUp_CGUIEvent_NoVirtual(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}

	public GlobeCamUnderGroundHandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeCamUnderGroundHandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 处理自定义事件
	 * @param userEvent 事件对象
	 */
	public boolean handleUseEvent(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		return super.handleUseEvent_NoVirtual(userEvent);
	}
	/**
	 * 处理帧事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		return super.handleFrameEvent_NoVirtual(guiEvent);
	}
	
	native protected void register_handleUseEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseDownEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseMoveEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseUp_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseWheelEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_computeAltitudeDelta_CVector3(long pNativeObject, String method);
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleUseEvent_CGUIEvent(this.nativeObject.pointer, "handleUseEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_callback");
			this.register_handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseDownEvent_CGUIEvent_callback");
			this.register_handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseMoveEvent_CGUIEvent_callback");
			this.register_handleMouseUp_CGUIEvent(this.nativeObject.pointer, "handleMouseUp_CGUIEvent_callback");
			this.register_handleMouseWheelEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseWheelEvent_CGUIEvent_callback");
			this.register_computeAltitudeDelta_CVector3(this.nativeObject.pointer, "computeAltitudeDelta_CVector3_callback");
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static GlobeCamUnderGroundHandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeCamUnderGroundHandler obj = null;
 		if(baseObj instanceof GlobeCamUnderGroundHandler)
		{
			obj = (GlobeCamUnderGroundHandler)baseObj;
		} else {
			obj = new GlobeCamUnderGroundHandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeCamUnderGroundHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
