package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasTreeEvent extends com.earthview.world.core.Event {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent", new AtlasTreeEventClassFactory());
	}

	/// 动作类型，一般地，Property在dock中显示，而Detail在弹窗中显示。
	public enum ActionType implements INativeEnum<ActionType> {
		ProjectFilePreLoaded(ActionTypeHelper.ENUM_VALUES[0]),
		ProjectFilePostLoaded(ActionTypeHelper.ENUM_VALUES[1]),
		EveryLayerProperty(ActionTypeHelper.ENUM_VALUES[2]),
		KmlLayerProperty(ActionTypeHelper.ENUM_VALUES[3]),
		FeatureProperty(ActionTypeHelper.ENUM_VALUES[4]),
		ImageProperty(ActionTypeHelper.ENUM_VALUES[5]),
		TerrainProperty(ActionTypeHelper.ENUM_VALUES[6]),
		ClearProperty(ActionTypeHelper.ENUM_VALUES[7]),
		EveryLayerDetail(ActionTypeHelper.ENUM_VALUES[8]),
		KmlLayerDetial(ActionTypeHelper.ENUM_VALUES[9]),
		FeatureDetail(ActionTypeHelper.ENUM_VALUES[10]),
		ImageDetail(ActionTypeHelper.ENUM_VALUES[11]),
		TerrainDetail(ActionTypeHelper.ENUM_VALUES[12]),
		AmosphereDetail(ActionTypeHelper.ENUM_VALUES[13]),
		KmlManage(ActionTypeHelper.ENUM_VALUES[14]),
		ClearKmlManage(ActionTypeHelper.ENUM_VALUES[15]),
		SceneDetail(ActionTypeHelper.ENUM_VALUES[16]),
		MapDetail(ActionTypeHelper.ENUM_VALUES[17]),
		AltitudeModeConfig(ActionTypeHelper.ENUM_VALUES[18]),
		RefurbishModelLayer(ActionTypeHelper.ENUM_VALUES[19]),
		SceneProperty(ActionTypeHelper.ENUM_VALUES[20]),
		MapProperty(ActionTypeHelper.ENUM_VALUES[21]),
		MapLayerRecord(ActionTypeHelper.ENUM_VALUES[22]),
		SceneLayerRecord(ActionTypeHelper.ENUM_VALUES[23]),
		HistoryImageToolbar(ActionTypeHelper.ENUM_VALUES[24]),
		TerrainSettings(ActionTypeHelper.ENUM_VALUES[25]),
		AtmosphereTree(ActionTypeHelper.ENUM_VALUES[26]),
		LayerEditableChanged(ActionTypeHelper.ENUM_VALUES[27]),
		LayerSelectableChanged(ActionTypeHelper.ENUM_VALUES[28]);
		private int value;
		ActionType(int i) {
			this.value = i;
		}
		public ActionType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final ActionType toEnum(int retval) {
			if(retval == ProjectFilePreLoaded.value){
				return ProjectFilePreLoaded;
			}
			else if(retval == ProjectFilePostLoaded.value){
				return ProjectFilePostLoaded;
			}
			else if(retval == EveryLayerProperty.value){
				return EveryLayerProperty;
			}
			else if(retval == KmlLayerProperty.value){
				return KmlLayerProperty;
			}
			else if(retval == FeatureProperty.value){
				return FeatureProperty;
			}
			else if(retval == ImageProperty.value){
				return ImageProperty;
			}
			else if(retval == TerrainProperty.value){
				return TerrainProperty;
			}
			else if(retval == ClearProperty.value){
				return ClearProperty;
			}
			else if(retval == EveryLayerDetail.value){
				return EveryLayerDetail;
			}
			else if(retval == KmlLayerDetial.value){
				return KmlLayerDetial;
			}
			else if(retval == FeatureDetail.value){
				return FeatureDetail;
			}
			else if(retval == ImageDetail.value){
				return ImageDetail;
			}
			else if(retval == TerrainDetail.value){
				return TerrainDetail;
			}
			else if(retval == AmosphereDetail.value){
				return AmosphereDetail;
			}
			else if(retval == KmlManage.value){
				return KmlManage;
			}
			else if(retval == ClearKmlManage.value){
				return ClearKmlManage;
			}
			else if(retval == SceneDetail.value){
				return SceneDetail;
			}
			else if(retval == MapDetail.value){
				return MapDetail;
			}
			else if(retval == AltitudeModeConfig.value){
				return AltitudeModeConfig;
			}
			else if(retval == RefurbishModelLayer.value){
				return RefurbishModelLayer;
			}
			else if(retval == SceneProperty.value){
				return SceneProperty;
			}
			else if(retval == MapProperty.value){
				return MapProperty;
			}
			else if(retval == MapLayerRecord.value){
				return MapLayerRecord;
			}
			else if(retval == SceneLayerRecord.value){
				return SceneLayerRecord;
			}
			else if(retval == HistoryImageToolbar.value){
				return HistoryImageToolbar;
			}
			else if(retval == TerrainSettings.value){
				return TerrainSettings;
			}
			else if(retval == AtmosphereTree.value){
				return AtmosphereTree;
			}
			else if(retval == LayerEditableChanged.value){
				return LayerEditableChanged;
			}
			else if(retval == LayerSelectableChanged.value){
				return LayerSelectableChanged;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class ActionTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/// 显示场景属性所需要的数据
	public static class SceneDetailData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneDetailData", new SceneDetailDataClassFactory());
		}

		native private long get_scene_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Iscene get_scene()
		{
			long jniValue = get_scene_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.atlas.Iscene)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IScene");
			}
			return __returnValue;
		}
		
		native private void set_scene_IScene (long pNativeObject, long value);
		public void set_scene(com.earthview.world.spatial.atlas.Iscene scene)
		{
			long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
			
			set_scene_IScene(this.nativeObject.pointer, sceneParamValue);
		}
		
		public SceneDetailData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SceneDetailData", null);
		}

		public SceneDetailData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SceneDetailData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SceneDetailData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SceneDetailData obj = null;
 			if(baseObj instanceof SceneDetailData)
			{
				obj = (SceneDetailData)baseObj;
			} else {
				obj = new SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SceneDetailData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SceneDetailDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SceneDetailData emptyInstance = new SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// 显示场景属性所需要的数据
	public static class ScenePropertyData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::ScenePropertyData", new ScenePropertyDataClassFactory());
		}

		native private long get_groupStringInterface_void(long pNativeObject);
		public com.earthview.world.frameworkproxy.GroupStringinterfaceMap get_groupStringInterface()
		{
			long jniValue = get_groupStringInterface_void(this.nativeObject.pointer);
			
			com.earthview.world.frameworkproxy.GroupStringinterfaceMap __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			}
			return __returnValue;
		}
		
		native private void set_groupStringInterface_CGroupStringinterfaceMap (long pNativeObject, long value);
		public void set_groupStringInterface(com.earthview.world.frameworkproxy.GroupStringinterfaceMap groupStringInterface)
		{
			long groupStringInterfaceParamValue = groupStringInterface.nativeObject.pointer;
			
			set_groupStringInterface_CGroupStringinterfaceMap(this.nativeObject.pointer, groupStringInterfaceParamValue);
		}
		
		public ScenePropertyData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("ScenePropertyData", null);
		}

		public ScenePropertyData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public ScenePropertyData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static ScenePropertyData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			ScenePropertyData obj = null;
 			if(baseObj instanceof ScenePropertyData)
			{
				obj = (ScenePropertyData)baseObj;
			} else {
				obj = new ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "ScenePropertyData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class ScenePropertyDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			ScenePropertyData emptyInstance = new ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// 显示地图详细信息所需要的数据
	public static class MapDetailData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapDetailData", new MapDetailDataClassFactory());
		}

		native private long get_imap_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Imap get_imap()
		{
			long jniValue = get_imap_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IMap");
			}
			return __returnValue;
		}
		
		native private void set_imap_IMap (long pNativeObject, long value);
		public void set_imap(com.earthview.world.spatial.atlas.Imap imap)
		{
			long imapParamValue = (imap == null ? 0L : imap.nativeObject.pointer);
			
			set_imap_IMap(this.nativeObject.pointer, imapParamValue);
		}
		
		public MapDetailData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MapDetailData", null);
		}

		public MapDetailData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MapDetailData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MapDetailData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MapDetailData obj = null;
 			if(baseObj instanceof MapDetailData)
			{
				obj = (MapDetailData)baseObj;
			} else {
				obj = new MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MapDetailData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MapDetailDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MapDetailData emptyInstance = new MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// 显示地图详细信息所需要的数据
	public static class MapPropertyData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapPropertyData", new MapPropertyDataClassFactory());
		}

		native private long get_groupStringInterface_void(long pNativeObject);
		public com.earthview.world.frameworkproxy.GroupStringinterfaceMap get_groupStringInterface()
		{
			long jniValue = get_groupStringInterface_void(this.nativeObject.pointer);
			
			com.earthview.world.frameworkproxy.GroupStringinterfaceMap __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			}
			return __returnValue;
		}
		
		native private void set_groupStringInterface_CGroupStringinterfaceMap (long pNativeObject, long value);
		public void set_groupStringInterface(com.earthview.world.frameworkproxy.GroupStringinterfaceMap groupStringInterface)
		{
			long groupStringInterfaceParamValue = groupStringInterface.nativeObject.pointer;
			
			set_groupStringInterface_CGroupStringinterfaceMap(this.nativeObject.pointer, groupStringInterfaceParamValue);
		}
		
		public MapPropertyData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MapPropertyData", null);
		}

		public MapPropertyData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MapPropertyData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MapPropertyData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MapPropertyData obj = null;
 			if(baseObj instanceof MapPropertyData)
			{
				obj = (MapPropertyData)baseObj;
			} else {
				obj = new MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MapPropertyData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MapPropertyDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MapPropertyData emptyInstance = new MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// 显示Kml管理所需要的数据
	public static class KmlManageData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::KmlManageData", new KmlManageDataClassFactory());
		}

		public KmlManageData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("KmlManageData", null);
		}

		native private String get_datasourceName_void(long pNativeObject);
		public String get_datasourceName()
		{
			String jniValue = get_datasourceName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_datasourceName_EVString (long pNativeObject, String value);
		public void set_datasourceName(String datasourceName)
		{
			String datasourceNameParamValue = datasourceName;
			
			set_datasourceName_EVString(this.nativeObject.pointer, datasourceNameParamValue);
		}
		
		native private String get_datasetName_void(long pNativeObject);
		public String get_datasetName()
		{
			String jniValue = get_datasetName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_datasetName_EVString (long pNativeObject, String value);
		public void set_datasetName(String datasetName)
		{
			String datasetNameParamValue = datasetName;
			
			set_datasetName_EVString(this.nativeObject.pointer, datasetNameParamValue);
		}
		
		native private long get_layer_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Ilayer get_layer()
		{
			long jniValue = get_layer_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_layer_ILayer (long pNativeObject, long value);
		public void set_layer(com.earthview.world.spatial.atlas.Ilayer layer)
		{
			long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
			
			set_layer_ILayer(this.nativeObject.pointer, layerParamValue);
		}
		
		public KmlManageData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public KmlManageData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static KmlManageData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			KmlManageData obj = null;
 			if(baseObj instanceof KmlManageData)
			{
				obj = (KmlManageData)baseObj;
			} else {
				obj = new KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "KmlManageData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class KmlManageDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			KmlManageData emptyInstance = new KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// 显示图层【简略】信息要用到的数据
	public static class LayerPropertyData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerPropertyData", new LayerPropertyDataClassFactory());
		}

		native private long get_groupStringInterface_void(long pNativeObject);
		public com.earthview.world.frameworkproxy.GroupStringinterfaceMap get_groupStringInterface()
		{
			long jniValue = get_groupStringInterface_void(this.nativeObject.pointer);
			
			com.earthview.world.frameworkproxy.GroupStringinterfaceMap __returnValue = new com.earthview.world.frameworkproxy.GroupStringinterfaceMap(CreatedWhenConstruct.CWC_NotToCreate);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			__returnValue.createNativeObjectPointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.frameworkproxy.GroupStringinterfaceMap)__returnValueClassFactory.create();
				__returnValue.bindNativeObject(__instancePointer, "CGroupStringinterfaceMap");
			}
			return __returnValue;
		}
		
		native private void set_groupStringInterface_CGroupStringinterfaceMap (long pNativeObject, long value);
		public void set_groupStringInterface(com.earthview.world.frameworkproxy.GroupStringinterfaceMap groupStringInterface)
		{
			long groupStringInterfaceParamValue = groupStringInterface.nativeObject.pointer;
			
			set_groupStringInterface_CGroupStringinterfaceMap(this.nativeObject.pointer, groupStringInterfaceParamValue);
		}
		
		/// 数据内容（SpatialInterface）
		public LayerPropertyData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LayerPropertyData", null);
		}

		public LayerPropertyData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LayerPropertyData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LayerPropertyData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LayerPropertyData obj = null;
 			if(baseObj instanceof LayerPropertyData)
			{
				obj = (LayerPropertyData)baseObj;
			} else {
				obj = new LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LayerPropertyData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LayerPropertyDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LayerPropertyData emptyInstance = new LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/// 显示图层【详细】信息要用到的数据
	public static class LayerDetailData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerDetailData", new LayerDetailDataClassFactory());
		}

		public LayerDetailData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LayerDetailData", null);
		}

		native private long get_imap_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Imap get_imap()
		{
			long jniValue = get_imap_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
			__returnValue.setInstancePointer(__instancePointer);
			IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
			if (__returnValueClassFactory != null)
			{
				__returnValue.setDelegate(true);
				__returnValue = (com.earthview.world.spatial.atlas.Imap)__returnValueClassFactory.create();
				__returnValue.setDelegate(true);
				__returnValue.bindNativeObject(__instancePointer, "IMap");
			}
			return __returnValue;
		}
		
		native private void set_imap_IMap (long pNativeObject, long value);
		public void set_imap(com.earthview.world.spatial.atlas.Imap imap)
		{
			long imapParamValue = (imap == null ? 0L : imap.nativeObject.pointer);
			
			set_imap_IMap(this.nativeObject.pointer, imapParamValue);
		}
		
		native private long get_layer_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Ilayer get_layer()
		{
			long jniValue = get_layer_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_layer_ILayer (long pNativeObject, long value);
		public void set_layer(com.earthview.world.spatial.atlas.Ilayer layer)
		{
			long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
			
			set_layer_ILayer(this.nativeObject.pointer, layerParamValue);
		}
		
		native private long get_parentLayer_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Ilayer get_parentLayer()
		{
			long jniValue = get_parentLayer_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_parentLayer_ILayer (long pNativeObject, long value);
		public void set_parentLayer(com.earthview.world.spatial.atlas.Ilayer parentLayer)
		{
			long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
			
			set_parentLayer_ILayer(this.nativeObject.pointer, parentLayerParamValue);
		}
		
		public LayerDetailData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LayerDetailData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LayerDetailData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LayerDetailData obj = null;
 			if(baseObj instanceof LayerDetailData)
			{
				obj = (LayerDetailData)baseObj;
			} else {
				obj = new LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LayerDetailData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LayerDetailDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LayerDetailData emptyInstance = new LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class MapLayerRecordData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::MapLayerRecordData", new MapLayerRecordDataClassFactory());
		}

		public MapLayerRecordData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("MapLayerRecordData", null);
		}

		native private long get_layer_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Ilayer get_layer()
		{
			long jniValue = get_layer_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_layer_ILayer (long pNativeObject, long value);
		public void set_layer(com.earthview.world.spatial.atlas.Ilayer layer)
		{
			long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
			
			set_layer_ILayer(this.nativeObject.pointer, layerParamValue);
		}
		
		public MapLayerRecordData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public MapLayerRecordData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static MapLayerRecordData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			MapLayerRecordData obj = null;
 			if(baseObj instanceof MapLayerRecordData)
			{
				obj = (MapLayerRecordData)baseObj;
			} else {
				obj = new MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "MapLayerRecordData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class MapLayerRecordDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			MapLayerRecordData emptyInstance = new MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class SceneLayerRecordData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::SceneLayerRecordData", new SceneLayerRecordDataClassFactory());
		}

		public SceneLayerRecordData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("SceneLayerRecordData", null);
		}

		native private long get_layer_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Ilayer get_layer()
		{
			long jniValue = get_layer_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_layer_ILayer (long pNativeObject, long value);
		public void set_layer(com.earthview.world.spatial.atlas.Ilayer layer)
		{
			long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
			
			set_layer_ILayer(this.nativeObject.pointer, layerParamValue);
		}
		
		public SceneLayerRecordData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public SceneLayerRecordData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static SceneLayerRecordData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			SceneLayerRecordData obj = null;
 			if(baseObj instanceof SceneLayerRecordData)
			{
				obj = (SceneLayerRecordData)baseObj;
			} else {
				obj = new SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "SceneLayerRecordData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class SceneLayerRecordDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			SceneLayerRecordData emptyInstance = new SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class TerrainSettingsData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::TerrainSettingsData", new TerrainSettingsDataClassFactory());
		}

		native private String get_sceneName_void(long pNativeObject);
		public String get_sceneName()
		{
			String jniValue = get_sceneName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_sceneName_EVString (long pNativeObject, String value);
		public void set_sceneName(String sceneName)
		{
			String sceneNameParamValue = sceneName;
			
			set_sceneName_EVString(this.nativeObject.pointer, sceneNameParamValue);
		}
		
		public TerrainSettingsData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("TerrainSettingsData", null);
		}

		public TerrainSettingsData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public TerrainSettingsData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static TerrainSettingsData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			TerrainSettingsData obj = null;
 			if(baseObj instanceof TerrainSettingsData)
			{
				obj = (TerrainSettingsData)baseObj;
			} else {
				obj = new TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "TerrainSettingsData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class TerrainSettingsDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			TerrainSettingsData emptyInstance = new TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class AtmosphereTreeData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::AtmosphereTreeData", new AtmosphereTreeDataClassFactory());
		}

		native private String get_sceneName_void(long pNativeObject);
		public String get_sceneName()
		{
			String jniValue = get_sceneName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_sceneName_EVString (long pNativeObject, String value);
		public void set_sceneName(String sceneName)
		{
			String sceneNameParamValue = sceneName;
			
			set_sceneName_EVString(this.nativeObject.pointer, sceneNameParamValue);
		}
		
		public AtmosphereTreeData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("AtmosphereTreeData", null);
		}

		public AtmosphereTreeData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public AtmosphereTreeData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static AtmosphereTreeData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			AtmosphereTreeData obj = null;
 			if(baseObj instanceof AtmosphereTreeData)
			{
				obj = (AtmosphereTreeData)baseObj;
			} else {
				obj = new AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "AtmosphereTreeData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class AtmosphereTreeDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			AtmosphereTreeData emptyInstance = new AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class HistoryImageData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::HistoryImageData", new HistoryImageDataClassFactory());
		}

		native private String get_sceneName_void(long pNativeObject);
		public String get_sceneName()
		{
			String jniValue = get_sceneName_void(this.nativeObject.pointer);
			
			return jniValue;
		}
		
		native private void set_sceneName_EVString (long pNativeObject, String value);
		public void set_sceneName(String sceneName)
		{
			String sceneNameParamValue = sceneName;
			
			set_sceneName_EVString(this.nativeObject.pointer, sceneNameParamValue);
		}
		
		public HistoryImageData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("HistoryImageData", null);
		}

		public HistoryImageData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public HistoryImageData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static HistoryImageData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			HistoryImageData obj = null;
 			if(baseObj instanceof HistoryImageData)
			{
				obj = (HistoryImageData)baseObj;
			} else {
				obj = new HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "HistoryImageData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class HistoryImageDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			HistoryImageData emptyInstance = new HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class LayerEditableChangedData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerEditableChangedData", new LayerEditableChangedDataClassFactory());
		}

		public LayerEditableChangedData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LayerEditableChangedData", null);
		}

		native private long get_layer_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Ilayer get_layer()
		{
			long jniValue = get_layer_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_layer_ILayer (long pNativeObject, long value);
		public void set_layer(com.earthview.world.spatial.atlas.Ilayer layer)
		{
			long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
			
			set_layer_ILayer(this.nativeObject.pointer, layerParamValue);
		}
		
		public LayerEditableChangedData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LayerEditableChangedData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LayerEditableChangedData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LayerEditableChangedData obj = null;
 			if(baseObj instanceof LayerEditableChangedData)
			{
				obj = (LayerEditableChangedData)baseObj;
			} else {
				obj = new LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LayerEditableChangedData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LayerEditableChangedDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LayerEditableChangedData emptyInstance = new LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	public static class LayerSelectableChangedData extends com.earthview.world.core.BaseObject {
		
		static {
			GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::AtlasTreeEvent::LayerSelectableChangedData", new LayerSelectableChangedDataClassFactory());
		}

		public LayerSelectableChangedData() {
			super(CreatedWhenConstruct.CWC_NotToCreate);
			Create("LayerSelectableChangedData", null);
		}

		native private long get_layer_void(long pNativeObject);
		public com.earthview.world.spatial.atlas.Ilayer get_layer()
		{
			long jniValue = get_layer_void(this.nativeObject.pointer);
			
			if(jniValue == 0L) {
				return null;
			}
			com.earthview.world.spatial.atlas.Ilayer __returnValue = new com.earthview.world.spatial.atlas.Ilayer(CreatedWhenConstruct.CWC_NotToCreate, "ILayer");
			__returnValue.setDelegate(true);
			InstancePointer __instancePointer = new InstancePointer(jniValue);
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
		
		native private void set_layer_ILayer (long pNativeObject, long value);
		public void set_layer(com.earthview.world.spatial.atlas.Ilayer layer)
		{
			long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
			
			set_layer_ILayer(this.nativeObject.pointer, layerParamValue);
		}
		
		public LayerSelectableChangedData(CreatedWhenConstruct cwc) {
			super(CreatedWhenConstruct.CWC_NotToCreate);
		}
		public LayerSelectableChangedData(CreatedWhenConstruct cwc, String classNameStr) {
			super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
		}
		
		
		
		
		public static LayerSelectableChangedData fromBaseObject(BaseObject baseObj)
		{
			if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
			{
				return null;
			}
			LayerSelectableChangedData obj = null;
 			if(baseObj instanceof LayerSelectableChangedData)
			{
				obj = (LayerSelectableChangedData)baseObj;
			} else {
				obj = new LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
				obj.bindNativeObject(baseObj.nativeObject, "LayerSelectableChangedData");
				obj.increaseCast();
			}

			return obj;
		}
	}
	public static class LayerSelectableChangedDataClassFactory implements IClassFactory {
		public BaseObject create()
		{
			LayerSelectableChangedData emptyInstance = new LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
			return emptyInstance;
		}
	}
	
	/**
	 * 构造函数。
	 */
	public AtlasTreeEvent() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AtlasTreeEvent", null);
	}

	native private int getActionType_void(long pNativeObject);
	/**
	 * 获取操作的类型。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ActionType getActionType()
	{
		int returnValue = getActionType_void(this.nativeObject.pointer);
		return com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ActionType.toEnum(returnValue);
	}
	native private long getLayerDetailData_void(long pNativeObject);
	/**
	 * 获取图层【详细】信息的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData getLayerDetailData()
	{
		long returnValue = getLayerDetailData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerDetailData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getLayerPropertyData_void(long pNativeObject);
	/**
	 * 获取图层【简略】信息的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData getLayerPropertyData()
	{
		long returnValue = getLayerPropertyData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getKmlManageData_void(long pNativeObject);
	/**
	 * 获取kml管理的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData getKmlManageData()
	{
		long returnValue = getKmlManageData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.KmlManageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getSceneDetailData_void(long pNativeObject);
	/**
	 * 获取场景详细信息的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData getSceneDetailData()
	{
		long returnValue = getSceneDetailData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneDetailData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getScenePropertyData_void(long pNativeObject);
	/**
	 * 获取场景属性的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData getScenePropertyData()
	{
		long returnValue = getScenePropertyData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.ScenePropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getMapDetailData_void(long pNativeObject);
	/**
	 * 获取地图详细信息的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData getMapDetailData()
	{
		long returnValue = getMapDetailData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapDetailData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getMapPropertyData_void(long pNativeObject);
	/**
	 * 获取地图属性的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData getMapPropertyData()
	{
		long returnValue = getMapPropertyData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapPropertyData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getMapLayerRecordData_void(long pNativeObject);
	/**
	 * 获取地图图层记录表的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData getMapLayerRecordData()
	{
		long returnValue = getMapLayerRecordData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.MapLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getSceneLayerRecordData_void(long pNativeObject);
	/**
	 * 获取场景图层记录表的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData getSceneLayerRecordData()
	{
		long returnValue = getSceneLayerRecordData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.SceneLayerRecordData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getHistoryImageData_void(long pNativeObject);
	/**
	 * 获取地图图层记录表的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData getHistoryImageData()
	{
		long returnValue = getHistoryImageData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.HistoryImageData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getTerrainSettingsData_void(long pNativeObject);
	/**
	 * 获取地形设置相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData getTerrainSettingsData()
	{
		long returnValue = getTerrainSettingsData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.TerrainSettingsData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getAtmosphereTreeData_void(long pNativeObject);
	/**
	 * 获取自然环境树相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData getAtmosphereTreeData()
	{
		long returnValue = getAtmosphereTreeData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.AtmosphereTreeData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getLayerEditableChangedData_void(long pNativeObject);
	/**
	 * 获取自然环境树相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData getLayerEditableChangedData()
	{
		long returnValue = getLayerEditableChangedData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerEditableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long getLayerSelectableChangedData_void(long pNativeObject);
	/**
	 * 获取图层“可选择”属性改变的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData getLayerSelectableChangedData()
	{
		long returnValue = getLayerSelectableChangedData_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEvent.LayerSelectableChangedData(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long data_void(long pNativeObject);
	/**
	 * 获取图层“可编辑”属性改变的相关数据。
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEventData data()
	{
		long returnValue = data_void(this.nativeObject.pointer);
		com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEventData __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEventData(CreatedWhenConstruct.CWC_NotToCreate, "AtlasTreeEventData");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasTreeEventData)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "AtlasTreeEventData");
		}
		return __returnValue;
	}
	public AtlasTreeEvent(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AtlasTreeEvent(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AtlasTreeEvent fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AtlasTreeEvent obj = null;
 		if(baseObj instanceof AtlasTreeEvent)
		{
			obj = (AtlasTreeEvent)baseObj;
		} else {
			obj = new AtlasTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AtlasTreeEvent");
			obj.increaseCast();
		}

		return obj;
	}
}
