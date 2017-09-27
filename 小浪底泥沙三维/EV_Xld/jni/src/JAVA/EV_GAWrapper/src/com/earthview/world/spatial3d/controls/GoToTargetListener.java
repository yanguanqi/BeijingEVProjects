package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GoToTargetListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::CGoToTargetListener", new GoToTargetListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Controls::JCGoToTargetListenerProxy", new GoToTargetListenerClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GoToTargetListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCGoToTargetListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.controls.GoToTargetListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void cameraHasGetAtTarget_CGlobeCamera_callback(long globeCamera)
	{
		com.earthview.world.spatial3d.GlobeCamera globeCameraParamValue = (globeCamera == 0L ? null : new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeCameraParamValue != null)
		{
		globeCameraParamValue.setDelegate(true);
		globeCameraParamValue.setInstancePointer(new InstancePointer(globeCamera));
		IClassFactory globeCameraParamValueClassFactory = GlobalClassFactoryMap.get(globeCameraParamValue.getCppInstanceTypeName());
		if (globeCameraParamValueClassFactory != null)
		{
			globeCameraParamValue.setDelegate(true);
			globeCameraParamValue = (com.earthview.world.spatial3d.GlobeCamera)globeCameraParamValueClassFactory.create();
			globeCameraParamValue.setDelegate(true);
			globeCameraParamValue.setInstancePointer(new InstancePointer(globeCamera));
		}
		}
		cameraHasGetAtTarget(globeCameraParamValue);
	}

	native private void cameraHasGetAtTarget_CGlobeCamera(long pNativeObject, long globeCamera);
	/**
	 * 相机到达Goto终点时触发
	 * @param globeCamera 相机
	 */
	public void cameraHasGetAtTarget(com.earthview.world.spatial3d.GlobeCamera globeCamera)
	{
		long globeCameraParamValue = (globeCamera == null ? 0L : globeCamera.nativeObject.pointer);
		cameraHasGetAtTarget_CGlobeCamera(this.nativeObject.pointer, globeCameraParamValue);
	}
	native private void cameraHasGetAtTarget_CGlobeCamera_NoVirtual(long pNativeObject, long globeCamera);
	protected void cameraHasGetAtTarget_NoVirtual(com.earthview.world.spatial3d.GlobeCamera globeCamera)
	{
		long globeCameraParamValue = (globeCamera == null ? 0L : globeCamera.nativeObject.pointer);
		cameraHasGetAtTarget_CGlobeCamera_NoVirtual(this.nativeObject.pointer, globeCameraParamValue);
	}

	protected  void stopGoto_CGlobeCamera_callback(long globeCamera)
	{
		com.earthview.world.spatial3d.GlobeCamera globeCameraParamValue = (globeCamera == 0L ? null : new com.earthview.world.spatial3d.GlobeCamera(CreatedWhenConstruct.CWC_NotToCreate));
		if(globeCameraParamValue != null)
		{
		globeCameraParamValue.setDelegate(true);
		globeCameraParamValue.setInstancePointer(new InstancePointer(globeCamera));
		IClassFactory globeCameraParamValueClassFactory = GlobalClassFactoryMap.get(globeCameraParamValue.getCppInstanceTypeName());
		if (globeCameraParamValueClassFactory != null)
		{
			globeCameraParamValue.setDelegate(true);
			globeCameraParamValue = (com.earthview.world.spatial3d.GlobeCamera)globeCameraParamValueClassFactory.create();
			globeCameraParamValue.setDelegate(true);
			globeCameraParamValue.setInstancePointer(new InstancePointer(globeCamera));
		}
		}
		stopGoto(globeCameraParamValue);
	}

	native private void stopGoto_CGlobeCamera(long pNativeObject, long globeCamera);
	/**
	 * 停止Goto时触发
	 * @param globeCamera 相机
	 */
	public void stopGoto(com.earthview.world.spatial3d.GlobeCamera globeCamera)
	{
		long globeCameraParamValue = (globeCamera == null ? 0L : globeCamera.nativeObject.pointer);
		stopGoto_CGlobeCamera(this.nativeObject.pointer, globeCameraParamValue);
	}
	native private void stopGoto_CGlobeCamera_NoVirtual(long pNativeObject, long globeCamera);
	protected void stopGoto_NoVirtual(com.earthview.world.spatial3d.GlobeCamera globeCamera)
	{
		long globeCameraParamValue = (globeCamera == null ? 0L : globeCamera.nativeObject.pointer);
		stopGoto_CGlobeCamera_NoVirtual(this.nativeObject.pointer, globeCameraParamValue);
	}

	public GoToTargetListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GoToTargetListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_cameraHasGetAtTarget_CGlobeCamera(long pNativeObject, String method);
	native protected void register_stopGoto_CGlobeCamera(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_cameraHasGetAtTarget_CGlobeCamera(this.nativeObject.pointer, "cameraHasGetAtTarget_CGlobeCamera_callback");
			this.register_stopGoto_CGlobeCamera(this.nativeObject.pointer, "stopGoto_CGlobeCamera_callback");
		}
	}
	
	public static GoToTargetListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GoToTargetListener obj = null;
 		if(baseObj instanceof GoToTargetListener)
		{
			obj = (GoToTargetListener)baseObj;
		} else {
			obj = new GoToTargetListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGoToTargetListener");
			obj.increaseCast();
		}

		return obj;
	}
}
