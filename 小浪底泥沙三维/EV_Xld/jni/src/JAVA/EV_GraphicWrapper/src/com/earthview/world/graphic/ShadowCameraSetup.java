package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 摄像机阴影类可以使用该类通过定义摄像机参数来渲染和改变投射的阴影纹理
 */
public class ShadowCameraSetup extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CShadowCameraSetup", new ShadowCameraSetupClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCShadowCameraSetupProxy", new ShadowCameraSetupClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ShadowCameraSetup() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCShadowCameraSetupProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ShadowCameraSetup".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback(long sm, long cam, long vp, long light, long texCam, long iteration)
	{
		com.earthview.world.graphic.SceneManager smParamValue = (sm == 0L ? null : new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(smParamValue != null)
		{
		smParamValue.setDelegate(true);
		smParamValue.setInstancePointer(new InstancePointer(sm));
		IClassFactory smParamValueClassFactory = GlobalClassFactoryMap.get(smParamValue.getCppInstanceTypeName());
		if (smParamValueClassFactory != null)
		{
			smParamValue.setDelegate(true);
			smParamValue = (com.earthview.world.graphic.SceneManager)smParamValueClassFactory.create();
			smParamValue.setDelegate(true);
			smParamValue.setInstancePointer(new InstancePointer(sm));
		}
		}
		com.earthview.world.graphic.Camera camParamValue = (cam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(camParamValue != null)
		{
		camParamValue.setDelegate(true);
		camParamValue.setInstancePointer(new InstancePointer(cam));
		IClassFactory camParamValueClassFactory = GlobalClassFactoryMap.get(camParamValue.getCppInstanceTypeName());
		if (camParamValueClassFactory != null)
		{
			camParamValue.setDelegate(true);
			camParamValue = (com.earthview.world.graphic.Camera)camParamValueClassFactory.create();
			camParamValue.setDelegate(true);
			camParamValue.setInstancePointer(new InstancePointer(cam));
		}
		}
		com.earthview.world.graphic.Viewport vpParamValue = (vp == 0L ? null : new com.earthview.world.graphic.Viewport(CreatedWhenConstruct.CWC_NotToCreate));
		if(vpParamValue != null)
		{
		vpParamValue.setDelegate(true);
		vpParamValue.setInstancePointer(new InstancePointer(vp));
		IClassFactory vpParamValueClassFactory = GlobalClassFactoryMap.get(vpParamValue.getCppInstanceTypeName());
		if (vpParamValueClassFactory != null)
		{
			vpParamValue.setDelegate(true);
			vpParamValue = (com.earthview.world.graphic.Viewport)vpParamValueClassFactory.create();
			vpParamValue.setDelegate(true);
			vpParamValue.setInstancePointer(new InstancePointer(vp));
		}
		}
		com.earthview.world.graphic.Light lightParamValue = (light == 0L ? null : new com.earthview.world.graphic.Light(CreatedWhenConstruct.CWC_NotToCreate));
		if(lightParamValue != null)
		{
		lightParamValue.setDelegate(true);
		lightParamValue.setInstancePointer(new InstancePointer(light));
		IClassFactory lightParamValueClassFactory = GlobalClassFactoryMap.get(lightParamValue.getCppInstanceTypeName());
		if (lightParamValueClassFactory != null)
		{
			lightParamValue.setDelegate(true);
			lightParamValue = (com.earthview.world.graphic.Light)lightParamValueClassFactory.create();
			lightParamValue.setDelegate(true);
			lightParamValue.setInstancePointer(new InstancePointer(light));
		}
		}
		com.earthview.world.graphic.Camera texCamParamValue = (texCam == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(texCamParamValue != null)
		{
		texCamParamValue.setDelegate(true);
		texCamParamValue.setInstancePointer(new InstancePointer(texCam));
		IClassFactory texCamParamValueClassFactory = GlobalClassFactoryMap.get(texCamParamValue.getCppInstanceTypeName());
		if (texCamParamValueClassFactory != null)
		{
			texCamParamValue.setDelegate(true);
			texCamParamValue = (com.earthview.world.graphic.Camera)texCamParamValueClassFactory.create();
			texCamParamValue.setDelegate(true);
			texCamParamValue.setInstancePointer(new InstancePointer(texCam));
		}
		}
		long iterationParamValue = iteration;
		getShadowCamera(smParamValue, camParamValue, vpParamValue, lightParamValue, texCamParamValue, iterationParamValue);
	}

	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
	/**
	 * 摄像机阴影类默认函数
	 * @param sm 
	 * @param cam 
	 * @param vp 
	 * @param light 
	 * @param texCam 
	 * @param iteration 
	 */
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

	public ShadowCameraSetup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ShadowCameraSetup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
		}
	}
	
	public static ShadowCameraSetup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ShadowCameraSetup obj = null;
 		if(baseObj instanceof ShadowCameraSetup)
		{
			obj = (ShadowCameraSetup)baseObj;
		} else {
			obj = new ShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CShadowCameraSetup");
			obj.increaseCast();
		}

		return obj;
	}
}
