package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///继续播放
public class CameraAnimationHandler extends com.earthview.world.spatial3d.controls.Guieventhandler {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCameraAnimationHandler", new CameraAnimationHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCameraAnimationHandlerProxy", new CameraAnimationHandlerClassFactory());
	}

	/**
	 * 构造函数
	 * @param animationName 镜头动画的名字
	 * @param camera 镜头
	 * @param sceneManager 场景管理器
	 * @param parentNode 相机挂接节点的父节点
	 * @param localCenter parentNode的中心点
	 * @param controlPointMap 控制点集合
	 * @param animationName 镜头动画的名字
	 * @param ref_globeControl 
	 */
	public CameraAnimationHandler(String animationName, com.earthview.world.spatial3d.controls.GlobeControl ref_globeControl) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer animationNamePtr = new BasePointer(animationName);
		list.add("animationName", animationNamePtr.get());
		BasePointer ref_globeControlPtr = new BasePointer(ref_globeControl);
		list.add("ref_globeControl", ref_globeControlPtr.get());
		Create("JCCameraAnimationHandlerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CameraAnimationHandler".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private String getAnimationName_void(long pNativeObject);
	/**
	 * 返回节点的名字
	 */
	public String getAnimationName()
	{
		String returnValue = getAnimationName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean init_CSceneNode_EVString(long pNativeObject, long ref_parentNode, String filePath);
	/**
	 * 初始化
	 * @param ref_parentNode 要观察的节点
	 * @param filePath 镜头动画的文件
	 */
	public boolean init(com.earthview.world.graphic.SceneNode ref_parentNode, String filePath)
	{
		long ref_parentNodeParamValue = (ref_parentNode == null ? 0L : ref_parentNode.nativeObject.pointer);
		String filePathParamValue = filePath;
		boolean returnValue = init_CSceneNode_EVString(this.nativeObject.pointer, ref_parentNodeParamValue, filePathParamValue);
		return returnValue;
	}
	native private boolean init_CSceneNode_CVector3_CControlPointMap(long pNativeObject, long ref_parentNode, long localCenter, long controlPointMap);
	/**
	 * 初始化
	 * @param ref_parentNode 要观察的节点
	 * @param localCenter 模型的几何中心点的坐标
	 * @param controlPointMap 控制点列表
	 */
	public boolean init(com.earthview.world.graphic.SceneNode ref_parentNode, com.earthview.world.spatial.math.Vector3 localCenter, com.earthview.world.spatial3d.ControlPointMap controlPointMap)
	{
		long ref_parentNodeParamValue = (ref_parentNode == null ? 0L : ref_parentNode.nativeObject.pointer);
		long localCenterParamValue = localCenter.nativeObject.pointer;
		long controlPointMapParamValue = controlPointMap.nativeObject.pointer;
		boolean returnValue = init_CSceneNode_CVector3_CControlPointMap(this.nativeObject.pointer, ref_parentNodeParamValue, localCenterParamValue, controlPointMapParamValue);
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

	native private void startAnimation_void(long pNativeObject);
	/**
	 * 开始镜头动画
	 */
	public void startAnimation()
	{
		startAnimation_void(this.nativeObject.pointer);
	}
	native private void stopAnimation_void(long pNativeObject);
	/**
	 * 停止镜头动画
	 */
	public void stopAnimation()
	{
		stopAnimation_void(this.nativeObject.pointer);
	}
	native private void pauseAnimation_void(long pNativeObject);
	/**
	 * 暂停镜头动画
	 */
	public void pauseAnimation()
	{
		pauseAnimation_void(this.nativeObject.pointer);
	}
	native private void continueAnimation_void(long pNativeObject);
	/**
	 * 继续镜头动画
	 */
	public void continueAnimation()
	{
		continueAnimation_void(this.nativeObject.pointer);
	}
	public CameraAnimationHandler(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CameraAnimationHandler(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_handleEvent_CGUIEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_handleEvent_CGUIEvent(this.nativeObject.pointer, "handleEvent_CGUIEvent_callback");
		}
	}
	
	public static CameraAnimationHandler fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CameraAnimationHandler obj = null;
 		if(baseObj instanceof CameraAnimationHandler)
		{
			obj = (CameraAnimationHandler)baseObj;
		} else {
			obj = new CameraAnimationHandler(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCameraAnimationHandler");
			obj.increaseCast();
		}

		return obj;
	}
}
