package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheDatasetDir extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CCacheDatasetDir", new CacheDatasetDirClassFactory());
	}

	public CacheDatasetDir() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCacheDatasetDir", null);
	}

	native private static String calcImageTileCacheFilePath_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32(int tilemode, String layerPath, int level, int row, int col);
	/// 通过级别行列号以及缓存文件目录得到缓存文件的完整路径，一个库文件，一个表格。
	public static String calcImageTileCacheFilePath(com.earthview.world.spatial.EVTileModeType tilemode, String layerPath, int level, int row, int col)
	{
		int tilemodeParamValue = tilemode.getValue();
		String layerPathParamValue = layerPath;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		String returnValue = calcImageTileCacheFilePath_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32(tilemodeParamValue, layerPathParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}
	native private static String calcDemCacheFilePath_EVString_ev_int32_ev_int32_ev_int32(String layerPath, int level, int row, int col);
	/// 通过级别行列号和缓文件存目录得到缓存文件的完整路径，一个库文件，一个表格。
	public static String calcDemCacheFilePath(String layerPath, int level, int row, int col)
	{
		String layerPathParamValue = layerPath;
		int levelParamValue = level;
		int rowParamValue = row;
		int colParamValue = col;
		String returnValue = calcDemCacheFilePath_EVString_ev_int32_ev_int32_ev_int32(layerPathParamValue, levelParamValue, rowParamValue, colParamValue);
		return returnValue;
	}
	public CacheDatasetDir(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheDatasetDir(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CacheDatasetDir fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheDatasetDir obj = null;
 		if(baseObj instanceof CacheDatasetDir)
		{
			obj = (CacheDatasetDir)baseObj;
		} else {
			obj = new CacheDatasetDir(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCacheDatasetDir");
			obj.increaseCast();
		}

		return obj;
	}
}
