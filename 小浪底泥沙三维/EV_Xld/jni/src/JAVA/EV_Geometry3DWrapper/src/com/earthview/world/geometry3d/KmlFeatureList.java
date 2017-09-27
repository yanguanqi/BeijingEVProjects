package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///
///kml对象容器
///
public class KmlFeatureList extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CKmlFeatureList", new KmlFeatureListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::JCKmlFeatureListProxy", new KmlFeatureListClassFactory());
	}

	native private long get_mpPlaceMarkList_void(long pNativeObject);
	public com.earthview.world.geometry3d.PlaceMarkList get_mpPlaceMarkList()
	{
		long jniValue = get_mpPlaceMarkList_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.PlaceMarkList __returnValue = new com.earthview.world.geometry3d.PlaceMarkList(CreatedWhenConstruct.CWC_NotToCreate, "CPlaceMarkList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.PlaceMarkList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPlaceMarkList");
		}
		return __returnValue;
	}
	
	native private void set_mpPlaceMarkList_CPlaceMarkList (long pNativeObject, long value);
	public void set_mpPlaceMarkList(com.earthview.world.geometry3d.PlaceMarkList mpPlaceMarkList)
	{
		long mpPlaceMarkListParamValue = (mpPlaceMarkList == null ? 0L : mpPlaceMarkList.nativeObject.pointer);
		
		set_mpPlaceMarkList_CPlaceMarkList(this.nativeObject.pointer, mpPlaceMarkListParamValue);
	}
	
	native private long get_mpPolylineList_void(long pNativeObject);
	public com.earthview.world.geometry3d.PolylineList get_mpPolylineList()
	{
		long jniValue = get_mpPolylineList_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.PolylineList __returnValue = new com.earthview.world.geometry3d.PolylineList(CreatedWhenConstruct.CWC_NotToCreate, "CPolylineList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.PolylineList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolylineList");
		}
		return __returnValue;
	}
	
	native private void set_mpPolylineList_CPolylineList (long pNativeObject, long value);
	public void set_mpPolylineList(com.earthview.world.geometry3d.PolylineList mpPolylineList)
	{
		long mpPolylineListParamValue = (mpPolylineList == null ? 0L : mpPolylineList.nativeObject.pointer);
		
		set_mpPolylineList_CPolylineList(this.nativeObject.pointer, mpPolylineListParamValue);
	}
	
	native private long get_mpPolygonList_void(long pNativeObject);
	public com.earthview.world.geometry3d.PolygonList get_mpPolygonList()
	{
		long jniValue = get_mpPolygonList_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.PolygonList __returnValue = new com.earthview.world.geometry3d.PolygonList(CreatedWhenConstruct.CWC_NotToCreate, "CPolygonList");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.PolygonList)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CPolygonList");
		}
		return __returnValue;
	}
	
	native private void set_mpPolygonList_CPolygonList (long pNativeObject, long value);
	public void set_mpPolygonList(com.earthview.world.geometry3d.PolygonList mpPolygonList)
	{
		long mpPolygonListParamValue = (mpPolygonList == null ? 0L : mpPolygonList.nativeObject.pointer);
		
		set_mpPolygonList_CPolygonList(this.nativeObject.pointer, mpPolygonListParamValue);
	}
	
	native private long get_WorkState_void(long pNativeObject);
	public com.earthview.world.spatial.kml.KmlWorkQueueState get_WorkState()
	{
		long jniValue = get_WorkState_void(this.nativeObject.pointer);
		
		com.earthview.world.spatial.kml.KmlWorkQueueState __returnValue = new com.earthview.world.spatial.kml.KmlWorkQueueState(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.kml.KmlWorkQueueState)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CKmlWorkQueueState");
		}
		return __returnValue;
	}
	
	native private void set_WorkState_CKmlWorkQueueState (long pNativeObject, long value);
	public void set_WorkState(com.earthview.world.spatial.kml.KmlWorkQueueState WorkState)
	{
		long WorkStateParamValue = WorkState.nativeObject.pointer;
		
		set_WorkState_CKmlWorkQueueState(this.nativeObject.pointer, WorkStateParamValue);
	}
	
	/**
	 * 构造函数
	 */
	public KmlFeatureList(com.earthview.world.graphic.SceneManager ref_scenemanager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_scenemanagerPtr = new BasePointer(ref_scenemanager);
		list.add("ref_scenemanager", ref_scenemanagerPtr.get());
		Create("JCKmlFeatureListProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.geometry3d.KmlFeatureList".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setVisible_CGeoObject_ev_bool(long pNativeObject, long ref_geo, boolean visible);
	public void setVisible(com.earthview.world.spatial.GeoObject ref_geo, boolean visible)
	{
		long ref_geoParamValue = (ref_geo == null ? 0L : ref_geo.nativeObject.pointer);
		boolean visibleParamValue = visible;
		setVisible_CGeoObject_ev_bool(this.nativeObject.pointer, ref_geoParamValue, visibleParamValue);
	}
	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setLayer_ILayer(long pNativeObject, long layer);
	public void setLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		setLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private long getLayer_void(long pNativeObject);
	public com.earthview.world.spatial.atlas.Ilayer getLayer()
	{
		long returnValue = getLayer_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Ilayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ILayer");
		}
		return __returnValue;
	}
	native private void rebuild_CGeoObject(long pNativeObject, long ref_geo);
	public void rebuild(com.earthview.world.spatial.GeoObject ref_geo)
	{
		long ref_geoParamValue = (ref_geo == null ? 0L : ref_geo.nativeObject.pointer);
		rebuild_CGeoObject(this.nativeObject.pointer, ref_geoParamValue);
	}
	protected  void setSelectable_ev_bool_callback(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable(selectableParamValue);
	}

	native private void setSelectable_ev_bool(long pNativeObject, boolean selectable);
	public void setSelectable(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool(this.nativeObject.pointer, selectableParamValue);
	}
	native private void setSelectable_ev_bool_NoVirtual(long pNativeObject, boolean selectable);
	protected void setSelectable_NoVirtual(boolean selectable)
	{
		boolean selectableParamValue = selectable;
		setSelectable_ev_bool_NoVirtual(this.nativeObject.pointer, selectableParamValue);
	}

	native private long getVisibleObjects_CGeoObject(long pNativeObject, long ref_geo);
	public com.earthview.world.geometry3d.VisibleobjectVector getVisibleObjects(com.earthview.world.spatial.GeoObject ref_geo)
	{
		long ref_geoParamValue = (ref_geo == null ? 0L : ref_geo.nativeObject.pointer);
		long returnValue = getVisibleObjects_CGeoObject(this.nativeObject.pointer, ref_geoParamValue);
		com.earthview.world.geometry3d.VisibleobjectVector __returnValue = new com.earthview.world.geometry3d.VisibleobjectVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CVisibleobjectVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.VisibleobjectVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CVisibleobjectVector");
		}
		return __returnValue;
	}
	native private void setSelfAdaptGeoRange_CVector3_Real_Real(long pNativeObject, long center, double r, double targetSamplesPerDegrees);
	///void setSelfAdaptGeoRange(Real minLon,Real maxLon,Real minLat,Real maxLat,Real targetSamplesPerDegrees);
	public void setSelfAdaptGeoRange(com.earthview.world.spatial.math.Vector3 center, double r, double targetSamplesPerDegrees)
	{
		long centerParamValue = center.nativeObject.pointer;
		double rParamValue = r;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		setSelfAdaptGeoRange_CVector3_Real_Real(this.nativeObject.pointer, centerParamValue, rParamValue, targetSamplesPerDegreesParamValue);
	}
	native private void setIsRegionFeatureList_ev_bool(long pNativeObject, boolean val);
	public void setIsRegionFeatureList(boolean val)
	{
		boolean valParamValue = val;
		setIsRegionFeatureList_ev_bool(this.nativeObject.pointer, valParamValue);
	}
	native private boolean IsRegionFeatureList_void(long pNativeObject);
	public boolean IsRegionFeatureList()
	{
		boolean returnValue = IsRegionFeatureList_void(this.nativeObject.pointer);
		return returnValue;
	}
	public KmlFeatureList(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlFeatureList(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
		}
	}
	
	public static KmlFeatureList fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlFeatureList obj = null;
 		if(baseObj instanceof KmlFeatureList)
		{
			obj = (KmlFeatureList)baseObj;
		} else {
			obj = new KmlFeatureList(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlFeatureList");
			obj.increaseCast();
		}

		return obj;
	}
}
