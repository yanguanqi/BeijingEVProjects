package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BingMapTree extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CBingMapTree", new BingMapTreeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCBingMapTreeProxy", new BingMapTreeClassFactory());
	}

	public BingMapTree(String rootQuadKey) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rootQuadKeyPtr = new BasePointer(rootQuadKey);
		list.add("rootQuadKey", rootQuadKeyPtr.get());
		Create("JCBingMapTreeProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.BingMapTree".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void update_CCamera_callback(long camera)
	{
		com.earthview.world.graphic.Camera cameraParamValue = (camera == 0L ? null : new com.earthview.world.graphic.Camera(CreatedWhenConstruct.CWC_NotToCreate));
		if(cameraParamValue != null)
		{
		cameraParamValue.setDelegate(true);
		cameraParamValue.setInstancePointer(new InstancePointer(camera));
		IClassFactory cameraParamValueClassFactory = GlobalClassFactoryMap.get(cameraParamValue.getCppInstanceTypeName());
		if (cameraParamValueClassFactory != null)
		{
			cameraParamValue.setDelegate(true);
			cameraParamValue = (com.earthview.world.graphic.Camera)cameraParamValueClassFactory.create();
			cameraParamValue.setDelegate(true);
			cameraParamValue.setInstancePointer(new InstancePointer(camera));
		}
		}
		update(cameraParamValue);
	}

	native private void update_CCamera(long pNativeObject, long camera);
	public void update(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		update_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	native private void update_CCamera_NoVirtual(long pNativeObject, long camera);
	protected void update_NoVirtual(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		update_CCamera_NoVirtual(this.nativeObject.pointer, cameraParamValue);
	}

	native private void init_CCamera(long pNativeObject, long camera);
	public void init(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		init_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	native private void setSceneManager_CSceneManager(long pNativeObject, long sceneManager);
	public void setSceneManager(com.earthview.world.graphic.SceneManager sceneManager)
	{
		long sceneManagerParamValue = (sceneManager == null ? 0L : sceneManager.nativeObject.pointer);
		setSceneManager_CSceneManager(this.nativeObject.pointer, sceneManagerParamValue);
	}
	native private long getSceneManager_void(long pNativeObject);
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		long returnValue = getSceneManager_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.SceneManager __returnValue = new com.earthview.world.graphic.SceneManager(CreatedWhenConstruct.CWC_NotToCreate, "CSceneManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.SceneManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSceneManager");
		}
		return __returnValue;
	}
	native private void setDataset_IDataset(long pNativeObject, long pDataset);
	public void setDataset(com.earthview.world.spatial.geodataset.Idataset pDataset)
	{
		long pDatasetParamValue = (pDataset == null ? 0L : pDataset.nativeObject.pointer);
		setDataset_IDataset(this.nativeObject.pointer, pDatasetParamValue);
	}
	native private long getDataSet_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Idataset getDataSet()
	{
		long returnValue = getDataSet_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Idataset __returnValue = new com.earthview.world.spatial.geodataset.Idataset(CreatedWhenConstruct.CWC_NotToCreate, "IDataset");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Idataset)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IDataset");
		}
		return __returnValue;
	}
	native private String getRootQuadKey_void(long pNativeObject);
	public String getRootQuadKey()
	{
		String returnValue = getRootQuadKey_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean updateAltitudeValue_ev_real64(long pNativeObject, double altitudeValue);
	public boolean updateAltitudeValue(double altitudeValue)
	{
		double altitudeValueParamValue = altitudeValue;
		boolean returnValue = updateAltitudeValue_ev_real64(this.nativeObject.pointer, altitudeValueParamValue);
		return returnValue;
	}
	native private static float getCurrentLevel_CGlobeCamera(long globeCamera);
	public static float getCurrentLevel(com.earthview.world.spatial3d.GlobeCamera globeCamera)
	{
		long globeCameraParamValue = (globeCamera == null ? 0L : globeCamera.nativeObject.pointer);
		float returnValue = getCurrentLevel_CGlobeCamera(globeCameraParamValue);
		return returnValue;
	}
	public BingMapTree(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BingMapTree(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_update_CCamera(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_update_CCamera(this.nativeObject.pointer, "update_CCamera_callback");
		}
	}
	
	public static BingMapTree fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BingMapTree obj = null;
 		if(baseObj instanceof BingMapTree)
		{
			obj = (BingMapTree)baseObj;
		} else {
			obj = new BingMapTree(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBingMapTree");
			obj.increaseCast();
		}

		return obj;
	}
}
