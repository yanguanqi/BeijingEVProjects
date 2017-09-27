package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 地形图层管理地形
 */
public class Iterrainlayer extends com.earthview.world.spatial3d.atlas.Iglobelayer {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::ITerrainLayer", new IterrainlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::JITerrainLayerProxy", new IterrainlayerClassFactory());
	}

	public enum TerrainDataSource implements INativeEnum<TerrainDataSource> {
		TDS_Default(TerrainDataSourceHelper.ENUM_VALUES[0]),
		TDS_DefaultCache(TerrainDataSourceHelper.ENUM_VALUES[1]),
		TDS_MemoryCache(TerrainDataSourceHelper.ENUM_VALUES[2]),
		TDS_DBCache(TerrainDataSourceHelper.ENUM_VALUES[3]),
		TDS_Server(TerrainDataSourceHelper.ENUM_VALUES[4]);
		private int value;
		TerrainDataSource(int i) {
			this.value = i;
		}
		public TerrainDataSource getEnum(int val) {
			return toEnum(val);
		}
		public int getValue() {
			return this.value;
		}
		public static final TerrainDataSource toEnum(int retval) {
			if(retval == TDS_Default.value){
				return TDS_Default;
			}
			else if(retval == TDS_DefaultCache.value){
				return TDS_DefaultCache;
			}
			else if(retval == TDS_MemoryCache.value){
				return TDS_MemoryCache;
			}
			else if(retval == TDS_DBCache.value){
				return TDS_DBCache;
			}
			else if(retval == TDS_Server.value){
				return TDS_Server;
			}
			throw new RuntimeException("wrong number in jni call for an enum!");
		}
	}
	static class TerrainDataSourceHelper {
		public static final int[] ENUM_VALUES = getEnumValues();
		private static native int[] getEnumValues();
	}
	
	protected  int getHeightAt_ev_real64_ev_real64_ev_real64_callback(double latitude, double longitude, long altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, altitudeParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getHeightAt_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, long altitude);
	/**
	 * 获取高程
	 * @param latitude 纬度
	 * @param longitude 经度
	 * @param altitude 高程
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

	protected  int getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback(double latitude, double longitude, int source, long altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource sourceParamValue = com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource.toEnum(source);
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, sourceParamValue, altitudeParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
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

	protected  int getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback(double latitude, double longitude, int source, int maxLivel, long altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource sourceParamValue = com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource.toEnum(source);
		int maxLivelParamValue = maxLivel;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
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

	protected  int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback(double latitude, double longitude, double targetSamplesPerDegrees, long altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, altitudeParamValue);
		int __returnValue = returnValue.getValue();
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

	protected  int getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback(double latitude, double longitude, double targetSamplesPerDegrees, int source, long altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource sourceParamValue = com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource.toEnum(source);
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, sourceParamValue, altitudeParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
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

	protected  int getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback(double latitude, double longitude, double targetSamplesPerDegrees, int source, int maxLivel, long altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource sourceParamValue = com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource.toEnum(source);
		int maxLivelParamValue = maxLivel;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
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

	protected  int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, long altitude, long tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		double preTileResolutionParamValue = preTileResolution;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		DoublePointer tileResolutionParamValue = new DoublePointer(new InstancePointer(tileResolution));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, preTileResolutionParamValue, altitudeParamValue, tileResolutionParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(long pNativeObject, double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, long altitude, long tileResolution);
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

	protected  int getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback(double latitude, double longitude, double targetSamplesPerDegrees, double preTileResolution, int source, int maxLivel, long altitude, long tileResolution)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		double targetSamplesPerDegreesParamValue = targetSamplesPerDegrees;
		double preTileResolutionParamValue = preTileResolution;
		com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource sourceParamValue = com.earthview.world.spatial3d.atlas.Iterrainlayer.TerrainDataSource.toEnum(source);
		int maxLivelParamValue = maxLivel;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		DoublePointer tileResolutionParamValue = new DoublePointer(new InstancePointer(tileResolution));
		com.earthview.world.spatial3d.atlas.AltitudeStatus returnValue = getHeightAt(latitudeParamValue, longitudeParamValue, targetSamplesPerDegreesParamValue, preTileResolutionParamValue, sourceParamValue, maxLivelParamValue, altitudeParamValue, tileResolutionParamValue);
		int __returnValue = returnValue.getValue();
		return __returnValue;
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

	protected  boolean getBestHeightAt_ev_real64_ev_real64_ev_real64_callback(double latitude, double longitude, long altitude)
	{
		double latitudeParamValue = latitude;
		double longitudeParamValue = longitude;
		DoublePointer altitudeParamValue = new DoublePointer(new InstancePointer(altitude));
		boolean returnValue = getBestHeightAt(latitudeParamValue, longitudeParamValue, altitudeParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
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

	protected  long getTerrain_ev_int32_ev_int32_ev_int32_callback(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		com.earthview.world.core.MemoryDataStreamPtr returnValue = getTerrain(rowParamValue, colParamValue, levelParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
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
	native private long getTerrain_ev_int32_ev_int32_ev_int32_NoVirtual(long pNativeObject, int row, int col, int level);
	protected com.earthview.world.core.MemoryDataStreamPtr getTerrain_NoVirtual(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		long returnValue = getTerrain_ev_int32_ev_int32_ev_int32_NoVirtual(this.nativeObject.pointer, rowParamValue, colParamValue, levelParamValue);
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

	protected  long getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		com.earthview.world.core.MemoryDataStreamPtr returnValue = getTerrainFromMemoryCache(rowParamValue, colParamValue, levelParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		com.earthview.world.core.MemoryDataStreamPtr returnValue = getTerrainFromDBCache(rowParamValue, colParamValue, levelParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	protected  long getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback(int row, int col, int level)
	{
		int rowParamValue = row;
		int colParamValue = col;
		int levelParamValue = level;
		com.earthview.world.core.MemoryDataStreamPtr returnValue = getTerrainFromServer(rowParamValue, colParamValue, levelParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
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

	native private String getName_void(long pNativeObject);
	/**
	 * 获取图层的名称
	 * @param  
	 * @return 图层的名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置图层的名称
	 * @param name 图层的名称
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

	native private String getDescription_void(long pNativeObject);
	/**
	 * 获取图层的描述信息
	 * @param  
	 * @return 图层的描述信息
	 */
	public String getDescription()
	{
		String returnValue = getDescription_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getDescription_void_NoVirtual(long pNativeObject);
	protected String getDescription_NoVirtual()
	{
		String returnValue = getDescription_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDescription_EVString(long pNativeObject, String value);
	/**
	 * 设置图层的描述信息
	 * @param value 图层的描述信息
	 */
	public void setDescription(String value)
	{
		String valueParamValue = value;
		setDescription_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private void setDescription_EVString_NoVirtual(long pNativeObject, String value);
	protected void setDescription_NoVirtual(String value)
	{
		String valueParamValue = value;
		setDescription_EVString_NoVirtual(this.nativeObject.pointer, valueParamValue);
	}

	native private long getExtent_void(long pNativeObject);
	/**
	 * 获取图层的范围
	 * @param  
	 * @return 图层范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getExtent()
	{
		long returnValue = getExtent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getExtent_NoVirtual()
	{
		long returnValue = getExtent_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private long getSpatialReference_void(long pNativeObject);
	/**
	 * 获取图层的坐标系统
	 * @param  
	 * @return 坐标系统
	 */
	public com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference()
	{
		long returnValue = getSpatialReference_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}
	native private long getSpatialReference_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ispatialreference getSpatialReference_NoVirtual()
	{
		long returnValue = getSpatialReference_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ispatialreference __returnValue = new com.earthview.world.spatial.geometry.Ispatialreference(CreatedWhenConstruct.CWC_NotToCreate, "ISpatialReference");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ispatialreference)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISpatialReference");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 序列化成流
	 * @param stream 流
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private String toXML_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @param  
	 * @return xml文本
	 */
	public String toXML()
	{
		String returnValue = toXML_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toXML_void_NoVirtual(long pNativeObject);
	protected String toXML_NoVirtual()
	{
		String returnValue = toXML_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 序列化成xml文本
	 * @param  
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

	protected  int getMaxLevel_void_callback()
	{
		int returnValue = getMaxLevel();
		int __returnValue = returnValue;
		return __returnValue;
	}

	native private int getMaxLevel_void(long pNativeObject);
	/**
	 * 获取最大级别
	 * @param  
	 * @return 最大级别
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
	 * 获取最小级别
	 * @param  
	 * @return 最小级别
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

	protected  void setMaxLevel_ev_int32_callback(int maxLevel)
	{
		int maxLevelParamValue = maxLevel;
		setMaxLevel(maxLevelParamValue);
	}

	native private void setMaxLevel_ev_int32(long pNativeObject, int maxLevel);
	/**
	 * 设置最大级别
	 * @param  
	 */
	public void setMaxLevel(int maxLevel)
	{
		int maxLevelParamValue = maxLevel;
		setMaxLevel_ev_int32(this.nativeObject.pointer, maxLevelParamValue);
	}
	native private void setMaxLevel_ev_int32_NoVirtual(long pNativeObject, int maxLevel);
	protected void setMaxLevel_NoVirtual(int maxLevel)
	{
		int maxLevelParamValue = maxLevel;
		setMaxLevel_ev_int32_NoVirtual(this.nativeObject.pointer, maxLevelParamValue);
	}

	protected  void setMinLevel_ev_int32_callback(int minLevel)
	{
		int minLevelParamValue = minLevel;
		setMinLevel(minLevelParamValue);
	}

	native private void setMinLevel_ev_int32(long pNativeObject, int minLevel);
	/**
	 * 设置最小级别
	 * @param  
	 */
	public void setMinLevel(int minLevel)
	{
		int minLevelParamValue = minLevel;
		setMinLevel_ev_int32(this.nativeObject.pointer, minLevelParamValue);
	}
	native private void setMinLevel_ev_int32_NoVirtual(long pNativeObject, int minLevel);
	protected void setMinLevel_NoVirtual(int minLevel)
	{
		int minLevelParamValue = minLevel;
		setMinLevel_ev_int32_NoVirtual(this.nativeObject.pointer, minLevelParamValue);
	}

	protected  int getSrs_void_callback()
	{
		com.earthview.world.spatial3d.atlas.LAYERSRS returnValue = getSrs();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getSrs_void(long pNativeObject);
	/**
	 * 获取参考系类型
	 * @param  
	 * @return 参考系类型
	 */
	public com.earthview.world.spatial3d.atlas.LAYERSRS getSrs()
	{
		int returnValue = getSrs_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.atlas.LAYERSRS.toEnum(returnValue);
	}
	native private int getSrs_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial3d.atlas.LAYERSRS getSrs_NoVirtual()
	{
		int returnValue = getSrs_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.atlas.LAYERSRS.toEnum(returnValue);
	}

	native private double getMinX_void(long pNativeObject);
	/**
	 * 获取包围盒在X轴上最小值
	 * @param  
	 * @return 包围盒在X轴上最小值
	 */
	public double getMinX()
	{
		double returnValue = getMinX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinX_void_NoVirtual(long pNativeObject);
	protected double getMinX_NoVirtual()
	{
		double returnValue = getMinX_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMaxX_void(long pNativeObject);
	/**
	 * 获取包围盒在X轴上最大值
	 * @param  
	 * @return 包围盒在X轴上最大值
	 */
	public double getMaxX()
	{
		double returnValue = getMaxX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxX_void_NoVirtual(long pNativeObject);
	protected double getMaxX_NoVirtual()
	{
		double returnValue = getMaxX_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMinY_void(long pNativeObject);
	/**
	 * 获取包围盒在Y轴上最小值
	 * @param  
	 * @return 包围盒在Y轴上最小值
	 */
	public double getMinY()
	{
		double returnValue = getMinY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMinY_void_NoVirtual(long pNativeObject);
	protected double getMinY_NoVirtual()
	{
		double returnValue = getMinY_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private double getMaxY_void(long pNativeObject);
	/**
	 * 获取包围盒在Y轴上最大值
	 * @param  
	 * @return 包围盒在Y轴上最大值
	 */
	public double getMaxY()
	{
		double returnValue = getMaxY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private double getMaxY_void_NoVirtual(long pNativeObject);
	protected double getMaxY_NoVirtual()
	{
		double returnValue = getMaxY_void_NoVirtual(this.nativeObject.pointer);
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

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从流恢复图层参数
	 * @param stream 流
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public Iterrainlayer(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Iterrainlayer(CreatedWhenConstruct cwc, String classNameStr) {
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
	/**
	 * 数据集更新事件的通知
	 * @param strDatasetName 数据集名称
	 */
	public void _notifyDataChanged(String strDataSourceName, String strDatasetName, com.earthview.world.core.Event pEvent)
	{
		super._notifyDataChanged_NoVirtual(strDataSourceName, strDatasetName, pEvent);
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
	 * 检测图层是否可视
	 * @param  
	 * @return 如果图层可视则返回true,反之则否
	 */
	public boolean isVisible()
	{
		return super.isVisible_NoVirtual();
	}
	/**
	 * 设置图层是否可视
	 * @param visible 如果为true,则图层可视,反之则否
	 */
	public void setVisible(boolean visible)
	{
		super.setVisible_NoVirtual(visible);
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
	
	public static Iterrainlayer fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Iterrainlayer obj = null;
 		if(baseObj instanceof Iterrainlayer)
		{
			obj = (Iterrainlayer)baseObj;
		} else {
			obj = new Iterrainlayer(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ITerrainLayer");
			obj.increaseCast();
		}

		return obj;
	}
}
