package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraNodeTrackSceneManagerListener extends com.earthview.world.graphic.SceneManager.SceneManagerListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener", new CameraNodeTrackSceneManagerListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCCameraNodeTrackSceneManagerListenerProxy", new CameraNodeTrackSceneManagerListenerClassFactory());
	}

	public CameraNodeTrackSceneManagerListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCCameraNodeTrackSceneManagerListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CameraNodeTrackSceneManagerListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	public CameraNodeTrackSceneManagerListener(com.earthview.world.graphic.Camera camera) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer cameraPtr = new BasePointer(camera);
		list.add("camera", cameraPtr.get());
		Create("JCCameraNodeTrackSceneManagerListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.CameraNodeTrackSceneManagerListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void preUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, long source, long camera);
	public void preUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		preUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, sourceParamValue, cameraParamValue);
	}
	native private void preUpdateSceneGraph_CSceneManager_CCamera_NoVirtual(long pNativeObject, long source, long camera);
	protected void preUpdateSceneGraph_NoVirtual(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		long sourceParamValue = (source == null ? 0L : source.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		preUpdateSceneGraph_CSceneManager_CCamera_NoVirtual(this.nativeObject.pointer, sourceParamValue, cameraParamValue);
	}

	native private void setCamera_CCamera(long pNativeObject, long camera);
	public void setCamera(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		setCamera_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	public CameraNodeTrackSceneManagerListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CameraNodeTrackSceneManagerListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 在每帧更新场景图后触发			
	 */
	public void postUpdateSceneGraph(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.Camera camera)
	{
		super.postUpdateSceneGraph_NoVirtual(source, camera);
	}
	/**
	 * 在场景中搜索可见对象之前触发
	 * @param source 场景管理实例
	 * @param irs 渲染阶段
	 * @param v 视口
	 */
	public void preFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
	{
		super.preFindVisibleObjects_NoVirtual(source, irs, v);
	}
	/**
	 * 在场景中搜索可见对象之后触发
	 * @param source 场景管理实例
	 * @param irs 渲染阶段
	 * @param v 视口
	 */
	public void postFindVisibleObjects(com.earthview.world.graphic.SceneManager source, com.earthview.world.graphic.SceneManager.IlluminationRenderStage irs, com.earthview.world.graphic.Viewport v)
	{
		super.postFindVisibleObjects_NoVirtual(source, irs, v);
	}
	/**
	 * 阴影纹理更新时调用只有阴影纹理被使用的时候，这个事件才触发
	 * @param numberOfShadowTextures 阴影纹理使用中的数量
	 */
	public void shadowTexturesUpdated(long numberOfShadowTextures)
	{
		super.shadowTexturesUpdated_NoVirtual(numberOfShadowTextures);
	}
	/**
	 * 在为纹理阴影投射者设置观察投影矩阵前触发
	 * @param light 阴影纹理的光源
	 * @param camera 摄像机
	 * @param iteration 迭代次数
	 */
	public void shadowTextureCasterPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera camera, long iteration)
	{
		super.shadowTextureCasterPreViewProj_NoVirtual(light, camera, iteration);
	}
	/**
	 * 在为纹理阴影接收者设置观察投影矩阵前触发
	 * @param light 阴影纹理的光源
	 * @param frustum 视椎体
	 */
	public void shadowTextureReceiverPreViewProj(com.earthview.world.graphic.Light light, com.earthview.world.graphic.Frustum frustum)
	{
		super.shadowTextureReceiverPreViewProj_NoVirtual(light, frustum);
	}
	/**
	 * 对影响视椎体的光源进行排序
	 * @param lightList 光源列表
	 * @return 为true，已排序
	 */
	public boolean sortLightsAffectingFrustum(com.earthview.world.graphic.LightList lightList)
	{
		return super.sortLightsAffectingFrustum_NoVirtual(lightList);
	}
	/**
	 * 场景管理器销毁时触发
	 * @param source 场景管理器
	 */
	public void sceneManagerDestroyed(com.earthview.world.graphic.SceneManager source)
	{
		super.sceneManagerDestroyed_NoVirtual(source);
	}
	
	native protected void register_preUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
	native protected void register_postUpdateSceneGraph_CSceneManager_CCamera(long pNativeObject, String method);
	native protected void register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
	native protected void register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(long pNativeObject, String method);
	native protected void register_shadowTexturesUpdated_ev_size_t(long pNativeObject, String method);
	native protected void register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	native protected void register_shadowTextureReceiverPreViewProj_CLight_CFrustum(long pNativeObject, String method);
	native protected void register_sortLightsAffectingFrustum_LightList(long pNativeObject, String method);
	native protected void register_sceneManagerDestroyed_CSceneManager(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_preUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "preUpdateSceneGraph_CSceneManager_CCamera_callback");
			this.register_postUpdateSceneGraph_CSceneManager_CCamera(this.nativeObject.pointer, "postUpdateSceneGraph_CSceneManager_CCamera_callback");
			this.register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
			this.register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport(this.nativeObject.pointer, "postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
			this.register_shadowTexturesUpdated_ev_size_t(this.nativeObject.pointer, "shadowTexturesUpdated_ev_size_t_callback");
			this.register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback");
			this.register_shadowTextureReceiverPreViewProj_CLight_CFrustum(this.nativeObject.pointer, "shadowTextureReceiverPreViewProj_CLight_CFrustum_callback");
			this.register_sortLightsAffectingFrustum_LightList(this.nativeObject.pointer, "sortLightsAffectingFrustum_LightList_callback");
			this.register_sceneManagerDestroyed_CSceneManager(this.nativeObject.pointer, "sceneManagerDestroyed_CSceneManager_callback");
		}
	}
	
	public static CameraNodeTrackSceneManagerListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CameraNodeTrackSceneManagerListener obj = null;
 		if(baseObj instanceof CameraNodeTrackSceneManagerListener)
		{
			obj = (CameraNodeTrackSceneManagerListener)baseObj;
		} else {
			obj = new CameraNodeTrackSceneManagerListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCameraNodeTrackSceneManagerListener");
			obj.increaseCast();
		}

		return obj;
	}
}
