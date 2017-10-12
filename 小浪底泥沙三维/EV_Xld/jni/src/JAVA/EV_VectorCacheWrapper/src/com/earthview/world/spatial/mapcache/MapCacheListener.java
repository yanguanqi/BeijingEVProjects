package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapCacheListener extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MapCache::CMapCacheListener", new MapCacheListenerClassFactory());
	}

	public MapCacheListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMapCacheListener", null);
	}

	native private void setStop_ev_bool(long pNativeObject, boolean stop);
	public void setStop(boolean stop)
	{
		boolean stopParamValue = stop;
		setStop_ev_bool(this.nativeObject.pointer, stopParamValue);
	}
	native private boolean getStop_void(long pNativeObject);
	public boolean getStop()
	{
		boolean returnValue = getStop_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void incrementFinishNum_void(long pNativeObject);
	public void incrementFinishNum()
	{
		incrementFinishNum_void(this.nativeObject.pointer);
	}
	native private void setFinishNum_ev_uint32(long pNativeObject, long num);
	public void setFinishNum(long num)
	{
		long numParamValue = num;
		setFinishNum_ev_uint32(this.nativeObject.pointer, numParamValue);
	}
	native private long getFinishNum_void(long pNativeObject);
	public long getFinishNum()
	{
		long returnValue = getFinishNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setTotalNum_ev_uint32(long pNativeObject, long num);
	public void setTotalNum(long num)
	{
		long numParamValue = num;
		setTotalNum_ev_uint32(this.nativeObject.pointer, numParamValue);
	}
	native private long getTotalNum_void(long pNativeObject);
	public long getTotalNum()
	{
		long returnValue = getTotalNum_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setErrorMessage_EVString(long pNativeObject, String str);
	public void setErrorMessage(String str)
	{
		String strParamValue = str;
		setErrorMessage_EVString(this.nativeObject.pointer, strParamValue);
	}
	native private String getErrorMessage_void(long pNativeObject);
	public String getErrorMessage()
	{
		String returnValue = getErrorMessage_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean getClipFlag_void(long pNativeObject);
	public boolean getClipFlag()
	{
		boolean returnValue = getClipFlag_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setClipFlag_ev_bool(long pNativeObject, boolean flag);
	public void setClipFlag(boolean flag)
	{
		boolean flagParamValue = flag;
		setClipFlag_ev_bool(this.nativeObject.pointer, flagParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	public com.earthview.world.spatial.mapcache.MapCacheListener ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.mapcache.MapCacheListener __returnValue = new com.earthview.world.spatial.mapcache.MapCacheListener(CreatedWhenConstruct.CWC_NotToCreate, "CMapCacheListener");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.mapcache.MapCacheListener)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapCacheListener");
		}
		return __returnValue;
	}
	native private void reset_void(long pNativeObject);
	public void reset()
	{
		reset_void(this.nativeObject.pointer);
	}
	public MapCacheListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapCacheListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapCacheListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapCacheListener obj = null;
 		if(baseObj instanceof MapCacheListener)
		{
			obj = (MapCacheListener)baseObj;
		} else {
			obj = new MapCacheListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapCacheListener");
			obj.increaseCast();
		}

		return obj;
	}
}
