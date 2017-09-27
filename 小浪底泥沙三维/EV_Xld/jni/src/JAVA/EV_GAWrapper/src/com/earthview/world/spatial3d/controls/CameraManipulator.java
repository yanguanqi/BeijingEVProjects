package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraManipulator extends com.earthview.world.spatial3d.controls.Guieventhandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCameraManipulator", new CameraManipulatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCameraManipulatorProxy", new CameraManipulatorClassFactory());
	}

	/**
	 * 构造函数
	 * @param camera 相机
	 * @param viewport 视口
	 */
	public CameraManipulator(com.earthview.world.graphic.Camera ref_camera, com.earthview.world.graphic.Viewport ref_viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		BasePointer ref_viewportPtr = new BasePointer(ref_viewport);
		list.add("ref_viewport", ref_viewportPtr.get());
		Create("JCCameraManipulatorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CameraManipulator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 事件处理接口
	 * @param guiEvent 事件对象
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

	protected  boolean handleMouseEvent_CGUIEvent_callback(long mouseEvent)
	{
		com.earthview.world.spatial.systemui.Guievent mouseEventParamValue = (mouseEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(mouseEventParamValue != null)
		{
		mouseEventParamValue.setDelegate(true);
		mouseEventParamValue.setInstancePointer(new InstancePointer(mouseEvent));
		IClassFactory mouseEventParamValueClassFactory = GlobalClassFactoryMap.get(mouseEventParamValue.getCppInstanceTypeName());
		if (mouseEventParamValueClassFactory != null)
		{
			mouseEventParamValue.setDelegate(true);
			mouseEventParamValue = (com.earthview.world.spatial.systemui.Guievent)mouseEventParamValueClassFactory.create();
			mouseEventParamValue.setDelegate(true);
			mouseEventParamValue.setInstancePointer(new InstancePointer(mouseEvent));
		}
		}
		boolean returnValue = handleMouseEvent(mouseEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 鼠标事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseEvent_CGUIEvent_NoVirtual(long pNativeObject, long mouseEvent);
	protected boolean handleMouseEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}

	protected  boolean handleUserEvent_CGUIEvent_callback(long userEvent)
	{
		com.earthview.world.spatial.systemui.Guievent userEventParamValue = (userEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(userEventParamValue != null)
		{
		userEventParamValue.setDelegate(true);
		userEventParamValue.setInstancePointer(new InstancePointer(userEvent));
		IClassFactory userEventParamValueClassFactory = GlobalClassFactoryMap.get(userEventParamValue.getCppInstanceTypeName());
		if (userEventParamValueClassFactory != null)
		{
			userEventParamValue.setDelegate(true);
			userEventParamValue = (com.earthview.world.spatial.systemui.Guievent)userEventParamValueClassFactory.create();
			userEventParamValue.setDelegate(true);
			userEventParamValue.setInstancePointer(new InstancePointer(userEvent));
		}
		}
		boolean returnValue = handleUserEvent(userEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long userEvent);
	/**
	 * 自定义事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		long userEventParamValue = (userEvent == null ? 0L : userEvent.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent(this.nativeObject.pointer, userEventParamValue);
		return returnValue;
	}
	native private boolean handleUserEvent_CGUIEvent_NoVirtual(long pNativeObject, long userEvent);
	protected boolean handleUserEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		long userEventParamValue = (userEvent == null ? 0L : userEvent.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, userEventParamValue);
		return returnValue;
	}

	protected  boolean handleKeyEvent_CGUIEvent_callback(long keyEvent)
	{
		com.earthview.world.spatial.systemui.Guievent keyEventParamValue = (keyEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(keyEventParamValue != null)
		{
		keyEventParamValue.setDelegate(true);
		keyEventParamValue.setInstancePointer(new InstancePointer(keyEvent));
		IClassFactory keyEventParamValueClassFactory = GlobalClassFactoryMap.get(keyEventParamValue.getCppInstanceTypeName());
		if (keyEventParamValueClassFactory != null)
		{
			keyEventParamValue.setDelegate(true);
			keyEventParamValue = (com.earthview.world.spatial.systemui.Guievent)keyEventParamValueClassFactory.create();
			keyEventParamValue.setDelegate(true);
			keyEventParamValue.setInstancePointer(new InstancePointer(keyEvent));
		}
		}
		boolean returnValue = handleKeyEvent(keyEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleKeyEvent_CGUIEvent(long pNativeObject, long keyEvent);
	/**
	 * 键盘事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleKeyEvent(com.earthview.world.spatial.systemui.Guievent keyEvent)
	{
		long keyEventParamValue = (keyEvent == null ? 0L : keyEvent.nativeObject.pointer);
		boolean returnValue = handleKeyEvent_CGUIEvent(this.nativeObject.pointer, keyEventParamValue);
		return returnValue;
	}
	native private boolean handleKeyEvent_CGUIEvent_NoVirtual(long pNativeObject, long keyEvent);
	protected boolean handleKeyEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent keyEvent)
	{
		long keyEventParamValue = (keyEvent == null ? 0L : keyEvent.nativeObject.pointer);
		boolean returnValue = handleKeyEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, keyEventParamValue);
		return returnValue;
	}

	protected  boolean handleFrameEvent_CGUIEvent_callback(long frameEvent)
	{
		com.earthview.world.spatial.systemui.Guievent frameEventParamValue = (frameEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(frameEventParamValue != null)
		{
		frameEventParamValue.setDelegate(true);
		frameEventParamValue.setInstancePointer(new InstancePointer(frameEvent));
		IClassFactory frameEventParamValueClassFactory = GlobalClassFactoryMap.get(frameEventParamValue.getCppInstanceTypeName());
		if (frameEventParamValueClassFactory != null)
		{
			frameEventParamValue.setDelegate(true);
			frameEventParamValue = (com.earthview.world.spatial.systemui.Guievent)frameEventParamValueClassFactory.create();
			frameEventParamValue.setDelegate(true);
			frameEventParamValue.setInstancePointer(new InstancePointer(frameEvent));
		}
		}
		boolean returnValue = handleFrameEvent(frameEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long frameEvent);
	/**
	 * 帧事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent frameEvent)
	{
		long frameEventParamValue = (frameEvent == null ? 0L : frameEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent(this.nativeObject.pointer, frameEventParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_NoVirtual(long pNativeObject, long frameEvent);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent frameEvent)
	{
		long frameEventParamValue = (frameEvent == null ? 0L : frameEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, frameEventParamValue);
		return returnValue;
	}

	protected  void reset_void_callback()
	{
		reset();
	}

	native private void reset_void(long pNativeObject);
	/**
	 * 重置状态
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private void reset_void_NoVirtual(long pNativeObject);
	protected void reset_NoVirtual()
	{
		reset_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long computeViewportMatrix_void_callback()
	{
		com.earthview.world.spatial.math.Matrix4 returnValue = computeViewportMatrix();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long computeViewportMatrix_void(long pNativeObject);
	/**
	 * 返回视口矩阵
	 */
	public com.earthview.world.spatial.math.Matrix4 computeViewportMatrix()
	{
		long returnValue = computeViewportMatrix_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}
	native private long computeViewportMatrix_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Matrix4 computeViewportMatrix_NoVirtual()
	{
		long returnValue = computeViewportMatrix_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Matrix4 __returnValue = new com.earthview.world.spatial.math.Matrix4(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Matrix4)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CMatrix4");
		}
		return __returnValue;
	}

	native private long get_mcamera_void(long pNativeObject);
	public com.earthview.world.graphic.Camera get_mcamera()
	{
		long jniValue = get_mcamera_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Camera __returnValue = new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate, "CCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Camera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCamera");
		}
		return __returnValue;
	}
	
	native private void set_mcamera_CCamera (long pNativeObject, long value);
	public void set_mcamera(com.earthview.world.graphic.Camera mcamera)
	{
		long mcameraParamValue = (mcamera == null ? 0L : mcamera.nativeObject.pointer);
		
		set_mcamera_CCamera(this.nativeObject.pointer, mcameraParamValue);
	}
	
	native private long get_mviewport_void(long pNativeObject);
	public com.earthview.world.graphic.Viewport get_mviewport()
	{
		long jniValue = get_mviewport_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.Viewport)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CViewport");
		}
		return __returnValue;
	}
	
	native private void set_mviewport_CViewport (long pNativeObject, long value);
	public void set_mviewport(com.earthview.world.graphic.Viewport mviewport)
	{
		long mviewportParamValue = (mviewport == null ? 0L : mviewport.nativeObject.pointer);
		
		set_mviewport_CViewport(this.nativeObject.pointer, mviewportParamValue);
	}
	
	native private long get_mlastGuiEvent_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guievent get_mlastGuiEvent()
	{
		long jniValue = get_mlastGuiEvent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Guievent __returnValue = new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guievent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEvent");
		}
		return __returnValue;
	}
	
	native private void set_mlastGuiEvent_CGUIEvent (long pNativeObject, long value);
	public void set_mlastGuiEvent(com.earthview.world.spatial.systemui.Guievent mlastGuiEvent)
	{
		long mlastGuiEventParamValue = (mlastGuiEvent == null ? 0L : mlastGuiEvent.nativeObject.pointer);
		
		set_mlastGuiEvent_CGUIEvent(this.nativeObject.pointer, mlastGuiEventParamValue);
	}
	
	native private long get_mcurrentEvent_void(long pNativeObject);
	public com.earthview.world.spatial.systemui.Guievent get_mcurrentEvent()
	{
		long jniValue = get_mcurrentEvent_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Guievent __returnValue = new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate, "CGUIEvent");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Guievent)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGUIEvent");
		}
		return __returnValue;
	}
	
	native private void set_mcurrentEvent_CGUIEvent (long pNativeObject, long value);
	public void set_mcurrentEvent(com.earthview.world.spatial.systemui.Guievent mcurrentEvent)
	{
		long mcurrentEventParamValue = (mcurrentEvent == null ? 0L : mcurrentEvent.nativeObject.pointer);
		
		set_mcurrentEvent_CGUIEvent(this.nativeObject.pointer, mcurrentEventParamValue);
	}
	
	public CameraManipulator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CameraManipulator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handleMouseEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_computeViewportMatrix_void(long pNativeObject, String method);
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleMouseEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_handleKeyEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_computeViewportMatrix_void(this.nativeObject.pointer, "computeViewportMatrix_void_callback");
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static CameraManipulator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CameraManipulator obj = null;
 		if(baseObj instanceof CameraManipulator)
		{
			obj = (CameraManipulator)baseObj;
		} else {
			obj = new CameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCameraManipulator");
			obj.increaseCast();
		}

		return obj;
	}
}
