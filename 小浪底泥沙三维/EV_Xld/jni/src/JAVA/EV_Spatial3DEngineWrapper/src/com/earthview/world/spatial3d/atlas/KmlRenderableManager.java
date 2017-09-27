package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlRenderableManager extends com.earthview.world.core.EventObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CKmlRenderableManager", new KmlRenderableManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCKmlRenderableManagerProxy", new KmlRenderableManagerClassFactory());
	}

	public KmlRenderableManager(com.earthview.world.spatial3d.atlas.Iglobelayer layer, com.earthview.world.graphic.SceneManager scenemanager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer layerPtr = new BasePointer(layer);
		list.add("layer", layerPtr.get());
		BasePointer scenemanagerPtr = new BasePointer(scenemanager);
		list.add("scenemanager", scenemanagerPtr.get());
		Create("JCKmlRenderableManagerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.KmlRenderableManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private long createRenderable_CGeoObjectExtension_CCamera(long pNativeObject, long geoObj, long camera);
	public com.earthview.world.geometry3d.VisibleObjects createRenderable(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.graphic.Camera camera)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		long returnValue = createRenderable_CGeoObjectExtension_CCamera(this.nativeObject.pointer, geoObjParamValue, cameraParamValue);
		com.earthview.world.geometry3d.VisibleObjects __returnValue = new com.earthview.world.geometry3d.VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjects)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		}
		return __returnValue;
	}
	native private void destoryRenderable_CGeoObjectExtension(long pNativeObject, long geoObj);
	public void destoryRenderable(com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		destoryRenderable_CGeoObjectExtension(this.nativeObject.pointer, geoObjParamValue);
	}
	native private long getVisibleObjects_CGeoObjectExtension(long pNativeObject, long geoObj);
	///ev_void loadRenderables(EarthView::World::Spatial::Kml::GeoObjects& objs);
	///ev_void destoryRenderables(EarthView::World::Spatial::Kml::GeoObjects& objs);
	public com.earthview.world.geometry3d.VisibleObjects getVisibleObjects(com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long returnValue = getVisibleObjects_CGeoObjectExtension(this.nativeObject.pointer, geoObjParamValue);
		com.earthview.world.geometry3d.VisibleObjects __returnValue = new com.earthview.world.geometry3d.VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjects)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		}
		return __returnValue;
	}
	native private boolean hasVisibleObjects_CGeoObjectExtension(long pNativeObject, long geoObj);
	public boolean hasVisibleObjects(com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		boolean returnValue = hasVisibleObjects_CGeoObjectExtension(this.nativeObject.pointer, geoObjParamValue);
		return returnValue;
	}
	native private void addVisibleObject_CGeoObjectExtension_VisibleObjects(long pNativeObject, long geoObj, long objs);
	public void addVisibleObject(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, com.earthview.world.geometry3d.VisibleObjects objs)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		long objsParamValue = objs.nativeObject.pointer;
		addVisibleObject_CGeoObjectExtension_VisibleObjects(this.nativeObject.pointer, geoObjParamValue, objsParamValue);
	}
	native private void removeVisibleObject_CGeoObjectExtension(long pNativeObject, long geoObj);
	public void removeVisibleObject(com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		removeVisibleObject_CGeoObjectExtension(this.nativeObject.pointer, geoObjParamValue);
	}
	native private void disposeCGeoObject_CGeoObjectExtension(long pNativeObject, long geoObj);
	public void disposeCGeoObject(com.earthview.world.spatial.kml.GeoObjectExtension geoObj)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		disposeCGeoObject_CGeoObjectExtension(this.nativeObject.pointer, geoObjParamValue);
	}
	native private void recreateRenderable_CCamera(long pNativeObject, long camera);
	public void recreateRenderable(com.earthview.world.graphic.Camera camera)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		recreateRenderable_CCamera(this.nativeObject.pointer, cameraParamValue);
	}
	native private void refreshVisible_ev_bool_CCamera(long pNativeObject, boolean layerVisible, long camera);
	public void refreshVisible(boolean layerVisible, com.earthview.world.graphic.Camera camera)
	{
		boolean layerVisibleParamValue = layerVisible;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		refreshVisible_ev_bool_CCamera(this.nativeObject.pointer, layerVisibleParamValue, cameraParamValue);
	}
	native private boolean refreshImageOverlayer_ev_int32_ev_int32_ev_int32_CTileData_int(long pNativeObject, int level, int row, int col, long tile, long flag);
	public boolean refreshImageOverlayer(int level, int row, int col, com.earthview.world.spatial.TileData tile, IntegerPointer flag)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long tileParamValue = tile.nativeObject.pointer;
		long flagParamValue = flag.nativeObject.pointer;
		boolean returnValue = refreshImageOverlayer_ev_int32_ev_int32_ev_int32_CTileData_int(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, tileParamValue, flagParamValue);
		return returnValue;
	}
	native private boolean refreshImageOverlayer_Real_Real_Real_Real_CTileData_int(long pNativeObject, double minX, double minY, double maxX, double maxY, long tile, long flag);
	public boolean refreshImageOverlayer(double minX, double minY, double maxX, double maxY, com.earthview.world.spatial.TileData tile, IntegerPointer flag)
	{
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		long tileParamValue = tile.nativeObject.pointer;
		long flagParamValue = flag.nativeObject.pointer;
		boolean returnValue = refreshImageOverlayer_Real_Real_Real_Real_CTileData_int(this.nativeObject.pointer, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue, tileParamValue, flagParamValue);
		return returnValue;
	}
	native private void refreshSelectable_ev_bool(long pNativeObject, boolean selectable);
	public void refreshSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		refreshSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void refreshSelectable_CGeoObjectExtension_ev_bool(long pNativeObject, long geoObj, boolean selectable);
	public void refreshSelectable(com.earthview.world.spatial.kml.GeoObjectExtension geoObj, boolean selectable)
	{
		long geoObjParamValue = (geoObj == null ? 0L : geoObj.nativeObject.pointer);
		boolean selectableParamValue = selectable;
		refreshSelectable_CGeoObjectExtension_ev_bool(this.nativeObject.pointer, geoObjParamValue, selectableParamValue);
	}
	native private void iterateRefreshVisible_ev_bool_CCamera_CKmlDocument(long pNativeObject, boolean layerVisible, long camera, long kmlDoc);
	public void iterateRefreshVisible(boolean layerVisible, com.earthview.world.graphic.Camera camera, com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		boolean layerVisibleParamValue = layerVisible;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		iterateRefreshVisible_ev_bool_CCamera_CKmlDocument(this.nativeObject.pointer, layerVisibleParamValue, cameraParamValue, kmlDocParamValue);
	}
	native private boolean checkEmpty_CKmlDocument(long pNativeObject, long kmlDoc);
	public boolean checkEmpty(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		boolean returnValue = checkEmpty_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
		return returnValue;
	}
	native private void _notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}
	native private long getPanoramaTiles_void(long pNativeObject);
	public com.earthview.world.geometry3d.VisibleObjects getPanoramaTiles()
	{
		long returnValue = getPanoramaTiles_void(this.nativeObject.pointer);
		com.earthview.world.geometry3d.VisibleObjects __returnValue = new com.earthview.world.geometry3d.VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleObjects)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "VisibleObjects");
		}
		return __returnValue;
	}
	native private void processBatchObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void processBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		processBatchObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private void initBatchObject_CKmlDocument_CKmlDocument_CCamera(long pNativeObject, long kmlDoc, long rootDoc, long cam);
	public void initBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc, com.earthview.world.spatial.kml.KmlDocument rootDoc, com.earthview.world.graphic.Camera cam)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		long rootDocParamValue = (rootDoc == null ? 0L : rootDoc.nativeObject.pointer);
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		initBatchObject_CKmlDocument_CKmlDocument_CCamera(this.nativeObject.pointer, kmlDocParamValue, rootDocParamValue, camParamValue);
	}
	native private void destoryBatchObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void destoryBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		destoryBatchObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private boolean isBatchObject_CGeoObjectExtension_ev_bool(long pNativeObject, long ref_geo, boolean enableEditingCheck);
	public boolean isBatchObject(com.earthview.world.spatial.kml.GeoObjectExtension ref_geo, boolean enableEditingCheck)
	{
		long ref_geoParamValue = (ref_geo == null ? 0L : ref_geo.nativeObject.pointer);
		boolean enableEditingCheckParamValue = enableEditingCheck;
		boolean returnValue = isBatchObject_CGeoObjectExtension_ev_bool(this.nativeObject.pointer, ref_geoParamValue, enableEditingCheckParamValue);
		return returnValue;
	}
	native private void rebuild_CGeoObjectExtension(long pNativeObject, long ref_geo);
	public void rebuild(com.earthview.world.spatial.kml.GeoObjectExtension ref_geo)
	{
		long ref_geoParamValue = (ref_geo == null ? 0L : ref_geo.nativeObject.pointer);
		rebuild_CGeoObjectExtension(this.nativeObject.pointer, ref_geoParamValue);
	}
	native private void synDestoryBatchObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void synDestoryBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		synDestoryBatchObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private boolean isRunningInThread_void(long pNativeObject);
	public boolean isRunningInThread()
	{
		boolean returnValue = isRunningInThread_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void synBuildBatchObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void synBuildBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		synBuildBatchObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private void initNewBatchObject_CKmlDocument_CKmlDocument_CCamera(long pNativeObject, long kmlDoc, long rootDoc, long cam);
	public void initNewBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc, com.earthview.world.spatial.kml.KmlDocument rootDoc, com.earthview.world.graphic.Camera cam)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		long rootDocParamValue = (rootDoc == null ? 0L : rootDoc.nativeObject.pointer);
		long camParamValue = (cam == null ? 0L : cam.nativeObject.pointer);
		initNewBatchObject_CKmlDocument_CKmlDocument_CCamera(this.nativeObject.pointer, kmlDocParamValue, rootDocParamValue, camParamValue);
	}
	native private void processNewObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void processNewObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		processNewObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private void destoryNewBatchObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void destoryNewBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		destoryNewBatchObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private void destoryRegionBatchObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void destoryRegionBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		destoryRegionBatchObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private void synDestoryRegionBatchObject_CKmlDocument(long pNativeObject, long kmlDoc);
	public void synDestoryRegionBatchObject(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		synDestoryRegionBatchObject_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
	}
	native private boolean isSwitch_void(long pNativeObject);
	public boolean isSwitch()
	{
		boolean returnValue = isSwitch_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void iterateRefreshBatchObjects_ev_bool_CCamera_CKmlDocument(long pNativeObject, boolean layerVisible, long camera, long kmlDoc);
	public void iterateRefreshBatchObjects(boolean layerVisible, com.earthview.world.graphic.Camera camera, com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		boolean layerVisibleParamValue = layerVisible;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		iterateRefreshBatchObjects_ev_bool_CCamera_CKmlDocument(this.nativeObject.pointer, layerVisibleParamValue, cameraParamValue, kmlDocParamValue);
	}
	native private void iterateRefreshDynamicObjects_ev_bool_CCamera_CKmlDocument(long pNativeObject, boolean layerVisible, long camera, long kmlDoc);
	public void iterateRefreshDynamicObjects(boolean layerVisible, com.earthview.world.graphic.Camera camera, com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		boolean layerVisibleParamValue = layerVisible;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		iterateRefreshDynamicObjects_ev_bool_CCamera_CKmlDocument(this.nativeObject.pointer, layerVisibleParamValue, cameraParamValue, kmlDocParamValue);
	}
	native private void iterateRefreshBatchObjects_ev_bool_CCamera(long pNativeObject, boolean layerVisible, long camera);
	public void iterateRefreshBatchObjects(boolean layerVisible, com.earthview.world.graphic.Camera camera)
	{
		boolean layerVisibleParamValue = layerVisible;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		iterateRefreshBatchObjects_ev_bool_CCamera(this.nativeObject.pointer, layerVisibleParamValue, cameraParamValue);
	}
	native private boolean checkBatchVisible_ev_bool_CCamera_ev_bool(long pNativeObject, boolean layerVisible, long camera, boolean isBatch);
	public boolean checkBatchVisible(boolean layerVisible, com.earthview.world.graphic.Camera camera, boolean isBatch)
	{
		boolean layerVisibleParamValue = layerVisible;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		boolean isBatchParamValue = isBatch;
		boolean returnValue = checkBatchVisible_ev_bool_CCamera_ev_bool(this.nativeObject.pointer, layerVisibleParamValue, cameraParamValue, isBatchParamValue);
		return returnValue;
	}
	native private void refreshDynamicBatchVisible_ev_bool_CCamera(long pNativeObject, boolean layerVisible, long camera);
	public void refreshDynamicBatchVisible(boolean layerVisible, com.earthview.world.graphic.Camera camera)
	{
		boolean layerVisibleParamValue = layerVisible;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		refreshDynamicBatchVisible_ev_bool_CCamera(this.nativeObject.pointer, layerVisibleParamValue, cameraParamValue);
	}
	native private void refreshDynamicGeoObjectVisible_CKmlDocument_CGeoObjectExtension_ev_bool(long pNativeObject, long kmlDoc, long ref_geo, boolean visible);
	public void refreshDynamicGeoObjectVisible(com.earthview.world.spatial.kml.KmlDocument kmlDoc, com.earthview.world.spatial.kml.GeoObjectExtension ref_geo, boolean visible)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		long ref_geoParamValue = (ref_geo == null ? 0L : ref_geo.nativeObject.pointer);
		boolean visibleParamValue = visible;
		refreshDynamicGeoObjectVisible_CKmlDocument_CGeoObjectExtension_ev_bool(this.nativeObject.pointer, kmlDocParamValue, ref_geoParamValue, visibleParamValue);
	}
	native private void calculatePixel_CGeoObjectExtensionAttribute_CCamera_ev_real64(long pNativeObject, long attribute, long camera, long num);
	public void calculatePixel(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute attribute, com.earthview.world.graphic.Camera camera, DoublePointer num)
	{
		long attributeParamValue = attribute.nativeObject.pointer;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		long numParamValue = num.nativeObject.pointer;
		calculatePixel_CGeoObjectExtensionAttribute_CCamera_ev_real64(this.nativeObject.pointer, attributeParamValue, cameraParamValue, numParamValue);
	}
	native private boolean checkPixelVisible_CGeoObjectExtensionAttribute_CCamera(long pNativeObject, long attr, long camera);
	public boolean checkPixelVisible(com.earthview.world.spatial.kml.GeoObjectExtensionAttribute attr, com.earthview.world.graphic.Camera camera)
	{
		long attrParamValue = attr.nativeObject.pointer;
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		boolean returnValue = checkPixelVisible_CGeoObjectExtensionAttribute_CCamera(this.nativeObject.pointer, attrParamValue, cameraParamValue);
		return returnValue;
	}
	native private long findBatchDocument_CKmlDocument(long pNativeObject, long kmlDoc);
	public com.earthview.world.spatial.kml.KmlDocument findBatchDocument(com.earthview.world.spatial.kml.KmlDocument kmlDoc)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		long returnValue = findBatchDocument_CKmlDocument(this.nativeObject.pointer, kmlDocParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.kml.KmlDocument __returnValue = new com.earthview.world.spatial.kml.KmlDocument(CreatedWhenConstruct.CWC_NotToCreate, "CKmlDocument");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlDocument)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlDocument");
		}
		return __returnValue;
	}
	native private boolean checkDocLodPass_CKmlDocument_CCamera(long pNativeObject, long kmlDoc, long camera);
	public boolean checkDocLodPass(com.earthview.world.spatial.kml.KmlDocument kmlDoc, com.earthview.world.graphic.Camera camera)
	{
		long kmlDocParamValue = (kmlDoc == null ? 0L : kmlDoc.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		boolean returnValue = checkDocLodPass_CKmlDocument_CCamera(this.nativeObject.pointer, kmlDocParamValue, cameraParamValue);
		return returnValue;
	}
	native private boolean checkNetLinkLodPass_CKmlNetworkLink_CCamera(long pNativeObject, long netlink, long camera);
	public boolean checkNetLinkLodPass(com.earthview.world.spatial.kml.KmlNetworkLink netlink, com.earthview.world.graphic.Camera camera)
	{
		long netlinkParamValue = (netlink == null ? 0L : netlink.nativeObject.pointer);
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		boolean returnValue = checkNetLinkLodPass_CKmlNetworkLink_CCamera(this.nativeObject.pointer, netlinkParamValue, cameraParamValue);
		return returnValue;
	}
	native private void waitResponses_void(long pNativeObject);
	public void waitResponses()
	{
		waitResponses_void(this.nativeObject.pointer);
	}
	native private void onTimerEvent_CTimerEvent(long pNativeObject, long e);
	/**
	 * 定时器事件处理函数，可重载
	 * @param e 定时器事件，内有定时器id
	 */
	public void onTimerEvent(com.earthview.world.core.TimerEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onTimerEvent_CTimerEvent(this.nativeObject.pointer, eParamValue);
	}
	native private void onTimerEvent_CTimerEvent_NoVirtual(long pNativeObject, long e);
	protected void onTimerEvent_NoVirtual(com.earthview.world.core.TimerEvent e)
	{
		long eParamValue = (e == null ? 0L : e.nativeObject.pointer);
		onTimerEvent_CTimerEvent_NoVirtual(this.nativeObject.pointer, eParamValue);
	}

	public KmlRenderableManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlRenderableManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 事件处理函数，可重载
	 * @param e 事件
	 * @return 已处理返回true，否则返回false
	 */
	public boolean onEvent(com.earthview.world.core.Event e)
	{
		return super.onEvent_NoVirtual(e);
	}
	/**
	 * 用户自定义事件处理函数，是onEvent的子过程，可重载
	 * @param e 事件
	 */
	public void onCustomEvent(com.earthview.world.core.Event e)
	{
		super.onCustomEvent_NoVirtual(e);
	}
	
	native protected void register_onEvent_CEvent(long pNativeObject, String method);
	native protected void register_onTimerEvent_CTimerEvent(long pNativeObject, String method);
	native protected void register_onCustomEvent_CEvent(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_onEvent_CEvent(this.nativeObject.pointer, "onEvent_CEvent_callback");
			this.register_onTimerEvent_CTimerEvent(this.nativeObject.pointer, "onTimerEvent_CTimerEvent_callback");
			this.register_onCustomEvent_CEvent(this.nativeObject.pointer, "onCustomEvent_CEvent_callback");
		}
	}
	
	public static KmlRenderableManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlRenderableManager obj = null;
 		if(baseObj instanceof KmlRenderableManager)
		{
			obj = (KmlRenderableManager)baseObj;
		} else {
			obj = new KmlRenderableManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlRenderableManager");
			obj.increaseCast();
		}

		return obj;
	}
}
