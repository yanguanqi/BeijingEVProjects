package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 相机锁定输入交互控制器
 */
public class DynamicCameraLockHandler extends com.earthview.world.spatial3d.controls.Guieventhandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler", new DynamicCameraLockHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::IndustryEngine::DynamicModelLibrary::JCDynamicCameraLockHandlerProxy", new DynamicCameraLockHandlerClassFactory());
	}

	/**
	 * 相机锁定输入交互控制器构造函数
	 * @param ref_camera 相机
	 * @param ref_sceneManager 场景管理器
	 * @param ref_viewport 视口
	 * @param ref_dynamicModelManager 动态目标管理器,该参数对象的生命周期要与本对象保持一致
	 * @param ref_globeControl 地球窗体
	 */
	public DynamicCameraLockHandler(com.earthview.world.spatial3d.GlobeCamera ref_camera, com.earthview.world.graphic.SceneManager ref_sceneManager, com.earthview.world.graphic.Viewport ref_viewport, com.earthview.industryengine.dynamicmodellibrary.DynamicModelObjectManager ref_dynamicModelManager, com.earthview.world.spatial3d.controls.GlobeControl ref_globeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		BasePointer ref_sceneManagerPtr = new BasePointer(ref_sceneManager);
		list.add("ref_sceneManager", ref_sceneManagerPtr.get());
		BasePointer ref_viewportPtr = new BasePointer(ref_viewport);
		list.add("ref_viewport", ref_viewportPtr.get());
		BasePointer ref_dynamicModelManagerPtr = new BasePointer(ref_dynamicModelManager);
		list.add("ref_dynamicModelManager", ref_dynamicModelManagerPtr.get());
		BasePointer ref_globeControlPtr = new BasePointer(ref_globeControl);
		list.add("ref_globeControl", ref_globeControlPtr.get());
		Create("JCDynamicCameraLockHandlerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.industryengine.dynamicmodellibrary.DynamicCameraLockHandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 响应处理消息
	 * @param guiEvent 消息事件
	 * @return true为处理成功，false为处理失败
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

	native private boolean handleMouseUpEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 响应鼠标弹起消息
	 * @param guiEvent 消息事件
	 * @return true为处理成功，false为处理失败
	 */
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 响应帧事件消息
	 * @param guiEvent 消息事件
	 * @return true为处理成功，false为处理失败
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 响应鼠标按下消息
	 * @param guiEvent 消息事件
	 * @return true为处理成功，false为处理失败
	 */
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 响应鼠标移动消息
	 * @param guiEvent 消息事件
	 * @return true为处理成功，false为处理失败
	 */
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseWheelEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 响应滚动鼠标滑轮消息
	 * @param guiEvent 消息事件
	 * @return true为处理成功，false为处理失败
	 */
	public boolean handleMouseWheelEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleMouseWheelEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleKeyEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 响应键盘消息
	 * @param guiEvent 消息事件
	 * @return true为处理成功，false为处理失败
	 */
	public boolean handleKeyEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleKeyEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	public DynamicCameraLockHandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DynamicCameraLockHandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static DynamicCameraLockHandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DynamicCameraLockHandler obj = null;
 		if(baseObj instanceof DynamicCameraLockHandler)
		{
			obj = (DynamicCameraLockHandler)baseObj;
		} else {
			obj = new DynamicCameraLockHandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDynamicCameraLockHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
