package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LatticeFontCache extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CLatticeFontCache", new LatticeFontCacheClassFactory());
	}

	native private static long getDefaultCache_void();
	/**
	 * 获取默认缓存对象指针
	 * @param filePath 
	 * @return FontLattice*
	 */
	public static com.earthview.world.graphic.LatticeFontCache getDefaultCache()
	{
		long returnValue = getDefaultCache_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.LatticeFontCache __returnValue = new com.earthview.world.graphic.LatticeFontCache(CreatedWhenConstruct.CWC_NotToCreate, "CLatticeFontCache");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.LatticeFontCache)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLatticeFontCache");
		}
		return __returnValue;
	}
	native private boolean loadCache_ev_char(long pNativeObject, long filePath);
	/**
	 * 从文件加载字体点阵缓存文件
	 * @param filePath 
	 * @return ev_bool
	 */
	public boolean loadCache(BytePointer filePath)
	{
		long filePathParamValue = (filePath == null ? 0L : filePath.nativeObject.pointer);
		boolean returnValue = loadCache_ev_char(this.nativeObject.pointer, filePathParamValue);
		return returnValue;
	}
	native private boolean saveCacheAs_ev_char(long pNativeObject, long filePath);
	/**
	 * 将缓存文件另存为
	 * @param filePath 
	 * @return ev_bool
	 */
	public boolean saveCacheAs(BytePointer filePath)
	{
		long filePathParamValue = (filePath == null ? 0L : filePath.nativeObject.pointer);
		boolean returnValue = saveCacheAs_ev_char(this.nativeObject.pointer, filePathParamValue);
		return returnValue;
	}
	native private boolean updateCacheFile_void(long pNativeObject);
	/**
	 * 更新缓存文件
	 * @param  
	 * @return ev_bool
	 */
	public boolean updateCacheFile()
	{
		boolean returnValue = updateCacheFile_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean setMaxLatticeCounts_ev_uint32(long pNativeObject, long maxLatticeCounts);
	/**
	 * 设置缓存所能容纳的点阵最大个数
	 * @param maxLatticeCounts 
	 * @return ev_bool
	 */
	public boolean setMaxLatticeCounts(long maxLatticeCounts)
	{
		long maxLatticeCountsParamValue = maxLatticeCounts;
		boolean returnValue = setMaxLatticeCounts_ev_uint32(this.nativeObject.pointer, maxLatticeCountsParamValue);
		return returnValue;
	}
	native private long getCacheSize_void(long pNativeObject);
	/**
	 * 获取缓存数据大小(缓存所包含的点阵数码)
	 * @param  
	 * @return ev_size_t
	 */
	public long getCacheSize()
	{
		long returnValue = getCacheSize_void(this.nativeObject.pointer);
		return returnValue;
	}
	/**
	 * 默认构造函数
	 * @param  
	 */
	public LatticeFontCache(BytePointer filePath) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer filePathPtr = new BasePointer(filePath);
		list.add("filePath", filePathPtr.get());
		Create("CLatticeFontCache", list);
	}

	/**
	 * 构造函数
	 * @param maxLatticeCounts 
	 */
	public LatticeFontCache(BytePointer filePath, long maxLatticeCounts) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer filePathPtr = new BasePointer(filePath);
		list.add("filePath", filePathPtr.get());
		BasePointer maxLatticeCountsPtr = new BasePointer(maxLatticeCounts);
		list.add("maxLatticeCounts", maxLatticeCountsPtr.get());
		Create("CLatticeFontCache", list);
	}

	native private void clear_void(long pNativeObject);
	/**
	 * 清空缓存
	 */
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public LatticeFontCache(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LatticeFontCache(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LatticeFontCache fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LatticeFontCache obj = null;
 		if(baseObj instanceof LatticeFontCache)
		{
			obj = (LatticeFontCache)baseObj;
		} else {
			obj = new LatticeFontCache(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLatticeFontCache");
			obj.increaseCast();
		}

		return obj;
	}
}
