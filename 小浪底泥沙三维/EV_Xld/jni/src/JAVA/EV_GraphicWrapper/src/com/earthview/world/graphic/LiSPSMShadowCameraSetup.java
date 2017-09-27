package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LiSPSMShadowCameraSetup extends com.earthview.world.graphic.FocusedShadowCameraSetup {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLiSPSMShadowCameraSetup", new LiSPSMShadowCameraSetupClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCLiSPSMShadowCameraSetupProxy", new LiSPSMShadowCameraSetupClassFactory());
	}

	public LiSPSMShadowCameraSetup() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCLiSPSMShadowCameraSetupProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.LiSPSMShadowCameraSetup".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, long sm, long cam, long vp, long light, long texCam, long iteration);
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

	protected  void setOptimalAdjustFactor_Real_callback(double n)
	{
		double nParamValue = n;
		setOptimalAdjustFactor(nParamValue);
	}

	native private void setOptimalAdjustFactor_Real(long pNativeObject, double n);
	public void setOptimalAdjustFactor(double n)
	{
		double nParamValue = n;
		setOptimalAdjustFactor_Real(this.nativeObject.pointer, nParamValue);
	}
	native private void setOptimalAdjustFactor_Real_NoVirtual(long pNativeObject, double n);
	protected void setOptimalAdjustFactor_NoVirtual(double n)
	{
		double nParamValue = n;
		setOptimalAdjustFactor_Real_NoVirtual(this.nativeObject.pointer, nParamValue);
	}

	protected  double getOptimalAdjustFactor_void_callback()
	{
		double returnValue = getOptimalAdjustFactor();
		double __returnValue = returnValue;
		return __returnValue;
	}

	native private double getOptimalAdjustFactor_void(long pNativeObject);
	public double getOptimalAdjustFactor()
	{
		double returnValue = getOptimalAdjustFactor_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getOptimalAdjustFactor_void_NoVirtual(long pNativeObject);
	protected double getOptimalAdjustFactor_NoVirtual()
	{
		double returnValue = getOptimalAdjustFactor_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setUseSimpleOptimalAdjust_ev_bool_callback(boolean s)
	{
		boolean sParamValue = s;
		setUseSimpleOptimalAdjust(sParamValue);
	}

	native private void setUseSimpleOptimalAdjust_ev_bool(long pNativeObject, boolean s);
	public void setUseSimpleOptimalAdjust(boolean s)
	{
		boolean sParamValue = s;
		setUseSimpleOptimalAdjust_ev_bool(this.nativeObject.pointer, sParamValue);
	}
	native private void setUseSimpleOptimalAdjust_ev_bool_NoVirtual(long pNativeObject, boolean s);
	protected void setUseSimpleOptimalAdjust_NoVirtual(boolean s)
	{
		boolean sParamValue = s;
		setUseSimpleOptimalAdjust_ev_bool_NoVirtual(this.nativeObject.pointer, sParamValue);
	}

	protected  boolean getUseSimpleOptimalAdjust_void_callback()
	{
		boolean returnValue = getUseSimpleOptimalAdjust();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getUseSimpleOptimalAdjust_void(long pNativeObject);
	public boolean getUseSimpleOptimalAdjust()
	{
		boolean returnValue = getUseSimpleOptimalAdjust_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getUseSimpleOptimalAdjust_void_NoVirtual(long pNativeObject);
	protected boolean getUseSimpleOptimalAdjust_NoVirtual()
	{
		boolean returnValue = getUseSimpleOptimalAdjust_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setCameraLightDirectionThreshold_CDegree_callback(long angle)
	{
		com.earthview.world.spatial.math.Degree angleParamValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		angleParamValue.setDelegate(true);
		angleParamValue.setInstancePointer(new InstancePointer(angle));
		IClassFactory angleParamValueClassFactory = GlobalClassFactoryMap.get(angleParamValue.getCppInstanceTypeName());
		if (angleParamValueClassFactory != null)
		{
			angleParamValue.setDelegate(true);
			angleParamValue = (com.earthview.world.spatial.math.Degree)angleParamValueClassFactory.create();
			angleParamValue.setDelegate(true);
			angleParamValue.setInstancePointer(new InstancePointer(angle));
		}
		setCameraLightDirectionThreshold(angleParamValue);
	}

	native private void setCameraLightDirectionThreshold_CDegree(long pNativeObject, long angle);
	public void setCameraLightDirectionThreshold(com.earthview.world.spatial.math.Degree angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setCameraLightDirectionThreshold_CDegree(this.nativeObject.pointer, angleParamValue);
	}
	native private void setCameraLightDirectionThreshold_CDegree_NoVirtual(long pNativeObject, long angle);
	protected void setCameraLightDirectionThreshold_NoVirtual(com.earthview.world.spatial.math.Degree angle)
	{
		long angleParamValue = angle.nativeObject.pointer;
		setCameraLightDirectionThreshold_CDegree_NoVirtual(this.nativeObject.pointer, angleParamValue);
	}

	protected  long getCameraLightDirectionThreshold_void_callback()
	{
		com.earthview.world.spatial.math.Degree returnValue = getCameraLightDirectionThreshold();
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCameraLightDirectionThreshold_void(long pNativeObject);
	public com.earthview.world.spatial.math.Degree getCameraLightDirectionThreshold()
	{
		long returnValue = getCameraLightDirectionThreshold_void(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}
	native private long getCameraLightDirectionThreshold_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.math.Degree getCameraLightDirectionThreshold_NoVirtual()
	{
		long returnValue = getCameraLightDirectionThreshold_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.spatial.math.Degree __returnValue = new com.earthview.world.spatial.math.Degree(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CDegree");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.math.Degree)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CDegree");
		}
		return __returnValue;
	}

	public LiSPSMShadowCameraSetup(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LiSPSMShadowCameraSetup(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setOptimalAdjustFactor_Real(long pNativeObject, String method);
	native protected void register_getOptimalAdjustFactor_void(long pNativeObject, String method);
	native protected void register_setUseSimpleOptimalAdjust_ev_bool(long pNativeObject, String method);
	native protected void register_getUseSimpleOptimalAdjust_void(long pNativeObject, String method);
	native protected void register_setCameraLightDirectionThreshold_CDegree(long pNativeObject, String method);
	native protected void register_getCameraLightDirectionThreshold_void(long pNativeObject, String method);
	native protected void register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setOptimalAdjustFactor_Real(this.nativeObject.pointer, "setOptimalAdjustFactor_Real_callback");
			this.register_getOptimalAdjustFactor_void(this.nativeObject.pointer, "getOptimalAdjustFactor_void_callback");
			this.register_setUseSimpleOptimalAdjust_ev_bool(this.nativeObject.pointer, "setUseSimpleOptimalAdjust_ev_bool_callback");
			this.register_getUseSimpleOptimalAdjust_void(this.nativeObject.pointer, "getUseSimpleOptimalAdjust_void_callback");
			this.register_setCameraLightDirectionThreshold_CDegree(this.nativeObject.pointer, "setCameraLightDirectionThreshold_CDegree_callback");
			this.register_getCameraLightDirectionThreshold_void(this.nativeObject.pointer, "getCameraLightDirectionThreshold_void_callback");
			this.register_getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t(this.nativeObject.pointer, "getShadowCamera_CSceneManager_CCamera_CViewport_CLight_CCamera_ev_size_t_callback");
		}
	}
	
	public static LiSPSMShadowCameraSetup fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LiSPSMShadowCameraSetup obj = null;
 		if(baseObj instanceof LiSPSMShadowCameraSetup)
		{
			obj = (LiSPSMShadowCameraSetup)baseObj;
		} else {
			obj = new LiSPSMShadowCameraSetup(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLiSPSMShadowCameraSetup");
			obj.increaseCast();
		}

		return obj;
	}
}
