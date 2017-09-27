package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 默认高程类，继承自EarthView::World::Spatial3D::Analysis::CAltitude3DListener，用户可根据情况重写此类
 */
public class AltitudeListener extends com.earthview.world.spatial3d.analysis.Altitude3DListener {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::CAltitudeListener", new AltitudeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Analysis::JCAltitudeListenerProxy", new AltitudeListenerClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public AltitudeListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCAltitudeListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.AltitudeListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pManager 地球场景管理器
	 */
	public AltitudeListener(com.earthview.world.spatial3d.GeoSceneManager ref_pManager) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pManagerPtr = new BasePointer(ref_pManager);
		list.add("ref_pManager", ref_pManagerPtr.get());
		Create("JCAltitudeListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.AltitudeListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param ref_pTerrainLayer 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer
	 */
	public AltitudeListener(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pTerrainLayer) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer ref_pTerrainLayerPtr = new BasePointer(ref_pTerrainLayer);
		list.add("ref_pTerrainLayer", ref_pTerrainLayerPtr.get());
		Create("JCAltitudeListenerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.analysis.AltitudeListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getAltitude_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude);
	/**
	 * 根据经纬度获取高程值
	 * @param latitude 纬度
	 * @param longitude 精度
	 * @return 高程值
	 */
	public double getAltitude(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getAltitude_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}
	native private double getAltitude_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude);
	protected double getAltitude_NoVirtual(double latitude, double longitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double returnValue = getAltitude_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue);
		return returnValue;
	}

	native private void setGeoSceneManager_CGeoSceneManager(long pNativeObject, long ref_pManager);
	/**
	 * 设置场景管理器
	 * @param ref_pManager 场景管理器
	 */
	public void setGeoSceneManager(com.earthview.world.spatial3d.GeoSceneManager ref_pManager)
	{
		long ref_pManagerParamValue = (ref_pManager == null ? 0L : ref_pManager.nativeObject.pointer);
		setGeoSceneManager_CGeoSceneManager(this.nativeObject.pointer, ref_pManagerParamValue);
	}
	native private void setTerrainLayer_ITerrainLayer(long pNativeObject, long ref_pTerrainLayer);
	/**
	 * 设置地形图层或图层组
	 * @param ref_pTerrainLayer 地形图层或图层组
	 */
	public void setTerrainLayer(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pTerrainLayer)
	{
		long ref_pTerrainLayerParamValue = (ref_pTerrainLayer == null ? 0L : ref_pTerrainLayer.nativeObject.pointer);
		setTerrainLayer_ITerrainLayer(this.nativeObject.pointer, ref_pTerrainLayerParamValue);
	}
	public AltitudeListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AltitudeListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getAltitude_ev_real64_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getAltitude_ev_real64_ev_real64(this.nativeObject.pointer, "getAltitude_ev_real64_ev_real64_callback");
		}
	}
	
	public static AltitudeListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AltitudeListener obj = null;
 		if(baseObj instanceof AltitudeListener)
		{
			obj = (AltitudeListener)baseObj;
		} else {
			obj = new AltitudeListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAltitudeListener");
			obj.increaseCast();
		}

		return obj;
	}
}
