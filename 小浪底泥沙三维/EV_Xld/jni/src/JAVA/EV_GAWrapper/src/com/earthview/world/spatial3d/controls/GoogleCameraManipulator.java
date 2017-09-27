package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GoogleCameraManipulator extends com.earthview.world.spatial3d.controls.CameraManipulator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGoogleCameraManipulator", new GoogleCameraManipulatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGoogleCameraManipulatorProxy", new GoogleCameraManipulatorClassFactory());
	}

	public GoogleCameraManipulator(com.earthview.world.spatial3d.GeoSceneManager ref_manager, com.earthview.world.spatial3d.GlobeCamera ref_globecamera, com.earthview.world.graphic.Viewport ref_viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_managerPtr = new BasePointer(ref_manager);
		list.add("ref_manager", ref_managerPtr.get());
		BasePointer ref_globecameraPtr = new BasePointer(ref_globecamera);
		list.add("ref_globecamera", ref_globecameraPtr.get());
		BasePointer ref_viewportPtr = new BasePointer(ref_viewport);
		list.add("ref_viewport", ref_viewportPtr.get());
		Create("JCGoogleCameraManipulatorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GoogleCameraManipulator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 *  ¬º˛¥¶¿ÌΩ”ø⁄
	 * @param guiEvent  ¬º˛∂‘œÛ
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

	native private long screenToScene_ev_real32_ev_real32(long pNativeObject, float x, float y);
	/**
	 * ”…∆¡ƒª…œµƒµ„º∆À„≥ˆ…‰œﬂ
	 * @param x ∆¡ƒª…œµƒ£ÿ◊¯±Í
	 * @param y ∆¡ƒª…œµƒY◊¯±Í
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
	native private boolean intersect_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, float x, float y, long interectPoint, boolean intersecModel, boolean intersectSea, boolean positiveSide, boolean negativeSide, boolean intersectOBQ, long modelIntersected);
	/**
	 * ”…∆¡ƒª…œµƒµ„∑µªÿ”Î≥°æ∞œ‡Ωªµƒµ„
	 * @param x ∆¡ƒª…œµƒ£ÿ◊¯±Í
	 * @param y ∆¡ƒª…œµƒY◊¯±Í
	 * @param interectPoint …‰œﬂΩª÷–µƒµ„
	 * @param intersecModel  «∑Ò”Îƒ£–Õ«ÛΩª
	 * @param intersectSea  «∑Ò”Î∫£ÀÆ«ÛΩª
	 * @param positiveSide  «∑Ò”Î’˝√Ê«ÛΩª
	 * @param negativeSide  «∑Ò”Î∑¥√Ê«ÛΩª
	 * @param intersectOBQ  «∑Ò”ÎOBQƒ£–Õ«ÛΩª
	 * @param modelIntersected  «∑Ò «ƒ£–Õµƒµ„
	 */
	public boolean intersect(float x, float y, com.earthview.world.spatial.math.Vector3 interectPoint, boolean intersecModel, boolean intersectSea, boolean positiveSide, boolean negativeSide, boolean intersectOBQ, BooleanPointer modelIntersected)
	{
		float xParamValue = x;
		float yParamValue = y;
		long interectPointParamValue = interectPoint.nativeObject.pointer;
		boolean intersecModelParamValue = intersecModel;
		boolean intersectSeaParamValue = intersectSea;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		boolean intersectOBQParamValue = intersectOBQ;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		boolean returnValue = intersect_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, xParamValue, yParamValue, interectPointParamValue, intersecModelParamValue, intersectSeaParamValue, positiveSideParamValue, negativeSideParamValue, intersectOBQParamValue, modelIntersectedParamValue);
		return returnValue;
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

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long userEvent);
	/**
	 * ◊‘∂®“Â ¬º˛¥¶¿ÌΩ”ø⁄
	 * @param guiEvent  ¬º˛∂‘œÛ
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
	native private boolean handleMouseWheelEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	public boolean handleMouseWheelEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = handleMouseWheelEvent_CGUIEvent(this.nativeObject.pointer, mouseEventParamValue);
		return returnValue;
	}
	native private void setEnableIntersectModel_ev_bool(long pNativeObject, boolean enable);
	public void setEnableIntersectModel(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnableIntersectModel_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getEnableIntersectModel_void(long pNativeObject);
	public boolean getEnableIntersectModel()
	{
		boolean returnValue = getEnableIntersectModel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIntersectOBQ_ev_bool(long pNativeObject, boolean intersectOBQ);
	/**
	 * …Ë÷√ «∑Ò”Î…„”∞≤‚¡øƒ£–Õ«ÛΩª
	 * @param intersectModel  «∑Ò”Î…„”∞≤‚¡øƒ£–Õ«ÛΩª
	 */
	public void setIntersectOBQ(boolean intersectOBQ)
	{
		boolean intersectOBQParamValue = intersectOBQ;
		setIntersectOBQ_ev_bool(this.nativeObject.pointer, intersectOBQParamValue);
	}
	native private boolean getIntersectOBQ_void(long pNativeObject);
	/**
	 * ªÒ»° «∑Ò”Î…„”∞≤‚¡øƒ£–Õ«ÛΩª
	 */
	public boolean getIntersectOBQ()
	{
		boolean returnValue = getIntersectOBQ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEnable_ev_bool(long pNativeObject, boolean enable);
	public void setEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getEnable_void(long pNativeObject);
	public boolean getEnable()
	{
		boolean returnValue = getEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	public GoogleCameraManipulator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GoogleCameraManipulator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	public static GoogleCameraManipulator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GoogleCameraManipulator obj = null;
 		if(baseObj instanceof GoogleCameraManipulator)
		{
			obj = (GoogleCameraManipulator)baseObj;
		} else {
			obj = new GoogleCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGoogleCameraManipulator");
			obj.increaseCast();
		}

		return obj;
	}
}
