package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CacheManager", new CacheManagerClassFactory());
	}

	public CacheManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CacheManager", null);
	}

	native private static long getSingleton_void();
	public static com.earthview.world.spatial.CacheManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.spatial.CacheManager __returnValue = new com.earthview.world.spatial.CacheManager(CreatedWhenConstruct.CWC_NotToCreate, "CacheManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.CacheManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CacheManager");
		}
		return __returnValue;
	}
	native private static long getSingletonPtr_void();
	public static com.earthview.world.spatial.CacheManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.CacheManager __returnValue = new com.earthview.world.spatial.CacheManager(CreatedWhenConstruct.CWC_NotToCreate, "CacheManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.CacheManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CacheManager");
		}
		return __returnValue;
	}
	native private void setCacheManageInterval_ev_int32(long pNativeObject, int interval);
	/**
	 * 设置缓存管理的时间间隔，
	 * @param interval 时间间隔，单位分钟
	 */
	public void setCacheManageInterval(int interval)
	{
		int intervalParamValue = interval;
		setCacheManageInterval_ev_int32(this.nativeObject.pointer, intervalParamValue);
	}
	native private int getCacheManageInterval_void(long pNativeObject);
	/**
	 * 获取缓存管理事件间隔，单位分钟
	 * @param  
	 */
	public int getCacheManageInterval()
	{
		int returnValue = getCacheManageInterval_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setCacheUpdateListenURL_EVString(long pNativeObject, String url);
	/**
	 * 设置侦听服务器端缓存更新通知url
	 * @param  
	 */
	public void setCacheUpdateListenURL(String url)
	{
		String urlParamValue = url;
		setCacheUpdateListenURL_EVString(this.nativeObject.pointer, urlParamValue);
	}
	native private long getCacheUpdateListenURL_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public StringPointer getCacheUpdateListenURL()
	{
		long returnValue = getCacheUpdateListenURL_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private boolean setCacheMaxSize_ev_uint64(long pNativeObject, long maxsize);
	/**
	 * 设置缓存文件总大小
	 * @param maxsize 缓存文件总大小，单位:字节
	 */
	public boolean setCacheMaxSize(ULongPointer maxsize)
	{
		long maxsizeParamValue = maxsize.nativeObject.pointer;
		boolean returnValue = setCacheMaxSize_ev_uint64(this.nativeObject.pointer, maxsizeParamValue);
		return returnValue;
	}
	native private String getCacheMaxSize_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 * @return 返回设置的缓存文件总大小，单位：字节
	 */
	public ULongPointer getCacheMaxSize()
	{
		String returnValue = getCacheMaxSize_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	native private boolean loadConfig_void(long pNativeObject);
	/**
	 * 加载缓存配置文件
	 * @param  
	 */
	public boolean loadConfig()
	{
		boolean returnValue = loadConfig_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void saveConfig_void(long pNativeObject);
	/**
	 * 保存缓存配置文件
	 * @param  
	 */
	public void saveConfig()
	{
		saveConfig_void(this.nativeObject.pointer);
	}
	native private boolean manageLocalCacheData_void(long pNativeObject);
	/**
	 * 通过预设的策略管理缓存数据
	 * @param  
	 */
	public boolean manageLocalCacheData()
	{
		boolean returnValue = manageLocalCacheData_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setCacheRootDir_EVString(long pNativeObject, String cacheRootDir);
	/**
	 * 设置缓存数据存储路径
	 * @param  
	 */
	public boolean setCacheRootDir(String cacheRootDir)
	{
		String cacheRootDirParamValue = cacheRootDir;
		boolean returnValue = setCacheRootDir_EVString(this.nativeObject.pointer, cacheRootDirParamValue);
		return returnValue;
	}
	native private long getCacheRootDir_void(long pNativeObject);
	/**
	 * 获取当前缓存数据存储路径
	 * @param  
	 */
	public StringPointer getCacheRootDir()
	{
		long returnValue = getCacheRootDir_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private int deleteCache_void(long pNativeObject);
	/**
	 * 清除所有缓存数据
	 * @param  
	 * @return 清理的缓存数据大小
	 */
	public int deleteCache()
	{
		int returnValue = deleteCache_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean start_void(long pNativeObject);
	/**
	 * 启动缓存管理服务
	 * @param  
	 */
	public boolean start()
	{
		boolean returnValue = start_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean start_ev_bool(long pNativeObject, boolean workable);
	/**
	 * 启动缓存管理服务，但是不进行读写工作
	 * @param  
	 */
	public boolean start(boolean workable)
	{
		boolean workableParamValue = workable;
		boolean returnValue = start_ev_bool(this.nativeObject.pointer, workableParamValue);
		return returnValue;
	}
	native private boolean isWorking_void(long pNativeObject);
	/**
	 * 缓存服务是否在运行
	 * @param  
	 */
	public boolean isWorking()
	{
		boolean returnValue = isWorking_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void stop_void(long pNativeObject);
	/**
	 * 停止缓存管理服务
	 * @param  
	 */
	public void stop()
	{
		stop_void(this.nativeObject.pointer);
	}
	native private void pauseWork_void(long pNativeObject);
	/**
	 * 暂停缓存工作
	 * @param  
	 */
	public void pauseWork()
	{
		pauseWork_void(this.nativeObject.pointer);
	}
	native private void continueWork_void(long pNativeObject);
	/**
	 * 继续缓存工作
	 * @param  
	 */
	public void continueWork()
	{
		continueWork_void(this.nativeObject.pointer);
	}
	native private boolean isPaused_void(long pNativeObject);
	/**
	 * 是否暂停工作
	 * @param  
	 */
	public boolean isPaused()
	{
		boolean returnValue = isPaused_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean clearVectorTileCache_EVString(long pNativeObject, String datasetName);
	/**
	 * 临时接口，清除矢量瓦片缓存
	 * @param  
	 */
	public boolean clearVectorTileCache(String datasetName)
	{
		String datasetNameParamValue = datasetName;
		boolean returnValue = clearVectorTileCache_EVString(this.nativeObject.pointer, datasetNameParamValue);
		return returnValue;
	}
	native private String getCurrentCacheSize_void(long pNativeObject);
	/**
	 * 获取当前缓存大小
	 * @param  
	 * @return 当前缓存文件实际大小，单位：M字节
	 */
	public ULongPointer getCurrentCacheSize()
	{
		String returnValue = getCurrentCacheSize_void(this.nativeObject.pointer);
		ULongPointer __returnValue = new ULongPointer(returnValue);
		return __returnValue;
	}
	public CacheManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CacheManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheManager obj = null;
 		if(baseObj instanceof CacheManager)
		{
			obj = (CacheManager)baseObj;
		} else {
			obj = new CacheManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CacheManager");
			obj.increaseCast();
		}

		return obj;
	}
}
