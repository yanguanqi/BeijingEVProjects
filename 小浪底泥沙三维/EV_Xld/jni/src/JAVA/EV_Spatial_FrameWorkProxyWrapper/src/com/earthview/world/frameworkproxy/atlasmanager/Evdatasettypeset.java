package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Evdatasettypeset extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::AtlasManager::EVDatasetTypeSet", new EvdatasettypesetClassFactory());
	}

	public Evdatasettypeset() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("EVDatasetTypeSet", null);
	}

	native private void insert_EVDatasetType(long pNativeObject, int val);
	public void insert(com.earthview.world.spatial.geodataset.EVDatasetType val)
	{
		int valParamValue = val.getValue();
		insert_EVDatasetType(this.nativeObject.pointer, valParamValue);
	}
	native private long size_void(long pNativeObject);
	public long size()
	{
		long returnValue = size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long erase_EVDatasetType(long pNativeObject, int key);
	public long erase(com.earthview.world.spatial.geodataset.EVDatasetType key)
	{
		int keyParamValue = key.getValue();
		long returnValue = erase_EVDatasetType(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private boolean empty_void(long pNativeObject);
	public boolean empty()
	{
		boolean returnValue = empty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	native private long count_EVDatasetType(long pNativeObject, int key);
	public long count(com.earthview.world.spatial.geodataset.EVDatasetType key)
	{
		int keyParamValue = key.getValue();
		long returnValue = count_EVDatasetType(this.nativeObject.pointer, keyParamValue);
		return returnValue;
	}
	native private long max_size_void(long pNativeObject);
	public long max_size()
	{
		long returnValue = max_size_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void swap_EVDatasetTypeSet(long pNativeObject, long other);
	public void swap(com.earthview.world.frameworkproxy.atlasmanager.Evdatasettypeset other)
	{
		long otherParamValue = other.nativeObject.pointer;
		swap_EVDatasetTypeSet(this.nativeObject.pointer, otherParamValue);
	}
	native private int get_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.geodataset.EVDatasetType get(long index)
	{
		long indexParamValue = index;
		int returnValue = get_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return com.earthview.world.spatial.geodataset.EVDatasetType.toEnum(returnValue);
	}
	public Evdatasettypeset(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evdatasettypeset(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evdatasettypeset fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evdatasettypeset obj = null;
 		if(baseObj instanceof Evdatasettypeset)
		{
			obj = (Evdatasettypeset)baseObj;
		} else {
			obj = new Evdatasettypeset(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EVDatasetTypeSet");
			obj.increaseCast();
		}

		return obj;
	}
}
