package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 三维分析相机监听类
 */
public class AnalysisCameraListener extends com.earthview.world.spatial3d.GlobeCamera.GlobeCameraListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAnalysisCameraListener", new AnalysisCameraListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAnalysisCameraListenerProxy", new AnalysisCameraListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_tool 三维分析工具
	 */
	public AnalysisCameraListener(com.earthview.world.spatial3d.analysis.Ianalysis3dtool ref_tool) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_toolPtr = new BasePointer(ref_tool);
		list.add("ref_tool", ref_toolPtr.get());
		Create("JCAnalysisCameraListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.AnalysisCameraListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void cameraParamChanged_CCamera(long pNativeObject, long camera);
	/**
	 * 相机参数变化
	 * @param camera 相机对象
	 */
	public void cameraParamChanged(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		cameraParamChanged_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	native private void cameraParamChanged_CCamera_NoVirtual(long pNativeObject, long camera);
	protected void cameraParamChanged_NoVirtual(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		cameraParamChanged_CCamera_NoVirtual(this.nativeObject.pointer, cameraParamValue);
	}

	public AnalysisCameraListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AnalysisCameraListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 渲染场景之前被访问
	 * @param cam 摄像机
	 */
	public void cameraPreRenderScene(com.earthview.world.graphic.Camera cam)
	{
		super.cameraPreRenderScene_NoVirtual(cam);
	}
	/**
	 * 渲染场景之后被访问
	 * @param cam 摄像机
	 */
	public void cameraPostRenderScene(com.earthview.world.graphic.Camera cam)
	{
		super.cameraPostRenderScene_NoVirtual(cam);
	}
	/**
	 * 摄像机被销毁
	 * @param cam 摄像机
	 */
	public void cameraDestroyed(com.earthview.world.graphic.Camera cam)
	{
		super.cameraDestroyed_NoVirtual(cam);
	}
	
	native protected void register_cameraParamChanged_CCamera(long pNativeObject, String method);
	native protected void register_cameraPreRenderScene_CCamera(long pNativeObject, String method);
	native protected void register_cameraPostRenderScene_CCamera(long pNativeObject, String method);
	native protected void register_cameraDestroyed_CCamera(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_cameraParamChanged_CCamera(this.nativeObject.pointer, "cameraParamChanged_CCamera_callback");
			this.register_cameraPreRenderScene_CCamera(this.nativeObject.pointer, "cameraPreRenderScene_CCamera_callback");
			this.register_cameraPostRenderScene_CCamera(this.nativeObject.pointer, "cameraPostRenderScene_CCamera_callback");
			this.register_cameraDestroyed_CCamera(this.nativeObject.pointer, "cameraDestroyed_CCamera_callback");
		}
	}
	
	public static AnalysisCameraListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AnalysisCameraListener obj = null;
 		if(baseObj instanceof AnalysisCameraListener)
		{
			obj = (AnalysisCameraListener)baseObj;
		} else {
			obj = new AnalysisCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAnalysisCameraListener");
			obj.increaseCast();
		}

		return obj;
	}
}
