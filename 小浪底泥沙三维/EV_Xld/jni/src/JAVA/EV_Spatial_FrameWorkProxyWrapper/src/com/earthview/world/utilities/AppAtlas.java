package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AppAtlas extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Utilities::AppAtlas", new AppAtlasClassFactory());
	}

	public enum LayerType3D implements INativeEnum<LayerType3D> {
		KML(LayerType3DHelper.ENUM_VALUES[0]),
		Feature(LayerType3DHelper.ENUM_VALUES[1]),
		Image(LayerType3DHelper.ENUM_VALUES[2]),
		Terrian(LayerType3DHelper.ENUM_VALUES[3]);
		private int value;
		LayerType3D(int i) {
			this.value = i;
		}
		public LayerType3D getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final LayerType3D toEnum(int retval) {
			if(retval == KML.value){
				return KML;
			}
			else if(retval == Feature.value){
				return Feature;
			}
			else if(retval == Image.value){
				return Image;
			}
			else if(retval == Terrian.value){
				return Terrian;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class LayerType3DHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	public enum TileType implements INativeEnum<TileType> {
		WebMercator(TileTypeHelper.ENUM_VALUES[0]),
		WGS84(TileTypeHelper.ENUM_VALUES[1]);
		private int value;
		TileType(int i) {
			this.value = i;
		}
		public TileType getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TileType toEnum(int retval) {
			if(retval == WebMercator.value){
				return WebMercator;
			}
			else if(retval == WGS84.value){
				return WGS84;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TileTypeHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	/**
	 * 构造函数。
	 */
	public AppAtlas() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("AppAtlas", null);
	}

	native private long create3DLayer_EVString_EVString_EVString_LayerType3D(long pNativeObject, String sceneName, String dataSourceAliasName, String datasetName, int type);
	/**
	 * 创建三维图层
	 * @param sceneName 指定在哪个场景之下创建图层。
	 * @param dataSourceAliasName 使用的数据源名称（别名）。
	 * @param datasetName 使用的数据集名称。
	 * @param type 在指定类型的顶层节点上创建图层。如果想在已有图层组下创建图层，请使用create3DLayer的另外一个重载函数。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create3DLayer(String sceneName, String dataSourceAliasName, String datasetName, com.earthview.world.utilities.AppAtlas.LayerType3D type)
	{
		String sceneNameParamValue = sceneName;
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		int typeParamValue = type.getValue();
		long returnValue = create3DLayer_EVString_EVString_EVString_LayerType3D(this.nativeObject.pointer, sceneNameParamValue, dataSourceAliasNameParamValue, datasetNameParamValue, typeParamValue);
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
	native private long create3DLayer_EVString_EVString_ILayer(long pNativeObject, String dataSourceAliasName, String datasetName, long parentLayer);
	/**
	 * 创建三维图层，重载函数。
	 * @param dataSourceAliasName 使用的数据源名称（别名）。
	 * @param datasetName 使用的数据集名称。
	 * @param parentLayer 父图层组对象，如果为0，则会创建失败。如果你不知道父图层组对象，可以使用create3DLayer的另外一个重载函数。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create3DLayer(String dataSourceAliasName, String datasetName, com.earthview.world.spatial.atlas.Ilayer parentLayer)
	{
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		long returnValue = create3DLayer_EVString_EVString_ILayer(this.nativeObject.pointer, dataSourceAliasNameParamValue, datasetNameParamValue, parentLayerParamValue);
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
	native private long create3DGroupLayer_EVString_EVString_LayerType3D(long pNativeObject, String sceneName, String groupName, int type);
	/**
	 * 创建三维图层组
	 * @param sceneName 指定在哪个场景之下创建图层。
	 * @param groupName 指定创建的图层组名称。
	 * @param parentLayer 在指定类型的顶层节点上创建图层组。如果想在已有图层组下创建图层组，请使用create3DGroupLayer的另外一个重载函数。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create3DGroupLayer(String sceneName, String groupName, com.earthview.world.utilities.AppAtlas.LayerType3D type)
	{
		String sceneNameParamValue = sceneName;
		String groupNameParamValue = groupName;
		int typeParamValue = type.getValue();
		long returnValue = create3DGroupLayer_EVString_EVString_LayerType3D(this.nativeObject.pointer, sceneNameParamValue, groupNameParamValue, typeParamValue);
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
	native private long create3DGroupLayer_EVString_ILayer(long pNativeObject, String groupName, long parentLayer);
	/**
	 * 创建三维图层组，重载函数。
	 * @param groupName 指定创建的图层组名称。
	 * @param parentLayer 父图层组对象，如果为0，则会创建失败。如果你不知道父图层组对象，可以使用create3DGroupLayer的另外一个重载函数。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create3DGroupLayer(String groupName, com.earthview.world.spatial.atlas.Ilayer parentLayer)
	{
		String groupNameParamValue = groupName;
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		long returnValue = create3DGroupLayer_EVString_ILayer(this.nativeObject.pointer, groupNameParamValue, parentLayerParamValue);
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
	native private long get3DLayer_EVString_EVString_LayerType3D(long pNativeObject, String sceneName, String layerName, int type);
	/**
	 * #获取三维图层对象。
	 * @param sceneName 指定获取哪个场景下的图层。
	 * @param layerName 指定要获取的图层名称。
	 * @param parentLayer 父图层对象，如果为0，则在场景根顶层节点上获取图层。
	 * @return 获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer get3DLayer(String sceneName, String layerName, com.earthview.world.utilities.AppAtlas.LayerType3D type)
	{
		String sceneNameParamValue = sceneName;
		String layerNameParamValue = layerName;
		int typeParamValue = type.getValue();
		long returnValue = get3DLayer_EVString_EVString_LayerType3D(this.nativeObject.pointer, sceneNameParamValue, layerNameParamValue, typeParamValue);
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
	native private long get3DLayer_EVString_ILayer(long pNativeObject, String layerName, long parentLayer);
	/**
	 * #获取三维图层对象。
	 * @param layerName 指定要获取的图层名称。
	 * @param parentLayer 父图层对象，如果为0，则在场景根顶层节点上获取图层。
	 * @return 获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer get3DLayer(String layerName, com.earthview.world.spatial.atlas.Ilayer parentLayer)
	{
		String layerNameParamValue = layerName;
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		long returnValue = get3DLayer_EVString_ILayer(this.nativeObject.pointer, layerNameParamValue, parentLayerParamValue);
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
	native private boolean delete3DLayer_EVString_ILayer_LayerType3D(long pNativeObject, String sceneName, long layer, int type);
	/**
	 * #删除三维图层（组）。
	 * @param sceneName 指定删除哪个场景下的图层（组）。
	 * @param layerName 指定要删除的图层（组）名称。
	 * @param type 在指定类型的顶层节点上删除图层（组）。
	 * @return 删除是否成功。
	 */
	public boolean delete3DLayer(String sceneName, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.utilities.AppAtlas.LayerType3D type)
	{
		String sceneNameParamValue = sceneName;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int typeParamValue = type.getValue();
		boolean returnValue = delete3DLayer_EVString_ILayer_LayerType3D(this.nativeObject.pointer, sceneNameParamValue, layerParamValue, typeParamValue);
		return returnValue;
	}
	native private boolean delete3DLayer_ILayer_ILayer(long pNativeObject, long layer, long parentLayer);
	/**
	 * 删除三维图层（组）。
	 * @param layerName 指定要删除的图层组名称。
	 * @param parentLayer 父图层组对象。
	 * @return 删除是否成功。
	 */
	public boolean delete3DLayer(com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.Ilayer parentLayer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		boolean returnValue = delete3DLayer_ILayer_ILayer(this.nativeObject.pointer, layerParamValue, parentLayerParamValue);
		return returnValue;
	}
	native private long create2DLayer_EVString_EVString_EVString(long pNativeObject, String mapName, String dataSourceAliasName, String datasetName);
	/**
	 * 创建二维图层。
	 * @param mapName 指定在哪个地图之下创建图层。
	 * @param dataSourceAliasName 使用的数据源名称（别名）。
	 * @param datasetName 使用的数据集名称。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create2DLayer(String mapName, String dataSourceAliasName, String datasetName)
	{
		String mapNameParamValue = mapName;
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		long returnValue = create2DLayer_EVString_EVString_EVString(this.nativeObject.pointer, mapNameParamValue, dataSourceAliasNameParamValue, datasetNameParamValue);
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
	native private long create2DLayer_EVString_EVString_ILayer_EVString(long pNativeObject, String dataSourceAliasName, String datasetName, long parentLayer, String mapName);
	public com.earthview.world.spatial.atlas.Ilayer create2DLayer(String dataSourceAliasName, String datasetName, com.earthview.world.spatial.atlas.Ilayer parentLayer, String mapName)
	{
		String dataSourceAliasNameParamValue = dataSourceAliasName;
		String datasetNameParamValue = datasetName;
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		String mapNameParamValue = mapName;
		long returnValue = create2DLayer_EVString_EVString_ILayer_EVString(this.nativeObject.pointer, dataSourceAliasNameParamValue, datasetNameParamValue, parentLayerParamValue, mapNameParamValue);
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
	native private long create2DGroupLayer_EVString_EVString(long pNativeObject, String mapName, String groupName);
	/**
	 * 创建二维图层组。
	 * @param sceneName 指定在哪个场景之下创建图层。
	 * @param groupName 指定创建的图层组名称。
	 * @param parentLayer 在指定类型的顶层节点上创建图层组。如果想在已有图层组下创建图层组，请使用create2DGroupLayer的另外一个重载函数。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create2DGroupLayer(String mapName, String groupName)
	{
		String mapNameParamValue = mapName;
		String groupNameParamValue = groupName;
		long returnValue = create2DGroupLayer_EVString_EVString(this.nativeObject.pointer, mapNameParamValue, groupNameParamValue);
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
	native private long create2DBaseGroupLayer_EVString_EVString(long pNativeObject, String mapName, String groupName);
	/**
	 * 创建二维底图图层组。
	 * @param sceneName 指定在哪个地图之下创建底图图层。
	 * @param groupName 指定创建的图层组名称。
	 * @param parentLayer 在指定类型的顶层节点上创建图层组。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create2DBaseGroupLayer(String mapName, String groupName)
	{
		String mapNameParamValue = mapName;
		String groupNameParamValue = groupName;
		long returnValue = create2DBaseGroupLayer_EVString_EVString(this.nativeObject.pointer, mapNameParamValue, groupNameParamValue);
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
	native private long create2DGroupLayer_EVString_EVString_ILayer(long pNativeObject, String mapName, String groupName, long parentLayer);
	/**
	 * 创建二维图层组，重载函数。
	 * @param groupName 指定创建的图层组名称。
	 * @param parentLayer 父图层组对象，如果为0，则会创建失败。如果你要在顶层节点上创建图层组，可以使用create2DGroupLayer的另外一个重载函数。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer create2DGroupLayer(String mapName, String groupName, com.earthview.world.spatial.atlas.Ilayer parentLayer)
	{
		String mapNameParamValue = mapName;
		String groupNameParamValue = groupName;
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		long returnValue = create2DGroupLayer_EVString_EVString_ILayer(this.nativeObject.pointer, mapNameParamValue, groupNameParamValue, parentLayerParamValue);
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
	native private long get2DLayer_EVString_EVString(long pNativeObject, String mapName, String layerName);
	/**
	 * #获取二维图层对象。
	 * @param mapName 指定获取哪个场景下的图层。
	 * @param layerName 指定要获取的图层名称。
	 * @return 获取的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public com.earthview.world.spatial.atlas.Ilayer get2DLayer(String mapName, String layerName)
	{
		String mapNameParamValue = mapName;
		String layerNameParamValue = layerName;
		long returnValue = get2DLayer_EVString_EVString(this.nativeObject.pointer, mapNameParamValue, layerNameParamValue);
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
	native private boolean delete2DLayer_EVString_ILayer_ILayer(long pNativeObject, String mapName, long layer, long parentLayer);
	/**
	 * 删除二维图层。
	 * @param mapName 指定删除哪个场景下的图层。
	 * @param layerName 指定要删除的图层组名称。
	 * @return 创建的EarthView::World::Spatial::Atlas::ILayer对象，失败返回0。
	 */
	public boolean delete2DLayer(String mapName, com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.atlas.Ilayer parentLayer)
	{
		String mapNameParamValue = mapName;
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		boolean returnValue = delete2DLayer_EVString_ILayer_ILayer(this.nativeObject.pointer, mapNameParamValue, layerParamValue, parentLayerParamValue);
		return returnValue;
	}
	native private long createScene_EVString_TileType(long pNativeObject, String sceneName, int tileType);
	/**
	 * /创建场景。/
	 * @param sceneName 场景名称。
	 * @return 创建的场景EarthView::World::Spatial::Atlas::IScene对象。
	 */
	public com.earthview.world.spatial.atlas.Iscene createScene(String sceneName, com.earthview.world.utilities.AppAtlas.TileType tileType)
	{
		String sceneNameParamValue = sceneName;
		int tileTypeParamValue = tileType.getValue();
		long returnValue = createScene_EVString_TileType(this.nativeObject.pointer, sceneNameParamValue, tileTypeParamValue);
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
	native private long getScene_EVString(long pNativeObject, String sceneName);
	/**
	 * 获取场景对象。
	 * @param sceneName 场景名称。
	 * @return 获取的场景EarthView::World::Spatial::Atlas::IScene对象。
	 */
	public com.earthview.world.spatial.atlas.Iscene getScene(String sceneName)
	{
		String sceneNameParamValue = sceneName;
		long returnValue = getScene_EVString(this.nativeObject.pointer, sceneNameParamValue);
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
	native private boolean deleteScene_EVString(long pNativeObject, String sceneName);
	/**
	 * 创建场景。
	 * @param sceneName 场景名称。
	 * @return 删除是否成功。
	 */
	public boolean deleteScene(String sceneName)
	{
		String sceneNameParamValue = sceneName;
		boolean returnValue = deleteScene_EVString(this.nativeObject.pointer, sceneNameParamValue);
		return returnValue;
	}
	native private long createMap_EVString(long pNativeObject, String mapName);
	/**
	 * 创建地图。
	 * @param sceneName 地图名称。
	 * @return 创建的地图EarthView::World::Spatial::Atlas::IMap对象。
	 */
	public com.earthview.world.spatial.atlas.Imap createMap(String mapName)
	{
		String mapNameParamValue = mapName;
		long returnValue = createMap_EVString(this.nativeObject.pointer, mapNameParamValue);
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
	native private long getMap_EVString(long pNativeObject, String mapName);
	/**
	 * 获取地图对象。
	 * @param sceneName 地图名称。
	 * @return 对象的地图EarthView::World::Spatial::Atlas::IMap对象。
	 */
	public com.earthview.world.spatial.atlas.Imap getMap(String mapName)
	{
		String mapNameParamValue = mapName;
		long returnValue = getMap_EVString(this.nativeObject.pointer, mapNameParamValue);
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
	native private boolean deleteMap_EVString(long pNativeObject, String mapName);
	/**
	 * 删除地图。
	 * @param sceneName 地图名称。
	 * @return 删除是否成功。
	 */
	public boolean deleteMap(String mapName)
	{
		String mapNameParamValue = mapName;
		boolean returnValue = deleteMap_EVString(this.nativeObject.pointer, mapNameParamValue);
		return returnValue;
	}
	native private long createLayout_EVString(long pNativeObject, String layoutName);
	/**
	 * 创建布局。
	 * @param sceneName 布局名称。
	 * @return 创建的布局IPageLayout对象。
	 */
	public com.earthview.world.spatial.carto.Ipagelayout createLayout(String layoutName)
	{
		String layoutNameParamValue = layoutName;
		long returnValue = createLayout_EVString(this.nativeObject.pointer, layoutNameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.carto.Ipagelayout __returnValue = new com.earthview.world.spatial.carto.Ipagelayout(CreatedWhenConstruct.CWC_NotToCreate, "IPageLayout");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.carto.Ipagelayout)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IPageLayout");
		}
		return __returnValue;
	}
	native private boolean deleteLayout_EVString(long pNativeObject, String layoutName);
	/**
	 * 删除地图。
	 * @param sceneName 地图名称。
	 * @return 删除是否成功。
	 */
	public boolean deleteLayout(String layoutName)
	{
		String layoutNameParamValue = layoutName;
		boolean returnValue = deleteLayout_EVString(this.nativeObject.pointer, layoutNameParamValue);
		return returnValue;
	}
	native private boolean setLayerVisible_ILayer_bool(long pNativeObject, long layer, boolean visible);
	/**
	 * 设置图层是否可见。
	 * @param layer 图层对象。
	 * @param visible 是否可见。
	 * @return 设置图层可见是否成功。
	 */
	public boolean setLayerVisible(com.earthview.world.spatial.atlas.Ilayer layer, boolean visible)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean visibleParamValue = visible;
		boolean returnValue = setLayerVisible_ILayer_bool(this.nativeObject.pointer, layerParamValue, visibleParamValue);
		return returnValue;
	}
	native private boolean setLayerTheme_ILayer_ITheme(long pNativeObject, long layer, long theme);
	/**
	 * 设置图层风格。
	 * @param layer 图层对象。
	 * @param theme 风格EarthView::World::Spatial::Theme::ITheme对象。
	 * @return 设置图层风格是否成功。
	 */
	public boolean setLayerTheme(com.earthview.world.spatial.atlas.Ilayer layer, com.earthview.world.spatial.theme.Itheme theme)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		long themeParamValue = (theme == null ? 0L : theme.nativeObject.pointer);
		boolean returnValue = setLayerTheme_ILayer_ITheme(this.nativeObject.pointer, layerParamValue, themeParamValue);
		return returnValue;
	}
	native private void move3DLayer_EVString_EVString_LayerType3D_int_int(long pNativeObject, String sceneName, String layerName, int type, int index, int newIndex);
	/**
	 * 移动三维图层位置，在图层处于顶层节点之下时使用本函数。
	 * @param sceneName 场景名称。
	 * @param layerName 图层名称。
	 * @param type 图层类型。
	 * @param index 移动之前的图层位置。
	 * @param newIndex 移动之前的图层位置。
	 */
	public void move3DLayer(String sceneName, String layerName, com.earthview.world.utilities.AppAtlas.LayerType3D type, int index, int newIndex)
	{
		String sceneNameParamValue = sceneName;
		String layerNameParamValue = layerName;
		int typeParamValue = type.getValue();
		int indexParamValue = index;
		int newIndexParamValue = newIndex;
		move3DLayer_EVString_EVString_LayerType3D_int_int(this.nativeObject.pointer, sceneNameParamValue, layerNameParamValue, typeParamValue, indexParamValue, newIndexParamValue);
	}
	native private void move3DLayer_ILayer_int_int(long pNativeObject, long parentLayer, int index, int newIndex);
	/**
	 * 移动三维图层位置。
	 * @param parentLayer 图层组名称。
	 * @param index 移动之前的图层位置。
	 * @param newIndex 移动之前的图层位置。
	 */
	public void move3DLayer(com.earthview.world.spatial.atlas.Ilayer parentLayer, int index, int newIndex)
	{
		long parentLayerParamValue = (parentLayer == null ? 0L : parentLayer.nativeObject.pointer);
		int indexParamValue = index;
		int newIndexParamValue = newIndex;
		move3DLayer_ILayer_int_int(this.nativeObject.pointer, parentLayerParamValue, indexParamValue, newIndexParamValue);
	}
	native private void move2DLayer_EVString_int_int(long pNativeObject, String mapName, int index, int newIndex);
	/**
	 * 移动二维图层位置。
	 * @param mapName 地图名称。
	 * @param index 移动之前的图层位置。
	 * @param newIndex 移动之前的图层位置。
	 */
	public void move2DLayer(String mapName, int index, int newIndex)
	{
		String mapNameParamValue = mapName;
		int indexParamValue = index;
		int newIndexParamValue = newIndex;
		move2DLayer_EVString_int_int(this.nativeObject.pointer, mapNameParamValue, indexParamValue, newIndexParamValue);
	}
	public AppAtlas(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AppAtlas(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AppAtlas fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AppAtlas obj = null;
 		if(baseObj instanceof AppAtlas)
		{
			obj = (AppAtlas)baseObj;
		} else {
			obj = new AppAtlas(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "AppAtlas");
			obj.increaseCast();
		}

		return obj;
	}
}
