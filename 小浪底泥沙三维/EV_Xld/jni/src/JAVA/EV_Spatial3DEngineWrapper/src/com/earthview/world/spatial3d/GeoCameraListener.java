package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 相机参数变化监听器，相机参数变化之后会通知所有三维图层刷新
 */
public class GeoCameraListener extends com.earthview.world.spatial3d.GlobeCamera.GlobeCameraListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CGeoCameraListener", new GeoCameraListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCGeoCameraListenerProxy", new GeoCameraListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param ref_pCam 被监听的虚拟相机
	 */
	public GeoCameraListener(com.earthview.world.spatial3d.GlobeCamera ref_pCam) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pCamPtr = new BasePointer(ref_pCam);
		list.add("ref_pCam", ref_pCamPtr.get());
		Create("JCGeoCameraListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.GeoCameraListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void cameraParamChanged_CCamera(long pNativeObject, long camera);
	/**
	 * 重写的虚函数，当相机参数发生变化时会被调用
	 * @param camera 被监听的虚拟相机
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

	native private long get_mCamera_void(long pNativeObject);
	public com.earthview.world.spatial3d.GlobeCamera get_mCamera()
	{
		long jniValue = get_mCamera_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.GlobeCamera __returnValue = new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeCamera");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mCamera_CGlobeCamera (long pNativeObject, long value);
	public void set_mCamera(com.earthview.world.spatial3d.GlobeCamera mCamera)
	{
		long mCameraParamValue = (mCamera == null ? 0L : mCamera.nativeObject.pointer);
		
		set_mCamera_CGlobeCamera(this.nativeObject.pointer, mCameraParamValue);
	}
	
	public GeoCameraListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeoCameraListener(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static GeoCameraListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeoCameraListener obj = null;
 		if(baseObj instanceof GeoCameraListener)
		{
			obj = (GeoCameraListener)baseObj;
		} else {
			obj = new GeoCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeoCameraListener");
			obj.increaseCast();
		}

		return obj;
	}
}
