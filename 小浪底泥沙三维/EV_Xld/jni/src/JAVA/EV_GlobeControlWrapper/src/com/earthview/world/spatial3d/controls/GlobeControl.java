package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 抽象数字地球控件
 */
public class GlobeControl extends com.earthview.world.spatial3d.controls.C3DControl {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGlobeControl", new GlobeControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGlobeControlProxy", new GlobeControlClassFactory());
	}

	///typedef map<EVString,CChildViewPort*> CChildViewports;
	//// <summary>
	//// 构造函数
	//// </summary>
	//// <param name="name">名字</param>
	//// <param name="renderWindow">内部的渲染窗体</param>
	//// <param name="parent">控件的管理者</param>
	//// <returns></returns>
	public GlobeControl(String name, com.earthview.world.graphic.RenderWindow ref_renderWindow, com.earthview.world.spatial3d.controls.GlobeControlManager ref_parent) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		BasePointer ref_renderWindowPtr = new BasePointer(ref_renderWindow);
		list.add("ref_renderWindow", ref_renderWindowPtr.get());
		BasePointer ref_parentPtr = new BasePointer(ref_parent);
		list.add("ref_parent", ref_parentPtr.get());
		Create("JCGlobeControlProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GlobeControl".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void notifyViewChanged_IViewArgs(long pNativeObject, long args);
	/**
	 * 通知视图发生变化，二三维联动的时候通过这个方法通知视图发生变化
	 * @param args 视图参数
	 */
	public void notifyViewChanged(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		notifyViewChanged_IViewArgs(this.nativeObject.pointer, argsParamValue);
	}
	native private void notifyViewChanged_IViewArgs_NoVirtual(long pNativeObject, long args);
	protected void notifyViewChanged_NoVirtual(com.earthview.world.spatial.Iviewargs args)
	{
		long argsParamValue = (args == null ? 0L : args.nativeObject.pointer);
		notifyViewChanged_IViewArgs_NoVirtual(this.nativeObject.pointer, argsParamValue);
	}

	native private void mouseButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, int x, int y, long button);
	public void mouseButtonPress(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}
	native private void mouseButtonPress_ev_int32_ev_int32_ev_uint32_NoVirtual(long pNativeObject, int x, int y, long button);
	protected void mouseButtonPress_NoVirtual(int x, int y, long button)
	{
		int xParamValue = x;
		int yParamValue = y;
		long buttonParamValue = button;
		mouseButtonPress_ev_int32_ev_int32_ev_uint32_NoVirtual(this.nativeObject.pointer, xParamValue, yParamValue, buttonParamValue);
	}

	native private void goTo_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double heading, double tilt, double altitude);
	/**
	 * 定位相机，相机飞行到指定位置
	 * @param latitude 目标点处的纬度
	 * @param longitude 目标点处的经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 相机的海拔
	 */
	public void goTo(double latitude, double longitude, double heading, double tilt, double altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double headingParamValue = heading;
		double tiltParamValue = tilt;
		double altitudeParamValue = altitude;
		goTo_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, altitudeParamValue);
	}
	native private void stopGoto_void(long pNativeObject);
	/**
	 * 停止goto
	 */
	public void stopGoto()
	{
		stopGoto_void(this.nativeObject.pointer);
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
	native private void notifyAnalysisStart_ITool(long pNativeObject, long tool);
	/**
	 * 三维分析开始前的通知
	 * @param tool 三维分析Tool
	 */
	public void notifyAnalysisStart(com.earthview.world.spatial.systemui.Itool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		notifyAnalysisStart_ITool(this.nativeObject.pointer, toolParamValue);
	}
	native private void notifyAnalysisEnd_ITool(long pNativeObject, long tool);
	/**
	 * 三维分析结束后的通知
	 * @param tool 三维分析Tool
	 */
	public void notifyAnalysisEnd(com.earthview.world.spatial.systemui.Itool tool)
	{
		long toolParamValue = (tool == null ? 0L : tool.nativeObject.pointer);
		notifyAnalysisEnd_ITool(this.nativeObject.pointer, toolParamValue);
	}
	native private void addGlobeControlListener_CGlobeControlListener(long pNativeObject, long ref_listener);
	/**
	 * 添加globeControlListener监听
	 * @param listener 监听者
	 */
	public void addGlobeControlListener(com.earthview.world.spatial3d.controls.GlobeControlListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addGlobeControlListener_CGlobeControlListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeGlobeControlListener_CGlobeControlListener(long pNativeObject, long listener);
	/**
	 * 移除Goto监听
	 * @param listener 监听者
	 */
	public void removeGlobeControlListener(com.earthview.world.spatial3d.controls.GlobeControlListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		removeGlobeControlListener_CGlobeControlListener(this.nativeObject.pointer, listenerParamValue);
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
	native private void addRouteFlyListener_CRouteFlyListener(long pNativeObject, long ref_listener);
	/**
	 * 添加routefly监听
	 * @param listener 监听者
	 */
	public void addRouteFlyListener(com.earthview.world.spatial3d.controls.RouteFlyListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		addRouteFlyListener_CRouteFlyListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void removeRouteFlyListener_CRouteFlyListener(long pNativeObject, long ref_listener);
	/**
	 * 移除RouteFly监听
	 * @param listener 监听者
	 */
	public void removeRouteFlyListener(com.earthview.world.spatial3d.controls.RouteFlyListener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		removeRouteFlyListener_CRouteFlyListener(this.nativeObject.pointer, ref_listenerParamValue);
	}
	native private void goTo_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double heading, double tilt, double altitude, double moditifAltitude);
	/**
	 * 定位相机，相机飞行到指定位置
	 * @param latitude 目标点处的纬度
	 * @param longitude 目标点处的经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 相机的海拔
	 * @param moditifAltitude 目标点处的海拔
	 */
	public void goTo(double latitude, double longitude, double heading, double tilt, double altitude, double moditifAltitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double headingParamValue = heading;
		double tiltParamValue = tilt;
		double altitudeParamValue = altitude;
		double moditifAltitudeParamValue = moditifAltitude;
		goTo_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, altitudeParamValue, moditifAltitudeParamValue);
	}
	native private void goTo_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64(long pNativeObject, long latitude, long longitude, double targetAltitude, long heading, long tilt, double distance);
	/**
	 * 定位相机，相机飞行到指定位置
	 * @param latitude 目标点处的纬度
	 * @param longitude 目标点处的经度
	 * @param moditifAltitude 目标点处的海拔
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param distance 目标点与相机之间的距离
	 */
	public void goTo(com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, double targetAltitude, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double distance)
	{
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		double targetAltitudeParamValue = targetAltitude;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double distanceParamValue = distance;
		goTo_CDegree_CDegree_ev_real64_CDegree_CDegree_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetAltitudeParamValue, headingParamValue, tiltParamValue, distanceParamValue);
	}
	native private boolean setScene_IScene(long pNativeObject, long ref_scene);
	/**
	 * 设置场景
	 * @param scene 场景
	 * @return true成功，false失败
	 */
	public boolean setScene(com.earthview.world.spatial.atlas.Iscene ref_scene)
	{
		long ref_sceneParamValue = (ref_scene == null ? 0L : ref_scene.nativeObject.pointer);
		boolean returnValue = setScene_IScene(this.nativeObject.pointer, ref_sceneParamValue);
		return returnValue;
	}
	native private long getScene_void(long pNativeObject);
	/**
	 * 获取场景
	 */
	public com.earthview.world.spatial.atlas.Iscene getScene()
	{
		long returnValue = getScene_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IScene");
		}
		return __returnValue;
	}
	native private boolean getCameraIsLocked_void(long pNativeObject);
	/**
	 * 获取相机是否被锁定
	 */
	public boolean getCameraIsLocked()
	{
		boolean returnValue = getCameraIsLocked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64(long pNativeObject, long target, long heading, long tilt, double distance);
	/**
	 * 锁定相机到某个节点
	 * @param target 锁定的目标节点
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param distance 距离
	 */
	public void lockCameraToTarget(com.earthview.world.graphic.SceneNode target, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double distance)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double distanceParamValue = distance;
		lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64(this.nativeObject.pointer, targetParamValue, headingParamValue, tiltParamValue, distanceParamValue);
	}
	native private void lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64_ev_bool(long pNativeObject, long target, long heading, long tilt, double distance, boolean isThirdPersonMode);
	/**
	 * 锁定相机到某个节点
	 * @param target 锁定的目标节点
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param distance 距离
	 * @param isThirdMode 是否为第三人模式。false为第一人称模式，相机的姿态与节点的姿态一致
	 */
	public void lockCameraToTarget(com.earthview.world.graphic.SceneNode target, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double distance, boolean isThirdPersonMode)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double distanceParamValue = distance;
		boolean isThirdPersonModeParamValue = isThirdPersonMode;
		lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64_ev_bool(this.nativeObject.pointer, targetParamValue, headingParamValue, tiltParamValue, distanceParamValue, isThirdPersonModeParamValue);
	}
	native private void lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64_ev_bool_ev_bool_ev_bool(long pNativeObject, long target, long heading, long tilt, double distance, boolean canChangeTilt, boolean canChangeHeading, boolean canChangeDistance);
	/**
	 * 锁定相机到某个节点
	 * @param target 锁定的目标节点
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param distance 距离
	 * @param canChangeTilt 允许鼠标修改Tilt角
	 * @param canChangeHeading 允许鼠标修改Heading角
	 * @param canChangeDistance 允许鼠标修改距离
	 */
	public void lockCameraToTarget(com.earthview.world.graphic.SceneNode target, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double distance, boolean canChangeTilt, boolean canChangeHeading, boolean canChangeDistance)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double distanceParamValue = distance;
		boolean canChangeTiltParamValue = canChangeTilt;
		boolean canChangeHeadingParamValue = canChangeHeading;
		boolean canChangeDistanceParamValue = canChangeDistance;
		lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, targetParamValue, headingParamValue, tiltParamValue, distanceParamValue, canChangeTiltParamValue, canChangeHeadingParamValue, canChangeDistanceParamValue);
	}
	native private void lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64_ev_bool_ev_bool_ev_bool_ev_bool(long pNativeObject, long target, long heading, long tilt, double distance, boolean canChangeTilt, boolean canChangeHeading, boolean canChangeDistance, boolean isThirdPersonMode);
	/**
	 * 锁定相机到某个节点
	 * @param target 锁定的目标节点
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param distance 距离
	 * @param canChangeTilt 允许鼠标修改Tilt角
	 * @param canChangeHeading 允许鼠标修改Heading角
	 * @param canChangeDistance 允许鼠标修改距离
	 * @param isThirdMode 是否为第三人模式。false为第一人称模式，相机的姿态与节点的姿态一致
	 */
	public void lockCameraToTarget(com.earthview.world.graphic.SceneNode target, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double distance, boolean canChangeTilt, boolean canChangeHeading, boolean canChangeDistance, boolean isThirdPersonMode)
	{
		long targetParamValue = (target == null ? 0L : target.nativeObject.pointer);
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double distanceParamValue = distance;
		boolean canChangeTiltParamValue = canChangeTilt;
		boolean canChangeHeadingParamValue = canChangeHeading;
		boolean canChangeDistanceParamValue = canChangeDistance;
		boolean isThirdPersonModeParamValue = isThirdPersonMode;
		lockCameraToTarget_CSceneNode_CDegree_CDegree_ev_real64_ev_bool_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, targetParamValue, headingParamValue, tiltParamValue, distanceParamValue, canChangeTiltParamValue, canChangeHeadingParamValue, canChangeDistanceParamValue, isThirdPersonModeParamValue);
	}
	native private void setCameraLockHeading_CDegree(long pNativeObject, long heading);
	/**
	 * 锁定相机锁定的偏航角
	 * @param heading 偏航角
	 */
	public void setCameraLockHeading(com.earthview.world.spatial.math.Degree heading)
	{
		long headingParamValue = heading.nativeObject.pointer;
		setCameraLockHeading_CDegree(this.nativeObject.pointer, headingParamValue);
	}
	native private void setCameraLockTilt_CDegree(long pNativeObject, long tilt);
	/**
	 * 锁定相机锁定的倾角
	 * @param tilt 倾角
	 */
	public void setCameraLockTilt(com.earthview.world.spatial.math.Degree tilt)
	{
		long tiltParamValue = tilt.nativeObject.pointer;
		setCameraLockTilt_CDegree(this.nativeObject.pointer, tiltParamValue);
	}
	native private void setCameraLockDistance_ev_real64(long pNativeObject, double distance);
	/**
	 * 锁定相机锁定的距离
	 * @param distance 距离
	 */
	public void setCameraLockDistance(double distance)
	{
		double distanceParamValue = distance;
		setCameraLockDistance_ev_real64(this.nativeObject.pointer, distanceParamValue);
	}
	native private void setCameraLockMode_ev_bool(long pNativeObject, boolean isThirdPersonMode);
	/**
	 * 设置锁定时是否为第三人称模式
	 * @param isThirdPersonMode true,为第三人称模式,false,为第三人称模式。
	 */
	public void setCameraLockMode(boolean isThirdPersonMode)
	{
		boolean isThirdPersonModeParamValue = isThirdPersonMode;
		setCameraLockMode_ev_bool(this.nativeObject.pointer, isThirdPersonModeParamValue);
	}
	native private void unlockCamera_void(long pNativeObject);
	/**
	 * 解除锁定
	 */
	public void unlockCamera()
	{
		unlockCamera_void(this.nativeObject.pointer);
	}
	native private void setCameraManipulatorIntersectModel_ev_bool(long pNativeObject, boolean intersectModel);
	/**
	 * 设置相机漫游器是否与模型求交
	 * @param intersectModel 是否与模型求交
	 */
	public void setCameraManipulatorIntersectModel(boolean intersectModel)
	{
		boolean intersectModelParamValue = intersectModel;
		setCameraManipulatorIntersectModel_ev_bool(this.nativeObject.pointer, intersectModelParamValue);
	}
	native private boolean getCameraManipulatorIntersectModel_void(long pNativeObject);
	/**
	 * 获取相机漫游器是否与模型求交
	 */
	public boolean getCameraManipulatorIntersectModel()
	{
		boolean returnValue = getCameraManipulatorIntersectModel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraManipulatorIntersectOBQ_ev_bool(long pNativeObject, boolean intersectOBQ);
	/**
	 * 设置相机漫游器是否与摄影测量模型求交
	 * @param intersectModel 是否与模型求交
	 */
	public void setCameraManipulatorIntersectOBQ(boolean intersectOBQ)
	{
		boolean intersectOBQParamValue = intersectOBQ;
		setCameraManipulatorIntersectOBQ_ev_bool(this.nativeObject.pointer, intersectOBQParamValue);
	}
	native private boolean getCameraManipulatorIntersectOBQ_void(long pNativeObject);
	/**
	 * 获取相机漫游器是否与摄影测量模型求交
	 */
	public boolean getCameraManipulatorIntersectOBQ()
	{
		boolean returnValue = getCameraManipulatorIntersectOBQ_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraManipulatorIntersectFloor_ev_bool(long pNativeObject, boolean intersectFloor);
	/**
	 * 设置相机漫游器是否与地面求交
	 * @param intersectModel 是否与地面求交
	 */
	public void setCameraManipulatorIntersectFloor(boolean intersectFloor)
	{
		boolean intersectFloorParamValue = intersectFloor;
		setCameraManipulatorIntersectFloor_ev_bool(this.nativeObject.pointer, intersectFloorParamValue);
	}
	native private boolean getCameraManipulatorIntersectFloor_void(long pNativeObject);
	/**
	 * 获取相机漫游器是否与地面求交
	 */
	public boolean getCameraManipulatorIntersectFloor()
	{
		boolean returnValue = getCameraManipulatorIntersectFloor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void getCameraPostion_CDegree_CDegree_CDegree_CDegree_ev_real64(long pNativeObject, long lat, long lon, long heading, long tilt, double altitude);
	/**
	 * 取得相机的相关参数
	 * @param lat 目标点的纬度
	 * @param lon 目标点的经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 相机的海拔
	 */
	public void getCameraPostion(com.earthview.world.spatial.math.Degree lat, com.earthview.world.spatial.math.Degree lon, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double altitude)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double altitudeParamValue = altitude;
		getCameraPostion_CDegree_CDegree_CDegree_CDegree_ev_real64(this.nativeObject.pointer, latParamValue, lonParamValue, headingParamValue, tiltParamValue, altitudeParamValue);
	}
	native private void setCameraPostion_CDegree_CDegree_CDegree_CDegree_ev_real64(long pNativeObject, long lat, long lon, long heading, long tilt, double altitude);
	/**
	 * 设置相机的相关参数
	 * @param lat 目标点的纬度
	 * @param lon 目标点的经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 相机的海拔
	 */
	public void setCameraPostion(com.earthview.world.spatial.math.Degree lat, com.earthview.world.spatial.math.Degree lon, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double altitude)
	{
		long latParamValue = lat.nativeObject.pointer;
		long lonParamValue = lon.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double altitudeParamValue = altitude;
		setCameraPostion_CDegree_CDegree_CDegree_CDegree_ev_real64(this.nativeObject.pointer, latParamValue, lonParamValue, headingParamValue, tiltParamValue, altitudeParamValue);
	}
	native private boolean getCameraIsUnderGroundMode_void(long pNativeObject);
	/**
	 * 获取地下镜头开启标志
	 * @return true是，false否
	 */
	public boolean getCameraIsUnderGroundMode()
	{
		boolean returnValue = getCameraIsUnderGroundMode_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraIsUnderGroundMode_ev_bool(long pNativeObject, boolean underGroundMode);
	/**
	 * 设置地下镜头开启
	 * @param underGroundMode 开启或关闭
	 */
	public void setCameraIsUnderGroundMode(boolean underGroundMode)
	{
		boolean underGroundModeParamValue = underGroundMode;
		setCameraIsUnderGroundMode_ev_bool(this.nativeObject.pointer, underGroundModeParamValue);
	}
	native private boolean getCameraIsPlaneBase_void(long pNativeObject);
	/**
	 * 是否基于平面的地下模式
	 * @return true是，false否
	 */
	public boolean getCameraIsPlaneBase()
	{
		boolean returnValue = getCameraIsPlaneBase_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraIsPlaneBase_ev_bool(long pNativeObject, boolean planeBase);
	/**
	 * 设置基于平面的地下模式
	 * @param planeBase 开启或关闭
	 */
	public void setCameraIsPlaneBase(boolean planeBase)
	{
		boolean planeBaseParamValue = planeBase;
		setCameraIsPlaneBase_ev_bool(this.nativeObject.pointer, planeBaseParamValue);
	}
	native private double getCameraControlDepth_void(long pNativeObject);
	/**
	 * 获取基于平面的地下模式时基准高度
	 */
	public double getCameraControlDepth()
	{
		double returnValue = getCameraControlDepth_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraControlDepth_ev_real64(long pNativeObject, double cameraDepth);
	/**
	 * 设置基于平面的地下模式时基准高度
	 * @param cameraDepth 基准高度
	 */
	public void setCameraControlDepth(double cameraDepth)
	{
		double cameraDepthParamValue = cameraDepth;
		setCameraControlDepth_ev_real64(this.nativeObject.pointer, cameraDepthParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 获取名字
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取控件类型
	 */
	public com.earthview.world.spatial.atlas.EVSpatialControlType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVSpatialControlType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVSpatialControlType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVSpatialControlType.toEnum(returnValue);
	}

	native private String getTypeString_void(long pNativeObject);
	/**
	 * 获取控件类型字符串
	 */
	public String getTypeString()
	{
		String returnValue = getTypeString_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getTypeString_void_NoVirtual(long pNativeObject);
	protected String getTypeString_NoVirtual()
	{
		String returnValue = getTypeString_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private boolean addViewport_EVString_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real64_ev_real64(long pNativeObject, String cameraName, int zorder, float left, float top, float width, float height, double cameraTilt, double cameraHeading);
	/**
	 * 添加子视口
	 * @param cameraName 子视口的相机的名字
	 * @param zorder 子视口的zorder
	 * @param left 子视口的左边界
	 * @param top 子视口的上边界
	 * @param width 子视口的宽度
	 * @param height 子视口的高度
	 * @param cameraTilt 子视口的相机的倾角
	 * @param cameraHeading 子视口的相机的偏航角
	 */
	public boolean addViewport(String cameraName, int zorder, float left, float top, float width, float height, double cameraTilt, double cameraHeading)
	{
		String cameraNameParamValue = cameraName;
		int zorderParamValue = zorder;
		float leftParamValue = left;
		float topParamValue = top;
		float widthParamValue = width;
		float heightParamValue = height;
		double cameraTiltParamValue = cameraTilt;
		double cameraHeadingParamValue = cameraHeading;
		boolean returnValue = addViewport_EVString_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_ev_real64_ev_real64(this.nativeObject.pointer, cameraNameParamValue, zorderParamValue, leftParamValue, topParamValue, widthParamValue, heightParamValue, cameraTiltParamValue, cameraHeadingParamValue);
		return returnValue;
	}
	native private boolean removeViewport_EVString(long pNativeObject, String cameraName);
	/**
	 * 移除子视口
	 * @param cameraName 子视口的相机的名字
	 */
	public boolean removeViewport(String cameraName)
	{
		String cameraNameParamValue = cameraName;
		boolean returnValue = removeViewport_EVString(this.nativeObject.pointer, cameraNameParamValue);
		return returnValue;
	}
	native private long getViewport_EVString(long pNativeObject, String cameraName);
	/**
	 * 获取视口
	 * @param cameraName 视口的相机的名字
	 * @return 视口
	 */
	public com.earthview.world.graphic.Viewport getViewport(String cameraName)
	{
		String cameraNameParamValue = cameraName;
		long returnValue = getViewport_EVString(this.nativeObject.pointer, cameraNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getViewport_void(long pNativeObject);
	/**
	 * 获取主视口
	 * @param  
	 * @return 视口
	 */
	public com.earthview.world.graphic.Viewport getViewport()
	{
		long returnValue = getViewport_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.Viewport __returnValue = new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate, "CViewport");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void setChildViewportCameraPosition_EVString_CDegree_CDegree_CDegree_CDegree_ev_real64_ev_real64(long pNativeObject, String cameraName, long latitude, long longitude, long heading, long tilt, double altitude, double moditifAltitude);
	/**
	 * 设置相机的位置
	 * @param cameraName 子视口相机的名字
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param heading 偏航角
	 * @param tilt 倾角
	 * @param altitude 海拔
	 * @param moditifAltitude 目标处的海拔
	 */
	public void setChildViewportCameraPosition(String cameraName, com.earthview.world.spatial.math.Degree latitude, com.earthview.world.spatial.math.Degree longitude, com.earthview.world.spatial.math.Degree heading, com.earthview.world.spatial.math.Degree tilt, double altitude, double moditifAltitude)
	{
		String cameraNameParamValue = cameraName;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		double altitudeParamValue = altitude;
		double moditifAltitudeParamValue = moditifAltitude;
		setChildViewportCameraPosition_EVString_CDegree_CDegree_CDegree_CDegree_ev_real64_ev_real64(this.nativeObject.pointer, cameraNameParamValue, latitudeParamValue, longitudeParamValue, headingParamValue, tiltParamValue, altitudeParamValue, moditifAltitudeParamValue);
	}
	native private void setNeedCopyMasterCameraTarget_EVString_ev_bool(long pNativeObject, String cameraName, boolean needCopyMasterCameraTarget);
	/**
	 * 设置子视口相机的目标点是否需与主相机一致
	 * @param needCopyMasterCamera 
	 */
	public void setNeedCopyMasterCameraTarget(String cameraName, boolean needCopyMasterCameraTarget)
	{
		String cameraNameParamValue = cameraName;
		boolean needCopyMasterCameraTargetParamValue = needCopyMasterCameraTarget;
		setNeedCopyMasterCameraTarget_EVString_ev_bool(this.nativeObject.pointer, cameraNameParamValue, needCopyMasterCameraTargetParamValue);
	}
	native private boolean getNeedCopyMasterCameraTarget_EVString(long pNativeObject, String cameraName);
	/**
	 * 获取子视口相机的目标点是否需与主相机一致
	 */
	public boolean getNeedCopyMasterCameraTarget(String cameraName)
	{
		String cameraNameParamValue = cameraName;
		boolean returnValue = getNeedCopyMasterCameraTarget_EVString(this.nativeObject.pointer, cameraNameParamValue);
		return returnValue;
	}
	native private void setCurrentFlyPath_CGlobeFlyPathPtr(long pNativeObject, long flyPath);
	/**
	 * 设置当前飞行路径
	 * @param flyPath 飞行路径
	 */
	public void setCurrentFlyPath(com.earthview.world.spatial3d.GlobeFlyPathPtr flyPath)
	{
		long flyPathParamValue = flyPath.nativeObject.pointer;
		setCurrentFlyPath_CGlobeFlyPathPtr(this.nativeObject.pointer, flyPathParamValue);
	}
	native private void showModelAxis_void(long pNativeObject);
	/**
	 * 设置模型的坐标轴
	 */
	public void showModelAxis()
	{
		showModelAxis_void(this.nativeObject.pointer);
	}
	native private void hideModelAxis_void(long pNativeObject);
	/**
	 * 隐藏模型的坐标轴
	 */
	public void hideModelAxis()
	{
		hideModelAxis_void(this.nativeObject.pointer);
	}
	native private void startEditControlPoint_void(long pNativeObject);
	/**
	 * 开始编辑控制点
	 */
	public void startEditControlPoint()
	{
		startEditControlPoint_void(this.nativeObject.pointer);
	}
	native private void stopEditControlPoint_void(long pNativeObject);
	/**
	 * 停止编辑控制点
	 */
	public void stopEditControlPoint()
	{
		stopEditControlPoint_void(this.nativeObject.pointer);
	}
	native private void startFly_void(long pNativeObject);
	/**
	 * 开始飞行
	 */
	public void startFly()
	{
		startFly_void(this.nativeObject.pointer);
	}
	native private void stopFly_void(long pNativeObject);
	/**
	 * 停止飞行
	 */
	public void stopFly()
	{
		stopFly_void(this.nativeObject.pointer);
	}
	native private void pauseFly_void(long pNativeObject);
	/**
	 * 暂停飞行
	 */
	public void pauseFly()
	{
		pauseFly_void(this.nativeObject.pointer);
	}
	native private void setLockHandleRotationMode_RotationMode(long pNativeObject, int rotationMode);
	/**
	 * 当相机锁定时，设置旋转方式
	 */
	public void setLockHandleRotationMode(com.earthview.world.spatial3d.controls.GlobeLockCameraHandler.RotationMode rotationMode)
	{
		int rotationModeParamValue = rotationMode.getValue();
		setLockHandleRotationMode_RotationMode(this.nativeObject.pointer, rotationModeParamValue);
	}
	native private int getLockHandleRotationMode_void(long pNativeObject);
	/**
	 * 当相机锁定时，获取当前的旋转方式
	 */
	public com.earthview.world.spatial3d.controls.GlobeLockCameraHandler.RotationMode getLockHandleRotationMode()
	{
		int returnValue = getLockHandleRotationMode_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.controls.GlobeLockCameraHandler.RotationMode.toEnum(returnValue);
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
	protected  void createGlobeScene_void_callback()
	{
		createGlobeScene();
	}

	native private void createGlobeScene_void(long pNativeObject);
	/**
	 * /创建场景/
	 */
	public void createGlobeScene()
	{
		createGlobeScene_void(this.nativeObject.pointer);
	}
	native private void createGlobeScene_void_NoVirtual(long pNativeObject);
	protected void createGlobeScene_NoVirtual()
	{
		createGlobeScene_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void destroyGlobeScene_void_callback()
	{
		destroyGlobeScene();
	}

	native private void destroyGlobeScene_void(long pNativeObject);
	/**
	 * 销毁场景
	 */
	public void destroyGlobeScene()
	{
		destroyGlobeScene_void(this.nativeObject.pointer);
	}
	native private void destroyGlobeScene_void_NoVirtual(long pNativeObject);
	protected void destroyGlobeScene_NoVirtual()
	{
		destroyGlobeScene_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setCameraManipulatorMoveToEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 启用/禁用双击移动
	 * @param enable 
	 */
	public void setCameraManipulatorMoveToEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setCameraManipulatorMoveToEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getCameraManipulatorMoveToEnable_void(long pNativeObject);
	/**
	 * 获取是否开启双击移动
	 * @param enable 
	 */
	public boolean getCameraManipulatorMoveToEnable()
	{
		boolean returnValue = getCameraManipulatorMoveToEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCameraManipulatorMouseWheelRatio_ev_real64(long pNativeObject, double mouseWheelRatio);
	/**
	 * 设置磙轮缩放的比率
	 * @param mouseWheelRatio 参数为0.5-2之间的浮点数
	 */
	public void setCameraManipulatorMouseWheelRatio(double mouseWheelRatio)
	{
		double mouseWheelRatioParamValue = mouseWheelRatio;
		setCameraManipulatorMouseWheelRatio_ev_real64(this.nativeObject.pointer, mouseWheelRatioParamValue);
	}
	native private double getCameraManipulatorMouseWheelRatio_void(long pNativeObject);
	/**
	 * 获取磙轮缩放的比率
	 * @param mouseWheelRatio 
	 */
	public double getCameraManipulatorMouseWheelRatio()
	{
		double returnValue = getCameraManipulatorMouseWheelRatio_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long screenToScene_ev_real32_ev_real32(long pNativeObject, float x, float y);
	/**
	 * /根据屏幕坐标返回射线/
	 * @param x 屏幕的Ｘ坐标
	 * @param y 屏幕的Ｙ坐标
	 * @return 射线对象
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
	protected  boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback(int screenX, int screenY, long latitude, long longitude)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		boolean returnValue = pickingRayIntersection(screenXParamValue, screenYParamValue, latitudeParamValue, longitudeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, int screenX, int screenY, long latitude, long longitude);
	/**
	 * 根据屏幕坐标返回对应的经纬度
	 * @param screenX 屏幕的Ｘ坐标
	 * @param screenY 屏幕的Ｙ坐标
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @return 有交点返回true，否则返回false
	 */
	public boolean pickingRayIntersection(int screenX, int screenY, DoublePointer latitude, DoublePointer longitude)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, screenXParamValue, screenYParamValue, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}
	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, int screenX, int screenY, long latitude, long longitude);
	protected boolean pickingRayIntersection_NoVirtual(int screenX, int screenY, DoublePointer latitude, DoublePointer longitude)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, screenXParamValue, screenYParamValue, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}

	protected  boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback(int screenX, int screenY, long latitude, long longitude, boolean intersectModel)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		boolean intersectModelParamValue = intersectModel;
		boolean returnValue = pickingRayIntersection(screenXParamValue, screenYParamValue, latitudeParamValue, longitudeParamValue, intersectModelParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool(long pNativeObject, int screenX, int screenY, long latitude, long longitude, boolean intersectModel);
	/**
	 * 根据屏幕坐标返回对应的经纬度
	 * @param screenX 屏幕的Ｘ坐标
	 * @param screenY 屏幕的Ｙ坐标
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param intersectModel 是否与模型相交
	 * @return 有交点返回true，否则返回false
	 */
	public boolean pickingRayIntersection(int screenX, int screenY, DoublePointer latitude, DoublePointer longitude, boolean intersectModel)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		boolean intersectModelParamValue = intersectModel;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, screenXParamValue, screenYParamValue, latitudeParamValue, longitudeParamValue, intersectModelParamValue);
		return returnValue;
	}
	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(long pNativeObject, int screenX, int screenY, long latitude, long longitude, boolean intersectModel);
	protected boolean pickingRayIntersection_NoVirtual(int screenX, int screenY, DoublePointer latitude, DoublePointer longitude, boolean intersectModel)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		boolean intersectModelParamValue = intersectModel;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_NoVirtual(this.nativeObject.pointer, screenXParamValue, screenYParamValue, latitudeParamValue, longitudeParamValue, intersectModelParamValue);
		return returnValue;
	}

	protected  boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback(int screenX, int screenY, boolean intersectModel, boolean intersectSea, long latitude, long longitude, long altitude, long modelIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		BooleanPointer modelIntersectedParamValue = new BooleanPointer(new InstancePointer(modelIntersected));
		boolean returnValue = pickingRayIntersection(screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool(long pNativeObject, int screenX, int screenY, boolean intersectModel, boolean intersectSea, long latitude, long longitude, long altitude, long modelIntersected);
	/**
	 * 根据屏幕坐标返回对应的经纬度
	 * @param screenX 屏幕的Ｘ坐标
	 * @param screenY 屏幕的Ｙ坐标
	 * @param intersectModel 是否与模型相交
	 * @param intersectSea 是否与海平面相交
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 射中点处的海拔
	 * @param modelIntersected 射中的是否为模型
	 * @return 有交点返回true，否则返回false
	 */
	public boolean pickingRayIntersection(int screenX, int screenY, boolean intersectModel, boolean intersectSea, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, BooleanPointer modelIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue);
		return returnValue;
	}
	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(long pNativeObject, int screenX, int screenY, boolean intersectModel, boolean intersectSea, long latitude, long longitude, long altitude, long modelIntersected);
	protected boolean pickingRayIntersection_NoVirtual(int screenX, int screenY, boolean intersectModel, boolean intersectSea, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, BooleanPointer modelIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_NoVirtual(this.nativeObject.pointer, screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue);
		return returnValue;
	}

	protected  boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback(int screenX, int screenY, boolean intersectModel, boolean intersectSea, boolean intersectOBQ, long latitude, long longitude, long altitude, long modelIntersected, long seaIntersected, long OBQIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		boolean intersectOBQParamValue = intersectOBQ;
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		BooleanPointer modelIntersectedParamValue = new BooleanPointer(new InstancePointer(modelIntersected));
		BooleanPointer seaIntersectedParamValue = new BooleanPointer(new InstancePointer(seaIntersected));
		BooleanPointer OBQIntersectedParamValue = new BooleanPointer(new InstancePointer(OBQIntersected));
		boolean returnValue = pickingRayIntersection(screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, intersectOBQParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue, seaIntersectedParamValue, OBQIntersectedParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool(long pNativeObject, int screenX, int screenY, boolean intersectModel, boolean intersectSea, boolean intersectOBQ, long latitude, long longitude, long altitude, long modelIntersected, long seaIntersected, long OBQIntersected);
	/**
	 * 根据屏幕坐标返回对应的经纬度
	 * @param screenX 屏幕的Ｘ坐标
	 * @param screenY 屏幕的Ｙ坐标
	 * @param intersectModel 是否与模型相交
	 * @param intersectSea 是否与海平面相交
	 * @param intersectOBQ 是否与摄影测量相交
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 射中点处的海拔
	 * @param modelIntersected 射中的是否为模型
	 * @param seaIntersected 射中的是否为海面
	 * @param OBQIntersected 射中的是否为摄影测量图层
	 * @return 有交点返回true，否则返回false
	 */
	public boolean pickingRayIntersection(int screenX, int screenY, boolean intersectModel, boolean intersectSea, boolean intersectOBQ, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, BooleanPointer modelIntersected, BooleanPointer seaIntersected, BooleanPointer OBQIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		boolean intersectOBQParamValue = intersectOBQ;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		long seaIntersectedParamValue = seaIntersected.nativeObject.pointer;
		long OBQIntersectedParamValue = OBQIntersected.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, intersectOBQParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue, seaIntersectedParamValue, OBQIntersectedParamValue);
		return returnValue;
	}
	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_NoVirtual(long pNativeObject, int screenX, int screenY, boolean intersectModel, boolean intersectSea, boolean intersectOBQ, long latitude, long longitude, long altitude, long modelIntersected, long seaIntersected, long OBQIntersected);
	protected boolean pickingRayIntersection_NoVirtual(int screenX, int screenY, boolean intersectModel, boolean intersectSea, boolean intersectOBQ, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, BooleanPointer modelIntersected, BooleanPointer seaIntersected, BooleanPointer OBQIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		boolean intersectOBQParamValue = intersectOBQ;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		long seaIntersectedParamValue = seaIntersected.nativeObject.pointer;
		long OBQIntersectedParamValue = OBQIntersected.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, intersectOBQParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue, seaIntersectedParamValue, OBQIntersectedParamValue);
		return returnValue;
	}

	protected  boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback(int screenX, int screenY, boolean intersectModel, boolean intersectSea, long latitude, long longitude, long altitude, long modelIntersected, long seaIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		DoublePointer latitudeParamValue = new DoublePointer(new InstancePointer(latitude));
		DoublePointer longitudeParamValue = new DoublePointer(new InstancePointer(longitude));
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		BooleanPointer modelIntersectedParamValue = new BooleanPointer(new InstancePointer(modelIntersected));
		BooleanPointer seaIntersectedParamValue = new BooleanPointer(new InstancePointer(seaIntersected));
		boolean returnValue = pickingRayIntersection(screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue, seaIntersectedParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool(long pNativeObject, int screenX, int screenY, boolean intersectModel, boolean intersectSea, long latitude, long longitude, long altitude, long modelIntersected, long seaIntersected);
	/**
	 * 根据屏幕坐标返回对应的经纬度
	 * @param screenX 屏幕的Ｘ坐标
	 * @param screenY 屏幕的Ｙ坐标
	 * @param intersectModel 是否与模型相交
	 * @param intersectSea 是否与海平面相交
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 射中点处的海拔
	 * @param modelIntersected 射中的是否为模型
	 * @param seaIntersected 射中的是否为海面
	 * @return 有交点返回true，否则返回false
	 */
	public boolean pickingRayIntersection(int screenX, int screenY, boolean intersectModel, boolean intersectSea, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, BooleanPointer modelIntersected, BooleanPointer seaIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		long seaIntersectedParamValue = seaIntersected.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool(this.nativeObject.pointer, screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue, seaIntersectedParamValue);
		return returnValue;
	}
	native private boolean pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_NoVirtual(long pNativeObject, int screenX, int screenY, boolean intersectModel, boolean intersectSea, long latitude, long longitude, long altitude, long modelIntersected, long seaIntersected);
	protected boolean pickingRayIntersection_NoVirtual(int screenX, int screenY, boolean intersectModel, boolean intersectSea, DoublePointer latitude, DoublePointer longitude, DoublePointer altitude, BooleanPointer modelIntersected, BooleanPointer seaIntersected)
	{
		int screenXParamValue = screenX;
		int screenYParamValue = screenY;
		boolean intersectModelParamValue = intersectModel;
		boolean intersectSeaParamValue = intersectSea;
		long latitudeParamValue = latitude.nativeObject.pointer;
		long longitudeParamValue = longitude.nativeObject.pointer;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long modelIntersectedParamValue = modelIntersected.nativeObject.pointer;
		long seaIntersectedParamValue = seaIntersected.nativeObject.pointer;
		boolean returnValue = pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_NoVirtual(this.nativeObject.pointer, screenXParamValue, screenYParamValue, intersectModelParamValue, intersectSeaParamValue, latitudeParamValue, longitudeParamValue, altitudeParamValue, modelIntersectedParamValue, seaIntersectedParamValue);
		return returnValue;
	}

	protected  void windowResized_int_int_callback(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		windowResized(widthParamValue, heightParamValue);
	}

	native private void windowResized_int_int(long pNativeObject, int width, int height);
	/**
	 * /窗体变化处理事件，在linux下必须调用此函数给出窗口大小。/
	 * @param width 窗体的宽度
	 * @param height 窗体的高度
	 */
	public void windowResized(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		windowResized_int_int(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}
	native private void windowResized_int_int_NoVirtual(long pNativeObject, int width, int height);
	protected void windowResized_NoVirtual(int width, int height)
	{
		int widthParamValue = width;
		int heightParamValue = height;
		windowResized_int_int_NoVirtual(this.nativeObject.pointer, widthParamValue, heightParamValue);
	}

	native private void windowResized_void(long pNativeObject);
	/**
	 * 窗体变化处理事件。
	 */
	public void windowResized()
	{
		windowResized_void(this.nativeObject.pointer);
	}
	native private void windowResized_void_NoVirtual(long pNativeObject);
	protected void windowResized_NoVirtual()
	{
		windowResized_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void setCompassWidgetVisibleMode_VisibleMode(long pNativeObject, int visibleMode);
	/**
	 * 设置导航面板的显示模式
	 * @param visibleMode 导航面板显示模式
	 */
	public void setCompassWidgetVisibleMode(com.earthview.world.spatial3d.controls.VisibleMode visibleMode)
	{
		int visibleModeParamValue = visibleMode.getValue();
		setCompassWidgetVisibleMode_VisibleMode(this.nativeObject.pointer, visibleModeParamValue);
	}
	native private void setCompassWidgetPosition_GuiHorizontalAlignment_GuiVerticalAlignment_ev_int32_ev_int32(long pNativeObject, int gha, int gva, int x, int y);
	/**
	 * 设置导航面板的位置整个导航栏的长和宽190和78，它们是以像素为单位的。因为渲染窗体的大小是可以变化的，所以X（Y）坐标的最大值是不确定的。为了能让导航栏能贴在窗体右边，gha应设为GHA_RIGHT,x应设为-78。同理为了能让导航栏能贴在窗体下边，gva应设为GVA_BOTTOM,y设为-190GHA_RIGHT,GVA_BOTTOM,-78,-190导航栏会在右下角GHA_RIGHT,GVA_TOP,-78,0导航栏会在右上角GHA_LEFT,GVA_TOP,0,0导航栏会在左上角GHA_LEFT,GVA_BOTTOM,0,-190导航栏会在左下角
	 * @param gha 水平方向的分布方式
	 * @param gva 坚直方向的分布方式
	 * @param x 导航面板的X坐标，可以为负值
	 * @param y 导航面板的Y坐标，可以为负值
	 */
	public void setCompassWidgetPosition(com.earthview.world.graphic.GuiHorizontalAlignment gha, com.earthview.world.graphic.GuiVerticalAlignment gva, int x, int y)
	{
		int ghaParamValue = gha.getValue();
		int gvaParamValue = gva.getValue();
		int xParamValue = x;
		int yParamValue = y;
		setCompassWidgetPosition_GuiHorizontalAlignment_GuiVerticalAlignment_ev_int32_ev_int32(this.nativeObject.pointer, ghaParamValue, gvaParamValue, xParamValue, yParamValue);
	}
	native private void setLatitudeLonitudeTextBoxVisibleMode_VisibleMode(long pNativeObject, int visibleMode);
	/**
	 * 设置经纬度面板的显示模式
	 * @param visibleMode 经纬度面板显示模式
	 */
	public void setLatitudeLonitudeTextBoxVisibleMode(com.earthview.world.spatial3d.controls.VisibleMode visibleMode)
	{
		int visibleModeParamValue = visibleMode.getValue();
		setLatitudeLonitudeTextBoxVisibleMode_VisibleMode(this.nativeObject.pointer, visibleModeParamValue);
	}
	native private void tiltCamera_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double tiltDegree);
	/**
	 * 在指定的坐标点（屏幕坐标系）处倾斜相机
	 * @param x x坐标
	 * @param y y坐标
	 * @param tiltDegree 倾斜的角度
	 */
	public void tiltCamera(double x, double y, double tiltDegree)
	{
		double xParamValue = x;
		double yParamValue = y;
		double tiltDegreeParamValue = tiltDegree;
		tiltCamera_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, tiltDegreeParamValue);
	}
	native private void beginCameraFadeInFadeOut_ev_real64(long pNativeObject, double time);
	/**
	 * 开启相机淡入淡出效果
	 * @param time 淡入淡出效果开启后的持续时间(秒)
	 */
	public void beginCameraFadeInFadeOut(double time)
	{
		double timeParamValue = time;
		beginCameraFadeInFadeOut_ev_real64(this.nativeObject.pointer, timeParamValue);
	}
	native private void endCameraFadeInFadeOut_void(long pNativeObject);
	/**
	 * 关闭相机淡入淡出效果
	 */
	public void endCameraFadeInFadeOut()
	{
		endCameraFadeInFadeOut_void(this.nativeObject.pointer);
	}
	native private void rotationCamera_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double x, double y, double rotationDegree, double zoomRatio);
	/**
	 * 在指定的坐标点（屏幕坐标系）处旋转和缩放相机
	 * @param x x坐标
	 * @param y y坐标
	 * @param rotationDegree 旋转的角度
	 * @param zoomRatio 缩放系数
	 */
	public void rotationCamera(double x, double y, double rotationDegree, double zoomRatio)
	{
		double xParamValue = x;
		double yParamValue = y;
		double rotationDegreeParamValue = rotationDegree;
		double zoomRatioParamValue = zoomRatio;
		rotationCamera_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, xParamValue, yParamValue, rotationDegreeParamValue, zoomRatioParamValue);
	}
	native private void setCameraRatio_ev_real64(long pNativeObject, double cameraRatio);
	/**
	 * 设置相机的旋转系数
	 * @param cameraRatio 旋转系数
	 */
	public void setCameraRatio(double cameraRatio)
	{
		double cameraRatioParamValue = cameraRatio;
		setCameraRatio_ev_real64(this.nativeObject.pointer, cameraRatioParamValue);
	}
	native private boolean eventStage_void(long pNativeObject);
	/**
	 * /处理事件/
	 * @return 成功返回true，否则返回false
	 */
	public boolean eventStage()
	{
		boolean returnValue = eventStage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean eventStage_void_NoVirtual(long pNativeObject);
	protected boolean eventStage_NoVirtual()
	{
		boolean returnValue = eventStage_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  boolean setCurrentTool_ITool_callback(long ref_tool)
	{
		com.earthview.world.spatial.systemui.Itool ref_toolParamValue = (ref_tool == 0L ? null : new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_toolParamValue != null)
		{
		ref_toolParamValue.setDelegate(true);
		ref_toolParamValue.setInstancePointer(new InstancePointer(ref_tool));
		IClassFactory ref_toolParamValueClassFactory = GlobalClassFactoryMap.get(ref_toolParamValue.getCppInstanceTypeName());
		if (ref_toolParamValueClassFactory != null)
		{
			ref_toolParamValue.setDelegate(true);
			ref_toolParamValue = (com.earthview.world.spatial.systemui.Itool)ref_toolParamValueClassFactory.create();
			ref_toolParamValue.setDelegate(true);
			ref_toolParamValue.setInstancePointer(new InstancePointer(ref_tool));
		}
		}
		boolean returnValue = setCurrentTool(ref_toolParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean setCurrentTool_ITool(long pNativeObject, long ref_tool);
	/**
	 * 设置控件的当前工具
	 * @param tool 当前工具
	 * @return 成功返回true，否则返回false
	 */
	public boolean setCurrentTool(com.earthview.world.spatial.systemui.Itool ref_tool)
	{
		long ref_toolParamValue = (ref_tool == null ? 0L : ref_tool.nativeObject.pointer);
		boolean returnValue = setCurrentTool_ITool(this.nativeObject.pointer, ref_toolParamValue);
		return returnValue;
	}
	native private boolean setCurrentTool_ITool_NoVirtual(long pNativeObject, long ref_tool);
	protected boolean setCurrentTool_NoVirtual(com.earthview.world.spatial.systemui.Itool ref_tool)
	{
		long ref_toolParamValue = (ref_tool == null ? 0L : ref_tool.nativeObject.pointer);
		boolean returnValue = setCurrentTool_ITool_NoVirtual(this.nativeObject.pointer, ref_toolParamValue);
		return returnValue;
	}

	native private long getCurrentTool_void(long pNativeObject);
	/**
	 * 返回控件的当前工具
	 * @return 当前工具对象
	 */
	public com.earthview.world.spatial.systemui.Itool getCurrentTool()
	{
		long returnValue = getCurrentTool_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.systemui.Itool __returnValue = new com.earthview.world.spatial.systemui.Itool(CreatedWhenConstruct.CWC_NotToCreate, "ITool");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.systemui.Itool)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITool");
		}
		return __returnValue;
	}
	native private long getCurrentAtmosphere_void(long pNativeObject);
	/**
	 * 返回自然环境对象
	 * @return 自然环境对象
	 */
	public com.earthview.world.spatial.effect3d.GlobeAtmosphere getCurrentAtmosphere()
	{
		long returnValue = getCurrentAtmosphere_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.effect3d.GlobeAtmosphere __returnValue = new com.earthview.world.spatial.effect3d.GlobeAtmosphere(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeAtmosphere");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.effect3d.GlobeAtmosphere)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeAtmosphere");
		}
		return __returnValue;
	}
	native private boolean cartesion2pixel_CVector3_ev_real64_ev_real64(long pNativeObject, long worldPt, long px, long py);
	/**
	 * 将世界坐标系下的点转换为主视口上的像素坐标
	 * @param worldPt 世界坐标系下的点
	 * @param px 转换出来的Ｘ坐标
	 * @param py 转换出来的Ｙ坐标
	 * @return 成功返回true，否则返回false
	 */
	public boolean cartesion2pixel(com.earthview.world.spatial.math.Vector3 worldPt, DoublePointer px, DoublePointer py)
	{
		long worldPtParamValue = worldPt.nativeObject.pointer;
		long pxParamValue = px.nativeObject.pointer;
		long pyParamValue = py.nativeObject.pointer;
		boolean returnValue = cartesion2pixel_CVector3_ev_real64_ev_real64(this.nativeObject.pointer, worldPtParamValue, pxParamValue, pyParamValue);
		return returnValue;
	}
	native private boolean cartesion2pixel_CVector3_CViewport_ev_real64_ev_real64(long pNativeObject, long worldPt, long vp, long px, long py);
	/**
	 * 将世界坐标系下的点转换为指定视口上的像素坐标
	 * @param worldPt 世界坐标系下的点
	 * @param vp 指定的视口
	 * @param px 转换出来的Ｘ坐标
	 * @param py 转换出来的Ｙ坐标
	 * @return 成功返回true，否则返回false
	 */
	public boolean cartesion2pixel(com.earthview.world.spatial.math.Vector3 worldPt, com.earthview.world.graphic.Viewport vp, DoublePointer px, DoublePointer py)
	{
		long worldPtParamValue = worldPt.nativeObject.pointer;
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		long pxParamValue = px.nativeObject.pointer;
		long pyParamValue = py.nativeObject.pointer;
		boolean returnValue = cartesion2pixel_CVector3_CViewport_ev_real64_ev_real64(this.nativeObject.pointer, worldPtParamValue, vpParamValue, pxParamValue, pyParamValue);
		return returnValue;
	}
	native private void setCustomStatusbarTextEnabled_ev_bool(long pNativeObject, boolean enabled);
	/**
	 * 设置允许自定义文本
	 * @param enabled 启用
	 */
	public void setCustomStatusbarTextEnabled(boolean enabled)
	{
		boolean enabledParamValue = enabled;
		setCustomStatusbarTextEnabled_ev_bool(this.nativeObject.pointer, enabledParamValue);
	}
	native private void setCustomStatusbarText_EVString(long pNativeObject, String text);
	/**
	 * 设置自定义文本的内容
	 * @param text 文本的内容
	 */
	public void setCustomStatusbarText(String text)
	{
		String textParamValue = text;
		setCustomStatusbarText_EVString(this.nativeObject.pointer, textParamValue);
	}
	native private void setCustomStatusbarTextFontName_EVString(long pNativeObject, String fontName);
	/**
	 * 设置自定义文本的内容
	 * @param fontName 文本的字符库的名字
	 */
	public void setCustomStatusbarTextFontName(String fontName)
	{
		String fontNameParamValue = fontName;
		setCustomStatusbarTextFontName_EVString(this.nativeObject.pointer, fontNameParamValue);
	}
	native private void setCustomStatusbarTextFontColor_CColourValue(long pNativeObject, long color);
	/**
	 * 设置自定义文本的内容
	 * @param color 文本的颜色
	 */
	public void setCustomStatusbarTextFontColor(com.earthview.world.graphic.ColourValue color)
	{
		long colorParamValue = color.nativeObject.pointer;
		setCustomStatusbarTextFontColor_CColourValue(this.nativeObject.pointer, colorParamValue);
	}
	native private void setCustomStatusbarText_EVString_EVString_CColourValue(long pNativeObject, String text, String fontName, long color);
	/**
	 * 设置自定义文本的内容
	 * @param text 文本的内容
	 * @param fontName 文本的字符库的名字
	 * @param color 文本的颜色
	 */
	public void setCustomStatusbarText(String text, String fontName, com.earthview.world.graphic.ColourValue color)
	{
		String textParamValue = text;
		String fontNameParamValue = fontName;
		long colorParamValue = color.nativeObject.pointer;
		setCustomStatusbarText_EVString_EVString_CColourValue(this.nativeObject.pointer, textParamValue, fontNameParamValue, colorParamValue);
	}
	native private void setCustomStatusbarPosition_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(long pNativeObject, double x, double y, double width, double height, double textOffsetX, double textOffsetY, int gha, int gva);
	/**
	 * 设置自定义文本的位置
	 * @param x 左上角Ｘ坐标
	 * @param y 左上角Y坐标
	 * @param width 宽度
	 * @param height 高度
	 * @param textOffsetX 文字相对背景的
	 * @param textOffsetX 高度
	 * @param gha 水平对齐的方式
	 * @param gva 竖直对齐的方式
	 */
	public void setCustomStatusbarPosition(double x, double y, double width, double height, double textOffsetX, double textOffsetY, com.earthview.world.graphic.GuiHorizontalAlignment gha, com.earthview.world.graphic.GuiVerticalAlignment gva)
	{
		double xParamValue = x;
		double yParamValue = y;
		double widthParamValue = width;
		double heightParamValue = height;
		double textOffsetXParamValue = textOffsetX;
		double textOffsetYParamValue = textOffsetY;
		int ghaParamValue = gha.getValue();
		int gvaParamValue = gva.getValue();
		setCustomStatusbarPosition_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(this.nativeObject.pointer, xParamValue, yParamValue, widthParamValue, heightParamValue, textOffsetXParamValue, textOffsetYParamValue, ghaParamValue, gvaParamValue);
	}
	native private boolean addQueryListener_IGlobeQueryListener(long pNativeObject, long ref_listener);
	/**
	 * 添加查询监听器
	 * @param listener 监听器
	 */
	public boolean addQueryListener(com.earthview.world.spatial3d.systemui.Iglobequerylistener ref_listener)
	{
		long ref_listenerParamValue = (ref_listener == null ? 0L : ref_listener.nativeObject.pointer);
		boolean returnValue = addQueryListener_IGlobeQueryListener(this.nativeObject.pointer, ref_listenerParamValue);
		return returnValue;
	}
	native private boolean removeQueryListener_IGlobeQueryListener(long pNativeObject, long listener);
	/**
	 * 移除查询监听器
	 * @param listener 监听器
	 */
	public boolean removeQueryListener(com.earthview.world.spatial3d.systemui.Iglobequerylistener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		boolean returnValue = removeQueryListener_IGlobeQueryListener(this.nativeObject.pointer, listenerParamValue);
		return returnValue;
	}
	native private long getQueryListenerCount_void(long pNativeObject);
	/**
	 * 获取查询监听器的数量
	 */
	public long getQueryListenerCount()
	{
		long returnValue = getQueryListenerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getQueryListener_ev_uint32(long pNativeObject, long index);
	/**
	 * 取得查询监听器
	 * @param index 监听器的索引
	 */
	public com.earthview.world.spatial3d.systemui.Iglobequerylistener getQueryListener(long index)
	{
		long indexParamValue = index;
		long returnValue = getQueryListener_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.systemui.Iglobequerylistener __returnValue = new com.earthview.world.spatial3d.systemui.Iglobequerylistener(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeQueryListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.systemui.Iglobequerylistener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeQueryListener");
		}
		return __returnValue;
	}
	native private void clearQueryListeners_void(long pNativeObject);
	/**
	 * 清理查询监听器
	 * @param index 监听器的索引
	 */
	public void clearQueryListeners()
	{
		clearQueryListeners_void(this.nativeObject.pointer);
	}
	native private void fireSelectionChanged_RaySceneQueryResult(long pNativeObject, long result);
	/**
	 * 通知选中的状态改变
	 * @param result 射线求交查询结果
	 */
	public void fireSelectionChanged(com.earthview.world.graphic.RaySceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		fireSelectionChanged_RaySceneQueryResult(this.nativeObject.pointer, resultParamValue);
	}
	native private void fireSelectionChanged_SceneQueryResult(long pNativeObject, long result);
	/**
	 * 通知选中的状态改变
	 * @param result 求交查询结果
	 */
	public void fireSelectionChanged(com.earthview.world.graphic.SceneQueryResult result)
	{
		long resultParamValue = result.nativeObject.pointer;
		fireSelectionChanged_SceneQueryResult(this.nativeObject.pointer, resultParamValue);
	}
	native private void fireSelectionChanged_CGlobeSelection(long pNativeObject, long result);
	/**
	 * 通知选中的状态改变
	 * @param result 场景图层对应的选择集
	 */
	public void fireSelectionChanged(com.earthview.world.spatial3d.GlobeSelection result)
	{
		long resultParamValue = result.nativeObject.pointer;
		fireSelectionChanged_CGlobeSelection(this.nativeObject.pointer, resultParamValue);
	}
	native private void fireSelectionChanged_RaySceneQueryResult_CGlobeSelection(long pNativeObject, long rayResult, long clamplayerResult);
	/**
	 * 通知选中的状态改变
	 * @param rayResult 射线求交查询结果
	 * @param clamplayerResult 贴地图层查询结果
	 */
	public void fireSelectionChanged(com.earthview.world.graphic.RaySceneQueryResult rayResult, com.earthview.world.spatial3d.GlobeSelection clamplayerResult)
	{
		long rayResultParamValue = rayResult.nativeObject.pointer;
		long clamplayerResultParamValue = clamplayerResult.nativeObject.pointer;
		fireSelectionChanged_RaySceneQueryResult_CGlobeSelection(this.nativeObject.pointer, rayResultParamValue, clamplayerResultParamValue);
	}
	native private long getGlobeSelection_void(long pNativeObject);
	/**
	 * 获取所有图层对应的选择集
	 * @return 所有场景图层对应的选择集
	 */
	public com.earthview.world.spatial3d.GlobeSelection getGlobeSelection()
	{
		long returnValue = getGlobeSelection_void(this.nativeObject.pointer);
		com.earthview.world.spatial3d.GlobeSelection __returnValue = new com.earthview.world.spatial3d.GlobeSelection(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CGlobeSelection");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeSelection)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CGlobeSelection");
		}
		return __returnValue;
	}
	native private void fireSelectedObjectMoved_RaySceneQueryResultEntry_CMatrix4_MouseOpType(long pNativeObject, long entry, long newMatrix, int type);
	/**
	 * 通知选中的对象被移动了
	 * @param entry 射线求交查询结果排序比较器
	 * @param newMatrix 被选中对象的新的世界变换矩阵
	 * @param type 鼠标状态
	 */
	public void fireSelectedObjectMoved(com.earthview.world.graphic.RaySceneQueryResultEntry entry, com.earthview.world.spatial.math.Matrix4 newMatrix, com.earthview.world.spatial3d.systemui.Iglobequerylistener.MouseOpType type)
	{
		long entryParamValue = entry.nativeObject.pointer;
		long newMatrixParamValue = newMatrix.nativeObject.pointer;
		int typeParamValue = type.getValue();
		fireSelectedObjectMoved_RaySceneQueryResultEntry_CMatrix4_MouseOpType(this.nativeObject.pointer, entryParamValue, newMatrixParamValue, typeParamValue);
	}
	native private void fireDeleteKeyPressed_void(long pNativeObject);
	/**
	 * 通知Delete键被按下
	 */
	public void fireDeleteKeyPressed()
	{
		fireDeleteKeyPressed_void(this.nativeObject.pointer);
	}
	native private void setGridVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置经纬网是否显示
	 */
	public void setGridVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setGridVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private boolean getGridVisible_void(long pNativeObject);
	/**
	 * 获取经纬网是否显示
	 */
	public boolean getGridVisible()
	{
		boolean returnValue = getGridVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setSeaType_SeaType(long pNativeObject, int seaType);
	/**
	 * 设置海水的类型
	 */
	public void setSeaType(com.earthview.world.spatial3d.SeaType seaType)
	{
		int seaTypeParamValue = seaType.getValue();
		setSeaType_SeaType(this.nativeObject.pointer, seaTypeParamValue);
	}
	native private int getSeaType_void(long pNativeObject);
	/**
	 * 获取海水的类型
	 */
	public com.earthview.world.spatial3d.SeaType getSeaType()
	{
		int returnValue = getSeaType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.SeaType.toEnum(returnValue);
	}
	native private void setSeaVertexNum_ev_int32(long pNativeObject, int vertexNum);
	/**
	 * 设置海水密度
	 * @param vertexNum 顶点数
	 */
	public void setSeaVertexNum(int vertexNum)
	{
		int vertexNumParamValue = vertexNum;
		setSeaVertexNum_ev_int32(this.nativeObject.pointer, vertexNumParamValue);
	}
	native private int getSeaVertexNum_void(long pNativeObject);
	/**
	 * 获取海水密度
	 * @return 顶点数
	 */
	public int getSeaVertexNum()
	{
		int returnValue = getSeaVertexNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void refreshSeaQuadMapType_void(long pNativeObject);
	/**
	 * 在海水类型改变后，刷新海水
	 */
	public void refreshSeaQuadMapType()
	{
		refreshSeaQuadMapType_void(this.nativeObject.pointer);
	}
	native private long getWidgetManager_void(long pNativeObject);
	/**
	 * 获取窗口部件管理器
	 * @return 窗口部件管理器
	 */
	public com.earthview.world.spatial3d.controls.WidgetManager getWidgetManager()
	{
		long returnValue = getWidgetManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.WidgetManager __returnValue = new com.earthview.world.spatial3d.controls.WidgetManager(CreatedWhenConstruct.CWC_NotToCreate, "CWidgetManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.WidgetManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWidgetManager");
		}
		return __returnValue;
	}
	native private long getModelLayerEditor_void(long pNativeObject);
	/**
	 * 获取模型图层的编辑器
	 * @return 模型图层的编辑器
	 */
	public com.earthview.world.spatial3d.Layer3DEditor getModelLayerEditor()
	{
		long returnValue = getModelLayerEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditor __returnValue = new com.earthview.world.spatial3d.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditor");
		}
		return __returnValue;
	}
	native private long getEffectLayerEditor_void(long pNativeObject);
	/**
	 * 获取特效图层的编辑器
	 * @return 特效图层的编辑器
	 */
	public com.earthview.world.spatial3d.Layer3DEditor getEffectLayerEditor()
	{
		long returnValue = getEffectLayerEditor_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.Layer3DEditor __returnValue = new com.earthview.world.spatial3d.Layer3DEditor(CreatedWhenConstruct.CWC_NotToCreate, "CLayer3DEditor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.Layer3DEditor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLayer3DEditor");
		}
		return __returnValue;
	}
	native private void endEditing_void(long pNativeObject);
	/**
	 * 结束编辑
	 */
	public void endEditing()
	{
		endEditing_void(this.nativeObject.pointer);
	}
	native private void clearLayerSelection_void(long pNativeObject);
	/**
	 * 清空选择集
	 */
	public void clearLayerSelection()
	{
		clearLayerSelection_void(this.nativeObject.pointer);
	}
	native private void setIsFlying_ev_bool(long pNativeObject, boolean flying);
	/**
	 * 设置是否正处于飞行状态
	 */
	public void setIsFlying(boolean flying)
	{
		boolean flyingParamValue = flying;
		setIsFlying_ev_bool(this.nativeObject.pointer, flyingParamValue);
	}
	native private boolean getIsFlying_void(long pNativeObject);
	/**
	 * 获取是否正处于飞行状态
	 */
	public boolean getIsFlying()
	{
		boolean returnValue = getIsFlying_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getCompositorEnabled_Compositor3DType(long pNativeObject, int type);
	/**
	 * 获取指定的合成器是否启用
	 */
	public boolean getCompositorEnabled(com.earthview.world.spatial3d.Compositor3DType type)
	{
		int typeParamValue = type.getValue();
		boolean returnValue = getCompositorEnabled_Compositor3DType(this.nativeObject.pointer, typeParamValue);
		return returnValue;
	}
	native private boolean setCompositorEnabled_Compositor3DType_ev_bool(long pNativeObject, int type, boolean enabled);
	/**
	 * 设置指定的合成器是否启用
	 * @return true,设置成功;false,失败
	 */
	public boolean setCompositorEnabled(com.earthview.world.spatial3d.Compositor3DType type, boolean enabled)
	{
		int typeParamValue = type.getValue();
		boolean enabledParamValue = enabled;
		boolean returnValue = setCompositorEnabled_Compositor3DType_ev_bool(this.nativeObject.pointer, typeParamValue, enabledParamValue);
		return returnValue;
	}
	native private long getNumEnabledCompositors_void(long pNativeObject);
	/**
	 * 获取启用的合成器的数量
	 */
	public long getNumEnabledCompositors()
	{
		long returnValue = getNumEnabledCompositors_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEnabledCompositor_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定序号的合成器
	 */
	public com.earthview.world.spatial3d.Compositor3DType getEnabledCompositor(long index)
	{
		long indexParamValue = index;
		int returnValue = getEnabledCompositor_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return com.earthview.world.spatial3d.Compositor3DType.toEnum(returnValue);
	}
	native private void locate2_CVector3_CDegree_CDegree_ev_real64(long pNativeObject, long target, long tilt, long heading, double distance);
	/**
	 * 定位相机（均匀飞行）
	 * @param target 目标点
	 * @param tilt 相机的倾角
	 * @param heading 相机的倾角
	 * @param distance 相机到目标点的距离
	 */
	public void locate2(com.earthview.world.spatial.math.Vector3 target, com.earthview.world.spatial.math.Degree tilt, com.earthview.world.spatial.math.Degree heading, double distance)
	{
		long targetParamValue = target.nativeObject.pointer;
		long tiltParamValue = tilt.nativeObject.pointer;
		long headingParamValue = heading.nativeObject.pointer;
		double distanceParamValue = distance;
		locate2_CVector3_CDegree_CDegree_ev_real64(this.nativeObject.pointer, targetParamValue, tiltParamValue, headingParamValue, distanceParamValue);
	}
	native private void disableAllCompositors_void(long pNativeObject);
	/**
	 * 禁用所有合成器
	 */
	public void disableAllCompositors()
	{
		disableAllCompositors_void(this.nativeObject.pointer);
	}
	native private void setCameraMaxLimitAltitude_ev_real64(long pNativeObject, double maxAltitude);
	/**
	 * 设置相机的最大海拔
	 * @param maxAltitude 海拔
	 */
	public void setCameraMaxLimitAltitude(double maxAltitude)
	{
		double maxAltitudeParamValue = maxAltitude;
		setCameraMaxLimitAltitude_ev_real64(this.nativeObject.pointer, maxAltitudeParamValue);
	}
	native private double getCameraMaxLimitAltitude_void(long pNativeObject);
	/**
	 * 获取相机的最大海拔
	 */
	public double getCameraMaxLimitAltitude()
	{
		double returnValue = getCameraMaxLimitAltitude_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGlobeLockCameraHandlerEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置GlobeLockCameraHandler是否可用
	 */
	public void setGlobeLockCameraHandlerEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setGlobeLockCameraHandlerEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getGlobeLockCameraHandlerEnable_void(long pNativeObject);
	/**
	 * 获取GlobeLockCameraHandler是否可用
	 * @return 是否可用
	 */
	public boolean getGlobeLockCameraHandlerEnable()
	{
		boolean returnValue = getGlobeLockCameraHandlerEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGlobeCamUnderGroundHandlerEnable_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置GlobeCamUnderGroundHandler是否可用
	 */
	public void setGlobeCamUnderGroundHandlerEnable(boolean enable)
	{
		boolean enableParamValue = enable;
		setGlobeCamUnderGroundHandlerEnable_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getGlobeCamUnderGroundHandlerEnable_void(long pNativeObject);
	/**
	 * 获取GlobeCamUnderGroundHandler是否可用
	 * @return 是否可用
	 */
	public boolean getGlobeCamUnderGroundHandlerEnable()
	{
		boolean returnValue = getGlobeCamUnderGroundHandlerEnable_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setGoogleCameraManipulatorEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 是否启用谷歌方式的相机漫游器
	 * @param enable 
	 */
	public void setGoogleCameraManipulatorEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setGoogleCameraManipulatorEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getGoogleCameraManipulatorEnabled_void(long pNativeObject);
	/**
	 * 获取是否启用谷歌方式的相机漫游器
	 * @param enable 
	 */
	public boolean getGoogleCameraManipulatorEnabled()
	{
		boolean returnValue = getGoogleCameraManipulatorEnabled_void(this.nativeObject.pointer);
		return returnValue;
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
	native private void setUnderGroundCameraMoveAtPlane_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置相机（地下镜头）在局部场景模式时的移动方式,
	 * @param enable true,相机在平面内移动，false,相机在大圆上移动
	 */
	public void setUnderGroundCameraMoveAtPlane(boolean enable)
	{
		boolean enableParamValue = enable;
		setUnderGroundCameraMoveAtPlane_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getUnderGroundCameraMoveAtPlane_void(long pNativeObject);
	/**
	 * 获取相机（地下镜头）在局部场景模式时是否沿平面移动,
	 */
	public boolean getUnderGroundCameraMoveAtPlane()
	{
		boolean returnValue = getUnderGroundCameraMoveAtPlane_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setShowLayerInfo_ev_bool(long pNativeObject, boolean show);
	/**
	 * 是否显示图层信息
	 * @param show 
	 */
	public void setShowLayerInfo(boolean show)
	{
		boolean showParamValue = show;
		setShowLayerInfo_ev_bool(this.nativeObject.pointer, showParamValue);
	}
	native private void setAutoCalculateCameraFov_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 设置是否允许自动计算相机的fov角
	 * @param enable 
	 */
	public void setAutoCalculateCameraFov(boolean enable)
	{
		boolean enableParamValue = enable;
		setAutoCalculateCameraFov_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	native private boolean getAutoCalculateCameraFov_void(long pNativeObject);
	/**
	 * 获取是否允许自动计算相机的fov角
	 * @param enable 
	 */
	public boolean getAutoCalculateCameraFov()
	{
		boolean returnValue = getAutoCalculateCameraFov_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void resetCamera_void(long pNativeObject);
	/**
	 * 重置相机，回到工程文件中保存的位置(渲染窗口出现后才有效)
	 */
	public void resetCamera()
	{
		resetCamera_void(this.nativeObject.pointer);
	}
	native private void setCameraUpToNorth_void(long pNativeObject);
	/**
	 * 让相机的上方向指北(渲染窗口出现后才有效)
	 */
	public void setCameraUpToNorth()
	{
		setCameraUpToNorth_void(this.nativeObject.pointer);
	}
	native private long getGrid_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeGrid getGrid()
	{
		long returnValue = getGrid_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeGrid __returnValue = new com.earthview.world.spatial3d.GlobeGrid(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeGrid");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.GlobeGrid)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeGrid");
		}
		return __returnValue;
	}
	native private long get_winId_void(long pNativeObject);
	public long get_winId()
	{
		long jniValue = get_winId_void(this.nativeObject.pointer);
		
		return jniValue;
	}
	
	native private void set_winId_ev_uint32 (long pNativeObject, long value);
	public void set_winId(long winId)
	{
		long winIdParamValue = winId;
		
		set_winId_ev_uint32(this.nativeObject.pointer, winIdParamValue);
	}
	
	native private long getStringInterface_void(long pNativeObject);
	/**
	 * 获取EarthView::World::Core::CStringInterface对象
	 * @param  
	 * @return EarthView::World::Core::CStringInterface对象
	 */
	public com.earthview.world.core.StringInterface getStringInterface()
	{
		long returnValue = getStringInterface_void(this.nativeObject.pointer);
		com.earthview.world.core.StringInterface __returnValue = new com.earthview.world.core.StringInterface(CreatedWhenConstruct.CWC_NotToCreate, "CStringInterface");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringInterface)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CStringInterface");
		}
		return __returnValue;
	}
	public GlobeControl(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GlobeControl(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 接收鼠标双击事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseDoubleButtonPress(int x, int y, long button)
	{
		super.mouseDoubleButtonPress_NoVirtual(x, y, button);
	}
	/**
	 * 接收鼠标松开事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 * @param button 鼠标对应的键值，CGUIEvent::GUIMouseButtonMask的组合
	 */
	public void mouseButtonRelease(int x, int y, long button)
	{
		super.mouseButtonRelease_NoVirtual(x, y, button);
	}
	/**
	 * 接收鼠标移动事件
	 * @param x 鼠标的x坐标
	 * @param y 鼠标的y坐标
	 */
	public void mouseMove(int x, int y)
	{
		super.mouseMove_NoVirtual(x, y);
	}
	/**
	 * 接收鼠标滚轮事件
	 * @param delta 鼠标的滚动的值
	 */
	public void mouseWheel(float delta)
	{
		super.mouseWheel_NoVirtual(delta);
	}
	/**
	 * 添加视口监听
	 * @param externalListener 监听器
	 */
	public boolean addViewListener(com.earthview.world.spatial.Iviewlistener ref_externalListener)
	{
		return super.addViewListener_NoVirtual(ref_externalListener);
	}
	/**
	 * 获取视口监听器的数量
	 * @param  
	 * @return 数量
	 */
	public long getViewListenerCount()
	{
		return super.getViewListenerCount_NoVirtual();
	}
	/**
	 * 获取指定索引徙的视口监听对象
	 * @param index 索引
	 */
	public com.earthview.world.spatial.Iviewlistener getViewListener(long index)
	{
		return super.getViewListener_NoVirtual(index);
	}
	/**
	 * 判断指定的监听是否存在
	 * @param externalListener 监听
	 */
	public boolean existViewListener(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		return super.existViewListener_NoVirtual(externalListener);
	}
	/**
	 * 移除指定索引处的监听
	 * @param index 监听索引
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeViewListener(long index)
	{
		return super.removeViewListener_NoVirtual(index);
	}
	/**
	 * 移除指定的监听
	 * @param externalListener 监听
	 * @return 如果移除成功则返回true,反之则否
	 */
	public boolean removeViewListener(com.earthview.world.spatial.Iviewlistener externalListener)
	{
		return super.removeViewListener_NoVirtual(externalListener);
	}
	/**
	 * 清空所有的监听
	 * @param  
	 */
	public void clearViewListeners()
	{
		super.clearViewListeners_NoVirtual();
	}
	
	native protected void register_createGlobeScene_void(long pNativeObject, String method);
	native protected void register_destroyGlobeScene_void(long pNativeObject, String method);
	native protected void register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool(long pNativeObject, String method);
	native protected void register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool(long pNativeObject, String method);
	native protected void register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_windowResized_int_int(long pNativeObject, String method);
	native protected void register_setCurrentTool_ITool(long pNativeObject, String method);
	native protected void register_windowResized_void(long pNativeObject, String method);
	native protected void register_mouseButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_mouseButtonRelease_ev_int32_ev_int32_ev_uint32(long pNativeObject, String method);
	native protected void register_mouseMove_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_mouseWheel_ev_real32(long pNativeObject, String method);
	native protected void register_eventStage_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_getTypeString_void(long pNativeObject, String method);
	native protected void register_notifyViewChanged_IViewArgs(long pNativeObject, String method);
	native protected void register_addViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_getViewListenerCount_void(long pNativeObject, String method);
	native protected void register_getViewListener_ev_uint32(long pNativeObject, String method);
	native protected void register_existViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_removeViewListener_ev_uint32(long pNativeObject, String method);
	native protected void register_removeViewListener_IViewListener(long pNativeObject, String method);
	native protected void register_clearViewListeners_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_createGlobeScene_void(this.nativeObject.pointer, "createGlobeScene_void_callback");
			this.register_destroyGlobeScene_void(this.nativeObject.pointer, "destroyGlobeScene_void_callback");
			this.register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_callback");
			this.register_pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, "pickingRayIntersection_ev_int32_ev_int32_ev_real64_ev_real64_ev_bool_callback");
			this.register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool(this.nativeObject.pointer, "pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_callback");
			this.register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool(this.nativeObject.pointer, "pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_ev_bool_callback");
			this.register_pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool(this.nativeObject.pointer, "pickingRayIntersection_ev_int32_ev_int32_ev_bool_ev_bool_ev_real64_ev_real64_ev_real64_ev_bool_ev_bool_callback");
			this.register_windowResized_int_int(this.nativeObject.pointer, "windowResized_int_int_callback");
			this.register_setCurrentTool_ITool(this.nativeObject.pointer, "setCurrentTool_ITool_callback");
			this.register_windowResized_void(this.nativeObject.pointer, "windowResized_void_callback");
			this.register_mouseButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, "mouseButtonPress_ev_int32_ev_int32_ev_uint32_callback");
			this.register_mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, "mouseDoubleButtonPress_ev_int32_ev_int32_ev_uint32_callback");
			this.register_mouseButtonRelease_ev_int32_ev_int32_ev_uint32(this.nativeObject.pointer, "mouseButtonRelease_ev_int32_ev_int32_ev_uint32_callback");
			this.register_mouseMove_ev_int32_ev_int32(this.nativeObject.pointer, "mouseMove_ev_int32_ev_int32_callback");
			this.register_mouseWheel_ev_real32(this.nativeObject.pointer, "mouseWheel_ev_real32_callback");
			this.register_eventStage_void(this.nativeObject.pointer, "eventStage_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_getTypeString_void(this.nativeObject.pointer, "getTypeString_void_callback");
			this.register_notifyViewChanged_IViewArgs(this.nativeObject.pointer, "notifyViewChanged_IViewArgs_callback");
			this.register_addViewListener_IViewListener(this.nativeObject.pointer, "addViewListener_IViewListener_callback");
			this.register_getViewListenerCount_void(this.nativeObject.pointer, "getViewListenerCount_void_callback");
			this.register_getViewListener_ev_uint32(this.nativeObject.pointer, "getViewListener_ev_uint32_callback");
			this.register_existViewListener_IViewListener(this.nativeObject.pointer, "existViewListener_IViewListener_callback");
			this.register_removeViewListener_ev_uint32(this.nativeObject.pointer, "removeViewListener_ev_uint32_callback");
			this.register_removeViewListener_IViewListener(this.nativeObject.pointer, "removeViewListener_IViewListener_callback");
			this.register_clearViewListeners_void(this.nativeObject.pointer, "clearViewListeners_void_callback");
		}
	}
	
	public static GlobeControl fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GlobeControl obj = null;
 		if(baseObj instanceof GlobeControl)
		{
			obj = (GlobeControl)baseObj;
		} else {
			obj = new GlobeControl(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGlobeControl");
			obj.increaseCast();
		}

		return obj;
	}
}
