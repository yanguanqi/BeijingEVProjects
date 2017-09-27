package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeLockCameraHandler extends com.earthview.world.spatial3d.controls.Guieventhandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeLockCameraHandler", new GlobeLockCameraHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGlobeLockCameraHandlerProxy", new GlobeLockCameraHandlerClassFactory());
	}

	public enum RotationMode implements INativeEnum<RotationMode> {
		ROTATIONBYUP(RotationModeHelper.ENUM_VALUES[0]),
		ROTATIONBYLOOK(RotationModeHelper.ENUM_VALUES[1]);
		private int value;
		RotationMode(int i) {
			this.value = i;
		}
		public RotationMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final RotationMode toEnum(int retval) {
			if(retval == ROTATIONBYUP.value){
				return ROTATIONBYUP;
			}
			else if(retval == ROTATIONBYLOOK.value){
				return ROTATIONBYLOOK;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class RotationModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum LockMode implements INativeEnum<LockMode> {
		FirstPersonMode(LockModeHelper.ENUM_VALUES[0]),
		ThirdPersonMode(LockModeHelper.ENUM_VALUES[1]);
		private int value;
		LockMode(int i) {
			this.value = i;
		}
		public LockMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final LockMode toEnum(int retval) {
			if(retval == FirstPersonMode.value){
				return FirstPersonMode;
			}
			else if(retval == ThirdPersonMode.value){
				return ThirdPersonMode;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class LockModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param globeCamera 相机
	 * @param sceneManager 场景管理器
	 * @param viewport 视口
	 */
	public GlobeLockCameraHandler(com.earthview.world.spatial3d.GlobeCamera globeCamera, com.earthview.world.spatial3d.GeoSceneManager sceneManager, com.earthview.world.graphic.Viewport viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer globeCameraPtr = new BasePointer(globeCamera);
		list.add("globeCamera", globeCameraPtr.get());
		BasePointer sceneManagerPtr = new BasePointer(sceneManager);
		list.add("sceneManager", sceneManagerPtr.get());
		BasePointer viewportPtr = new BasePointer(viewport);
		list.add("viewport", viewportPtr.get());
		Create("JCGlobeLockCameraHandlerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GlobeLockCameraHandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  boolean handleUseEvent_CGUIEvent_callback(long userEvent)
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
		boolean returnValue = handleUseEvent(userEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleUseEvent_CGUIEvent(long pNativeObject, long userEvent);
	/**
	 * 处理自定义事件
	 * @param userEvent 事件对象
	 */
	public boolean handleUseEvent(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		long userEventParamValue = (userEvent == null ? 0L : userEvent.nativeObject.pointer);
		boolean returnValue = handleUseEvent_CGUIEvent(this.nativeObject.pointer, userEventParamValue);
		return returnValue;
	}
	native private boolean handleUseEvent_CGUIEvent_NoVirtual(long pNativeObject, long userEvent);
	protected boolean handleUseEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		long userEventParamValue = (userEvent == null ? 0L : userEvent.nativeObject.pointer);
		boolean returnValue = handleUseEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, userEventParamValue);
		return returnValue;
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理事件
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

	protected  boolean handleFrameEvent_CGUIEvent_callback(long guiEvent)
	{
		com.earthview.world.spatial.systemui.Guievent guiEventParamValue = (guiEvent == 0L ? null : new com.earthview.world.spatial.systemui.Guievent(CreatedWhenConstruct.CWC_NotToCreate));
		if(guiEventParamValue != null)
		{
		guiEventParamValue.setDelegate(true);
		guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		IClassFactory guiEventParamValueClassFactory = GlobalClassFactoryMap.get(guiEventParamValue.getCppInstanceTypeName());
		if (guiEventParamValueClassFactory != null)
		{
			guiEventParamValue.setDelegate(true);
			guiEventParamValue = (com.earthview.world.spatial.systemui.Guievent)guiEventParamValueClassFactory.create();
			guiEventParamValue.setDelegate(true);
			guiEventParamValue.setInstancePointer(new InstancePointer(guiEvent));
		}
		}
		boolean returnValue = handleFrameEvent(guiEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 处理帧事件
	 * @param guiEvent 事件对象
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_NoVirtual(long pNativeObject, long guiEvent);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		long guiEventParamValue = (guiEvent == null ? 0L : guiEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, guiEventParamValue);
		return returnValue;
	}

	protected  boolean handleMouseDownEvent_CGUIEvent_callback(long mouseEvent)
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
		boolean returnValue = handleMouseDownEvent(mouseEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 处理鼠标按下事件
	 * @param guiEvent 事件对象
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

	protected  boolean handleMouseMoveEvent_CGUIEvent_callback(long mouseEvent)
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
		boolean returnValue = handleMouseMoveEvent(mouseEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 处理鼠标移动事件
	 * @param guiEvent 事件对象
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

	protected  boolean handleMouseUp_CGUIEvent_callback(long mouseEvent)
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
		boolean returnValue = handleMouseUp(mouseEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseUp_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 处理鼠标松开事件
	 * @param guiEvent 事件对象
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

	protected  boolean handleMouseWheelEvent_CGUIEvent_callback(long mouseEvent)
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
		boolean returnValue = handleMouseWheelEvent(mouseEventParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean handleMouseWheelEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 处理鼠标滚轮事件
	 * @param guiEvent 事件对象
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

	native private boolean calculateMoveable_CGUIEvent_CGUIEvent(long pNativeObject, long firstEvent, long secondEvent);
	/**
	 * 计算鼠标是否移动
	 * @param firstEvent 前一个鼠标事件对象
	 * @param secondEvent 当前鼠标事件对象
	 */
	public boolean calculateMoveable(com.earthview.world.spatial.systemui.Guievent firstEvent, com.earthview.world.spatial.systemui.Guievent secondEvent)
	{
		long firstEventParamValue = (firstEvent == null ? 0L : firstEvent.nativeObject.pointer);
		long secondEventParamValue = (secondEvent == null ? 0L : secondEvent.nativeObject.pointer);
		boolean returnValue = calculateMoveable_CGUIEvent_CGUIEvent(this.nativeObject.pointer, firstEventParamValue, secondEventParamValue);
		return returnValue;
	}
	protected  double computeAltitudeDelta_CVector3_callback(long v)
	{
		com.earthview.world.spatial.math.Vector3 vParamValue = new com.earthview.world.spatial.math.Vector3(CreatedWhenConstruct.CWC_NotToCreate);
		vParamValue.setDelegate(true);
		vParamValue.setInstancePointer(new InstancePointer(v));
		IClassFactory vParamValueClassFactory = GlobalClassFactoryMap.get(vParamValue.getCppInstanceTypeName());
		if (vParamValueClassFactory != null)
		{
			vParamValue.setDelegate(true);
			vParamValue = (com.earthview.world.spatial.math.Vector3)vParamValueClassFactory.create();
			vParamValue.setDelegate(true);
			vParamValue.setInstancePointer(new InstancePointer(v));
		}
		double returnValue = computeAltitudeDelta(vParamValue);
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double computeAltitudeDelta_CVector3(long pNativeObject, long v);
	/**
	 * 计逄相机的海拔差
	 * @param v 相机的位置
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

	native private boolean needResetCamera_void(long pNativeObject);
	/**
	 * 需要重置相机
	 */
	public boolean needResetCamera()
	{
		boolean returnValue = needResetCamera_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double calculateZoomFactor_ev_real32(long pNativeObject, float mouseWheelDelta);
	/**
	 * 计逄相机的缩放比例
	 * @param mouseWheelDelta 鼠标滚轮的变化量
	 */
	public double calculateZoomFactor(float mouseWheelDelta)
	{
		float mouseWheelDeltaParamValue = mouseWheelDelta;
		double returnValue = calculateZoomFactor_ev_real32(this.nativeObject.pointer, mouseWheelDeltaParamValue);
		return returnValue;
	}
	native private void reset_void(long pNativeObject);
	/**
	 * 重置
	 */
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	native private int getRotationMode_void(long pNativeObject);
	/**
	 * 获取旋转方式
	 */
	public com.earthview.world.spatial3d.controls.GlobeLockCameraHandler.RotationMode getRotationMode()
	{
		int returnValue = getRotationMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.controls.GlobeLockCameraHandler.RotationMode.toEnum(returnValue);
	}
	native private void setRotationMode_RotationMode(long pNativeObject, int rotationMode);
	/**
	 * 设置旋转方式
	 */
	public void setRotationMode(com.earthview.world.spatial3d.controls.GlobeLockCameraHandler.RotationMode rotationMode)
	{
		int rotationModeParamValue = rotationMode.getValue();
		setRotationMode_RotationMode(this.nativeObject.pointer, rotationModeParamValue);
	}
	native private void setEnable_ev_bool(long pNativeObject, boolean enbale);
	/**
	 * 设置是否可用
	 */
	public void setEnable(boolean enbale)
	{
		boolean enbaleParamValue = enbale;
		setEnable_ev_bool(this.nativeObject.pointer, enbaleParamValue);
	}
	native private boolean getEnable_void(long pNativeObject);
	/**
	 * 获取是否可用
	 * @return 是否可用
	 */
	public boolean getEnable()
	{
		boolean returnValue = getEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	public GlobeLockCameraHandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeLockCameraHandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static GlobeLockCameraHandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeLockCameraHandler obj = null;
 		if(baseObj instanceof GlobeLockCameraHandler)
		{
			obj = (GlobeLockCameraHandler)baseObj;
		} else {
			obj = new GlobeLockCameraHandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeLockCameraHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
