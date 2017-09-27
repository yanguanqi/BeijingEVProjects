package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CFeatureGroupLayer(特征图层组)管理以下图层:矢量图层(网络矢量瓦片图层CVectorWebClampSceneLayer、数据库矢量贴地图层CVectorDBClampSceneLayer、数据库矢量非贴地图层CVectorRelativeSceneLayer)、海图图层(CChartClampSceneLayer)、模型图层(实体模型图层CEntityLayer、Instance实例模型图层CInstanceEntityLayer)、特效图层CEffectLayer以及嵌套的图层组CFeatureGroupLayer
 */
public class FeatureGroupLayer extends com.earthview.world.spatial3d.atlas.Iglobelayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer", new FeatureGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCFeatureGroupLayerProxy", new FeatureGroupLayerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public FeatureGroupLayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFeatureGroupLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.FeatureGroupLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 图层名
	 */
	public FeatureGroupLayer(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCFeatureGroupLayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.FeatureGroupLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 获取图层的类型
	 * @param  
	 * @return 图层的类型
	 */
	public com.earthview.world.spatial.atlas.EVLayerType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}
	native private int getType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.atlas.EVLayerType getType_NoVirtual()
	{
		int returnValue = getType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.atlas.EVLayerType.toEnum(returnValue);
	}

	protected  boolean getTile_ev_int32_ev_int32_ev_int32_CTileData_callback(int level, int row, int col, long tile)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		com.earthview.world.spatial.TileData tileParamValue = new com.earthview.world.spatial.TileData(CreatedWhenConstruct.CWC_NotToCreate);
		tileParamValue.setDelegate(true);
		tileParamValue.setInstancePointer(new InstancePointer(tile));
		IClassFactory tileParamValueClassFactory = GlobalClassFactoryMap.get(tileParamValue.getCppInstanceTypeName());
		if (tileParamValueClassFactory != null)
		{
			tileParamValue.setDelegate(true);
			tileParamValue = (com.earthview.world.spatial.TileData)tileParamValueClassFactory.create();
			tileParamValue.setDelegate(true);
			tileParamValue.setInstancePointer(new InstancePointer(tile));
		}
		boolean returnValue = getTile(levelParamValue, rowParamValue, colParamValue, tileParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getTile_ev_int32_ev_int32_ev_int32_CTileData(long pNativeObject, int level, int row, int col, long tile);
	/**
	 * 获取瓦片
	 * @param level 瓦片级别
	 * @param row 瓦片行号
	 * @param col 瓦片列号
	 * @param tile 返回的瓦片数据信息
	 * @return 是否成功
	 */
	public boolean getTile(int level, int row, int col, com.earthview.world.spatial.TileData tile)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_ev_int32_ev_int32_ev_int32_CTileData(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, tileParamValue);
		return returnValue;
	}
	native private boolean getTile_ev_int32_ev_int32_ev_int32_CTileData_NoVirtual(long pNativeObject, int level, int row, int col, long tile);
	protected boolean getTile_NoVirtual(int level, int row, int col, com.earthview.world.spatial.TileData tile)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_ev_int32_ev_int32_ev_int32_CTileData_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue, tileParamValue);
		return returnValue;
	}

	protected  boolean getTile_Real_Real_Real_Real_CTileData_callback(double minX, double minY, double maxX, double maxY, long tile)
	{
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		com.earthview.world.spatial.TileData tileParamValue = new com.earthview.world.spatial.TileData(CreatedWhenConstruct.CWC_NotToCreate);
		tileParamValue.setDelegate(true);
		tileParamValue.setInstancePointer(new InstancePointer(tile));
		IClassFactory tileParamValueClassFactory = GlobalClassFactoryMap.get(tileParamValue.getCppInstanceTypeName());
		if (tileParamValueClassFactory != null)
		{
			tileParamValue.setDelegate(true);
			tileParamValue = (com.earthview.world.spatial.TileData)tileParamValueClassFactory.create();
			tileParamValue.setDelegate(true);
			tileParamValue.setInstancePointer(new InstancePointer(tile));
		}
		boolean returnValue = getTile(minXParamValue, minYParamValue, maxXParamValue, maxYParamValue, tileParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getTile_Real_Real_Real_Real_CTileData(long pNativeObject, double minX, double minY, double maxX, double maxY, long tile);
	/**
	 * 获取瓦片
	 * @param minX 瓦片经纬度范围minX
	 * @param minY 瓦片经纬度范围minY
	 * @param maxX 瓦片经纬度范围maxX
	 * @param maxY 瓦片经纬度范围maxY
	 * @param tile 返回的瓦片数据信息
	 * @return 是否成功
	 */
	public boolean getTile(double minX, double minY, double maxX, double maxY, com.earthview.world.spatial.TileData tile)
	{
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_Real_Real_Real_Real_CTileData(this.nativeObject.pointer, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue, tileParamValue);
		return returnValue;
	}
	native private boolean getTile_Real_Real_Real_Real_CTileData_NoVirtual(long pNativeObject, double minX, double minY, double maxX, double maxY, long tile);
	protected boolean getTile_NoVirtual(double minX, double minY, double maxX, double maxY, com.earthview.world.spatial.TileData tile)
	{
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		long tileParamValue = tile.nativeObject.pointer;
		boolean returnValue = getTile_Real_Real_Real_Real_CTileData_NoVirtual(this.nativeObject.pointer, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue, tileParamValue);
		return returnValue;
	}

	protected  boolean addLayer_IGlobeLayer_callback(long ref_layer)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer ref_layerParamValue = (ref_layer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_layerParamValue != null)
		{
		ref_layerParamValue.setDelegate(true);
		ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		IClassFactory ref_layerParamValueClassFactory = GlobalClassFactoryMap.get(ref_layerParamValue.getCppInstanceTypeName());
		if (ref_layerParamValueClassFactory != null)
		{
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)ref_layerParamValueClassFactory.create();
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		}
		}
		boolean returnValue = addLayer(ref_layerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean addLayer_IGlobeLayer(long pNativeObject, long ref_layer);
	/**
	 * 添加一个CFeatureLayer图层
	 * @param layer CFeatureGroupLayer图层
	 */
	public boolean addLayer(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = addLayer_IGlobeLayer(this.nativeObject.pointer, ref_layerParamValue);
		return returnValue;
	}
	native private boolean addLayer_IGlobeLayer_NoVirtual(long pNativeObject, long ref_layer);
	protected boolean addLayer_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = addLayer_IGlobeLayer_NoVirtual(this.nativeObject.pointer, ref_layerParamValue);
		return returnValue;
	}

	protected  boolean insertLayer_ev_uint32_IGlobeLayer_callback(long index, long ref_layer)
	{
		long indexParamValue = index;
		com.earthview.world.spatial3d.atlas.Iglobelayer ref_layerParamValue = (ref_layer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(ref_layerParamValue != null)
		{
		ref_layerParamValue.setDelegate(true);
		ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		IClassFactory ref_layerParamValueClassFactory = GlobalClassFactoryMap.get(ref_layerParamValue.getCppInstanceTypeName());
		if (ref_layerParamValueClassFactory != null)
		{
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)ref_layerParamValueClassFactory.create();
			ref_layerParamValue.setDelegate(true);
			ref_layerParamValue.setInstancePointer(new InstancePointer(ref_layer));
		}
		}
		boolean returnValue = insertLayer(indexParamValue, ref_layerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean insertLayer_ev_uint32_IGlobeLayer(long pNativeObject, long index, long ref_layer);
	/**
	 * 插入一个CFeatureLayer图层
	 * @param pos 插入的位置
	 * @param layer CFeatureLayer图层
	 */
	public boolean insertLayer(long index, com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer)
	{
		long indexParamValue = index;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = insertLayer_ev_uint32_IGlobeLayer(this.nativeObject.pointer, indexParamValue, ref_layerParamValue);
		return returnValue;
	}
	native private boolean insertLayer_ev_uint32_IGlobeLayer_NoVirtual(long pNativeObject, long index, long ref_layer);
	protected boolean insertLayer_NoVirtual(long index, com.earthview.world.spatial3d.atlas.Iglobelayer ref_layer)
	{
		long indexParamValue = index;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = insertLayer_ev_uint32_IGlobeLayer_NoVirtual(this.nativeObject.pointer, indexParamValue, ref_layerParamValue);
		return returnValue;
	}

	protected  boolean removeLayer_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeLayer(indexParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除一个CFeatureLayer图层
	 * @param index 索引
	 * @return 是否成功
	 */
	public boolean removeLayer(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private boolean removeLayer_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected boolean removeLayer_NoVirtual(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeLayer_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  boolean removeLayer_IGlobeLayer_callback(long layer)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		boolean returnValue = removeLayer(layerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeLayer_IGlobeLayer(long pNativeObject, long layer);
	/**
	 * 删除一个CFeatureLayer图层
	 * @param layer 图层
	 * @return 是否成功
	 */
	public boolean removeLayer(com.earthview.world.spatial3d.atlas.Iglobelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = removeLayer_IGlobeLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private boolean removeLayer_IGlobeLayer_NoVirtual(long pNativeObject, long layer);
	protected boolean removeLayer_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = removeLayer_IGlobeLayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	protected  long getLayerCount_void_callback()
	{
		long returnValue = getLayerCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取CFeatureLayer的数量
	 * @param  
	 * @return CFeatureLayer的数量
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLayerCount_void_NoVirtual(long pNativeObject);
	protected long getLayerCount_NoVirtual()
	{
		long returnValue = getLayerCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getLayerIndex_IGlobeLayer_callback(long layer)
	{
		com.earthview.world.spatial3d.atlas.Iglobelayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iglobelayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial3d.atlas.Iglobelayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		int returnValue = getLayerIndex(layerParamValue);
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getLayerIndex_IGlobeLayer(long pNativeObject, long layer);
	/**
	 * 获取CFeatureLayer的索引
	 * @param layer CFeatureLayer图层
	 * @return CFeatureLayer的索引
	 */
	public int getLayerIndex(com.earthview.world.spatial3d.atlas.Iglobelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int returnValue = getLayerIndex_IGlobeLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private int getLayerIndex_IGlobeLayer_NoVirtual(long pNativeObject, long layer);
	protected int getLayerIndex_NoVirtual(com.earthview.world.spatial3d.atlas.Iglobelayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int returnValue = getLayerIndex_IGlobeLayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	protected  long getLayer_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		com.earthview.world.spatial3d.atlas.Iglobelayer returnValue = getLayer(indexParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取特征图层或者图层组调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
	 * @param index 索引
	 */
	public com.earthview.world.spatial3d.atlas.Iglobelayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long getLayer_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial3d.atlas.Iglobelayer getLayer_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
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

	native private boolean moveLayer_ev_uint32_ev_uint32(long pNativeObject, long index, long pos);
	/**
	 * 移动图层顺序
	 * @param index 索引
	 * @param pos 移动后的顺序
	 * @return 是否成功
	 */
	public boolean moveLayer(long index, long pos)
	{
		long indexParamValue = index;
		long posParamValue = pos;
		boolean returnValue = moveLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, indexParamValue, posParamValue);
		return returnValue;
	}
	native private void clearSelection_void(long pNativeObject);
	/**
	 * 清除选择集
	 * @param  
	 */
	public void clearSelection()
	{
		clearSelection_void(this.nativeObject.pointer);
	}
	native private void clearSelection_void_NoVirtual(long pNativeObject);
	protected void clearSelection_NoVirtual()
	{
		clearSelection_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  int getMaxLevel_void_callback()
	{
		int returnValue = getMaxLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxLevel_void(long pNativeObject);
	/**
	 * 获取瓦片最大级别
	 * @param  
	 * @return 瓦片最大级别
	 */
	public int getMaxLevel()
	{
		int returnValue = getMaxLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMaxLevel_void_NoVirtual(long pNativeObject);
	protected int getMaxLevel_NoVirtual()
	{
		int returnValue = getMaxLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  int getMinLevel_void_callback()
	{
		int returnValue = getMinLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMinLevel_void(long pNativeObject);
	/**
	 * 获取瓦片最小级别
	 * @param  
	 * @return 瓦片最小级别
	 */
	public int getMinLevel()
	{
		int returnValue = getMinLevel_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMinLevel_void_NoVirtual(long pNativeObject);
	protected int getMinLevel_NoVirtual()
	{
		int returnValue = getMinLevel_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setMaxLevel_ev_int32_callback(int maxlevel)
	{
		int maxlevelParamValue = maxlevel;
		setMaxLevel(maxlevelParamValue);
	}

	native private void setMaxLevel_ev_int32(long pNativeObject, int maxlevel);
	/**
	 * 设置瓦片最大级别
	 * @param maxlevel 瓦片最大级别
	 */
	public void setMaxLevel(int maxlevel)
	{
		int maxlevelParamValue = maxlevel;
		setMaxLevel_ev_int32(this.nativeObject.pointer, maxlevelParamValue);
	}
	native private void setMaxLevel_ev_int32_NoVirtual(long pNativeObject, int maxlevel);
	protected void setMaxLevel_NoVirtual(int maxlevel)
	{
		int maxlevelParamValue = maxlevel;
		setMaxLevel_ev_int32_NoVirtual(this.nativeObject.pointer, maxlevelParamValue);
	}

	protected  void setMinLevel_ev_int32_callback(int minlevel)
	{
		int minlevelParamValue = minlevel;
		setMinLevel(minlevelParamValue);
	}

	native private void setMinLevel_ev_int32(long pNativeObject, int minlevel);
	/**
	 * 设置瓦片最小级别
	 * @param minlevel 瓦片最小级别
	 */
	public void setMinLevel(int minlevel)
	{
		int minlevelParamValue = minlevel;
		setMinLevel_ev_int32(this.nativeObject.pointer, minlevelParamValue);
	}
	native private void setMinLevel_ev_int32_NoVirtual(long pNativeObject, int minlevel);
	protected void setMinLevel_NoVirtual(int minlevel)
	{
		int minlevelParamValue = minlevel;
		setMinLevel_ev_int32_NoVirtual(this.nativeObject.pointer, minlevelParamValue);
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置图层名称
	 * @param name 新的图层名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setName_EVString_NoVirtual(long pNativeObject, String name);
	protected void setName_NoVirtual(String name)
	{
		String nameParamValue = name;
		setName_EVString_NoVirtual(this.nativeObject.pointer, nameParamValue);
	}

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 获取图层可见性
	 * @param  
	 * @return 图层可见性
	 */
	public boolean isVisible()
	{
		boolean returnValue = isVisible_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isVisible_void_NoVirtual(long pNativeObject);
	protected boolean isVisible_NoVirtual()
	{
		boolean returnValue = isVisible_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setVisible_ev_bool(long pNativeObject, boolean visible);
	/**
	 * 设置图层可见性
	 * @param visible 是否可见
	 */
	public void setVisible(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool(this.nativeObject.pointer, visibleParamValue);
	}
	native private void setVisible_ev_bool_NoVirtual(long pNativeObject, boolean visible);
	protected void setVisible_NoVirtual(boolean visible)
	{
		boolean visibleParamValue = visible;
		setVisible_ev_bool_NoVirtual(this.nativeObject.pointer, visibleParamValue);
	}

	native private void _notifyLayerAdd_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * 通知图层增加
	 * @param pSceneMgr 场景管理器
	 */
	public void _notifyLayerAdd(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerAdd_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerAdd_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerAdd_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void _notifyLayerRemoved_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * 通知图层移除
	 * @param pSceneMgr 场景管理器
	 */
	public void _notifyLayerRemoved(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, pSceneMgrParamValue);
	}
	native private void _notifyLayerRemoved_CSceneManager_NoVirtual(long pNativeObject, long pSceneMgr);
	protected void _notifyLayerRemoved_NoVirtual(com.earthview.world.graphic.SceneManager pSceneMgr)
	{
		long pSceneMgrParamValue = (pSceneMgr == null ? 0L : pSceneMgr.nativeObject.pointer);
		_notifyLayerRemoved_CSceneManager_NoVirtual(this.nativeObject.pointer, pSceneMgrParamValue);
	}

	native private void _notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, long camera, int updateType);
	/**
	 * 通知图层刷新
	 * @param camera 镜头
	 * @param updateType 刷新类型
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}
	native private void _notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(long pNativeObject, long camera, int updateType);
	protected void _notifyRefreshed_NoVirtual(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		long cameraParamValue = (camera == null ? 0L : camera.nativeObject.pointer);
		int updateTypeParamValue = updateType.getValue();
		_notifyRefreshed_CCamera_LayerRefreshFactor_NoVirtual(this.nativeObject.pointer, cameraParamValue, updateTypeParamValue);
	}

	protected  void _notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_callback(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileCreated(levelParamValue, rowParamValue, colParamValue);
	}

	native private void _notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long level, long row, long col);
	/**
	 * 瓦片创建通知
	 * @param level 瓦片级别
	 * @param row 瓦片行号
	 * @param col 瓦片列号
	 */
	public void _notifyTileCreated(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}
	native private void _notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long level, long row, long col);
	protected void _notifyTileCreated_NoVirtual(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}

	protected  void _notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_callback(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileDestroyed(levelParamValue, rowParamValue, colParamValue);
	}

	native private void _notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, long level, long row, long col);
	/**
	 * 瓦片销毁通知
	 * @param level 瓦片级别
	 * @param row 瓦片行号
	 * @param col 瓦片列号
	 */
	public void _notifyTileDestroyed(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}
	native private void _notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long level, long row, long col);
	protected void _notifyTileDestroyed_NoVirtual(long level, long row, long col)
	{
		long levelParamValue = level;
		long rowParamValue = row;
		long colParamValue = col;
		_notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
	}

	native private void _notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	/**
	 * 数据集变更通知
	 * @param strDataSourceName 数据源名称
	 * @param strDatasetName 数据集名称
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}
	native private void _notifyDataChanged_EVString_EVString_CEvent_NoVirtual(long pNativeObject, String strDataSourceName, String strDatasetName, long pEvent);
	protected void _notifyDataChanged_NoVirtual(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		String strDataSourceNameParamValue = strDataSourceName;
		String strDatasetNameParamValue = strDatasetName;
		long pEventParamValue = (pEvent == null ? 0L : pEvent.nativeObject.pointer);
		_notifyDataChanged_EVString_EVString_CEvent_NoVirtual(this.nativeObject.pointer, strDataSourceNameParamValue, strDatasetNameParamValue, pEventParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @param  
	 * @return xml文本
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	protected  long getThemeStream_ev_int32_ev_int32_ev_int32_callback(int level, int row, int col)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		com.earthview.world.core.MemoryDataStreamPtr returnValue = getThemeStream(levelParamValue, rowParamValue, colParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getThemeStream_ev_int32_ev_int32_ev_int32(long pNativeObject, int level, int row, int col);
	/**
	 * 返回风格流
	 * @param level 瓦片级别
	 * @param row 瓦片行号
	 * @param col 瓦片列号
	 * @return 风格流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getThemeStream(int level, int row, int col)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long returnValue = getThemeStream_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}
	native private long getThemeStream_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int level, int row, int col);
	protected com.earthview.world.core.MemoryDataStreamPtr getThemeStream_NoVirtual(int level, int row, int col)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long returnValue = getThemeStream_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
		com.earthview.world.core.MemoryDataStreamPtr __returnValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.MemoryDataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "MemoryDataStreamPtr");
		}
		return __returnValue;
	}

	protected  boolean equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real_callback(long stream, int level, int row, int col, double minX, double minY, double maxX, double maxY)
	{
		com.earthview.world.core.MemoryDataStreamPtr streamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		boolean returnValue = equalThemeStream(streamParamValue, levelParamValue, rowParamValue, colParamValue, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real(long pNativeObject, long stream, int level, int row, int col, double minX, double minY, double maxX, double maxY);
	/**
	 * 判断风格流是否相等
	 * @param stream 风格流
	 * @param level 瓦片级别
	 * @param row 瓦片行号
	 * @param col 瓦片列号
	 * @return 相等返回true，否则false
	 */
	public boolean equalThemeStream(com.earthview.world.core.MemoryDataStreamPtr stream, int level, int row, int col, double minX, double minY, double maxX, double maxY)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		boolean returnValue = equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real(this.nativeObject.pointer, streamParamValue, levelParamValue, rowParamValue, colParamValue, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue);
		return returnValue;
	}
	native private boolean equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real_NoVirtual(long pNativeObject, long stream, int level, int row, int col, double minX, double minY, double maxX, double maxY);
	protected boolean equalThemeStream_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr stream, int level, int row, int col, double minX, double minY, double maxX, double maxY)
	{
		long streamParamValue = stream.nativeObject.pointer;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		double minXParamValue = minX;
		double minYParamValue = minY;
		double maxXParamValue = maxX;
		double maxYParamValue = maxY;
		boolean returnValue = equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real_NoVirtual(this.nativeObject.pointer, streamParamValue, levelParamValue, rowParamValue, colParamValue, minXParamValue, minYParamValue, maxXParamValue, maxYParamValue);
		return returnValue;
	}

	protected  boolean equalThemeStream_MemoryDataStreamPtr_callback(long stream)
	{
		com.earthview.world.core.MemoryDataStreamPtr streamParamValue = new com.earthview.world.core.MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		streamParamValue.setDelegate(true);
		streamParamValue.setInstancePointer(new InstancePointer(stream));
		IClassFactory streamParamValueClassFactory = GlobalClassFactoryMap.get(streamParamValue.getCppInstanceTypeName());
		if (streamParamValueClassFactory != null)
		{
			streamParamValue.setDelegate(true);
			streamParamValue = (com.earthview.world.core.MemoryDataStreamPtr)streamParamValueClassFactory.create();
			streamParamValue.setDelegate(true);
			streamParamValue.setInstancePointer(new InstancePointer(stream));
		}
		boolean returnValue = equalThemeStream(streamParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean equalThemeStream_MemoryDataStreamPtr(long pNativeObject, long stream);
	public boolean equalThemeStream(com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = equalThemeStream_MemoryDataStreamPtr(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}
	native private boolean equalThemeStream_MemoryDataStreamPtr_NoVirtual(long pNativeObject, long stream);
	protected boolean equalThemeStream_NoVirtual(com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		boolean returnValue = equalThemeStream_MemoryDataStreamPtr_NoVirtual(this.nativeObject.pointer, streamParamValue);
		return returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从xml恢复图层参数
	 * @param element xml
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private void reCalExtent_ev_bool(long pNativeObject, boolean reCalSelf);
	/**
	 * 重新计算图层组贴地图层地理范围及瓦片级别范围
	 * @param  
	 */
	public void reCalExtent(boolean reCalSelf)
	{
		boolean reCalSelfParamValue = reCalSelf;
		reCalExtent_ev_bool(this.nativeObject.pointer, reCalSelfParamValue);
	}
	native private boolean getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, float lat, float lon, float targetSamplesPerDegrees, long height);
	/**
	 * 根据经纬度和级别获取高程
	 * @param  
	 * @param lat 纬度
	 * @param lon 经度
	 * @param targetSamplesPerDegrees 每度采样数，-1表示最高精度
	 */
	public boolean getHeightAt(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		float latParamValue = lat;
		float lonParamValue = lon;
		float targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		long heightParamValue = height.nativeObject.pointer;
		boolean returnValue = getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, latParamValue, lonParamValue, targetSamplesPerDegreesParamValue, heightParamValue);
		return returnValue;
	}
	native private boolean getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(long pNativeObject, float lat, float lon, float targetSamplesPerDegrees, long height);
	protected boolean getHeightAt_NoVirtual(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		float latParamValue = lat;
		float lonParamValue = lon;
		float targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		long heightParamValue = height.nativeObject.pointer;
		boolean returnValue = getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_NoVirtual(this.nativeObject.pointer, latParamValue, lonParamValue, targetSamplesPerDegreesParamValue, heightParamValue);
		return returnValue;
	}

	native private long getGeoExtent_void(long pNativeObject);
	public com.earthview.world.spatial.geometry.Envelope getGeoExtent()
	{
		long returnValue = getGeoExtent_void(this.nativeObject.pointer);
		com.earthview.world.spatial.geometry.Envelope __returnValue = new com.earthview.world.spatial.geometry.Envelope(CreatedWhenConstruct.CWC_NotToCreate, "CEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Envelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEnvelope");
		}
		return __returnValue;
	}
	native private boolean hasVisibleClampLayer_void(long pNativeObject);
	/**
	 * 判断是否存在贴地形图层
	 * @param  
	 */
	public boolean hasVisibleClampLayer()
	{
		boolean returnValue = hasVisibleClampLayer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasVisibleClampDSMLayer_void(long pNativeObject);
	/**
	 * 判断是否存在贴模型图层
	 * @param  
	 */
	public boolean hasVisibleClampDSMLayer()
	{
		boolean returnValue = hasVisibleClampDSMLayer_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void stopDrawing_void(long pNativeObject);
	/**
	 * 强制停止绘制
	 * @param  
	 */
	public void stopDrawing()
	{
		stopDrawing_void(this.nativeObject.pointer);
	}
	native private void startDrawing_void(long pNativeObject);
	/**
	 * 强制开始绘制，注意刷新
	 * @param  
	 */
	public void startDrawing()
	{
		startDrawing_void(this.nativeObject.pointer);
	}
	public FeatureGroupLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FeatureGroupLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/// <summary>
	/// 获得场景名称
	/// </summary>
	/// <returns>场景名称</return>
	public String getSceneName()
	{
		return super.getSceneName_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最小值
	 * @param  
	 * @return 包围盒在X轴上最小值
	 */
	public double getMinX()
	{
		return super.getMinX_NoVirtual();
	}
	/**
	 * 获取包围盒在X轴上最大值
	 * @param  
	 * @return 包围盒在X轴上最大值
	 */
	public double getMaxX()
	{
		return super.getMaxX_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最小值
	 * @param  
	 * @return 包围盒在Y轴上最小值
	 */
	public double getMinY()
	{
		return super.getMinY_NoVirtual();
	}
	/**
	 * 获取包围盒在Y轴上最大值
	 * @param  
	 * @return 包围盒在Y轴上最大值
	 */
	public double getMaxY()
	{
		return super.getMaxY_NoVirtual();
	}
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera)
	{
		super._notifyRefreshed_NoVirtual(camera);
	}
	/// <summary>
	/// 获得场景管理器
	/// </summary>
	/// <returns>场景管理器</return>
	public com.earthview.world.graphic.SceneManager getSceneManager()
	{
		return super.getSceneManager_NoVirtual();
	}
	/**
	 * 获取与图层所关联的数据集
	 * @param  
	 * @return 数据集
	 */
	public com.earthview.world.spatial.geodataset.Idataset getDataset()
	{
		return super.getDataset_NoVirtual();
	}
	/**
	 * 获取数据集的名称
	 * @param  
	 */
	public String getDatasetName()
	{
		return super.getDatasetName_NoVirtual();
	}
	/**
	 * 获取数据集所在的数据源
	 * @param  
	 */
	public com.earthview.world.spatial.geodataset.Idatasource getDataSource()
	{
		return super.getDataSource_NoVirtual();
	}
	/**
	 * 图层选择
	 * @param filter 选择过滤条件
	 * @param type 选择类型
	 */
	public void select(com.earthview.world.spatial.geodataset.Iqueryfilter filter, com.earthview.world.spatial.atlas.EVSelectionResultType type)
	{
		super.select_NoVirtual(filter, type);
	}
	/**
	 * 设置图层的选择集
	 * @param selection 图层的选择集
	 */
	public void setLayerSelection(com.earthview.world.spatial.atlas.Ilayerselection selection)
	{
		super.setLayerSelection_NoVirtual(selection);
	}
	/**
	 * 获取图层选择
	 * @param  
	 * @return 图层选择
	 */
	public com.earthview.world.spatial.atlas.Ilayerselection getLayerSelection()
	{
		return super.getLayerSelection_NoVirtual();
	}
	/**
	 * 获取图层的名称
	 * @param  
	 * @return 图层名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 获取图层的描述信息
	 * @param  
	 * @return 描述信息
	 */
	public String getDescription()
	{
		return super.getDescription_NoVirtual();
	}
	/**
	 * 设置图层的描述信息
	 * @param value 描述信息
	 */
	public void setDescription(String value)
	{
		super.setDescription_NoVirtual(value);
	}
	/**
	 * 检测图层图层是否可以编辑
	 * @param  
	 * @return 如果图层可以编辑,则返回true,反之则否
	 */
	public boolean canEdit()
	{
		return super.canEdit_NoVirtual();
	}
	/**
	 * 设置图层是否可以支持编辑
	 * @param can 如果为true,则图层可以编辑,反之则否
	 */
	public void setCanEdit(boolean can)
	{
		super.setCanEdit_NoVirtual(can);
	}
	/**
	 * 检测图层是否正在被编辑
	 * @param  
	 * @return 如果图层正在编辑则返回true,反之则否
	 */
	public boolean isEditing()
	{
		return super.isEditing_NoVirtual();
	}
	/**
	 * 设置图层是否正在编辑
	 * @param editing 如果为true,则设置图层正在编辑,反之则否
	 */
	public void setEditing(boolean editing)
	{
		super.setEditing_NoVirtual(editing);
	}
	/**
	 * 检测图层是否有效
	 * @param  
	 * @return 如果有效则返回true,反之则否
	 */
	public boolean isValid()
	{
		return super.isValid_NoVirtual();
	}
	/**
	 * 判断图层是否支持选择
	 * @param  
	 */
	public boolean isSelectable()
	{
		return super.isSelectable_NoVirtual();
	}
	/**
	 * 设置图层是否支持选择
	 * @param selectable 是否可选
	 */
	public void setSelectable(boolean selectable)
	{
		super.setSelectable_NoVirtual(selectable);
	}
	/**
	 * 检测图层绘制时是否忽略比例尺的因素
	 * @param  
	 * @return 如果忽略,则返回true,反之则否
	 */
	public boolean ignoreScale()
	{
		return super.ignoreScale_NoVirtual();
	}
	/**
	 * 设置图层的绘制是否忽略比例尺的因素
	 * @param bIgnore 是否忽略
	 */
	public void setIgnoreScale(boolean bIgnore)
	{
		super.setIgnoreScale_NoVirtual(bIgnore);
	}
	/**
	 * 获取最大显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMaxScale()
	{
		return super.getDisplayMaxScale_NoVirtual();
	}
	/**
	 * 设置最大显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMaxScale(double scale)
	{
		super.setDisplayMaxScale_NoVirtual(scale);
	}
	/**
	 * 获取最小显示比例尺
	 * @param  
	 * @return 比例尺
	 */
	public double getDisplayMinScale()
	{
		return super.getDisplayMinScale_NoVirtual();
	}
	/**
	 * 设置最小显示比例尺
	 * @param scale 比例尺
	 */
	public void setDisplayMinScale(double scale)
	{
		super.setDisplayMinScale_NoVirtual(scale);
	}
	/**
	 * 获取图层的坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		return super.getSpatialReference_NoVirtual();
	}
	/**
	 * 设置图层的坐标系统
	 * @param sr 坐标系统
	 */
	public void setSpatialReference(com.earthview.world.spatial.geometry.Ispatialreference ref_sr)
	{
		super.setSpatialReference_NoVirtual(ref_sr);
	}
	/**
	 * 设置图层的透明度
	 * @param transparent 透明值
	 */
	public void setTransparentValue(short transparent)
	{
		super.setTransparentValue_NoVirtual(transparent);
	}
	/**
	 * 获取图层的透明值
	 * @param  
	 * @return 透明值
	 */
	public short getTransparentValue()
	{
		return super.getTransparentValue_NoVirtual();
	}
	/**
	 * 获取图层的范围
	 * @param  
	 * @return 图层范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		return super.getExtent_NoVirtual();
	}
	/**
	 * 绘制图层
	 * @param display 空间显示参数
	 * @param type 绘制类型
	 */
	public boolean draw(com.earthview.world.spatial.display.Ispatialdisplay display, com.earthview.world.spatial.atlas.EVVectorLayerRendererType type)
	{
		return super.draw_NoVirtual(display, type);
	}
	/**
	 * 图层的复制,内存外部释放
	 * @param sr 参考坐标系
	 * @return 图层
	 */
	public com.earthview.world.spatial.atlas.Ilayer ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 把图层的信息保存到流中
	 * @param steam 导出流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	public String toXML()
	{
		return super.toXML_NoVirtual();
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_getTile_ev_int32_ev_int32_ev_int32_CTileData(long pNativeObject, String method);
	native protected void register_getTile_Real_Real_Real_Real_CTileData(long pNativeObject, String method);
	native protected void register_addLayer_IGlobeLayer(long pNativeObject, String method);
	native protected void register_insertLayer_ev_uint32_IGlobeLayer(long pNativeObject, String method);
	native protected void register_removeLayer_ev_uint32(long pNativeObject, String method);
	native protected void register_removeLayer_IGlobeLayer(long pNativeObject, String method);
	native protected void register_getLayerCount_void(long pNativeObject, String method);
	native protected void register_getLayerIndex_IGlobeLayer(long pNativeObject, String method);
	native protected void register_getLayer_ev_uint32(long pNativeObject, String method);
	native protected void register_getMaxLevel_void(long pNativeObject, String method);
	native protected void register_getMinLevel_void(long pNativeObject, String method);
	native protected void register_setMaxLevel_ev_int32(long pNativeObject, String method);
	native protected void register_setMinLevel_ev_int32(long pNativeObject, String method);
	native protected void register__notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register__notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getThemeStream_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real(long pNativeObject, String method);
	native protected void register_equalThemeStream_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_getSceneName_void(long pNativeObject, String method);
	native protected void register_getMinX_void(long pNativeObject, String method);
	native protected void register_getMaxX_void(long pNativeObject, String method);
	native protected void register_getMinY_void(long pNativeObject, String method);
	native protected void register_getMaxY_void(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(long pNativeObject, String method);
	native protected void register__notifyLayerAdd_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyLayerRemoved_CSceneManager(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera_LayerRefreshFactor(long pNativeObject, String method);
	native protected void register__notifyRefreshed_CCamera(long pNativeObject, String method);
	native protected void register__notifyDataChanged_EVString_EVString_CEvent(long pNativeObject, String method);
	native protected void register_getSceneManager_void(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getDataset_void(long pNativeObject, String method);
	native protected void register_getDatasetName_void(long pNativeObject, String method);
	native protected void register_getDataSource_void(long pNativeObject, String method);
	native protected void register_select_IQueryFilter_EVSelectionResultType(long pNativeObject, String method);
	native protected void register_clearSelection_void(long pNativeObject, String method);
	native protected void register_setLayerSelection_ILayerSelection(long pNativeObject, String method);
	native protected void register_getLayerSelection_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_getDescription_void(long pNativeObject, String method);
	native protected void register_setDescription_EVString(long pNativeObject, String method);
	native protected void register_canEdit_void(long pNativeObject, String method);
	native protected void register_setCanEdit_ev_bool(long pNativeObject, String method);
	native protected void register_isEditing_void(long pNativeObject, String method);
	native protected void register_setEditing_ev_bool(long pNativeObject, String method);
	native protected void register_isVisible_void(long pNativeObject, String method);
	native protected void register_setVisible_ev_bool(long pNativeObject, String method);
	native protected void register_isValid_void(long pNativeObject, String method);
	native protected void register_isSelectable_void(long pNativeObject, String method);
	native protected void register_setSelectable_ev_bool(long pNativeObject, String method);
	native protected void register_ignoreScale_void(long pNativeObject, String method);
	native protected void register_setIgnoreScale_ev_bool(long pNativeObject, String method);
	native protected void register_getDisplayMaxScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMaxScale_ev_real64(long pNativeObject, String method);
	native protected void register_getDisplayMinScale_void(long pNativeObject, String method);
	native protected void register_setDisplayMinScale_ev_real64(long pNativeObject, String method);
	native protected void register_getSpatialReference_void(long pNativeObject, String method);
	native protected void register_setSpatialReference_ISpatialReference(long pNativeObject, String method);
	native protected void register_setTransparentValue_ev_uint8(long pNativeObject, String method);
	native protected void register_getTransparentValue_void(long pNativeObject, String method);
	native protected void register_getExtent_void(long pNativeObject, String method);
	native protected void register_draw_ISpatialDisplay_EVVectorLayerRendererType(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXML_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getTile_ev_int32_ev_int32_ev_int32_CTileData(this.nativeObject.pointer, "getTile_ev_int32_ev_int32_ev_int32_CTileData_callback");
			this.register_getTile_Real_Real_Real_Real_CTileData(this.nativeObject.pointer, "getTile_Real_Real_Real_Real_CTileData_callback");
			this.register_addLayer_IGlobeLayer(this.nativeObject.pointer, "addLayer_IGlobeLayer_callback");
			this.register_insertLayer_ev_uint32_IGlobeLayer(this.nativeObject.pointer, "insertLayer_ev_uint32_IGlobeLayer_callback");
			this.register_removeLayer_ev_uint32(this.nativeObject.pointer, "removeLayer_ev_uint32_callback");
			this.register_removeLayer_IGlobeLayer(this.nativeObject.pointer, "removeLayer_IGlobeLayer_callback");
			this.register_getLayerCount_void(this.nativeObject.pointer, "getLayerCount_void_callback");
			this.register_getLayerIndex_IGlobeLayer(this.nativeObject.pointer, "getLayerIndex_IGlobeLayer_callback");
			this.register_getLayer_ev_uint32(this.nativeObject.pointer, "getLayer_ev_uint32_callback");
			this.register_getMaxLevel_void(this.nativeObject.pointer, "getMaxLevel_void_callback");
			this.register_getMinLevel_void(this.nativeObject.pointer, "getMinLevel_void_callback");
			this.register_setMaxLevel_ev_int32(this.nativeObject.pointer, "setMaxLevel_ev_int32_callback");
			this.register_setMinLevel_ev_int32(this.nativeObject.pointer, "setMinLevel_ev_int32_callback");
			this.register__notifyTileCreated_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "_notifyTileCreated_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register__notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32(this.nativeObject.pointer, "_notifyTileDestroyed_ev_uint32_ev_uint32_ev_uint32_callback");
			this.register_getThemeStream_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "getThemeStream_ev_int32_ev_int32_ev_int32_callback");
			this.register_equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real(this.nativeObject.pointer, "equalThemeStream_MemoryDataStreamPtr_ev_int32_ev_int32_ev_int32_Real_Real_Real_Real_callback");
			this.register_equalThemeStream_MemoryDataStreamPtr(this.nativeObject.pointer, "equalThemeStream_MemoryDataStreamPtr_callback");
			this.register_getSceneName_void(this.nativeObject.pointer, "getSceneName_void_callback");
			this.register_getMinX_void(this.nativeObject.pointer, "getMinX_void_callback");
			this.register_getMaxX_void(this.nativeObject.pointer, "getMaxX_void_callback");
			this.register_getMinY_void(this.nativeObject.pointer, "getMinY_void_callback");
			this.register_getMaxY_void(this.nativeObject.pointer, "getMaxY_void_callback");
			this.register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32(this.nativeObject.pointer, "getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback");
			this.register__notifyLayerAdd_CSceneManager(this.nativeObject.pointer, "_notifyLayerAdd_CSceneManager_callback");
			this.register__notifyLayerRemoved_CSceneManager(this.nativeObject.pointer, "_notifyLayerRemoved_CSceneManager_callback");
			this.register__notifyRefreshed_CCamera_LayerRefreshFactor(this.nativeObject.pointer, "_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
			this.register__notifyRefreshed_CCamera(this.nativeObject.pointer, "_notifyRefreshed_CCamera_callback");
			this.register__notifyDataChanged_EVString_EVString_CEvent(this.nativeObject.pointer, "_notifyDataChanged_EVString_EVString_CEvent_callback");
			this.register_getSceneManager_void(this.nativeObject.pointer, "getSceneManager_void_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getDataset_void(this.nativeObject.pointer, "getDataset_void_callback");
			this.register_getDatasetName_void(this.nativeObject.pointer, "getDatasetName_void_callback");
			this.register_getDataSource_void(this.nativeObject.pointer, "getDataSource_void_callback");
			this.register_select_IQueryFilter_EVSelectionResultType(this.nativeObject.pointer, "select_IQueryFilter_EVSelectionResultType_callback");
			this.register_clearSelection_void(this.nativeObject.pointer, "clearSelection_void_callback");
			this.register_setLayerSelection_ILayerSelection(this.nativeObject.pointer, "setLayerSelection_ILayerSelection_callback");
			this.register_getLayerSelection_void(this.nativeObject.pointer, "getLayerSelection_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_getDescription_void(this.nativeObject.pointer, "getDescription_void_callback");
			this.register_setDescription_EVString(this.nativeObject.pointer, "setDescription_EVString_callback");
			this.register_canEdit_void(this.nativeObject.pointer, "canEdit_void_callback");
			this.register_setCanEdit_ev_bool(this.nativeObject.pointer, "setCanEdit_ev_bool_callback");
			this.register_isEditing_void(this.nativeObject.pointer, "isEditing_void_callback");
			this.register_setEditing_ev_bool(this.nativeObject.pointer, "setEditing_ev_bool_callback");
			this.register_isVisible_void(this.nativeObject.pointer, "isVisible_void_callback");
			this.register_setVisible_ev_bool(this.nativeObject.pointer, "setVisible_ev_bool_callback");
			this.register_isValid_void(this.nativeObject.pointer, "isValid_void_callback");
			this.register_isSelectable_void(this.nativeObject.pointer, "isSelectable_void_callback");
			this.register_setSelectable_ev_bool(this.nativeObject.pointer, "setSelectable_ev_bool_callback");
			this.register_ignoreScale_void(this.nativeObject.pointer, "ignoreScale_void_callback");
			this.register_setIgnoreScale_ev_bool(this.nativeObject.pointer, "setIgnoreScale_ev_bool_callback");
			this.register_getDisplayMaxScale_void(this.nativeObject.pointer, "getDisplayMaxScale_void_callback");
			this.register_setDisplayMaxScale_ev_real64(this.nativeObject.pointer, "setDisplayMaxScale_ev_real64_callback");
			this.register_getDisplayMinScale_void(this.nativeObject.pointer, "getDisplayMinScale_void_callback");
			this.register_setDisplayMinScale_ev_real64(this.nativeObject.pointer, "setDisplayMinScale_ev_real64_callback");
			this.register_getSpatialReference_void(this.nativeObject.pointer, "getSpatialReference_void_callback");
			this.register_setSpatialReference_ISpatialReference(this.nativeObject.pointer, "setSpatialReference_ISpatialReference_callback");
			this.register_setTransparentValue_ev_uint8(this.nativeObject.pointer, "setTransparentValue_ev_uint8_callback");
			this.register_getTransparentValue_void(this.nativeObject.pointer, "getTransparentValue_void_callback");
			this.register_getExtent_void(this.nativeObject.pointer, "getExtent_void_callback");
			this.register_draw_ISpatialDisplay_EVVectorLayerRendererType(this.nativeObject.pointer, "draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXML_void(this.nativeObject.pointer, "toXML_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static FeatureGroupLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FeatureGroupLayer obj = null;
 		if(baseObj instanceof FeatureGroupLayer)
		{
			obj = (FeatureGroupLayer)baseObj;
		} else {
			obj = new FeatureGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFeatureGroupLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
