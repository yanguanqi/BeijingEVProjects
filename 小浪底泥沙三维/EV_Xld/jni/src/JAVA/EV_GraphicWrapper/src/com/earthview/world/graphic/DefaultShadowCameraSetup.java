package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 默认摄像机阴影类可以使用该类实现默认摄像机阴影的设置
 */
public class DefaultShadowCameraSetup extends com.earthview.world.graphic.ShadowCameraSetup {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CDefaultShadowCameraSetup", new DefaultShadowCameraSetupClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCDefaultShadowCameraSetupProxy", new DefaultShadowCameraSetupClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public DefaultShadowCameraSetup() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCDefaultShadowCameraSetupProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.DefaultShadowCameraSetup".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
	//// Default shadow camera setup
	public void getShadowCamera(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.Viewport vp, com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera texCam, long iteration)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long texCamParamValue = (texCam == null ? 0L : texCam.nativeObject.pointer);
		long iterationParamValue = iteration;
		getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, smParamValue, camParamValue, vpParamValue, lightParamValue, texCamParamValue, iterationParamValue);
	}
	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
	protected void getShadowCamera_NoVirtual(com.earthview.world.graphic.SceneManager sm, com.earthview.world.graphic.Camera cam, com.earthview.world.graphic.Viewport vp, com.earthview.world.graphic.Light light, com.earthview.world.graphic.Camera texCam, long iteration)
	{
		long smParamValue = (sm == null ? 0L : sm.nativeObject.pointer);
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		long vpParamValue = (vp == null ? 0L : vp.nativeObject.pointer);
		long lightParamValue = (light == null ? 0L : light.nativeObject.pointer);
		long texCamParamValue = (texCam == null ? 0L : texCam.nativeObject.pointer);
		long iterationParamValue = iteration;
		getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_NoVirtual(this.nativeObject.pointer, smParamValue, camParamValue, vpParamValue, lightParamValue, texCamParamValue, iterationParamValue);
	}

	public DefaultShadowCameraSetup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DefaultShadowCameraSetup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
		}
	}
	
	public static DefaultShadowCameraSetup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DefaultShadowCameraSetup obj = null;
 		if(baseObj instanceof DefaultShadowCameraSetup)
		{
			obj = (DefaultShadowCameraSetup)baseObj;
		} else {
			obj = new DefaultShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDefaultShadowCameraSetup");
			obj.increaseCast();
		}

		return obj;
	}
}
