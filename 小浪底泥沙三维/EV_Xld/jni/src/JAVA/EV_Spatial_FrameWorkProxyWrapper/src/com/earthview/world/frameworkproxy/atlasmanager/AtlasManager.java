package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::CAtlasManager", new AtlasManagerClassFactory());
	}

	public AtlasManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAtlasManager", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.frameworkproxy.atlasmanager.AtlasManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.frameworkproxy.atlasmanager.AtlasManager __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasManager(CreatedWhenConstruct.CWC_NotToCreate, "CAtlasManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAtlasManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.frameworkproxy.atlasmanager.AtlasManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.frameworkproxy.atlasmanager.AtlasManager __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.AtlasManager(CreatedWhenConstruct.CWC_NotToCreate, "CAtlasManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.AtlasManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CAtlasManager");
		}
		return __returnValue;
	}
	native private long createMap_EVString(long pNativeObject, String name);
	/**
	 * 创建地图
	 * @param name 地图名
	 */
	public com.earthview.world.spatial.atlas.Imap createMap(String name)
	{
		String nameParamValue = name;
		long returnValue = createMap_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Imap __returnValue = new com.earthview.world.spatial.atlas.Imap(CreatedWhenConstruct.CWC_NotToCreate, "IMap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private long createScene_EVString_int(long pNativeObject, String name, int tileType);
	/**
	 * 创建场景
	 * @param name 场景名
	 * @param tileType 瓦片类别
	 */
	public com.earthview.world.spatial.atlas.Iscene createScene(String name, int tileType)
	{
		String nameParamValue = name;
		int tileTypeParamValue = tileType;
		long returnValue = createScene_EVString_int(this.nativeObject.pointer, nameParamValue, tileTypeParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Iscene __returnValue = new com.earthview.world.spatial.atlas.Iscene(CreatedWhenConstruct.CWC_NotToCreate, "IScene");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
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
	native private void createLayout_EVString(long pNativeObject, String name);
	/**
	 * 创建布局
	 * @param name 布局名称
	 */
	public void createLayout(String name)
	{
		String nameParamValue = name;
		createLayout_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setCurrentMap_IMap(long pNativeObject, long map);
	/**
	 * 设置当前地图
	 * @param map 地图
	 */
	public void setCurrentMap(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		setCurrentMap_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void setCurrentScene_IScene(long pNativeObject, long scene);
	/**
	 * 设置当前场景
	 * @param scene 场景
	 */
	public void setCurrentScene(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		setCurrentScene_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private void removeMap_IMap(long pNativeObject, long map);
	/**
	 * 移除地图
	 * @param map 地图
	 */
	public void removeMap(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		removeMap_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void removeScene_IScene(long pNativeObject, long scene);
	/**
	 * 移除场景
	 * @param scene 场景
	 */
	public void removeScene(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		removeScene_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private void removeLayout_IPageLayout(long pNativeObject, long pLayout);
	/**
	 * 移除布局
	 * @param scene 布局
	 */
	public void removeLayout(com.earthview.world.spatial.carto.Ipagelayout pLayout)
	{
		long pLayoutParamValue = (pLayout == null ? 0L : pLayout.nativeObject.pointer);
		removeLayout_IPageLayout(this.nativeObject.pointer, pLayoutParamValue);
	}
	native private void destroyMap_IMap(long pNativeObject, long map);
	/**
	 * 销毁地图
	 * @param map 地图
	 */
	public void destroyMap(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		destroyMap_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void destroyScene_IScene(long pNativeObject, long scene);
	/**
	 * 销毁场景
	 * @param scene 场景
	 */
	public void destroyScene(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		destroyScene_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private void destroyLayout_IPageLayout(long pNativeObject, long pLayout);
	/**
	 * 销毁布局
	 * @param scene 布局
	 */
	public void destroyLayout(com.earthview.world.spatial.carto.Ipagelayout pLayout)
	{
		long pLayoutParamValue = (pLayout == null ? 0L : pLayout.nativeObject.pointer);
		destroyLayout_IPageLayout(this.nativeObject.pointer, pLayoutParamValue);
	}
	native private void setLayerEditable_ILayer_bool(long pNativeObject, long layer, boolean editable);
	/**
	 * 设置图层是否可编辑
	 * @param layer 图层
	 * @param editable 是否可编辑
	 */
	public void setLayerEditable(com.earthview.world.spatial.atlas.Ilayer layer, boolean editable)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean editableParamValue = editable;
		setLayerEditable_ILayer_bool(this.nativeObject.pointer, layerParamValue, editableParamValue);
	}
	native private void setLayerSelectable_ILayer_bool(long pNativeObject, long layer, boolean selectable);
	/**
	 * 设置图层是否可选择
	 * @param layer 图层
	 * @param selectable 是否可选择
	 */
	public void setLayerSelectable(com.earthview.world.spatial.atlas.Ilayer layer, boolean selectable)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean selectableParamValue = selectable;
		setLayerSelectable_ILayer_bool(this.nativeObject.pointer, layerParamValue, selectableParamValue);
	}
	native private void showAltitudeModeConfig_ILayer(long pNativeObject, long layer);
	/**
	 * 显示高度模式配置
	 * @param layer 图层
	 */
	public void showAltitudeModeConfig(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		showAltitudeModeConfig_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void refurbishModelLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 刷新模型图层
	 * @param layer 图层
	 */
	public void refurbishModelLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		refurbishModelLayer_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void showLayerDetail_ILayer_ILayer_IMap(long pNativeObject, long layer, long parentLayer, long imap);
	/**
	 * （用户）触发显示图层【详细】信息事件。
	 * @param layer 图层对象指针。
	 * @param layer 图层所属图层组对象指针。
	 */
	public void showLayerDetail(com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.Ilayer parentLayer, com.earthview.world.spatial.atlas.Imap imap)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		long imapParamValue = (imap == null ? 0L : imap.nativeObject.pointer);
		showLayerDetail_ILayer_ILayer_IMap(this.nativeObject.pointer, layerParamValue, parentLayerParamValue, imapParamValue);
	}
	native private void showLayerProperty_ILayer_ILayer(long pNativeObject, long layer, long parentLayer);
	/**
	 * （用户）触发显示图层【简略】信息事件。
	 * @param layer 图层对象指针。
	 * @param layer 图层所属图层组对象指针。
	 */
	public void showLayerProperty(com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.Ilayer parentLayer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		showLayerProperty_ILayer_ILayer(this.nativeObject.pointer, layerParamValue, parentLayerParamValue);
	}
	native private void clearProperty_void(long pNativeObject);
	/**
	 * （用户）清除属性框内容。
	 */
	public void clearProperty()
	{
		clearProperty_void(this.nativeObject.pointer);
	}
	native private void showKmlManager_ILayer_EVString_EVString(long pNativeObject, long layer, String datasourceName, String datasetName);
	/**
	 * （用户）调用Kml管理。（通过给出数据集和图层对象）
	 * @param datasourceName 数据源名称。
	 * @param datasetName 数据集名称。
	 */
	public void showKmlManager(com.earthview.world.spatial.atlas.Ilayer layer, String datasourceName, String datasetName)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		showKmlManager_ILayer_EVString_EVString(this.nativeObject.pointer, layerParamValue, datasourceNameParamValue, datasetNameParamValue);
	}
	native private void clearKmlManager_void(long pNativeObject);
	/**
	 * （用户）清空Kml管理。
	 */
	public void clearKmlManager()
	{
		clearKmlManager_void(this.nativeObject.pointer);
	}
	native private void showSceneDetail_IScene(long pNativeObject, long scene);
	/**
	 * （用户）调用场景详细信息（弹窗）。
	 * @param scene EarthView::World::Spatial::Atlas::IScene对象。
	 */
	public void showSceneDetail(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		showSceneDetail_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private void showSceneProperty_IScene(long pNativeObject, long scene);
	/**
	 * （用户）调用场景属性（dock）。
	 * @param scene EarthView::World::Spatial::Atlas::IScene对象。
	 */
	public void showSceneProperty(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		showSceneProperty_IScene(this.nativeObject.pointer, sceneParamValue);
	}
	native private void showMapDetail_IMap(long pNativeObject, long imap);
	/**
	 * （用户）调用地图详细信息（弹窗）。
	 * @param scene EarthView::World::Spatial::Atlas::IMap对象。
	 */
	public void showMapDetail(com.earthview.world.spatial.atlas.Imap imap)
	{
		long imapParamValue = (imap == null ? 0L : imap.nativeObject.pointer);
		showMapDetail_IMap(this.nativeObject.pointer, imapParamValue);
	}
	native private void showMapProperty_IMap(long pNativeObject, long imap);
	/**
	 * （用户）调用地图属性（dock）。
	 * @param scene EarthView::World::Spatial::Atlas::IMap对象。
	 */
	public void showMapProperty(com.earthview.world.spatial.atlas.Imap imap)
	{
		long imapParamValue = (imap == null ? 0L : imap.nativeObject.pointer);
		showMapProperty_IMap(this.nativeObject.pointer, imapParamValue);
	}
	native private void showMapLayerReord_ILayer(long pNativeObject, long ilayer);
	/**
	 * （用户）调用地图图层记录表。
	 * @param scene EarthView::World::Spatial::Atlas::ILayer对象。
	 */
	public void showMapLayerReord(com.earthview.world.spatial.atlas.Ilayer ilayer)
	{
		long ilayerParamValue = (ilayer == null ? 0L : ilayer.nativeObject.pointer);
		showMapLayerReord_ILayer(this.nativeObject.pointer, ilayerParamValue);
	}
	native private void showSceneLayerReord_ILayer(long pNativeObject, long ilayer);
	/**
	 * （用户）调用场景图层记录表。
	 * @param scene EarthView::World::Spatial::Atlas::ILayer对象。
	 */
	public void showSceneLayerReord(com.earthview.world.spatial.atlas.Ilayer ilayer)
	{
		long ilayerParamValue = (ilayer == null ? 0L : ilayer.nativeObject.pointer);
		showSceneLayerReord_ILayer(this.nativeObject.pointer, ilayerParamValue);
	}
	native private void showHistoryImage_EVString(long pNativeObject, String sceneName);
	/**
	 * （用户）调用显示场景的多期影像工具栏。
	 * @param sceneName 场景名称。
	 */
	public void showHistoryImage(String sceneName)
	{
		String sceneNameParamValue = sceneName;
		showHistoryImage_EVString(this.nativeObject.pointer, sceneNameParamValue);
	}
	native private long createMapLayer_IMap_EVString_EVString(long pNativeObject, long map, String datasourceName, String datasetName);
	/**
	 * 创建地图图层。
	 * @param map 地图
	 * @param datasourceName 数据源名称。
	 * @param datasetName 数据集名称。
	 */
	public com.earthview.world.spatial.atlas.Ilayer createMapLayer(com.earthview.world.spatial.atlas.Imap map, String datasourceName, String datasetName)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long returnValue = createMapLayer_IMap_EVString_EVString(this.nativeObject.pointer, mapParamValue, datasourceNameParamValue, datasetNameParamValue);
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
	native private void showTerrainSettings_EVString(long pNativeObject, String sceneName);
	/**
	 * 显示场景地形设置。
	 * @param sceneName 场景名称。
	 */
	public void showTerrainSettings(String sceneName)
	{
		String sceneNameParamValue = sceneName;
		showTerrainSettings_EVString(this.nativeObject.pointer, sceneNameParamValue);
	}
	native private void showAtmosphereTree_EVString(long pNativeObject, String sceneName);
	/**
	 * 显示场景自然环境树。
	 * @param sceneName 场景名称。
	 */
	public void showAtmosphereTree(String sceneName)
	{
		String sceneNameParamValue = sceneName;
		showAtmosphereTree_EVString(this.nativeObject.pointer, sceneNameParamValue);
	}
	native private boolean destroyLayer_ILayer(long pNativeObject, long layer);
	/**
	 * 销毁图层
	 * @param layer 图层
	 */
	public boolean destroyLayer(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = destroyLayer_ILayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private long getSupportedType_EVLayerType(long pNativeObject, int grouplayerType);
	/**
	 * 根据图层组类别获取支持的数据集类别
	 * @param grouplayerType 图层组类别
	 * @return 支持的数据集类别
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset getSupportedType(com.earthview.world.spatial.atlas.EVLayerType grouplayerType)
	{
		int grouplayerTypeParamValue = grouplayerType.getValue();
		long returnValue = getSupportedType_EVLayerType(this.nativeObject.pointer, grouplayerTypeParamValue);
		com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "EVDatasetTypeSet");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "EVDatasetTypeSet");
		}
		return __returnValue;
	}
	native private long createMapLayer_EVString_EVString_IGroupLayer_IMap(long pNativeObject, String datasourceName, String datasetName, long pParentGroup, long map);
	public com.earthview.world.spatial.atlas.Ilayer createMapLayer(String datasourceName, String datasetName, com.earthview.world.spatial.atlas.Igrouplayer pParentGroup, com.earthview.world.spatial.atlas.Imap map)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long pParentGroupParamValue = (pParentGroup == null ? 0L : pParentGroup.nativeObject.pointer);
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long returnValue = createMapLayer_EVString_EVString_IGroupLayer_IMap(this.nativeObject.pointer, datasourceNameParamValue, datasetNameParamValue, pParentGroupParamValue, mapParamValue);
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
	native private long createMapLayer_IGroupLayer_IDataset_IMap(long pNativeObject, long pParentGrouplayer, long dataset, long map);
	/**
	 * 创建地图图层
	 * @param pParentGrouplayer 父图层组
	 * @param dataset 数据集
	 */
	public com.earthview.world.spatial.atlas.Ilayer createMapLayer(com.earthview.world.spatial.atlas.Igrouplayer pParentGrouplayer, com.earthview.world.spatial.geodataset.Idataset dataset, com.earthview.world.spatial.atlas.Imap map)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long returnValue = createMapLayer_IGroupLayer_IDataset_IMap(this.nativeObject.pointer, pParentGrouplayerParamValue, datasetParamValue, mapParamValue);
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
	native private void addMapLayer_IMap_ILayer(long pNativeObject, long map, long layer);
	/**
	 * /添加地图图层/
	 * @param map 地图
	 * @param layer 图层
	 */
	public void addMapLayer(com.earthview.world.spatial.atlas.Imap map, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		addMapLayer_IMap_ILayer(this.nativeObject.pointer, mapParamValue, layerParamValue);
	}
	native private void addMapLayer_IGroupLayer_ILayer_IMap(long pNativeObject, long pParentGroupLayer, long layer, long map);
	/**
	 * 添加地图图层
	 * @param pParentGrouplayer 父图层组
	 * @param layer 图层
	 */
	public void addMapLayer(com.earthview.world.spatial.atlas.Igrouplayer pParentGroupLayer, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.Imap map)
	{
		long pParentGroupLayerParamValue = (pParentGroupLayer == null ? 0L : pParentGroupLayer.nativeObject.pointer);
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		addMapLayer_IGroupLayer_ILayer_IMap(this.nativeObject.pointer, pParentGroupLayerParamValue, layerParamValue, mapParamValue);
	}
	native private long createMapGroupLayer_IMap_EVString(long pNativeObject, long map, String groupName);
	/**
	 * 创建地图图层组
	 * @param map 地图
	 * @param groupName 组名
	 */
	public com.earthview.world.spatial.atlas.Igrouplayer createMapGroupLayer(com.earthview.world.spatial.atlas.Imap map, String groupName)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long returnValue = createMapGroupLayer_IMap_EVString(this.nativeObject.pointer, mapParamValue, groupNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Igrouplayer __returnValue = new com.earthview.world.spatial.atlas.Igrouplayer(CreatedWhenConstruct.CWC_NotToCreate, "IGroupLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Igrouplayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGroupLayer");
		}
		return __returnValue;
	}
	native private long createBaseMapGroupLayer_IMap_EVString(long pNativeObject, long map, String groupName);
	/**
	 * 创建地图底图图层组
	 * @param map 地图
	 * @param groupName 组名
	 */
	public com.earthview.world.spatial.atlas.Igrouplayer createBaseMapGroupLayer(com.earthview.world.spatial.atlas.Imap map, String groupName)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long returnValue = createBaseMapGroupLayer_IMap_EVString(this.nativeObject.pointer, mapParamValue, groupNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Igrouplayer __returnValue = new com.earthview.world.spatial.atlas.Igrouplayer(CreatedWhenConstruct.CWC_NotToCreate, "IGroupLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Igrouplayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGroupLayer");
		}
		return __returnValue;
	}
	native private long createMapGroupLayer_IGroupLayer_EVString_IMap(long pNativeObject, long pParentGrouplayer, String groupName, long map);
	/**
	 * 创建地图图层组
	 * @param pParentGrouplayer 父图层组
	 * @param groupName 组名
	 */
	public com.earthview.world.spatial.atlas.Igrouplayer createMapGroupLayer(com.earthview.world.spatial.atlas.Igrouplayer pParentGrouplayer, String groupName, com.earthview.world.spatial.atlas.Imap map)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long returnValue = createMapGroupLayer_IGroupLayer_EVString_IMap(this.nativeObject.pointer, pParentGrouplayerParamValue, groupNameParamValue, mapParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.atlas.Igrouplayer __returnValue = new com.earthview.world.spatial.atlas.Igrouplayer(CreatedWhenConstruct.CWC_NotToCreate, "IGroupLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.atlas.Igrouplayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGroupLayer");
		}
		return __returnValue;
	}
	native private long createMapLayer_IMap_IDataset(long pNativeObject, long map, long dataset);
	/**
	 * 创建地图图层
	 * @param map 地图
	 * @param dataset 数据集
	 */
	public com.earthview.world.spatial.atlas.Ilayer createMapLayer(com.earthview.world.spatial.atlas.Imap map, com.earthview.world.spatial.geodataset.Idataset dataset)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long datasetParamValue = (dataset == null ? 0L : dataset.nativeObject.pointer);
		long returnValue = createMapLayer_IMap_IDataset(this.nativeObject.pointer, mapParamValue, datasetParamValue);
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
	native private void moveMapLayer_IMap_ev_uint32_ev_uint32(long pNativeObject, long map, long oldIndex, long newIndex);
	/**
	 * 调整图层顺序
	 * @param map 地图
	 * @param oldIndex 老索引
	 * @param newIndex 新索引
	 */
	public void moveMapLayer(com.earthview.world.spatial.atlas.Imap map, long oldIndex, long newIndex)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveMapLayer_IMap_ev_uint32_ev_uint32(this.nativeObject.pointer, mapParamValue, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveMapLayer_IMap_IGroupLayer_ev_uint32_ev_uint32(long pNativeObject, long map, long pParentGrouplayer, long oldIndex, long newIndex);
	/**
	 * 调整图层顺序
	 * @param pParentGrouplayer 父图层组
	 * @param oldIndex 老索引
	 * @param newIndex 新索引
	 */
	public void moveMapLayer(com.earthview.world.spatial.atlas.Imap map, com.earthview.world.spatial.atlas.Igrouplayer pParentGrouplayer, long oldIndex, long newIndex)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveMapLayer_IMap_IGroupLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, mapParamValue, pParentGrouplayerParamValue, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveMapLayer_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(long pNativeObject, long pMap, long dragGroupLayer, long dragIndex, long hoverGroupLayer, long hoverIndex);
	public void moveMapLayer(com.earthview.world.spatial.atlas.Imap pMap, com.earthview.world.spatial.atlas.Igrouplayer dragGroupLayer, long dragIndex, com.earthview.world.spatial.atlas.Igrouplayer hoverGroupLayer, long hoverIndex)
	{
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		long dragGroupLayerParamValue = (dragGroupLayer == null ? 0L : dragGroupLayer.nativeObject.pointer);
		long dragIndexParamValue = dragIndex;
		long hoverGroupLayerParamValue = (hoverGroupLayer == null ? 0L : hoverGroupLayer.nativeObject.pointer);
		long hoverIndexParamValue = hoverIndex;
		moveMapLayer_IMap_IGroupLayer_ev_uint32_IGroupLayer_ev_uint32(this.nativeObject.pointer, pMapParamValue, dragGroupLayerParamValue, dragIndexParamValue, hoverGroupLayerParamValue, hoverIndexParamValue);
	}
	native private void removeMapLayer_IMap_ev_uint32(long pNativeObject, long map, long index);
	/**
	 * 移除地图图层
	 * @param map 地图
	 * @param index 索引
	 */
	public void removeMapLayer(com.earthview.world.spatial.atlas.Imap map, long index)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long indexParamValue = index;
		removeMapLayer_IMap_ev_uint32(this.nativeObject.pointer, mapParamValue, indexParamValue);
	}
	native private void removeMapLayer_IGroupLayer_IMap_ev_uint32(long pNativeObject, long pParentGrouplayer, long map, long index);
	/**
	 * 移除地图图层
	 * @param pParentGrouplayer 父图层组
	 * @param index 索引
	 */
	public void removeMapLayer(com.earthview.world.spatial.atlas.Igrouplayer pParentGrouplayer, com.earthview.world.spatial.atlas.Imap map, long index)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long indexParamValue = index;
		removeMapLayer_IGroupLayer_IMap_ev_uint32(this.nativeObject.pointer, pParentGrouplayerParamValue, mapParamValue, indexParamValue);
	}
	native private boolean changeMapName_IMap_EVString(long pNativeObject, long map, String name);
	/**
	 * /修改地图名/
	 * @param map 地图
	 * @param name 新名字
	 */
	public boolean changeMapName(com.earthview.world.spatial.atlas.Imap map, String name)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		String nameParamValue = name;
		boolean returnValue = changeMapName_IMap_EVString(this.nativeObject.pointer, mapParamValue, nameParamValue);
		return returnValue;
	}
	native private void changeLayerName_ILayer_EVString(long pNativeObject, long layer, String name);
	/**
	 * 修改图层名字
	 * @param layer 图层
	 * @param name 名字
	 */
	public void changeLayerName(com.earthview.world.spatial.atlas.Ilayer layer, String name)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		String nameParamValue = name;
		changeLayerName_ILayer_EVString(this.nativeObject.pointer, layerParamValue, nameParamValue);
	}
	native private void changeLayerVisible_ILayer_ev_bool(long pNativeObject, long layer, boolean visible);
	/**
	 * 修改图层可见性
	 * @param layer 图层
	 * @param visible 可见性
	 */
	public void changeLayerVisible(com.earthview.world.spatial.atlas.Ilayer layer, boolean visible)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean visibleParamValue = visible;
		changeLayerVisible_ILayer_ev_bool(this.nativeObject.pointer, layerParamValue, visibleParamValue);
	}
	native private void setMapMinScale_IMap(long pNativeObject, long map);
	/**
	 * /设置地图最小可见范围/
	 * @param map 地图
	 */
	public void setMapMinScale(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		setMapMinScale_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void setMapMaxScale_IMap(long pNativeObject, long map);
	/**
	 * 设置地图最大可见范围
	 * @param map 地图
	 */
	public void setMapMaxScale(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		setMapMaxScale_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void clearMapScale_IMap(long pNativeObject, long map);
	/**
	 * 清除地图可见范围
	 * @param map 地图
	 */
	public void clearMapScale(com.earthview.world.spatial.atlas.Imap map)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		clearMapScale_IMap(this.nativeObject.pointer, mapParamValue);
	}
	native private void setLayerMinScale_EVString_ILayer(long pNativeObject, String spatialControlName, long layer);
	/**
	 * 设置图层最小可见范围
	 * @param spatialControlName 控件名
	 * @param layer 图层
	 */
	public void setLayerMinScale(String spatialControlName, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		String spatialControlNameParamValue = spatialControlName;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		setLayerMinScale_EVString_ILayer(this.nativeObject.pointer, spatialControlNameParamValue, layerParamValue);
	}
	native private void setLayerMaxScale_EVString_ILayer(long pNativeObject, String spatialControlName, long layer);
	/**
	 * 设置图层最大可见范围
	 * @param spatialControlName 控件名
	 * @param layer 图层
	 */
	public void setLayerMaxScale(String spatialControlName, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		String spatialControlNameParamValue = spatialControlName;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		setLayerMaxScale_EVString_ILayer(this.nativeObject.pointer, spatialControlNameParamValue, layerParamValue);
	}
	native private void clearLayerScale_ILayer(long pNativeObject, long layer);
	/**
	 * 清除图层可见范围
	 * @param layer 图层
	 */
	public void clearLayerScale(com.earthview.world.spatial.atlas.Ilayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		clearLayerScale_ILayer(this.nativeObject.pointer, layerParamValue);
	}
	native private void zoomToLayer_EVString_ILayer(long pNativeObject, String spatialControlName, long layer);
	/**
	 * 定位至图层
	 * @param spatialControlName 控件名
	 * @param layer 图层
	 */
	public void zoomToLayer(String spatialControlName, com.earthview.world.spatial.atlas.Ilayer layer)
	{
		String spatialControlNameParamValue = spatialControlName;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		zoomToLayer_EVString_ILayer(this.nativeObject.pointer, spatialControlNameParamValue, layerParamValue);
	}
	native private void removeMapLayersByDataSource_IDataSource(long pNativeObject, long pDataSource);
	/**
	 * 根据数据源删除地图图层
	 * @param pDataSource 数据源
	 */
	public void removeMapLayersByDataSource(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		removeMapLayersByDataSource_IDataSource(this.nativeObject.pointer, pDataSourceParamValue);
	}
	native private void removeMapLayersByDataset_IDataSource_EVString(long pNativeObject, long pDataSource, String datasetName);
	/**
	 * 根据数据集删除地图图层
	 * @param pDataSource 数据源
	 * @param datasetName 数据集名
	 */
	public void removeMapLayersByDataset(com.earthview.world.spatial.geodataset.Idatasource pDataSource, String datasetName)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		removeMapLayersByDataset_IDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, datasetNameParamValue);
	}
	native private boolean isDatasetEditing_IDataSource_EVString(long pNativeObject, long ds, String datasetName);
	/**
	 * 数据集是否正在编辑
	 * @param ds 数据源
	 * @param datasetName 数据集名
	 * @return true是，false不是
	 */
	public boolean isDatasetEditing(com.earthview.world.spatial.geodataset.Idatasource ds, String datasetName)
	{
		long dsParamValue = (ds == null ? 0L : ds.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		boolean returnValue = isDatasetEditing_IDataSource_EVString(this.nativeObject.pointer, dsParamValue, datasetNameParamValue);
		return returnValue;
	}
	native private boolean isEditing_IGroupLayer(long pNativeObject, long groupLayer);
	public boolean isEditing(com.earthview.world.spatial.atlas.Igrouplayer groupLayer)
	{
		long groupLayerParamValue = (groupLayer == null ? 0L : groupLayer.nativeObject.pointer);
		boolean returnValue = isEditing_IGroupLayer(this.nativeObject.pointer, groupLayerParamValue);
		return returnValue;
	}
	native private boolean isEditing_IScene(long pNativeObject, long scene);
	///add by zhaowei
	//// <summary>
	//// 场景是否正在编辑
	//// </summary>
	//// <param name="scene">场景</param>
	//// <returns>true是，false不是</</returns>
	//// <memo></memo>
	public boolean isEditing(com.earthview.world.spatial.atlas.Iscene scene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		boolean returnValue = isEditing_IScene(this.nativeObject.pointer, sceneParamValue);
		return returnValue;
	}
	native private boolean isEditing_IGlobeLayer(long pNativeObject, long featureGroupLayer);
	/// <summary>
	/// 要素图层组是否正在编辑
	/// </summary>
	/// <param name="featureGroupLayer">要素图层组</param>
	/// <returns>true是，false不是</</returns>
	/// <memo></memo>
	public boolean isEditing(com.earthview.world.spatial3d.atlas.Iglobelayer featureGroupLayer)
	{
		long featureGroupLayerParamValue = (featureGroupLayer == null ? 0L : featureGroupLayer.nativeObject.pointer);
		boolean returnValue = isEditing_IGlobeLayer(this.nativeObject.pointer, featureGroupLayerParamValue);
		return returnValue;
	}
	native private long referenceDatasetInScene_EVString_EVString_IScene(long pNativeObject, String datasourceName, String datasetName, long pScene);
	/**
	 * /获取数据集在场景中被图层引用数量/
	 * @param datasourceName 数据源名
	 * @param datasetName 数据集名
	 * @param pScene 场景
	 * @return 返回引用个数
	 */
	public long referenceDatasetInScene(String datasourceName, String datasetName, com.earthview.world.spatial.atlas.Iscene pScene)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long pSceneParamValue = (pScene == null ? 0L : pScene.nativeObject.pointer);
		long returnValue = referenceDatasetInScene_EVString_EVString_IScene(this.nativeObject.pointer, datasourceNameParamValue, datasetNameParamValue, pSceneParamValue);
		return returnValue;
	}
	native private long referenceDatasetInMap_EVString_EVString_IMap(long pNativeObject, String datasourceName, String datasetName, long pMap);
	/**
	 * 获取数据集在地图中被图层引用数量
	 * @param datasourceName 数据源名
	 * @param datasetName 数据集名
	 * @param pMap 地图
	 * @return 返回引用个数
	 */
	public long referenceDatasetInMap(String datasourceName, String datasetName, com.earthview.world.spatial.atlas.Imap pMap)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long pMapParamValue = (pMap == null ? 0L : pMap.nativeObject.pointer);
		long returnValue = referenceDatasetInMap_EVString_EVString_IMap(this.nativeObject.pointer, datasourceNameParamValue, datasetNameParamValue, pMapParamValue);
		return returnValue;
	}
	native private long createSceneLayer_IGlobeLayer_EVString_EVString(long pNativeObject, long grouplayer, String datasourceName, String datasetName);
	/**
	 * 创建场景图层
	 * @param grouplayer 图层组
	 * @param datasourceName 数据源名
	 * @param datasetName 图层
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer createSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer grouplayer, String datasourceName, String datasetName)
	{
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long returnValue = createSceneLayer_IGlobeLayer_EVString_EVString(this.nativeObject.pointer, grouplayerParamValue, datasourceNameParamValue, datasetNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	native private long createSceneGroupLayer_IGlobeLayer_EVString(long pNativeObject, long pParentGrouplayer, String groupName);
	/**
	 * 创建场景图层组
	 * @param pParentGrouplayer 父图层组
	 * @param groupName 组名
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer createSceneGroupLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, String groupName)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		String groupNameParamValue = groupName;
		long returnValue = createSceneGroupLayer_IGlobeLayer_EVString(this.nativeObject.pointer, pParentGrouplayerParamValue, groupNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iglobelayer __returnValue = new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate, "IGlobeLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IGlobeLayer");
		}
		return __returnValue;
	}
	native private void moveSceneLayer_IGlobeLayer_ev_uint32_ev_uint32(long pNativeObject, long pParentGrouplayer, long index, long pos);
	/**
	 * 调整场景图层顺序
	 * @param pParentGrouplayer 父图层组
	 * @param index 当前索引
	 * @param pos 新的索引
	 */
	public void moveSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, long index, long pos)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long indexParamValue = index;
		long posParamValue = pos;
		moveSceneLayer_IGlobeLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, pParentGrouplayerParamValue, indexParamValue, posParamValue);
	}
	native private void switchSceneLayer_IGlobeLayer_ev_uint32_IGlobeLayer(long pNativeObject, long pParentGrouplayer, long index, long newLayer);
	/**
	 * 实现贴地矢量与非贴地矢量的转换
	 * @param pParentGrouplayer 父图层组
	 * @param index 索引
	 * @param newLayer 新建矢量图层
	 */
	public void switchSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, long index, com.earthview.world.spatial3d.atlas.Iglobelayer newLayer)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long indexParamValue = index;
		long newLayerParamValue = (newLayer == null ? 0L : newLayer.nativeObject.pointer);
		switchSceneLayer_IGlobeLayer_ev_uint32_IGlobeLayer(this.nativeObject.pointer, pParentGrouplayerParamValue, indexParamValue, newLayerParamValue);
	}
	native private void removeSceneLayer_IGlobeLayer_ev_uint32(long pNativeObject, long pParentGrouplayer, long index);
	/**
	 * /移除场景图层/
	 * @param pParentGrouplayer 父图层组
	 * @param index 索引
	 */
	public void removeSceneLayer(com.earthview.world.spatial3d.atlas.Iglobelayer pParentGrouplayer, long index)
	{
		long pParentGrouplayerParamValue = (pParentGrouplayer == null ? 0L : pParentGrouplayer.nativeObject.pointer);
		long indexParamValue = index;
		removeSceneLayer_IGlobeLayer_ev_uint32(this.nativeObject.pointer, pParentGrouplayerParamValue, indexParamValue);
	}
	native private void setSceneLayerVisible_IGlobeLayer_ev_bool(long pNativeObject, long layer, boolean visible);
	/**
	 * 设置场景图层可见性
	 * @param layer 图层
	 * @param visible 可见性
	 */
	public void setSceneLayerVisible(com.earthview.world.spatial3d.atlas.Iglobelayer layer, boolean visible)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean visibleParamValue = visible;
		setSceneLayerVisible_IGlobeLayer_ev_bool(this.nativeObject.pointer, layerParamValue, visibleParamValue);
	}
	native private void setSceneLayerTheme_IGlobeLayer_ITheme(long pNativeObject, long layer, long theme);
	/**
	 * 设置场景图层风格
	 * @param layer 图层
	 * @param theme 风格
	 */
	public void setSceneLayerTheme(com.earthview.world.spatial3d.atlas.Iglobelayer layer, com.earthview.world.spatial.theme.Itheme theme)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		setSceneLayerTheme_IGlobeLayer_ITheme(this.nativeObject.pointer, layerParamValue, themeParamValue);
	}
	native private void removeContainedLayers_IMap_IGroupLayer(long pNativeObject, long map, long grouplayer);
	/**
	 * 从地图图层组移除图层
	 * @param map 地图
	 * @param grouplayer 父图层组
	 */
	public void removeContainedLayers(com.earthview.world.spatial.atlas.Imap map, com.earthview.world.spatial.atlas.Igrouplayer grouplayer)
	{
		long mapParamValue = (map == null ? 0L : map.nativeObject.pointer);
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		removeContainedLayers_IMap_IGroupLayer(this.nativeObject.pointer, mapParamValue, grouplayerParamValue);
	}
	native private void removeContainedLayers_IScene_IGlobeLayer(long pNativeObject, long scene, long grouplayer);
	/**
	 * 从场景图层组移除图层
	 * @param scene 场景
	 * @param grouplayer 图层组
	 */
	public void removeContainedLayers(com.earthview.world.spatial.atlas.Iscene scene, com.earthview.world.spatial3d.atlas.Iglobelayer grouplayer)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		removeContainedLayers_IScene_IGlobeLayer(this.nativeObject.pointer, sceneParamValue, grouplayerParamValue);
	}
	native private void removeContainedLayers_IScene_IGlobeLayer_ev_bool(long pNativeObject, long scene, long grouplayer, boolean updateScene);
	/**
	 * 从场景图层组移除图层
	 * @param scene 场景
	 * @param grouplayer 图层组
	 * @param updateScene 是否刷新场景
	 */
	public void removeContainedLayers(com.earthview.world.spatial.atlas.Iscene scene, com.earthview.world.spatial3d.atlas.Iglobelayer grouplayer, boolean updateScene)
	{
		long sceneParamValue = (scene == null ? 0L : scene.nativeObject.pointer);
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		boolean updateSceneParamValue = updateScene;
		removeContainedLayers_IScene_IGlobeLayer_ev_bool(this.nativeObject.pointer, sceneParamValue, grouplayerParamValue, updateSceneParamValue);
	}
	native private void removeSceneLayersByDataSource_IDataSource(long pNativeObject, long pDataSource);
	/**
	 * 通过数据源移除场景图层
	 * @param pDataSource 数据源
	 */
	public void removeSceneLayersByDataSource(com.earthview.world.spatial.geodataset.Idatasource pDataSource)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		removeSceneLayersByDataSource_IDataSource(this.nativeObject.pointer, pDataSourceParamValue);
	}
	native private void removeSceneLayersByDataset_IDataSource_EVString(long pNativeObject, long pDataSource, String datasetName);
	/**
	 * 通过数据集移除场景图层
	 * @param pDataSource 数据源
	 * @param datasetName 数据集名称
	 */
	public void removeSceneLayersByDataset(com.earthview.world.spatial.geodataset.Idatasource pDataSource, String datasetName)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		removeSceneLayersByDataset_IDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, datasetNameParamValue);
	}
	native private boolean clearVectorLayerCacheData_IDataSource_EVString(long pNativeObject, long pDataSource, String datasetName);
	/**
	 * /清空矢量图层缓存/
	 * @param pDataSource 数据源
	 * @param datasetName 数据集名
	 */
	public boolean clearVectorLayerCacheData(com.earthview.world.spatial.geodataset.Idatasource pDataSource, String datasetName)
	{
		long pDataSourceParamValue = (pDataSource == null ? 0L : pDataSource.nativeObject.pointer);
		String datasetNameParamValue = datasetName;
		boolean returnValue = clearVectorLayerCacheData_IDataSource_EVString(this.nativeObject.pointer, pDataSourceParamValue, datasetNameParamValue);
		return returnValue;
	}
	native private long getLayersByGroupLayer_IGlobeLayer(long pNativeObject, long grouplayer);
	/**
	 * 通过递归调用findlayers方法，来返回图层组下所有图层
	 * @param grouplayer 图层组指针
	 * @return 返回EarthView::World::Spatial::Atlas::ILayer的指针vector
	 */
	public com.earthview.world.frameworkproxy.atlasmanager.LayerVector getLayersByGroupLayer(com.earthview.world.spatial3d.atlas.Iglobelayer grouplayer)
	{
		long grouplayerParamValue = (grouplayer == null ? 0L : grouplayer.nativeObject.pointer);
		long returnValue = getLayersByGroupLayer_IGlobeLayer(this.nativeObject.pointer, grouplayerParamValue);
		com.earthview.world.frameworkproxy.atlasmanager.LayerVector __returnValue = new com.earthview.world.frameworkproxy.atlasmanager.LayerVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CLayerVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.atlasmanager.LayerVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CLayerVector");
		}
		return __returnValue;
	}
	native private long openDataset_EVString_EVString(long pNativeObject, String datasourceName, String datasetName);
	/**
	 * 打开数据集。
	 * @param datasourceName 数据源名称。
	 * @param datasetName 数据集名称。
	 * @return EarthView::World::Spatial::GeoDataset::IDataset对象指针。
	 */
	public com.earthview.world.spatial.geodataset.Idataset openDataset(String datasourceName, String datasetName)
	{
		String datasourceNameParamValue = datasourceName;
		String datasetNameParamValue = datasetName;
		long returnValue = openDataset_EVString_EVString(this.nativeObject.pointer, datasourceNameParamValue, datasetNameParamValue);
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
	public AtlasManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AtlasManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AtlasManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AtlasManager obj = null;
 		if(baseObj instanceof AtlasManager)
		{
			obj = (AtlasManager)baseObj;
		} else {
			obj = new AtlasManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAtlasManager");
			obj.increaseCast();
		}

		return obj;
	}
}
