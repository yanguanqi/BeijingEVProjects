package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebDataSourceCacheManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager", new WebDataSourceCacheManagerClassFactory());
	}

	native private static long instance_void();
	/**
	 * 
	 * @param  
	 */
	public static com.earthview.world.frameworkproxy.datasourcemanager.WebDataSourceCacheManager instance()
	{
		long returnValue = instance_void();
		com.earthview.world.frameworkproxy.datasourcemanager.WebDataSourceCacheManager __returnValue = new com.earthview.world.frameworkproxy.datasourcemanager.WebDataSourceCacheManager(CreatedWhenConstruct.CWC_NotToCreate, "CWebDataSourceCacheManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.frameworkproxy.datasourcemanager.WebDataSourceCacheManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWebDataSourceCacheManager");
		}
		return __returnValue;
	}
	/**
	 * 
	 * @param  
	 */
	public WebDataSourceCacheManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CWebDataSourceCacheManager", null);
	}

	native private void setUsingCacheURL_EVString_ev_bool(long pNativeObject, String url, boolean isUsingCache);
	/**
	 * 设置给定的url是否使用缓存，如果isUsingCache为true只用缓存中的元数据信息，否则从服务器端下载元数据信息。url格式CDataSourceURL::getURL()函数获取
	 * @param  
	 */
	public void setUsingCacheURL(String url, boolean isUsingCache)
	{
		String urlParamValue = url;
		boolean isUsingCacheParamValue = isUsingCache;
		setUsingCacheURL_EVString_ev_bool(this.nativeObject.pointer, urlParamValue, isUsingCacheParamValue);
	}
	native private boolean isUsingCacheURL_EVString(long pNativeObject, String url);
	/**
	 * 
	 * @param  
	 */
	public boolean isUsingCacheURL(String url)
	{
		String urlParamValue = url;
		boolean returnValue = isUsingCacheURL_EVString(this.nativeObject.pointer, urlParamValue);
		return returnValue;
	}
	native private long getCachedURLList_void(long pNativeObject);
	/**
	 * 获取当前缓存路径下已经缓存过数据的web服务URL列表
	 * @param  
	 */
	public com.earthview.world.core.StringVector getCachedURLList()
	{
		long returnValue = getCachedURLList_void(this.nativeObject.pointer);
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
	public WebDataSourceCacheManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public WebDataSourceCacheManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static WebDataSourceCacheManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		WebDataSourceCacheManager obj = null;
 		if(baseObj instanceof WebDataSourceCacheManager)
		{
			obj = (WebDataSourceCacheManager)baseObj;
		} else {
			obj = new WebDataSourceCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CWebDataSourceCacheManager");
			obj.increaseCast();
		}

		return obj;
	}
}
