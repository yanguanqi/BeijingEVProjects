package com.earthview.xldmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WaterConservancyManager extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::XldManager::CWaterConservancyManager", new WaterConservancyManagerClassFactory());
	}

	native private static long GetSingletonPtr_void();
	public static com.earthview.xldmanager.WaterConservancyManager GetSingletonPtr()
	{
		long returnValue = GetSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.xldmanager.WaterConservancyManager __returnValue = new com.earthview.xldmanager.WaterConservancyManager(CreatedWhenConstruct.CWC_NotToCreate, "CWaterConservancyManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.xldmanager.WaterConservancyManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWaterConservancyManager");
		}
		return __returnValue;
	}
	native private void Initialise_CGlobeControl_EVString(long pNativeObject, long ref_globecontrol, long runtimePath);
	public void Initialise(com.earthview.world.spatial3d.controls.GlobeControl ref_globecontrol, StringPointer runtimePath)
	{
		long ref_globecontrolParamValue = (ref_globecontrol == null ? 0L : ref_globecontrol.nativeObject.pointer);
		long runtimePathParamValue = runtimePath.nativeObject.pointer;
		Initialise_CGlobeControl_EVString(this.nativeObject.pointer, ref_globecontrolParamValue, runtimePathParamValue);
	}
	native private void SetExaggerationFactor_ev_real32(long pNativeObject, float factor);
	public void SetExaggerationFactor(float factor)
	{
		float factorParamValue = factor;
		SetExaggerationFactor_ev_real32(this.nativeObject.pointer, factorParamValue);
	}
	native private void CreateTerrain_EVString(long pNativeObject, String grdFileName);
	public void CreateTerrain(String grdFileName)
	{
		String grdFileNameParamValue = grdFileName;
		CreateTerrain_EVString(this.nativeObject.pointer, grdFileNameParamValue);
	}
	native private String GetTerrainName_ev_int32(long pNativeObject, int terrainIndex);
	public String GetTerrainName(int terrainIndex)
	{
		int terrainIndexParamValue = terrainIndex;
		String returnValue = GetTerrainName_ev_int32(this.nativeObject.pointer, terrainIndexParamValue);
		return returnValue;
	}
	native private void SetTerrainVisible_EVString_ev_bool(long pNativeObject, String terrainName, boolean isVisible);
	public void SetTerrainVisible(String terrainName, boolean isVisible)
	{
		String terrainNameParamValue = terrainName;
		boolean isVisibleParamValue = isVisible;
		SetTerrainVisible_EVString_ev_bool(this.nativeObject.pointer, terrainNameParamValue, isVisibleParamValue);
	}
	native private void SetTerrainOffset_EVString_ev_real64(long pNativeObject, String terrainName, double offset);
	public void SetTerrainOffset(String terrainName, double offset)
	{
		String terrainNameParamValue = terrainName;
		double offsetParamValue = offset;
		SetTerrainOffset_EVString_ev_real64(this.nativeObject.pointer, terrainNameParamValue, offsetParamValue);
	}
	native private void MarkPosistion_EVString_EVString_EVString_ev_real64_ev_real64_ev_real64(long pNativeObject, String name, String imgeFileName, String tip, double longi, double lati, double alti);
	public void MarkPosistion(String name, String imgeFileName, String tip, double longi, double lati, double alti)
	{
		String nameParamValue = name;
		String imgeFileNameParamValue = imgeFileName;
		String tipParamValue = tip;
		double longiParamValue = longi;
		double latiParamValue = lati;
		double altiParamValue = alti;
		MarkPosistion_EVString_EVString_EVString_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, nameParamValue, imgeFileNameParamValue, tipParamValue, longiParamValue, latiParamValue, altiParamValue);
	}
	native private void SetSectionQueryEnable_ev_bool(long pNativeObject, boolean isEnable);
	public void SetSectionQueryEnable(boolean isEnable)
	{
		boolean isEnableParamValue = isEnable;
		SetSectionQueryEnable_ev_bool(this.nativeObject.pointer, isEnableParamValue);
	}
	native private void SetTerrainHeightQueryEnable_ev_bool(long pNativeObject, boolean isEnable);
	public void SetTerrainHeightQueryEnable(boolean isEnable)
	{
		boolean isEnableParamValue = isEnable;
		SetTerrainHeightQueryEnable_ev_bool(this.nativeObject.pointer, isEnableParamValue);
	}
	native private void CreateWaterSurface_ev_real64(long pNativeObject, double waterHeight);
	/**
	 * 创建水面，该方法仅在无水面时使用，并且仅使用一次即可
	 * @param waterHeight 水面高度
	 */
	public void CreateWaterSurface(double waterHeight)
	{
		double waterHeightParamValue = waterHeight;
		CreateWaterSurface_ev_real64(this.nativeObject.pointer, waterHeightParamValue);
	}
	native private void SetWaterSurfaceVisible_ev_bool(long pNativeObject, boolean isVisible);
	/**
	 * 设置水面的可见性
	 * @param isVisible 是否可见
	 */
	public void SetWaterSurfaceVisible(boolean isVisible)
	{
		boolean isVisibleParamValue = isVisible;
		SetWaterSurfaceVisible_ev_bool(this.nativeObject.pointer, isVisibleParamValue);
	}
	native private void SetWaterLineHeight_ev_real64(long pNativeObject, double waterLineHeight);
	/**
	 * 设置水位高度
	 * @param waterLineHeight 水位数值
	 */
	public void SetWaterLineHeight(double waterLineHeight)
	{
		double waterLineHeightParamValue = waterLineHeight;
		SetWaterLineHeight_ev_real64(this.nativeObject.pointer, waterLineHeightParamValue);
	}
	native private void DeleteWaterSurface_ev_bool(long pNativeObject, boolean isSure);
	/**
	 * 删除水面
	 * @param isSure 确认？
	 */
	public void DeleteWaterSurface(boolean isSure)
	{
		boolean isSureParamValue = isSure;
		DeleteWaterSurface_ev_bool(this.nativeObject.pointer, isSureParamValue);
	}
	native private void DrawRectBounds_void(long pNativeObject);
	public void DrawRectBounds()
	{
		DrawRectBounds_void(this.nativeObject.pointer);
	}
	native private void DrawPolylineBounds_void(long pNativeObject);
	public void DrawPolylineBounds()
	{
		DrawPolylineBounds_void(this.nativeObject.pointer);
	}
	native private String GetTerrainCount_void(long pNativeObject);
	public ULongPointer GetTerrainCount()
	{
		String returnValue = GetTerrainCount_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private long get_mpGlobeControl_void(long pNativeObject);
	public com.earthview.world.spatial3d.controls.GlobeControl get_mpGlobeControl()
	{
		long jniValue = get_mpGlobeControl_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.controls.GlobeControl __returnValue = new com.earthview.world.spatial3d.controls.GlobeControl(CreatedWhenConstruct.CWC_NotToCreate, "CGlobeControl");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.controls.GlobeControl)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGlobeControl");
		}
		return __returnValue;
	}
	
	native private void set_mpGlobeControl_CGlobeControl (long pNativeObject, long value);
	public void set_mpGlobeControl(com.earthview.world.spatial3d.controls.GlobeControl mpGlobeControl)
	{
		long mpGlobeControlParamValue = (mpGlobeControl == null ? 0L : mpGlobeControl.nativeObject.pointer);
		
		set_mpGlobeControl_CGlobeControl(this.nativeObject.pointer, mpGlobeControlParamValue);
	}
	
	public WaterConservancyManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WaterConservancyManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WaterConservancyManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WaterConservancyManager obj = null;
 		if(baseObj instanceof WaterConservancyManager)
		{
			obj = (WaterConservancyManager)baseObj;
		} else {
			obj = new WaterConservancyManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWaterConservancyManager");
			obj.increaseCast();
		}

		return obj;
	}
}
