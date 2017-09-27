package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CollisionDetectionCameraManipulator extends com.earthview.world.spatial3d.controls.CameraManipulator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCollisionDetectionCameraManipulator", new CollisionDetectionCameraManipulatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCollisionDetectionCameraManipulatorProxy", new CollisionDetectionCameraManipulatorClassFactory());
	}

	/**
	 * ππ‘Ï∫Ø ˝
	 * @param ref_manager ≥°æ∞π‹¿Ì∆˜
	 * @param camera œ‡ª˙
	 * @param viewport  ”ø⁄
	 */
	public CollisionDetectionCameraManipulator(com.earthview.world.spatial3d.GeoSceneManager ref_manager, com.earthview.world.graphic.Camera ref_camera, com.earthview.world.graphic.Viewport ref_viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_managerPtr = new BasePointer(ref_manager);
		list.add("ref_manager", ref_managerPtr.get());
		BasePointer ref_cameraPtr = new BasePointer(ref_camera);
		list.add("ref_camera", ref_cameraPtr.get());
		BasePointer ref_viewportPtr = new BasePointer(ref_viewport);
		list.add("ref_viewport", ref_viewportPtr.get());
		Create("JCCollisionDetectionCameraManipulatorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CollisionDetectionCameraManipulator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean handleMouseEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 *  Û±Í ¬º˛¥¶¿ÌΩ”ø⁄
	 * @param guiEvent  ¬º˛∂‘œÛ
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

	native private boolean handleMouseDownEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	public boolean handleMouseDownEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseDownEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseMoveEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	public boolean handleMouseMoveEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseMoveEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleMouseUpEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	public boolean handleMouseUpEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseUpEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long frameEvent);
	/**
	 * ÷° ¬º˛¥¶¿ÌΩ”ø⁄
	 * @param guiEvent  ¬º˛∂‘œÛ
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

	native private boolean handleKeyEvent_CGUIEvent(long pNativeObject, long keyEvent);
	/**
	 * º¸≈Ã ¬º˛¥¶¿ÌΩ”ø⁄
	 * @param guiEvent  ¬º˛∂‘œÛ
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

	native private boolean handleKeyDownEvent_CGUIEvent(long pNativeObject, long keyEvent);
	public boolean handleKeyDownEvent(com.earthview.world.spatial.systemui.Guievent keyEvent)
	{
		long keyEventParamValue = (keyEvent == null ? 0L : keyEvent.nativeObject.pointer);
		boolean returnValue = handleKeyDownEvent_CGUIEvent(this.nativeObject.pointer, keyEventParamValue);
		return returnValue;
	}
	native private boolean handleKeyUpEvent_CGUIEvent(long pNativeObject, long keyEvent);
	public boolean handleKeyUpEvent(com.earthview.world.spatial.systemui.Guievent keyEvent)
	{
		long keyEventParamValue = (keyEvent == null ? 0L : keyEvent.nativeObject.pointer);
		boolean returnValue = handleKeyUpEvent_CGUIEvent(this.nativeObject.pointer, keyEventParamValue);
		return returnValue;
	}
	native private long screenToScene_ev_real32_ev_real32(long pNativeObject, float x, float y);
	/**
	 * ”…∆¡ƒª…œµƒµ„º∆À„≥ˆ∂‘”¶µƒ…‰œﬂ
	 * @param x ∆¡ƒª…œµƒµ„£ÿ◊¯±Í
	 * @param y ∆¡ƒª…œµƒµ„£Ÿ◊¯±Í
	 */
	public com.earthview.world.spatial.math.Ray screenToScene(float x, float y)
	{
		float xParamValue = x;
		float yParamValue = y;
		long returnValue = screenToScene_ev_real32_ev_real32(this.nativeObject.pointer, xParamValue, yParamValue);
		com.earthview.world.spatial.math.Ray __returnValue = new com.earthview.world.spatial.math.Ray(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CRay");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Ray)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CRay");
		}
		return __returnValue;
	}
	public CollisionDetectionCameraManipulator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CollisionDetectionCameraManipulator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * Ëá™ÂÆö‰πâ‰∫ã‰ª∂Â§ÑÁêÜÊé•Âè£
	 * @param guiEvent ‰∫ã‰ª∂ÂØπË±°
	 */
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent userEvent)
	{
		return super.handleUserEvent_NoVirtual(userEvent);
	}
	/**
	 * ÈáçÁΩÆÁä∂ÊÄÅ
	 */
	public void reset()
	{
		super.reset_NoVirtual();
	}
	/**
	 * ËøîÂõûËßÜÂè£Áü©Èòµ
	 */
	public com.earthview.world.spatial.math.Matrix4 computeViewportMatrix()
	{
		return super.computeViewportMatrix_NoVirtual();
	}
	/**
	 * ‰∫ã‰ª∂Â§ÑÁêÜÊé•Âè£
	 * @param guiEvent ‰∫ã‰ª∂ÂØπË±°
	 */
	public boolean handleEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		return super.handleEvent_NoVirtual(guiEvent);
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
	
	public static CollisionDetectionCameraManipulator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CollisionDetectionCameraManipulator obj = null;
 		if(baseObj instanceof CollisionDetectionCameraManipulator)
		{
			obj = (CollisionDetectionCameraManipulator)baseObj;
		} else {
			obj = new CollisionDetectionCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCollisionDetectionCameraManipulator");
			obj.increaseCast();
		}

		return obj;
	}
}
