package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapCacheCreator extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MapCache::CMapCacheCreator", new MapCacheCreatorClassFactory());
	}

	public MapCacheCreator() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CMapCacheCreator", null);
	}

	native private void setClipParam_CMapCacheParam(long pNativeObject, long param);
	public void setClipParam(com.earthview.world.spatial.mapcache.MapCacheParam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		setClipParam_CMapCacheParam(this.nativeObject.pointer, paramParamValue);
	}
	native private long getClipParam_void(long pNativeObject);
	public com.earthview.world.spatial.mapcache.MapCacheParam getClipParam()
	{
		long returnValue = getClipParam_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.mapcache.MapCacheParam __returnValue = new com.earthview.world.spatial.mapcache.MapCacheParam(CreatedWhenConstruct.CWC_NotToCreate, "CMapCacheParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.mapcache.MapCacheParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapCacheParam");
		}
		return __returnValue;
	}
	native private void setTempClipParam_CMapCacheParam(long pNativeObject, long param);
	public void setTempClipParam(com.earthview.world.spatial.mapcache.MapCacheParam param)
	{
		long paramParamValue = (param == null ? 0L : param.nativeObject.pointer);
		setTempClipParam_CMapCacheParam(this.nativeObject.pointer, paramParamValue);
	}
	native private long getTempClipParam_void(long pNativeObject);
	public com.earthview.world.spatial.mapcache.MapCacheParam getTempClipParam()
	{
		long returnValue = getTempClipParam_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.mapcache.MapCacheParam __returnValue = new com.earthview.world.spatial.mapcache.MapCacheParam(CreatedWhenConstruct.CWC_NotToCreate, "CMapCacheParam");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.mapcache.MapCacheParam)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMapCacheParam");
		}
		return __returnValue;
	}
	native private void setClipListener_CMapCacheListener(long pNativeObject, long listener);
	public void setClipListener(com.earthview.world.spatial.mapcache.MapCacheListener listener)
	{
		long listenerParamValue = (listener == null ? 0L : listener.nativeObject.pointer);
		setClipListener_CMapCacheListener(this.nativeObject.pointer, listenerParamValue);
	}
	native private long getClipListener_void(long pNativeObject);
	public com.earthview.world.spatial.mapcache.MapCacheListener getClipListener()
	{
		long returnValue = getClipListener_void(this.nativeObject.pointer);
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
	native private boolean createETM_void(long pNativeObject);
	public boolean createETM()
	{
		boolean returnValue = createETM_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean createClipParmtoXMLs_void(long pNativeObject);
	public boolean createClipParmtoXMLs()
	{
		boolean returnValue = createClipParmtoXMLs_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean clip_void(long pNativeObject);
	public boolean clip()
	{
		boolean returnValue = clip_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean hasLastTaskUnfinishd_void(long pNativeObject);
	public boolean hasLastTaskUnfinishd()
	{
		boolean returnValue = hasLastTaskUnfinishd_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void loadLastTast_void(long pNativeObject);
	public void loadLastTast()
	{
		loadLastTast_void(this.nativeObject.pointer);
	}
	public MapCacheCreator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MapCacheCreator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MapCacheCreator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MapCacheCreator obj = null;
 		if(baseObj instanceof MapCacheCreator)
		{
			obj = (MapCacheCreator)baseObj;
		} else {
			obj = new MapCacheCreator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMapCacheCreator");
			obj.increaseCast();
		}

		return obj;
	}
}
