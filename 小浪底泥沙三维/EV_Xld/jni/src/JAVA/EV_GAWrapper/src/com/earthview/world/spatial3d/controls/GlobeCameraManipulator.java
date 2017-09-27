package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeCameraManipulator extends com.earthview.world.spatial3d.controls.CameraManipulator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeCameraManipulator", new GlobeCameraManipulatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGlobeCameraManipulatorProxy", new GlobeCameraManipulatorClassFactory());
	}

	public enum IntersectMode implements INativeEnum<IntersectMode> {
		RAY_INTERSECT(IntersectModeHelper.ENUM_VALUES[0]),
		CIRCLE_INTERSECT(IntersectModeHelper.ENUM_VALUES[1]);
		private int value;
		IntersectMode(int i) {
			this.value = i;
		}
		public IntersectMode getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final IntersectMode toEnum(int retval) {
			if(retval == RAY_INTERSECT.value){
				return RAY_INTERSECT;
			}
			else if(retval == CIRCLE_INTERSECT.value){
				return CIRCLE_INTERSECT;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class IntersectModeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数
	 * @param manager 场景管理器
	 * @param globecamera 相机
	 * @param viewport 视口
	 */
	public GlobeCameraManipulator(com.earthview.world.spatial3d.GeoSceneManager manager, com.earthview.world.spatial3d.GlobeCamera globecamera, com.earthview.world.graphic.Viewport viewport) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer managerPtr = new BasePointer(manager);
		list.add("manager", managerPtr.get());
		BasePointer globecameraPtr = new BasePointer(globecamera);
		list.add("globecamera", globecameraPtr.get());
		BasePointer viewportPtr = new BasePointer(viewport);
		list.add("viewport", viewportPtr.get());
		Create("JCGlobeCameraManipulatorProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GlobeCameraManipulator".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long screenToScene_ev_real32_ev_real32(long pNativeObject, float x, float y);
	/**
	 * 由屏幕上的点计算出射线
	 * @param x 屏幕上的Ｘ坐标
	 * @param y 屏幕上的Y坐标
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
	native private void createOverlay_void(long pNativeObject);
	/**
	 * 创建屏幕渲染对象
	 */
	public void createOverlay()
	{
		createOverlay_void(this.nativeObject.pointer);
	}
	native private void setIntersectModel_ev_bool(long pNativeObject, boolean intersectModel);
	/**
	 * 设置是否与模型求交
	 * @param intersectModel 是否与模型求交
	 */
	public void setIntersectModel(boolean intersectModel)
	{
		boolean intersectModelParamValue = intersectModel;
		setIntersectModel_ev_bool(this.nativeObject.pointer, intersectModelParamValue);
	}
	native private boolean getIntersectModel_void(long pNativeObject);
	/**
	 * 获取是否与模型求交
	 */
	public boolean getIntersectModel()
	{
		boolean returnValue = getIntersectModel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIntersectOBQ_ev_bool(long pNativeObject, boolean intersectOBQ);
	/**
	 * 设置是否与摄影测量模型求交
	 * @param intersectModel 是否与摄影测量模型求交
	 */
	public void setIntersectOBQ(boolean intersectOBQ)
	{
		boolean intersectOBQParamValue = intersectOBQ;
		setIntersectOBQ_ev_bool(this.nativeObject.pointer, intersectOBQParamValue);
	}
	native private boolean getIntersectOBQ_void(long pNativeObject);
	/**
	 * 获取是否与摄影测量模型求交
	 */
	public boolean getIntersectOBQ()
	{
		boolean returnValue = getIntersectOBQ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIntersectMode_IntersectMode(long pNativeObject, int intersectMode);
	/**
	 * 设置求交模式
	 * @param intersectMode RAY_INTERSECT，射线求交。CIRCLE_INTERSECT，大圆求交
	 */
	public void setIntersectMode(com.earthview.world.spatial3d.controls.GlobeCameraManipulator.IntersectMode intersectMode)
	{
		int intersectModeParamValue = intersectMode.getValue();
		setIntersectMode_IntersectMode(this.nativeObject.pointer, intersectModeParamValue);
	}
	native private int getIntersectMode_void(long pNativeObject);
	/**
	 * 获取求交模式
	 */
	public com.earthview.world.spatial3d.controls.GlobeCameraManipulator.IntersectMode getIntersectMode()
	{
		int returnValue = getIntersectMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.controls.GlobeCameraManipulator.IntersectMode.toEnum(returnValue);
	}
	native private boolean intersect_ev_real32_ev_real32_CVector3(long pNativeObject, float x, float y, long interectPoint);
	/**
	 * 由屏幕上的点返回与场景相交的点
	 * @param x 屏幕上的Ｘ坐标
	 * @param y 屏幕上的Y坐标
	 * @param interectPoint 相交中的点
	 */
	public boolean intersect(float x, float y, com.earthview.world.spatial.math.Vector3 interectPoint)
	{
		float xParamValue = x;
		float yParamValue = y;
		long interectPointParamValue = interectPoint.nativeObject.pointer;
		boolean returnValue = intersect_ev_real32_ev_real32_CVector3(this.nativeObject.pointer, xParamValue, yParamValue, interectPointParamValue);
		return returnValue;
	}
	native private boolean intersect_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, float x, float y, long interectPoint, boolean intersecModel, boolean intersectSea, boolean positiveSide, boolean negativeSide);
	/**
	 * 由屏幕上的点返回与场景相交的点
	 * @param x 屏幕上的Ｘ坐标
	 * @param y 屏幕上的Y坐标
	 * @param interectPoint 射线交中的点
	 * @param intersecModel 是否与模型求交
	 * @param intersectSea 是否与海水求交
	 * @param positiveSide 是否与正面求交
	 * @param negativeSide 是否与反面求交
	 */
	public boolean intersect(float x, float y, com.earthview.world.spatial.math.Vector3 interectPoint, boolean intersecModel, boolean intersectSea, boolean positiveSide, boolean negativeSide)
	{
		float xParamValue = x;
		float yParamValue = y;
		long interectPointParamValue = interectPoint.nativeObject.pointer;
		boolean intersecModelParamValue = intersecModel;
		boolean intersectSeaParamValue = intersectSea;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		boolean returnValue = intersect_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, xParamValue, yParamValue, interectPointParamValue, intersecModelParamValue, intersectSeaParamValue, positiveSideParamValue, negativeSideParamValue);
		return returnValue;
	}
	native private boolean intersect_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, float x, float y, long interectPoint, boolean intersecModel, boolean intersectSea, boolean positiveSide, boolean negativeSide, long modelIntersected);
	/**
	 * 由屏幕上的点返回与场景相交的点
	 * @param x 屏幕上的Ｘ坐标
	 * @param y 屏幕上的Y坐标
	 * @param interectPoint 射线交中的点
	 * @param intersecModel 是否与模型求交
	 * @param intersectSea 是否与海水求交
	 * @param positiveSide 是否与正面求交
	 * @param negativeSide 是否与反面求交
	 * @param modelIntersected 是否是模型的点
	 */
	public boolean intersect(float x, float y, com.earthview.world.spatial.math.Vector3 interectPoint, boolean intersecModel, boolean intersectSea, boolean positiveSide, boolean negativeSide, BooleanPointer modelIntersected)
	{
		float xParamValue = x;
		float yParamValue = y;
		long interectPointParamValue = interectPoint.nativeObject.pointer;
		boolean intersecModelParamValue = intersecModel;
		boolean intersectSeaParamValue = intersectSea;
		boolean positiveSideParamValue = positiveSide;
		boolean negativeSideParamValue = negativeSide;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		boolean returnValue = intersect_ev_real32_ev_real32_CVector3_ev_bool_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, xParamValue, yParamValue, interectPointParamValue, intersecModelParamValue, intersectSeaParamValue, positiveSideParamValue, negativeSideParamValue, modelIntersectedParamValue);
		return returnValue;
	}
	native private void setCameraTiltRange_CDegree_CDegree(long pNativeObject, long min, long max);
	/**
	 * 设置相机倾角的范围
	 * @param min 最小值
	 * @param max 最大值
	 */
	public void setCameraTiltRange(com.earthview.world.spatial.math.Degree min, com.earthview.world.spatial.math.Degree max)
	{
		long minParamValue = min.nativeObject.pointer;
		long maxParamValue = max.nativeObject.pointer;
		setCameraTiltRange_CDegree_CDegree(this.nativeObject.pointer, minParamValue, maxParamValue);
	}
	native private double computeAltitudeDelta_CVector3_CGeoSceneManager(long pNativeObject, long v, long manager);
	/// <summary>
	///计算海拔的容差
	/// </summary>
	/// <param name="v">坐标点</param>
	/// <param name="manager">场景管理器/param>
	/// <returns></returns>
	public double computeAltitudeDelta(com.earthview.world.spatial.math.Vector3 v, com.earthview.world.spatial3d.GeoSceneManager manager)
	{
		long vParamValue = v.nativeObject.pointer;
		long managerParamValue = (manager == null ? 0L : manager.nativeObject.pointer);
		double returnValue = computeAltitudeDelta_CVector3_CGeoSceneManager(this.nativeObject.pointer, vParamValue, managerParamValue);
		return returnValue;
	}
	native private boolean needResetCamera_CMatrix4(long pNativeObject, long m);
	/**
	 * 是否需要重置相机
	 * @param m 相机的矩阵
	 */
	public boolean needResetCamera(com.earthview.world.spatial.math.Matrix4 m)
	{
		long mParamValue = m.nativeObject.pointer;
		boolean returnValue = needResetCamera_CMatrix4(this.nativeObject.pointer, mParamValue);
		return returnValue;
	}
	native private boolean needResetCamera_CMatrix4_ev_real64(long pNativeObject, long m, long distance);
	/**
	 * 是否需要重置相机
	 * @param m 相机的矩阵
	 * @param distance 相机的距离
	 */
	public boolean needResetCamera(com.earthview.world.spatial.math.Matrix4 m, DoublePointer distance)
	{
		long mParamValue = m.nativeObject.pointer;
		long distanceParamValue = distance.nativeObject.pointer;
		boolean returnValue = needResetCamera_CMatrix4_ev_real64(this.nativeObject.pointer, mParamValue, distanceParamValue);
		return returnValue;
	}
	native private double computeRotationRatio_ev_real64(long pNativeObject, double cameraAltitude);
	/**
	 * 根据相机的海拔计算出旋转的比率
	 * @param cameraAltitude 相机的海拔
	 */
	public double computeRotationRatio(double cameraAltitude)
	{
		double cameraAltitudeParamValue = cameraAltitude;
		double returnValue = computeRotationRatio_ev_real64(this.nativeObject.pointer, cameraAltitudeParamValue);
		return returnValue;
	}
	native private boolean handleMouseEvent_CGUIEvent(long pNativeObject, long mouseEvent);
	/**
	 * 处理鼠标事件
	 * @param mouseEvent 事件对象
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

	native private boolean handleFrameEvent_CGUIEvent(long pNativeObject, long frameEvent);
	/**
	 * 处理帧事件
	 * @param mouseEvent 事件对象
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
	 * 处理键盘事件
	 * @param mouseEvent 事件对象
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
	 * @param mouseEvent 事件对象
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

	native private boolean handleUserEvent_CGUIEvent(long pNativeObject, long useEvent);
	/**
	 * 处理自定义事件
	 * @param mouseEvent 事件对象
	 */
	public boolean handleUserEvent(com.earthview.world.spatial.systemui.Guievent useEvent)
	{
		long useEventParamValue = (useEvent == null ? 0L : useEvent.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent(this.nativeObject.pointer, useEventParamValue);
		return returnValue;
	}
	native private boolean handleUserEvent_CGUIEvent_NoVirtual(long pNativeObject, long useEvent);
	protected boolean handleUserEvent_NoVirtual(com.earthview.world.spatial.systemui.Guievent useEvent)
	{
		long useEventParamValue = (useEvent == null ? 0L : useEvent.nativeObject.pointer);
		boolean returnValue = handleUserEvent_CGUIEvent_NoVirtual(this.nativeObject.pointer, useEventParamValue);
		return returnValue;
	}

	native private void rotationAtCameraRight_CRadian(long pNativeObject, long angleRadian);
	/**
	 * 在相机处旋转
	 * @param angleRadian 转动的角度
	 */
	public void rotationAtCameraRight(com.earthview.world.spatial.math.Radian angleRadian)
	{
		long angleRadianParamValue = angleRadian.nativeObject.pointer;
		rotationAtCameraRight_CRadian(this.nativeObject.pointer, angleRadianParamValue);
	}
	native private void rotationAtTargetRight_CRadian(long pNativeObject, long angleRadian);
	/**
	 * 在目标点处旋转
	 * @param angleRadian 转动的角度
	 */
	public void rotationAtTargetRight(com.earthview.world.spatial.math.Radian angleRadian)
	{
		long angleRadianParamValue = angleRadian.nativeObject.pointer;
		rotationAtTargetRight_CRadian(this.nativeObject.pointer, angleRadianParamValue);
	}
	native private boolean rightButtonMoveImpl_CGUIEvent_CGUIEvent(long pNativeObject, long lastEvent, long mouseEvent);
	/**
	 * 鼠标右键移动的处理
	 * @param lastEvent 前一个鼠标事件
	 * @param mouseEvent 当前鼠标事件
	 */
	public boolean rightButtonMoveImpl(com.earthview.world.spatial.systemui.Guievent lastEvent, com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long lastEventParamValue = (lastEvent == null ? 0L : lastEvent.nativeObject.pointer);
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = rightButtonMoveImpl_CGUIEvent_CGUIEvent(this.nativeObject.pointer, lastEventParamValue, mouseEventParamValue);
		return returnValue;
	}
	native private boolean leftButtonMoveImpl_CGUIEvent_CGUIEvent(long pNativeObject, long lastEvent, long mouseEvent);
	/**
	 * 鼠标左键移动的处理
	 * @param lastEvent 前一个鼠标事件
	 * @param mouseEvent 当前鼠标事件
	 */
	public boolean leftButtonMoveImpl(com.earthview.world.spatial.systemui.Guievent lastEvent, com.earthview.world.spatial.systemui.Guievent mouseEvent)
	{
		long lastEventParamValue = (lastEvent == null ? 0L : lastEvent.nativeObject.pointer);
		long mouseEventParamValue = (mouseEvent == null ? 0L : mouseEvent.nativeObject.pointer);
		boolean returnValue = leftButtonMoveImpl_CGUIEvent_CGUIEvent(this.nativeObject.pointer, lastEventParamValue, mouseEventParamValue);
		return returnValue;
	}
	native private boolean calculateMoveable_CGUIEvent_CGUIEvent(long pNativeObject, long firstEvent, long secondEvent);
	/**
	 * 指示鼠标是否移动
	 * @param lastEvent 前一个鼠标事件
	 * @param mouseEvent 当前鼠标事件
	 */
	public boolean calculateMoveable(com.earthview.world.spatial.systemui.Guievent firstEvent, com.earthview.world.spatial.systemui.Guievent secondEvent)
	{
		long firstEventParamValue = (firstEvent == null ? 0L : firstEvent.nativeObject.pointer);
		long secondEventParamValue = (secondEvent == null ? 0L : secondEvent.nativeObject.pointer);
		boolean returnValue = calculateMoveable_CGUIEvent_CGUIEvent(this.nativeObject.pointer, firstEventParamValue, secondEventParamValue);
		return returnValue;
	}
	native private double calculateZoomFactor_ev_real32(long pNativeObject, float mouseWheelDelta);
	/**
	 * 计算缩放比率
	 * @param mouseWheelDelta 滚轮变化量
	 */
	public double calculateZoomFactor(float mouseWheelDelta)
	{
		float mouseWheelDeltaParamValue = mouseWheelDelta;
		double returnValue = calculateZoomFactor_ev_real32(this.nativeObject.pointer, mouseWheelDeltaParamValue);
		return returnValue;
	}
	native private double computeRoll_CVector3(long pNativeObject, long currentVector);
	/**
	 * /计算旋转角/
	 * @param currentVector 当前方向
	 */
	public double computeRoll(com.earthview.world.spatial.math.Vector3 currentVector)
	{
		long currentVectorParamValue = currentVector.nativeObject.pointer;
		double returnValue = computeRoll_CVector3(this.nativeObject.pointer, currentVectorParamValue);
		return returnValue;
	}
	native private long getGlobeCamera_void(long pNativeObject);
	/**
	 * 返回相机
	 */
	public com.earthview.world.spatial3d.GlobeCamera getGlobeCamera()
	{
		long returnValue = getGlobeCamera_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeCamera __returnValue = new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeCamera)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeCamera");
		}
		return __returnValue;
	}
	native private void rotationAndZoomCamera_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double degree, double zoomRatio);
	/**
	 * 在指定屏幕点处旋转和缩放
	 * @param x 屏幕点的Ｘ坐标
	 * @param y 屏幕点的Y坐标
	 * @param degree 旋转的角度
	 * @param zoomRatio 缩放比例
	 */
	public void rotationAndZoomCamera(double x, double y, double degree, double zoomRatio)
	{
		double xParamValue = x;
		double yParamValue = y;
		double degreeParamValue = degree;
		double zoomRatioParamValue = zoomRatio;
		rotationAndZoomCamera_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, degreeParamValue, zoomRatioParamValue);
	}
	native private void tiltCamera_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double degree);
	/**
	 * 在指定屏幕点处倾斜
	 * @param x 屏幕点的Ｘ坐标
	 * @param y 屏幕点的Y坐标
	 * @param degree 倾斜的角度
	 */
	public void tiltCamera(double x, double y, double degree)
	{
		double xParamValue = x;
		double yParamValue = y;
		double degreeParamValue = degree;
		tiltCamera_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, degreeParamValue);
	}
	native private void enterUnderGroundMode_void(long pNativeObject);
	/**
	 * 进入地下模式
	 */
	public void enterUnderGroundMode()
	{
		enterUnderGroundMode_void(this.nativeObject.pointer);
	}
	native private void exitUnderGroundMode_void(long pNativeObject);
	/**
	 * 退出地下模式
	 */
	public void exitUnderGroundMode()
	{
		exitUnderGroundMode_void(this.nativeObject.pointer);
	}
	native private void resetCamAltitude_void(long pNativeObject);
	/**
	 * 重设相机的海拔
	 */
	public void resetCamAltitude()
	{
		resetCamAltitude_void(this.nativeObject.pointer);
	}
	native private void fadeInOut_ev_real64(long pNativeObject, double time);
	/**
	 * 开启淡入淡出合成器
	 * @param time 合成器开启后的持续时间（秒）
	 */
	public void fadeInOut(double time)
	{
		double timeParamValue = time;
		fadeInOut_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private void addGotoListener_CGoToTargetListener(long pNativeObject, long ref_listener);
	/**
	 * 添加Goto监听
	 * @param listener 监听者
	 */
	public void addGotoListener(com.earthview.world.spatial3d.controls.GoToTargetListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addGotoListener_CGoToTargetListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeGotoListener_CGoToTargetListener(long pNativeObject, long listener);
	/**
	 * 移除Goto监听
	 * @param listener 监听者
	 */
	public void removeGotoListener(com.earthview.world.spatial3d.controls.GoToTargetListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeGotoListener_CGoToTargetListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private void stopInertiaPan_void(long pNativeObject);
	/**
	 * 停止惯性
	 */
	public void stopInertiaPan()
	{
		stopInertiaPan_void(this.nativeObject.pointer);
	}
	native private void setInertialPanEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 启用/禁用惯性
	 * @param enable 
	 */
	public void setInertialPanEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setInertialPanEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private void setMoveToEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 启用/禁用双击移动
	 * @param enable 
	 */
	public void setMoveToEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setMoveToEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getMoveToEnable_void(long pNativeObject);
	/**
	 * 获取是否开启双击移动
	 * @param enable 
	 */
	public boolean getMoveToEnable()
	{
		boolean returnValue = getMoveToEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setMouseWheelRatio_ev_real64(long pNativeObject, double mouseWheelRatio);
	/**
	 * 设置磙轮缩放的比率
	 * @param mouseWheelRatio 
	 */
	public void setMouseWheelRatio(double mouseWheelRatio)
	{
		double mouseWheelRatioParamValue = mouseWheelRatio;
		setMouseWheelRatio_ev_real64(this.nativeObject.pointer, mouseWheelRatioParamValue);
	}
	native private double getMouseWheelRatio_void(long pNativeObject);
	/**
	 * 获取磙轮缩放的比率
	 * @param mouseWheelRatio 
	 */
	public double getMouseWheelRatio()
	{
		double returnValue = getMouseWheelRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGotoTimeRatio_ev_real64(long pNativeObject, double gotoRatio);
	/**
	 * 设置相机goto的比率
	 * @param gotoRatio 
	 */
	public void setGotoTimeRatio(double gotoRatio)
	{
		double gotoRatioParamValue = gotoRatio;
		setGotoTimeRatio_ev_real64(this.nativeObject.pointer, gotoRatioParamValue);
	}
	native private double getGotoTimeRatio_void(long pNativeObject);
	/**
	 * 获取相机goto的比率
	 */
	public double getGotoTimeRatio()
	{
		double returnValue = getGotoTimeRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean calculateTiltAble_CVector3_CMatrix3(long pNativeObject, long cameraZAxis, long rotation);
	public boolean calculateTiltAble(com.earthview.world.spatial.math.Vector3 cameraZAxis, com.earthview.world.spatial.math.Matrix3 rotation)
	{
		long cameraZAxisParamValue = cameraZAxis.nativeObject.pointer;
		long rotationParamValue = rotation.nativeObject.pointer;
		boolean returnValue = calculateTiltAble_CVector3_CMatrix3(this.nativeObject.pointer, cameraZAxisParamValue, rotationParamValue);
		return returnValue;
	}
	public GlobeCameraManipulator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeCameraManipulator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	/**
	 * 事件处理接口
	 * @param guiEvent 事件对象
	 */
	public boolean handleEvent(com.earthview.world.spatial.systemui.Guievent guiEvent)
	{
		return super.handleEvent_NoVirtual(guiEvent);
	}
	
	native protected void register_handleMouseWheelEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleMouseEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleUserEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleKeyEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_handleFrameEvent_CGUIEvent(long pNativeObject, String method);
	native protected void register_reset_void(long pNativeObject, String method);
	native protected void register_computeViewportMatrix_void(long pNativeObject, String method);
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleMouseWheelEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseWheelEvent_CGUIEvent_callback");
			this.register_handleMouseEvent_CGUIEvent(this.nativeObject.pointer, "handleMouseEvent_CGUIEvent_callback");
			this.register_handleUserEvent_CGUIEvent(this.nativeObject.pointer, "handleUserEvent_CGUIEvent_callback");
			this.register_handleKeyEvent_CGUIEvent(this.nativeObject.pointer, "handleKeyEvent_CGUIEvent_callback");
			this.register_handleFrameEvent_CGUIEvent(this.nativeObject.pointer, "handleFrameEvent_CGUIEvent_callback");
			this.register_reset_void(this.nativeObject.pointer, "reset_void_callback");
			this.register_computeViewportMatrix_void(this.nativeObject.pointer, "computeViewportMatrix_void_callback");
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static GlobeCameraManipulator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeCameraManipulator obj = null;
 		if(baseObj instanceof GlobeCameraManipulator)
		{
			obj = (GlobeCameraManipulator)baseObj;
		} else {
			obj = new GlobeCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeCameraManipulator");
			obj.increaseCast();
		}

		return obj;
	}
}
