package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * CTerrainGroupLayer(高程图层组)管理以下图层:高程图层CTerrainLayer嵌套的CTerrainGroupLayer				
 */
public class TerrainGroupLayer extends com.earthview.world.spatial3d.atlas.Iterrainlayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayer", new TerrainGroupLayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JCTerrainGroupLayerProxy", new TerrainGroupLayerClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public TerrainGroupLayer() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCTerrainGroupLayerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.TerrainGroupLayer".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	/**
	 * 构造函数
	 * @param name 图层名
	 */
	public TerrainGroupLayer(String name) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer namePtr = new BasePointer(name);
		list.add("name", namePtr.get());
		Create("JCTerrainGroupLayerProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3d.atlas.TerrainGroupLayer".equals(this.getClass().getName()))
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

	native private long getTerrain_ev_int32_ev_int32_ev_int32(long pNativeObject, int level, int row, int col);
	/**
	 * 通过行列号获取高程
	 * @param level 网格级数
	 * @param row 行号
	 * @param col 列号
	 * @return 高程流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getTerrain(int level, int row, int col)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long returnValue = getTerrain_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
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
	native private long getTerrain_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int level, int row, int col);
	protected com.earthview.world.core.MemoryDataStreamPtr getTerrain_NoVirtual(int level, int row, int col)
	{
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		long returnValue = getTerrain_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, levelParamValue, rowParamValue, colParamValue);
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
	native private long getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int row, int col, int level);
	protected com.earthview.world.core.MemoryDataStreamPtr getTerrainFromMemoryCache_NoVirtual(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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
	native private long getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int row, int col, int level);
	protected com.earthview.world.core.MemoryDataStreamPtr getTerrainFromDBCache_NoVirtual(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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
	native private long getTerrainFromServer_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int row, int col, int level);
	protected com.earthview.world.core.MemoryDataStreamPtr getTerrainFromServer_NoVirtual(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrainFromServer_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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

	native private int getHeightAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, long altitude);
	/**
	 * 通过经纬度获取高程
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param targetSamplesPerDegrees 每度采样数
	 * @param preTileResolution 已经获取到的高程瓦片的分辨率
	 * @param altitude 高程
	 * @param tileResolution 瓦片的分辨率
	 * @return EarthView::World::Spatial3D::Atlas::AltitudeStatus类型的枚举，是否成功
	 */
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, long altitude);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}

	native private int getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64(long pNativeObject, double latitude, double longitude, int source, long altitude);
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		int sourceParamValue = source.getValue();
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, sourceParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, int source, long altitude);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		int sourceParamValue = source.getValue();
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, sourceParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}

	native private int getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(long pNativeObject, double latitude, double longitude, int source, int maxLivel, long altitude);
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, int maxLivel, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		int sourceParamValue = source.getValue();
		int maxLivelParamValue = maxLivel;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, int source, int maxLivel, long altitude);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, int maxLivel, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		int sourceParamValue = source.getValue();
		int maxLivelParamValue = maxLivel;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}

	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, long altitude);
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, long altitude);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, altitudeParamValue);
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
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, int source, long altitude);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		int sourceParamValue = source.getValue();
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, sourceParamValue, altitudeParamValue);
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
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, int source, int maxLivel, long altitude);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, int maxLivel, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		int sourceParamValue = source.getValue();
		int maxLivelParamValue = maxLivel;
		long altitudeParamValue = altitude.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}

	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, long altitude, long tileResolution);
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, DoublePointer altitude, DoublePointer tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		double preTileResolutionParamValue = preTileResolution;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long tileResolutionParamValue = tileResolution.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, preTileResolutionParamValue, altitudeParamValue, tileResolutionParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, long altitude, long tileResolution);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, DoublePointer altitude, DoublePointer tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		double preTileResolutionParamValue = preTileResolution;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long tileResolutionParamValue = tileResolution.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, preTileResolutionParamValue, altitudeParamValue, tileResolutionParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}

	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, int source, int maxLivel, long altitude, long tileResolution);
	public com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, int maxLivel, DoublePointer altitude, DoublePointer tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		double preTileResolutionParamValue = preTileResolution;
		int sourceParamValue = source.getValue();
		int maxLivelParamValue = maxLivel;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long tileResolutionParamValue = tileResolution.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, preTileResolutionParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue, tileResolutionParamValue);
		return com.earthview.world.spatial3d.atlas.AltitudeStatus.toEnum(returnValue);
	}
	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, int source, int maxLivel, long altitude, long tileResolution);
	protected com.earthview.world.spatial3d.atlas.AltitudeStatus getHeightAt_NoVirtual(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource source, int maxLivel, DoublePointer altitude, DoublePointer tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		double preTileResolutionParamValue = preTileResolution;
		int sourceParamValue = source.getValue();
		int maxLivelParamValue = maxLivel;
		long altitudeParamValue = altitude.nativeObject.pointer;
		long tileResolutionParamValue = tileResolution.nativeObject.pointer;
		int returnValue = getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, preTileResolutionParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue, tileResolutionParamValue);
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
	native private boolean getBestHeightAt_ev_real64_ev_real64_ev_real64_NoVirtual(long pNativeObject, double latitude, double longitude, long altitude);
	protected boolean getBestHeightAt_NoVirtual(double latitude, double longitude, DoublePointer altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		long altitudeParamValue = altitude.nativeObject.pointer;
		boolean returnValue = getBestHeightAt_ev_real64_ev_real64_ev_real64_NoVirtual(this.nativeObject.pointer, latitudeParamValue, longitudeParamValue, altitudeParamValue);
		return returnValue;
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

	native private void _notifyLayerAdd_CSceneManager(long pNativeObject, long pSceneMgr);
	/**
	 * Globe加载一个图层之后调用的函数
	 * @param  
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
	 * Globe卸载一个图层之后调用的函数
	 * @param  
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

	native private boolean addLayer_ITerrainLayer(long pNativeObject, long ref_layer);
	/**
	 * /添加一个EarthView::World::Spatial3D::Atlas::ITerrainLayer图层/
	 * @param layer EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
	 */
	public boolean addLayer(com.earthview.world.spatial3d.atlas.Iterrainlayer ref_layer)
	{
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = addLayer_ITerrainLayer(this.nativeObject.pointer, ref_layerParamValue);
		return returnValue;
	}
	native private boolean insertLayer_ev_uint32_ITerrainLayer(long pNativeObject, long pos, long ref_layer);
	/**
	 * 插入一个EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
	 * @param layer EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
	 */
	public boolean insertLayer(long pos, com.earthview.world.spatial3d.atlas.Iterrainlayer ref_layer)
	{
		long posParamValue = pos;
		long ref_layerParamValue = (ref_layer == null ? 0L : ref_layer.nativeObject.pointer);
		boolean returnValue = insertLayer_ev_uint32_ITerrainLayer(this.nativeObject.pointer, posParamValue, ref_layerParamValue);
		return returnValue;
	}
	native private boolean removeLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 删除图层
	 * @param index 索引
	 * @return 是否成功
	 */
	public boolean removeLayer(long index)
	{
		long indexParamValue = index;
		boolean returnValue = removeLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	protected  boolean removeLayer_ITerrainLayer_callback(long layer)
	{
		com.earthview.world.spatial3d.atlas.Iterrainlayer layerParamValue = (layer == 0L ? null : new com.earthview.world.spatial3d.atlas.Iterrainlayer(CreatedWhenConstruct.CWC_NotToCreate));
		if(layerParamValue != null)
		{
		layerParamValue.setDelegate(true);
		layerParamValue.setInstancePointer(new InstancePointer(layer));
		IClassFactory layerParamValueClassFactory = GlobalClassFactoryMap.get(layerParamValue.getCppInstanceTypeName());
		if (layerParamValueClassFactory != null)
		{
			layerParamValue.setDelegate(true);
			layerParamValue = (com.earthview.world.spatial3d.atlas.Iterrainlayer)layerParamValueClassFactory.create();
			layerParamValue.setDelegate(true);
			layerParamValue.setInstancePointer(new InstancePointer(layer));
		}
		}
		boolean returnValue = removeLayer(layerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean removeLayer_ITerrainLayer(long pNativeObject, long layer);
	/**
	 * 删除图层
	 * @param layer 图层
	 * @return 是否成功
	 */
	public boolean removeLayer(com.earthview.world.spatial3d.atlas.Iterrainlayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = removeLayer_ITerrainLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private boolean removeLayer_ITerrainLayer_NoVirtual(long pNativeObject, long layer);
	protected boolean removeLayer_NoVirtual(com.earthview.world.spatial3d.atlas.Iterrainlayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		boolean returnValue = removeLayer_ITerrainLayer_NoVirtual(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}

	native private long getLayerCount_void(long pNativeObject);
	/**
	 * 获取EarthView::World::Spatial3D::Atlas::ITerrainLayer的数量
	 * @param  
	 * @return EarthView::World::Spatial3D::Atlas::ITerrainLayer的数量
	 */
	public long getLayerCount()
	{
		long returnValue = getLayerCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getLayerIndex_ITerrainLayer(long pNativeObject, long layer);
	/**
	 * 获取EarthView::World::Spatial3D::Atlas::ITerrainLayer的索引
	 * @param layer EarthView::World::Spatial3D::Atlas::ITerrainLayer图层
	 * @return EarthView::World::Spatial3D::Atlas::ITerrainLayer的索引
	 */
	public int getLayerIndex(com.earthview.world.spatial3d.atlas.Iterrainlayer layer)
	{
		long layerParamValue = (layer == null ? 0L : layer.nativeObject.pointer);
		int returnValue = getLayerIndex_ITerrainLayer(this.nativeObject.pointer, layerParamValue);
		return returnValue;
	}
	native private long getLayer_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取高程图层或者图层组调用返回对象的getType方法，得到与EarthView::World::Spatial::Atlas::EVLayerType枚举值对应的整形值，然后强转成具体的图层类
	 * @param index 索引
	 */
	public com.earthview.world.spatial3d.atlas.Iterrainlayer getLayer(long index)
	{
		long indexParamValue = index;
		long returnValue = getLayer_ev_uint32(this.nativeObject.pointer, indexParamValue);
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
	native private long toXmlElement_void(long pNativeObject);
	/// 序列化成xml文本
	/// </summary>
	/// <param name=""></param>   
	/// <returns></returns>					
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

	native private boolean isVisible_void(long pNativeObject);
	/**
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
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

	public TerrainGroupLayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public TerrainGroupLayer(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取最大级别
	 * @param  
	 * @return 最大级别
	 */
	public int getMaxLevel()
	{
		return super.getMaxLevel_NoVirtual();
	}
	/**
	 * 获取最小级别
	 * @param  
	 * @return 最小级别
	 */
	public int getMinLevel()
	{
		return super.getMinLevel_NoVirtual();
	}
	/**
	 * 设置最大级别
	 * @param  
	 */
	public void setMaxLevel(int maxLevel)
	{
		super.setMaxLevel_NoVirtual(maxLevel);
	}
	/**
	 * 设置最小级别
	 * @param  
	 */
	public void setMinLevel(int minLevel)
	{
		super.setMinLevel_NoVirtual(minLevel);
	}
	/**
	 * 获取参考系类型
	 * @param  
	 * @return 参考系类型
	 */
	public com.earthview.world.spatial3d.atlas.LAYERSRS getSrs()
	{
		return super.getSrs_NoVirtual();
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
	/**
	 * 根据经纬度和级别获取高程
	 * @param lat 纬度
	 * @param lon 经度
	 * @param targetSamplesPerDegrees 每度采样数，-1表示最高精度
	 */
	public boolean getHeightAt(float lat, float lon, float targetSamplesPerDegrees, FloatPointer height)
	{
		return super.getHeightAt_NoVirtual(lat, lon, targetSamplesPerDegrees, height);
	}
	/**
	 * Globe刷新时调用的函数
	 * @param camera 当前的相机
	 * @param level 当前的级别
	 * @param force 是否为强制刷新
	 */
	public void _notifyRefreshed(com.earthview.world.graphic.Camera camera, com.earthview.world.spatial3d.atlas.LayerRefreshFactor updateType)
	{
		super._notifyRefreshed_NoVirtual(camera, updateType);
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
	 * 清空图层选择
	 * @param  
	 */
	public void clearSelection()
	{
		super.clearSelection_NoVirtual();
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
	 * 设置图层的名称
	 * @param name 图层名称
	 */
	public void setName(String name)
	{
		super.setName_NoVirtual(name);
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
	
	native protected void register_removeLayer_ITerrainLayer(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getBestHeightAt_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, String method);
	native protected void register_getTerrain_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_getTerrainFromDBCache_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_getTerrainFromServer_ev_int32_ev_int32_ev_int32(long pNativeObject, String method);
	native protected void register_getMaxLevel_void(long pNativeObject, String method);
	native protected void register_getMinLevel_void(long pNativeObject, String method);
	native protected void register_setMaxLevel_ev_int32(long pNativeObject, String method);
	native protected void register_setMinLevel_ev_int32(long pNativeObject, String method);
	native protected void register_getSrs_void(long pNativeObject, String method);
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
			this.register_removeLayer_ITerrainLayer(this.nativeObject.pointer, "removeLayer_ITerrainLayer_callback");
			this.register_getHeightAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_ev_real64_callback");
			this.register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback");
			this.register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback");
			this.register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback");
			this.register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback");
			this.register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64(this.nativeObject.pointer, "getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback");
			this.register_getBestHeightAt_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getBestHeightAt_ev_real64_ev_real64_ev_real64_callback");
			this.register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(this.nativeObject.pointer, "getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
			this.register_getTerrain_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "getTerrain_ev_int32_ev_int32_ev_int32_callback");
			this.register_getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback");
			this.register_getTerrainFromDBCache_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback");
			this.register_getTerrainFromServer_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, "getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback");
			this.register_getMaxLevel_void(this.nativeObject.pointer, "getMaxLevel_void_callback");
			this.register_getMinLevel_void(this.nativeObject.pointer, "getMinLevel_void_callback");
			this.register_setMaxLevel_ev_int32(this.nativeObject.pointer, "setMaxLevel_ev_int32_callback");
			this.register_setMinLevel_ev_int32(this.nativeObject.pointer, "setMinLevel_ev_int32_callback");
			this.register_getSrs_void(this.nativeObject.pointer, "getSrs_void_callback");
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
	
	public static TerrainGroupLayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		TerrainGroupLayer obj = null;
 		if(baseObj instanceof TerrainGroupLayer)
		{
			obj = (TerrainGroupLayer)baseObj;
		} else {
			obj = new TerrainGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CTerrainGroupLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
