package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GotoListener360 extends com.earthview.world.spatial3d.controls.GoToTargetListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360", new GotoListener360ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCGotoListener360Proxy", new GotoListener360ClassFactory());
	}

	/**
	 * 构造函数
	 */
	public GotoListener360(com.earthview.world.spatial3d.controls.GlobeControl globeControl, com.earthview.world.spatial3dproxy.kmlmanager.Gui360EventHandler handler) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer globeControlPtr = new BasePointer(globeControl);
		list.add("globeControl", globeControlPtr.get());
		BasePointer handlerPtr = new BasePointer(handler);
		list.add("handler", handlerPtr.get());
		Create("JCGotoListener360Proxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.kmlmanager.GotoListener360".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void cameraHasGetAtTarget_CGlobeCamera(long pNativeObject, long globeCamera);
	/**
	 * 相机到达ＧＯＴＯ终点外触发
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

	native private void create_CPanoramaTile(long pNativeObject, long tile);
	public void create(com.earthview.world.spatial3d.atlas.PanoramaTile tile)
	{
		long tileParamValue = (tile == null ? 0L : tile.nativeObject.pointer);
		create_CPanoramaTile(this.nativeObject.pointer, tileParamValue);
	}
	public GotoListener360(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GotoListener360(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 停止Goto时触发
	 * @param globeCamera 相机
	 */
	public void stopGoto(com.earthview.world.spatial3d.GlobeCamera globeCamera)
	{
		super.stopGoto_NoVirtual(globeCamera);
	}
	
	native protected void register_cameraHasGetAtTarget_CGlobeCamera(long pNativeObject, String method);
	native protected void register_stopGoto_CGlobeCamera(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_cameraHasGetAtTarget_CGlobeCamera(this.nativeObject.pointer, "cameraHasGetAtTarget_CGlobeCamera_callback");
			this.register_stopGoto_CGlobeCamera(this.nativeObject.pointer, "stopGoto_CGlobeCamera_callback");
		}
	}
	
	public static GotoListener360 fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GotoListener360 obj = null;
 		if(baseObj instanceof GotoListener360)
		{
			obj = (GotoListener360)baseObj;
		} else {
			obj = new GotoListener360(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGotoListener360");
			obj.increaseCast();
		}

		return obj;
	}
}
