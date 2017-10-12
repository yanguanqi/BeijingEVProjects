package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.*;
import com.earthview.world.core.*;

public class DemCacheReader extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CDemCacheReader", new DemCacheReaderClassFactory());
	}

	native private boolean readTileInfo_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_CCoreTime(long pNativeObject, String datasetname, int tilelevel, int tilerow, int tilecol, long isLastest, long updateTime, long dateTime, long downTime);
	/**
	 * 
	 * @param  
	 */
	public boolean readTileInfo(String datasetname, int tilelevel, int tilerow, int tilecol, BooleanPointer isLastest, com.earthview.world.core.CoreTime updateTime, com.earthview.world.core.CoreTime dateTime, com.earthview.world.core.CoreTime downTime)
	{
		String datasetnameParamValue = datasetname;
		int tilelevelParamValue = tilelevel;
		int tilerowParamValue = tilerow;
		int tilecolParamValue = tilecol;
		long isLastestParamValue = isLastest.nativeObject.pointer;
		long updateTimeParamValue = updateTime.nativeObject.pointer;
		long dateTimeParamValue = dateTime.nativeObject.pointer;
		long downTimeParamValue = downTime.nativeObject.pointer;
		boolean returnValue = readTileInfo_EVString_ev_int32_ev_int32_ev_int32_ev_bool_CCoreTime_CCoreTime_CCoreTime(this.nativeObject.pointer, datasetnameParamValue, tilelevelParamValue, tilerowParamValue, tilecolParamValue, isLastestParamValue, updateTimeParamValue, dateTimeParamValue, downTimeParamValue);
		return returnValue;
	}
	native private long readTile_EVString_ev_int32_ev_int32_ev_int32_ev_int32(long pNativeObject, String datasetname, int tilelevel, int tilerow, int tilecol, int tileType);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.core.MemoryDataStreamPtr readTile(String datasetname, int tilelevel, int tilerow, int tilecol, int tileType)
	{
		String datasetnameParamValue = datasetname;
		int tilelevelParamValue = tilelevel;
		int tilerowParamValue = tilerow;
		int tilecolParamValue = tilecol;
		int tileTypeParamValue = tileType;
		long returnValue = readTile_EVString_ev_int32_ev_int32_ev_int32_ev_int32(this.nativeObject.pointer, datasetnameParamValue, tilelevelParamValue, tilerowParamValue, tilecolParamValue, tileTypeParamValue);
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
	public DemCacheReader(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public DemCacheReader(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static DemCacheReader fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		DemCacheReader obj = null;
 		if(baseObj instanceof DemCacheReader)
		{
			obj = (DemCacheReader)baseObj;
		} else {
			obj = new DemCacheReader(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CDemCacheReader");
			obj.increaseCast();
		}

		return obj;
	}
}
