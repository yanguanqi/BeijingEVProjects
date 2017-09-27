package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasTreeEventData extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEventData", new AtlasTreeEventDataClassFactory());
	}

	native private void setType_ActionType(long pNativeObject, int t);
	/**
	 * 设置动作类型。
	 * @param t 动作类型。
	 */
	public void setType(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ActionType t)
	{
		int tParamValue = t.getValue();
		setType_ActionType(this.nativeObject.pointer, tParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 获取动作类型。
	 * @return 动作类型。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ActionType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ActionType.toEnum(returnValue);
	}
	native private long get_detialData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData get_detialData()
	{
		long jniValue = get_detialData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "LayerDetailData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LayerDetailData");
		}
		return __returnValue;
	}
	
	native private void set_detialData_LayerDetailData (long pNativeObject, long value);
	public void set_detialData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData detialData)
	{
		long detialDataParamValue = detialData.nativeObject.pointer;
		
		set_detialData_LayerDetailData(this.nativeObject.pointer, detialDataParamValue);
	}
	
	native private long get_propertyData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData get_propertyData()
	{
		long jniValue = get_propertyData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "LayerPropertyData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LayerPropertyData");
		}
		return __returnValue;
	}
	
	native private void set_propertyData_LayerPropertyData (long pNativeObject, long value);
	public void set_propertyData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData propertyData)
	{
		long propertyDataParamValue = propertyData.nativeObject.pointer;
		
		set_propertyData_LayerPropertyData(this.nativeObject.pointer, propertyDataParamValue);
	}
	
	native private long get_kmlManageData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData get_kmlManageData()
	{
		long jniValue = get_kmlManageData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "KmlManageData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "KmlManageData");
		}
		return __returnValue;
	}
	
	native private void set_kmlManageData_KmlManageData (long pNativeObject, long value);
	public void set_kmlManageData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData kmlManageData)
	{
		long kmlManageDataParamValue = kmlManageData.nativeObject.pointer;
		
		set_kmlManageData_KmlManageData(this.nativeObject.pointer, kmlManageDataParamValue);
	}
	
	native private long get_sceneDetailData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData get_sceneDetailData()
	{
		long jniValue = get_sceneDetailData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneDetailData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneDetailData");
		}
		return __returnValue;
	}
	
	native private void set_sceneDetailData_SceneDetailData (long pNativeObject, long value);
	public void set_sceneDetailData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData sceneDetailData)
	{
		long sceneDetailDataParamValue = sceneDetailData.nativeObject.pointer;
		
		set_sceneDetailData_SceneDetailData(this.nativeObject.pointer, sceneDetailDataParamValue);
	}
	
	native private long get_scenePropertyData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData get_scenePropertyData()
	{
		long jniValue = get_scenePropertyData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "ScenePropertyData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ScenePropertyData");
		}
		return __returnValue;
	}
	
	native private void set_scenePropertyData_ScenePropertyData (long pNativeObject, long value);
	public void set_scenePropertyData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData scenePropertyData)
	{
		long scenePropertyDataParamValue = scenePropertyData.nativeObject.pointer;
		
		set_scenePropertyData_ScenePropertyData(this.nativeObject.pointer, scenePropertyDataParamValue);
	}
	
	native private long get_mapDetailData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData get_mapDetailData()
	{
		long jniValue = get_mapDetailData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MapDetailData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MapDetailData");
		}
		return __returnValue;
	}
	
	native private void set_mapDetailData_MapDetailData (long pNativeObject, long value);
	public void set_mapDetailData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData mapDetailData)
	{
		long mapDetailDataParamValue = mapDetailData.nativeObject.pointer;
		
		set_mapDetailData_MapDetailData(this.nativeObject.pointer, mapDetailDataParamValue);
	}
	
	native private long get_mapPropertyData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData get_mapPropertyData()
	{
		long jniValue = get_mapPropertyData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MapPropertyData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MapPropertyData");
		}
		return __returnValue;
	}
	
	native private void set_mapPropertyData_MapPropertyData (long pNativeObject, long value);
	public void set_mapPropertyData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData mapPropertyData)
	{
		long mapPropertyDataParamValue = mapPropertyData.nativeObject.pointer;
		
		set_mapPropertyData_MapPropertyData(this.nativeObject.pointer, mapPropertyDataParamValue);
	}
	
	native private long get_mapLayerRecordData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData get_mapLayerRecordData()
	{
		long jniValue = get_mapLayerRecordData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "MapLayerRecordData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MapLayerRecordData");
		}
		return __returnValue;
	}
	
	native private void set_mapLayerRecordData_MapLayerRecordData (long pNativeObject, long value);
	public void set_mapLayerRecordData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData mapLayerRecordData)
	{
		long mapLayerRecordDataParamValue = mapLayerRecordData.nativeObject.pointer;
		
		set_mapLayerRecordData_MapLayerRecordData(this.nativeObject.pointer, mapLayerRecordDataParamValue);
	}
	
	native private long get_sceneLayerRecordData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData get_sceneLayerRecordData()
	{
		long jniValue = get_sceneLayerRecordData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "SceneLayerRecordData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "SceneLayerRecordData");
		}
		return __returnValue;
	}
	
	native private void set_sceneLayerRecordData_SceneLayerRecordData (long pNativeObject, long value);
	public void set_sceneLayerRecordData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData sceneLayerRecordData)
	{
		long sceneLayerRecordDataParamValue = sceneLayerRecordData.nativeObject.pointer;
		
		set_sceneLayerRecordData_SceneLayerRecordData(this.nativeObject.pointer, sceneLayerRecordDataParamValue);
	}
	
	native private long get_historyImageData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData get_historyImageData()
	{
		long jniValue = get_historyImageData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "HistoryImageData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "HistoryImageData");
		}
		return __returnValue;
	}
	
	native private void set_historyImageData_HistoryImageData (long pNativeObject, long value);
	public void set_historyImageData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData historyImageData)
	{
		long historyImageDataParamValue = historyImageData.nativeObject.pointer;
		
		set_historyImageData_HistoryImageData(this.nativeObject.pointer, historyImageDataParamValue);
	}
	
	native private long get_terrainSettingsData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData get_terrainSettingsData()
	{
		long jniValue = get_terrainSettingsData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "TerrainSettingsData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "TerrainSettingsData");
		}
		return __returnValue;
	}
	
	native private void set_terrainSettingsData_TerrainSettingsData (long pNativeObject, long value);
	public void set_terrainSettingsData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData terrainSettingsData)
	{
		long terrainSettingsDataParamValue = terrainSettingsData.nativeObject.pointer;
		
		set_terrainSettingsData_TerrainSettingsData(this.nativeObject.pointer, terrainSettingsDataParamValue);
	}
	
	native private long get_atmosphereTreeData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData get_atmosphereTreeData()
	{
		long jniValue = get_atmosphereTreeData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "AtmosphereTreeData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "AtmosphereTreeData");
		}
		return __returnValue;
	}
	
	native private void set_atmosphereTreeData_AtmosphereTreeData (long pNativeObject, long value);
	public void set_atmosphereTreeData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData atmosphereTreeData)
	{
		long atmosphereTreeDataParamValue = atmosphereTreeData.nativeObject.pointer;
		
		set_atmosphereTreeData_AtmosphereTreeData(this.nativeObject.pointer, atmosphereTreeDataParamValue);
	}
	
	native private long get_editableData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData get_editableData()
	{
		long jniValue = get_editableData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "LayerEditableChangedData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LayerEditableChangedData");
		}
		return __returnValue;
	}
	
	native private void set_editableData_LayerEditableChangedData (long pNativeObject, long value);
	public void set_editableData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData editableData)
	{
		long editableDataParamValue = editableData.nativeObject.pointer;
		
		set_editableData_LayerEditableChangedData(this.nativeObject.pointer, editableDataParamValue);
	}
	
	native private long get_selectableData_void(long pNativeObject);
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData get_selectableData()
	{
		long jniValue = get_selectableData_void(this.nativeObject.pointer);
		
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
		__returnValue.bindNativeObject(__instancePointer, "LayerSelectableChangedData");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "LayerSelectableChangedData");
		}
		return __returnValue;
	}
	
	native private void set_selectableData_LayerSelectableChangedData (long pNativeObject, long value);
	public void set_selectableData(com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData selectableData)
	{
		long selectableDataParamValue = selectableData.nativeObject.pointer;
		
		set_selectableData_LayerSelectableChangedData(this.nativeObject.pointer, selectableDataParamValue);
	}
	
	public AtlasTreeEventData() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AtlasTreeEventData", null);
	}

	public AtlasTreeEventData(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AtlasTreeEventData(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AtlasTreeEventData fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AtlasTreeEventData obj = null;
 		if(baseObj instanceof AtlasTreeEventData)
		{
			obj = (AtlasTreeEventData)baseObj;
		} else {
			obj = new AtlasTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AtlasTreeEventData");
			obj.increaseCast();
		}

		return obj;
	}
}
