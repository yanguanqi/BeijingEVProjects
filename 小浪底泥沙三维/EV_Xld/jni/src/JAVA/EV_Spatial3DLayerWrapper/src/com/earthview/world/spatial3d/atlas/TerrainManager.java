package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地形管理器管理地形
 */
public class TerrainManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTerrainManager", new TerrainManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTerrainManagerProxy", new TerrainManagerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public TerrainManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTerrainManagerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.TerrainManager".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private boolean addTerrainLayer_ITerrainLayer(long pNativeObject, long ref_pLayer);
	/**
	 * 添加Terrain图层					
	 * @param pLayer 地形图层
	 * @return 是否成功
	 */
	public boolean addTerrainLayer(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pLayer)
	{
		long ref_pLayerParamValue = (ref_pLayer == null ? 0L : ref_pLayer.nativeObject.pointer);
		boolean returnValue = addTerrainLayer_ITerrainLayer(this.nativeObject.pointer, ref_pLayerParamValue);
		return returnValue;
	}
	native private boolean insertTerrainLayer_ev_uint32_ITerrainLayer(long pNativeObject, long pos, long ref_pLayer);
	/**
	 * 插入Terrain图层
	 * @param pLayer 地形图层
	 * @return 是否成功
	 */
	public boolean insertTerrainLayer(long pos, com.earthview.world.spatial3d.atlas.Iterrainlayer ref_pLayer)
	{
		long posParamValue = pos;
		long ref_pLayerParamValue = (ref_pLayer == null ? 0L : ref_pLayer.nativeObject.pointer);
		boolean returnValue = insertTerrainLayer_ev_uint32_ITerrainLayer(this.nativeObject.pointer, posParamValue, ref_pLayerParamValue);
		return returnValue;
	}
	native private boolean removeTerrainLayer_ITerrainLayer(long pNativeObject, long pLayer);
	/**
	 * 删除Terrain图层
	 * @param pLayer 地形图层
	 * @return 是否成功
	 */
	public boolean removeTerrainLayer(com.earthview.world.spatial3d.atlas.Iterrainlayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		boolean returnValue = removeTerrainLayer_ITerrainLayer(this.nativeObject.pointer, pLayerParamValue);
		return returnValue;
	}
	native private boolean moveTerrainLayer_ev_uint32_ev_uint32(long pNativeObject, long index, long toWhere);
	/**
	 * 移动Terrain图层!!!index和toWhere从0开始索引
	 * @param index 开始索引
	 * @param toWhere 目标索引
	 * @return 是否成功
	 */
	public boolean moveTerrainLayer(long index, long toWhere)
	{
		long indexParamValue = index;
		long toWhereParamValue = toWhere;
		boolean returnValue = moveTerrainLayer_ev_uint32_ev_uint32(this.nativeObject.pointer, indexParamValue, toWhereParamValue);
		return returnValue;
	}
	native private void clearTerrainLayers_void(long pNativeObject);
	/**
	 * 清除地形图层
	 * @param  
	 */
	public void clearTerrainLayers()
	{
		clearTerrainLayers_void(this.nativeObject.pointer);
	}
	native private long getTerrainLayerCount_void(long pNativeObject);
	/**
	 * 获取地形图层数量
	 * @param  
	 * @return 地形图层数量
	 */
	public long getTerrainLayerCount()
	{
		long returnValue = getTerrainLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getTerrainLayerIndex_ITerrainLayer(long pNativeObject, long pLayer);
	/**
	 * 获取地形图层的索引
	 * @param  
	 * @return 索引
	 */
	public int getTerrainLayerIndex(com.earthview.world.spatial3d.atlas.Iterrainlayer pLayer)
	{
		long pLayerParamValue = (pLayer == null ? 0L : pLayer.nativeObject.pointer);
		int returnValue = getTerrainLayerIndex_ITerrainLayer(this.nativeObject.pointer, pLayerParamValue);
		return returnValue;
	}
	native private long getTerrainLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 通过索引获取地形图层
	 * @param  
	 * @return 地形图层
	 */
	public com.earthview.world.spatial3d.atlas.Iterrainlayer getTerrainLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getTerrainLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.Iterrainlayer __returnValue = new com.earthview.world.spatial3d.atlas.Iterrainlayer(CreatedWhenConstruct.CWC_NotToCreate, "ITerrainLayer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.Iterrainlayer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ITerrainLayer");
		}
		return __returnValue;
	}
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, long altitude);
	/**
	 * 通过经纬度获取高程
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param targetSamplesPerDegrees 每度采样数
	 * @param altitude 高程
	 * @return EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功
	 */
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, int source, long altitude);
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		int sourceParamValue = source.getValue();
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, sourceParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, int source, int maxLivel, long altitude);
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, int maxLivel, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		int sourceParamValue = source.getValue();
		int maxLivelParamValue = maxLivel;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private boolean getBestHeightAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, long altitude);
	/**
	 * 获取当前缓存中最高级别的高程
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 高程
	 * @return 是否成功
	 */
	public boolean getBestHeightAt(double latitude, double longitude, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getBestHeightAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
	}
	protected  boolean getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double latitude, double longitude, double preTileResolution, long altitude, long tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double preTileResolutionParamValue = preTileResolution;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		DoublePointer tileResolutionParamValue = new DoublePointer(new InstancePointer(tileResolution));
		boolean returnValue = getBestHeightAt(latitudeParamValue, longitudeParamValue, preTileResolutionParamValue, altitudeParamValue, tileResolutionParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double preTileResolution, long altitude, long tileResolution);
	/**
	 * 获取当前缓存中最高级别的高程
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param preTileResolution 已经获取到的高程瓦片的分辨率
	 * @param altitude 高程
	 * @param tileResolution 瓦片的分辨率
	 * @return 是否成功
	 */
	public boolean getBestHeightAt(double latitude, double longitude, double preTileResolution, DoublePointer altitude, DoublePointer tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double preTileResolutionParamValue = preTileResolution;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long tileResolutionParamValue = tileResolution.nativeObject.pointer;
		boolean returnValue = getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, preTileResolutionParamValue, altitudeParamValue, tileResolutionParamValue);
		return returnValue;
	}
	native private boolean getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, double preTileResolution, long altitude, long tileResolution);
	protected boolean getBestHeightAt_NoVirtual(double latitude, double longitude, double preTileResolution, DoublePointer altitude, DoublePointer tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double preTileResolutionParamValue = preTileResolution;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long tileResolutionParamValue = tileResolution.nativeObject.pointer;
		boolean returnValue = getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, preTileResolutionParamValue, altitudeParamValue, tileResolutionParamValue);
		return returnValue;
	}

	native private long getTerrain_ev_int32_ev_int32_ev_int32(long pNativeObject, int row, int col, int level);
	/**
	 * 获取高程信息流
	 * @param row 行号
	 * @param col 列号
	 * @param level 级别
	 * @return 高程信息流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getTerrain(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrain_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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
	native private long getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32(long pNativeObject, int row, int col, int level);
	public com.earthview.world.core.MemoryDataStreamPtr getTerrainFromMemoryCache(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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
	native private long getTerrainFromDBCache_ev_int32_ev_int32_ev_int32(long pNativeObject, int row, int col, int level);
	public com.earthview.world.core.MemoryDataStreamPtr getTerrainFromDBCache(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrainFromDBCache_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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
	native private long getTerrainFromServer_ev_int32_ev_int32_ev_int32(long pNativeObject, int row, int col, int level);
	public com.earthview.world.core.MemoryDataStreamPtr getTerrainFromServer(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrainFromServer_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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
	public TerrainManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TerrainManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
		}
	}
	
	public static TerrainManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TerrainManager obj = null;
 		if(baseObj instanceof TerrainManager)
		{
			obj = (TerrainManager)baseObj;
		} else {
			obj = new TerrainManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTerrainManager");
			obj.increaseCast();
		}

		return obj;
	}
}
