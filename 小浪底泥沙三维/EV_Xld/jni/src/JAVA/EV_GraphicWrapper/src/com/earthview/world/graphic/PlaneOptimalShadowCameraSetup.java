package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaneOptimalShadowCameraSetup extends com.earthview.world.graphic.ShadowCameraSetup {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CPlaneOptimalShadowCameraSetup", new PlaneOptimalShadowCameraSetupClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCPlaneOptimalShadowCameraSetupProxy", new PlaneOptimalShadowCameraSetupClassFactory());
	}

	//// Constructor -- requires a plane of interest
	public PlaneOptimalShadowCameraSetup(com.earthview.world.graphic.MovablePlane plane) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer planePtr = new BasePointer(plane);
		list.add("plane", planePtr.get());
		Create("JCPlaneOptimalShadowCameraSetupProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.PlaneOptimalShadowCameraSetup".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
	//// Returns shadow camera configured to get 1-1 homography between screen and shadow map when restricted to plane
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

	public PlaneOptimalShadowCameraSetup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public PlaneOptimalShadowCameraSetup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
		}
	}
	
	public static PlaneOptimalShadowCameraSetup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		PlaneOptimalShadowCameraSetup obj = null;
 		if(baseObj instanceof PlaneOptimalShadowCameraSetup)
		{
			obj = (PlaneOptimalShadowCameraSetup)baseObj;
		} else {
			obj = new PlaneOptimalShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CPlaneOptimalShadowCameraSetup");
			obj.increaseCast();
		}

		return obj;
	}
}
