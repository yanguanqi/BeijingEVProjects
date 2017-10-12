package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageCacheReader extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CImageCacheReader", new ImageCacheReaderClassFactory());
	}

	native private long readTileByType_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int tilemode, String layerName, int tilelevel, int row, int col, int type);
	/**
	 * 
	 * @param type JPG=0;EVG=1;
	 */
	public com.earthview.world.core.MemoryDataStreamPtr readTileByType(com.earthview.world.spatial.EVTileModeType tilemode, String layerName, int tilelevel, int row, int col, int type)
	{
		int tilemodeParamValue = tilemode.getValue();
		String layerNameParamValue = layerName;
		int tilelevelParamValue = tilelevel;
		int rowParamValue = row;
		int colParamValue = col;
		int typeParamValue = type;
		long returnValue = readTileByType_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, tilemodeParamValue, layerNameParamValue, tilelevelParamValue, rowParamValue, colParamValue, typeParamValue);
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
	native private long readTile_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, int tilemode, String layerPath, int tilelevel, int row, int col, long type);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.core.MemoryDataStreamPtr readTile(com.earthview.world.spatial.EVTileModeType tilemode, String layerPath, int tilelevel, int row, int col, IntegerPointer type)
	{
		int tilemodeParamValue = tilemode.getValue();
		String layerPathParamValue = layerPath;
		int tilelevelParamValue = tilelevel;
		int rowParamValue = row;
		int colParamValue = col;
		long typeParamValue = type.nativeObject.pointer;
		long returnValue = readTile_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, tilemodeParamValue, layerPathParamValue, tilelevelParamValue, rowParamValue, colParamValue, typeParamValue);
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
	native private boolean readTile_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_MemoryDataStreamPtr(long pNativeObject, int tilemode, String layerPath, int tilelevel, int row, int col, long tileType, long dataValue, long property);
	/**
	 * 
	 * @param  
	 */
	public boolean readTile(com.earthview.world.spatial.EVTileModeType tilemode, String layerPath, int tilelevel, int row, int col, IntegerPointer tileType, com.earthview.world.core.MemoryDataStreamPtr dataValue, com.earthview.world.core.MemoryDataStreamPtr property)
	{
		int tilemodeParamValue = tilemode.getValue();
		String layerPathParamValue = layerPath;
		int tilelevelParamValue = tilelevel;
		int rowParamValue = row;
		int colParamValue = col;
		long tileTypeParamValue = tileType.nativeObject.pointer;
		long dataValueParamValue = dataValue.nativeObject.pointer;
		long propertyParamValue = property.nativeObject.pointer;
		boolean returnValue = readTile_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_int32_MemoryDataStreamPtr_MemoryDataStreamPtr(this.nativeObject.pointer, tilemodeParamValue, layerPathParamValue, tilelevelParamValue, rowParamValue, colParamValue, tileTypeParamValue, dataValueParamValue, propertyParamValue);
		return returnValue;
	}
	native private boolean readTileInfo_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_MemoryDataStreamPtr(long pNativeObject, int tilemode, String layerPath, int tilelevel, int row, int col, long isLastest, long updateTime, long dateTime, long property);
	/**
	 * 
	 * @param  
	 */
	public boolean readTileInfo(com.earthview.world.spatial.EVTileModeType tilemode, String layerPath, int tilelevel, int row, int col, BooleanPointer isLastest, com.earthview.world.core.CoreTime updateTime, com.earthview.world.core.CoreTime dateTime, com.earthview.world.core.MemoryDataStreamPtr property)
	{
		int tilemodeParamValue = tilemode.getValue();
		String layerPathParamValue = layerPath;
		int tilelevelParamValue = tilelevel;
		int rowParamValue = row;
		int colParamValue = col;
		long isLastestParamValue = isLastest.nativeObject.pointer;
		long updateTimeParamValue = updateTime.nativeObject.pointer;
		long dateTimeParamValue = dateTime.nativeObject.pointer;
		long propertyParamValue = property.nativeObject.pointer;
		boolean returnValue = readTileInfo_EVTileModeType_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_MemoryDataStreamPtr(this.nativeObject.pointer, tilemodeParamValue, layerPathParamValue, tilelevelParamValue, rowParamValue, colParamValue, isLastestParamValue, updateTimeParamValue, dateTimeParamValue, propertyParamValue);
		return returnValue;
	}
	native private static long getSinglePtr_void();
	public static com.earthview.world.spatial3d.ImageCacheReader getSinglePtr()
	{
		long returnValue = getSinglePtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.ImageCacheReader __returnValue = new com.earthview.world.spatial3d.ImageCacheReader(CreatedWhenConstruct.CWC_NotToCreate, "CImageCacheReader");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.ImageCacheReader)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CImageCacheReader");
		}
		return __returnValue;
	}
	public ImageCacheReader(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ImageCacheReader(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ImageCacheReader fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ImageCacheReader obj = null;
 		if(baseObj instanceof ImageCacheReader)
		{
			obj = (ImageCacheReader)baseObj;
		} else {
			obj = new ImageCacheReader(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CImageCacheReader");
			obj.increaseCast();
		}

		return obj;
	}
}
