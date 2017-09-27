package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 通用场景相机漫游器类此类用来控制相机在场景中的漫游：平移、旋转、缩放。
 */
public class CommonSceneCameraManipulator extends com.earthview.world.spatial3d.controls.CameraManipulator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCommonSceneCameraManipulator", new CommonSceneCameraManipulatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCommonSceneCameraManipulatorProxy", new CommonSceneCameraManipulatorClassFactory());
	}

	/**
	 * 构造函数。
	 * @param manager 场景管理器
	 * @param commonscenecamera 相机
	 * @param viewport 视口
	 */
	public CommonSceneCameraManipulator(com.earthview.world.spatial3d.CommonSceneManager ref_manager, com.earthview.world.spatial3d.CommonSceneCamera ref_commonscenecamera, com.earthview.world.graphic.Viewport ref_viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_managerPtr = new BasePointer(ref_manager);
		list.add("ref_manager", ref_managerPtr.get());
		BasePointer ref_commonscenecameraPtr = new BasePointer(ref_commonscenecamera);
		list.add("ref_commonscenecamera", ref_commonscenecameraPtr.get());
		BasePointer ref_viewportPtr = new BasePointer(ref_viewport);
		list.add("ref_viewport", ref_viewportPtr.get());
		Create("JCCommonSceneCameraManipulatorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CommonSceneCameraManipulator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long screenToScene_ev_real32_ev_real32(long pNativeObject, float x, float y);
	/**
	 * 求屏幕点在世界空间中所在的射线
	 * @param x 屏幕点的x坐标
	 * @param y 屏幕点的y坐标
	 * @return EarthView::World::Spatial::Math::CRay，结果射线
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
	native private boolean intersect_CRay_CPlane_CVector3(long pNativeObject, long ray, long plane, long intersectPoint);
	/**
	 * 射线跟平面求交
	 * @param ray 射线
	 * @param plane 平面
	 * @param normal 法线
	 * @param point 平面上的点
	 * @return intersectPoint，所求的交点
	 */
	public boolean intersect(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Plane plane, com.earthview.world.spatial.math.Vector3 intersectPoint)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long planeParamValue = plane.nativeObject.pointer;
		long intersectPointParamValue = intersectPoint.nativeObject.pointer;
		boolean returnValue = intersect_CRay_CPlane_CVector3(this.nativeObject.pointer, rayParamValue, planeParamValue, intersectPointParamValue);
		return returnValue;
	}
	native private boolean intersect_CRay_CVector3_CVector3_CVector3(long pNativeObject, long ray, long normal, long point, long intersectPoint);
	public boolean intersect(com.earthview.world.spatial.math.Ray ray, com.earthview.world.spatial.math.Vector3 normal, com.earthview.world.spatial.math.Vector3 point, com.earthview.world.spatial.math.Vector3 intersectPoint)
	{
		long rayParamValue = ray.nativeObject.pointer;
		long normalParamValue = normal.nativeObject.pointer;
		long pointParamValue = point.nativeObject.pointer;
		long intersectPointParamValue = intersectPoint.nativeObject.pointer;
		boolean returnValue = intersect_CRay_CVector3_CVector3_CVector3(this.nativeObject.pointer, rayParamValue, normalParamValue, pointParamValue, intersectPointParamValue);
		return returnValue;
	}
	native private double computeRotationRatio_ev_real64(long pNativeObject, double cameraAltitude);
	/**
	 * 计算旋转量
	 * @param cameraAltitude 相机的高度
	 * @return ev_real64，旋转量
	 */
	public double computeRotationRatio(double cameraAltitude)
	{
		double cameraAltitudeParamValue = cameraAltitude;
		double returnValue = computeRotationRatio_ev_real64(this.nativeObject.pointer, cameraAltitudeParamValue);
		return returnValue;
	}
	native private double calculateZoomFactor_ev_real32(long pNativeObject, float mouseWheelDelta);
	/**
	 * 计算缩放因子
	 * @param mouseWheelDelta 鼠标滚动量
	 * @return ev_real64，缩放因子
	 */
	public double calculateZoomFactor(float mouseWheelDelta)
	{
		float mouseWheelDeltaParamValue = mouseWheelDelta;
		double returnValue = calculateZoomFactor_ev_real32(this.nativeObject.pointer, mouseWheelDeltaParamValue);
		return returnValue;
	}
	native private boolean calculateMoveable_CGUIEvent_CGUIEvent(long pNativeObject, long firstEvent, long secondEvent);
	/**
	 * 判断是否发生平移
	 * @param firstEvent 平移之前的事件
	 * @param secondEvent 平移之后的事件
	 */
	public boolean calculateMoveable(com.earthview.world.spatial.systemui.Guievent firstEvent, com.earthview.world.spatial.systemui.Guievent secondEvent)
	{
		long firstEventParamValue = (firstEvent == null ? 0L : firstEvent.nativeObject.pointer);
		long secondEventParamValue = (secondEvent == null ? 0L : secondEvent.nativeObject.pointer);
		boolean returnValue = calculateMoveable_CGUIEvent_CGUIEvent(this.nativeObject.pointer, firstEventParamValue, secondEventParamValue);
		return returnValue;
	}
	native private void roamCamera_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double moriginX, double moriginY, double mlastX, double mlastY);
	/**
	 * 平移
	 * @param moriginX 平移之前鼠标所在点的x坐标
	 * @param moriginY 平移之前鼠标所在点的y坐标
	 * @param mlastX 平移之后鼠标所在点的x坐标
	 * @param mlastY 平移之后鼠标所在点的y坐标
	 */
	public void roamCamera(double moriginX, double moriginY, double mlastX, double mlastY)
	{
		double moriginXParamValue = moriginX;
		double moriginYParamValue = moriginY;
		double mlastXParamValue = mlastX;
		double mlastYParamValue = mlastY;
		roamCamera_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, moriginXParamValue, moriginYParamValue, mlastXParamValue, mlastYParamValue);
	}
	native private void zoomCamera_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double zoomRatio);
	/**
	 * 缩放
	 * @param x 进行缩放的中心点x坐标
	 * @param y 进行缩放的中心点y坐标
	 * @param zoomRatio 缩放因子
	 */
	public void zoomCamera(double x, double y, double zoomRatio)
	{
		double xParamValue = x;
		double yParamValue = y;
		double zoomRatioParamValue = zoomRatio;
		zoomCamera_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, zoomRatioParamValue);
	}
	native private void rotationCamera_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double degree);
	/**
	 * 旋转
	 * @param x 旋转所围绕点的x坐标
	 * @param y 旋转所围绕点的y坐标
	 * @param degree 旋转角度
	 */
	public void rotationCamera(double x, double y, double degree)
	{
		double xParamValue = x;
		double yParamValue = y;
		double degreeParamValue = degree;
		rotationCamera_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, degreeParamValue);
	}
	native private void tiltCamera_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double degree);
	/**
	 * 相机的俯仰
	 * @param x 旋转所围绕点的x坐标
	 * @param y 旋转所围绕点的y坐标
	 * @param degree 旋转角度
	 */
	public void tiltCamera(double x, double y, double degree)
	{
		double xParamValue = x;
		double yParamValue = y;
		double degreeParamValue = degree;
		tiltCamera_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, degreeParamValue);
	}
	native private boolean rotationAtPoint_CVector3_ev_real64_ev_real64(long pNativeObject, long ratationPoint, double head, double tilt);
	/**
	 * 绕已知点旋转
	 * @param ratationPoint 已知点的坐标
	 * @param head 相机的偏航角
	 * @param tilt 相机的俯仰角
	 */
	public boolean rotationAtPoint(com.earthview.world.spatial.math.Vector3 ratationPoint, double head, double tilt)
	{
		long ratationPointParamValue = ratationPoint.nativeObject.pointer;
		double headParamValue = head;
		double tiltParamValue = tilt;
		boolean returnValue = rotationAtPoint_CVector3_ev_real64_ev_real64(this.nativeObject.pointer, ratationPointParamValue, headParamValue, tiltParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long useEvent);
	/**
	 * 处理帧事件
	 * @param guiEvent 事件
	 */
	public boolean handleFrameEvent(com.earthview.world.spatial.systemui.Guievent useEvent)
	{
		long useEventParamValue = (useEvent == null ? 0L : useEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent(this.nativeObject.pointer, useEventParamValue);
		return returnValue;
	}
	native private boolean handleFrameEvent_CGUIEvent_NoVirtual(long pNativeObject, long useEvent);
	protected boolean handleFrameEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent useEvent)
	{
		long useEventParamValue = (useEvent == null ? 0L : useEvent.nativeObject.pointer);
		boolean returnValue = handleFrameEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, useEventParamValue);
		return returnValue;
	}

	native private boolean handleEvent_CGUIEvent(long pNativeObject, long guiEvent);
	/**
	 * 事件处理函数
	 * @param guiEvent 所接受到的事件
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

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long userEvent);
	/**
	 * 处理自定义事件
	 * @param userEvent 自定义事件
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

	native private void createAnimation_void(long pNativeObject);
	/// <summary>
	/// 创建动画
	/// <returns></returns>
	public void createAnimation()
	{
		createAnimation_void(this.nativeObject.pointer);
	}
	native private void addControlPoint_ev_real32(long pNativeObject, float second);
	/**
	 * 增加控制点
	 * @param second 时间
	 */
	public void addControlPoint(float second)
	{
		float secondParamValue = second;
		addControlPoint_ev_real32(this.nativeObject.pointer, secondParamValue);
	}
	native private long getCommonSceneCamera_void(long pNativeObject);
	/**
	 * 获取所操纵的相机
	 * @param  
	 * @return CCommonSceneCamera，指向相机的指针
	 */
	public com.earthview.world.spatial3d.CommonSceneCamera getCommonSceneCamera()
	{
		long returnValue = getCommonSceneCamera_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.CommonSceneCamera __returnValue = new com.earthview.world.spatial3d.CommonSceneCamera(CreatedWhenConstruct.CWC_NotToCreate, "CCommonSceneCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.CommonSceneCamera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCommonSceneCamera");
		}
		return __returnValue;
	}
	public CommonSceneCameraManipulator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CommonSceneCameraManipulator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 鼠标事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleMouseEvent(com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		return super.handleMouseEvent_NoVirtual(mouseEvent);
	}
	/**
	 * 键盘事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleKeyEvent(com.earthview.world.spatial.systemui.Guievent keyEvent)
	{
		return super.handleKeyEvent_NoVirtual(keyEvent);
	}
	/**
	 * 重置状态
	 */
	public void reset()
	{
		super.reset_NoVirtual();
	}
	/**
	 * 返回视口矩阵
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
	
	public static CommonSceneCameraManipulator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CommonSceneCameraManipulator obj = null;
 		if(baseObj instanceof CommonSceneCameraManipulator)
		{
			obj = (CommonSceneCameraManipulator)baseObj;
		} else {
			obj = new CommonSceneCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCommonSceneCameraManipulator");
			obj.increaseCast();
		}

		return obj;
	}
}
