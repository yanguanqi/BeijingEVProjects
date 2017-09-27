package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 固定在视口指定位置的三维元素的相机监听类
 */
public class FixedElementCameraListener extends com.earthview.world.graphic.Camera.CameraListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CFixedElementCameraListener", new FixedElementCameraListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::JCFixedElementCameraListenerProxy", new FixedElementCameraListenerClassFactory());
	}

	/**
	 * 构造函数
	 * @param fixedelement 相机监听类
	 */
	public FixedElementCameraListener(com.earthview.world.spatial3d.FixedElement ref_fixedelement) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_fixedelementPtr = new BasePointer(ref_fixedelement);
		list.add("ref_fixedelement", ref_fixedelementPtr.get());
		Create("JCFixedElementCameraListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.FixedElementCameraListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void cameraPreRenderScene_CCamera(long pNativeObject, long cam);
	/**
	 * 渲染场景之前被访问
	 * @param cam 摄像机
	 */
	public void cameraPreRenderScene(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		cameraPreRenderScene_CCamera(this.nativeObject.pointer, camParamValue);
	}
	native private void cameraPreRenderScene_CCamera_NoVirtual(long pNativeObject, long cam);
	protected void cameraPreRenderScene_NoVirtual(com.earthview.world.graphic.Camera cam)
	{
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		cameraPreRenderScene_CCamera_NoVirtual(this.nativeObject.pointer, camParamValue);
	}

	public FixedElementCameraListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FixedElementCameraListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
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
	
	native protected void register_cameraPreRenderScene_CCamera(long pNativeObject, String method);
	native protected void register_cameraPostRenderScene_CCamera(long pNativeObject, String method);
	native protected void register_cameraDestroyed_CCamera(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_cameraPreRenderScene_CCamera(this.nativeObject.pointer, "cameraPreRenderScene_CCamera_callback");
			this.register_cameraPostRenderScene_CCamera(this.nativeObject.pointer, "cameraPostRenderScene_CCamera_callback");
			this.register_cameraDestroyed_CCamera(this.nativeObject.pointer, "cameraDestroyed_CCamera_callback");
		}
	}
	
	public static FixedElementCameraListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FixedElementCameraListener obj = null;
 		if(baseObj instanceof FixedElementCameraListener)
		{
			obj = (FixedElementCameraListener)baseObj;
		} else {
			obj = new FixedElementCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFixedElementCameraListener");
			obj.increaseCast();
		}

		return obj;
	}
}
