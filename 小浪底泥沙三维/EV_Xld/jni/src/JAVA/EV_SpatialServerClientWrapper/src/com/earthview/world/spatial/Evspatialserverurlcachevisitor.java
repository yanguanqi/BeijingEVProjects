package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 
 */
public class Evspatialserverurlcachevisitor extends BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor", new EvspatialserverurlcachevisitorClassFactory());
	}

	native private static long instance_void();
	/**
	 * 
	 * @param  
	 */
	public static com.earthview.world.spatial.Evspatialserverurlcachevisitor instance()
	{
		long returnValue = instance_void();
		com.earthview.world.spatial.Evspatialserverurlcachevisitor __returnValue = new com.earthview.world.spatial.Evspatialserverurlcachevisitor(CreatedWhenConstruct.CWC_NotToCreate, "CEVSpatialServerURLCacheVisitor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Evspatialserverurlcachevisitor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEVSpatialServerURLCacheVisitor");
		}
		return __returnValue;
	}
	native private void addUsingCacheURL_EVString_EVString(long pNativeObject, String url, String servername);
	/// <summary>
	/// url<ip:port>
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	public void addUsingCacheURL(String url, String servername)
	{
		String urlParamValue = url;
		String servernameParamValue = servername;
		addUsingCacheURL_EVString_EVString(this.nativeObject.pointer, urlParamValue, servernameParamValue);
	}
	native private void removeUsingCacheURL_EVString_EVString(long pNativeObject, String url, String servername);
	/**
	 * 
	 * @param  
	 */
	public void removeUsingCacheURL(String url, String servername)
	{
		String urlParamValue = url;
		String servernameParamValue = servername;
		removeUsingCacheURL_EVString_EVString(this.nativeObject.pointer, urlParamValue, servernameParamValue);
	}
	native private boolean isUsingCacheURL_EVString_EVString(long pNativeObject, String url, String servername);
	/**
	 * 
	 * @param  
	 */
	public boolean isUsingCacheURL(String url, String servername)
	{
		String urlParamValue = url;
		String servernameParamValue = servername;
		boolean returnValue = isUsingCacheURL_EVString_EVString(this.nativeObject.pointer, urlParamValue, servernameParamValue);
		return returnValue;
	}
	native private long readURLListFromCache_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 * @return servernameu@url
	 */
	public com.earthview.world.core.StringVector readURLListFromCache()
	{
		long returnValue = readURLListFromCache_void(this.nativeObject.pointer);
		com.earthview.world.core.StringVector __returnValue = new com.earthview.world.core.StringVector(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "StringVector");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.StringVector)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "StringVector");
		}
		return __returnValue;
	}
	native private void writeURLToCache_EVString_EVString(long pNativeObject, String url, String servername);
	/**
	 * 
	 * @param  
	 */
	public void writeURLToCache(String url, String servername)
	{
		String urlParamValue = url;
		String servernameParamValue = servername;
		writeURLToCache_EVString_EVString(this.nativeObject.pointer, urlParamValue, servernameParamValue);
	}
	public Evspatialserverurlcachevisitor(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evspatialserverurlcachevisitor(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evspatialserverurlcachevisitor fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evspatialserverurlcachevisitor obj = null;
 		if(baseObj instanceof Evspatialserverurlcachevisitor)
		{
			obj = (Evspatialserverurlcachevisitor)baseObj;
		} else {
			obj = new Evspatialserverurlcachevisitor(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEVSpatialServerURLCacheVisitor");
			obj.increaseCast();
		}

		return obj;
	}
}
