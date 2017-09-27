package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlCacheManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::KmlManager::CKmlCacheManager", new KmlCacheManagerClassFactory());
	}

	public KmlCacheManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CKmlCacheManager", null);
	}

	native private static long getSingletonPtr_void();
	/**
	 * 返回单例的数据源工厂句柄
	 * @return CModelDataSourceFactory，失败则返回NULL
	 */
	public static com.earthview.world.spatial3d.kmlmanager.KmlCacheManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.kmlmanager.KmlCacheManager __returnValue = new com.earthview.world.spatial3d.kmlmanager.KmlCacheManager(CreatedWhenConstruct.CWC_NotToCreate, "CKmlCacheManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.kmlmanager.KmlCacheManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CKmlCacheManager");
		}
		return __returnValue;
	}
	native private long genKmlPicCache_EVString(long pNativeObject, String picPath);
	/**
	 * 
	 */
	public com.earthview.world.core.MemoryDataStreamPtr genKmlPicCache(String picPath)
	{
		String picPathParamValue = picPath;
		long returnValue = genKmlPicCache_EVString(this.nativeObject.pointer, picPathParamValue);
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
	native private String genKmlOrKmzCache_EVString(long pNativeObject, String kmlPath);
	/**
	 * 
	 */
	public String genKmlOrKmzCache(String kmlPath)
	{
		String kmlPathParamValue = kmlPath;
		String returnValue = genKmlOrKmzCache_EVString(this.nativeObject.pointer, kmlPathParamValue);
		return returnValue;
	}
	native private String genKmlModelCache_EVString_CSceneManager(long pNativeObject, String modelPath, long sceneMgr);
	/**
	 * 
	 */
	public String genKmlModelCache(String modelPath, com.earthview.world.graphic.SceneManager sceneMgr)
	{
		String modelPathParamValue = modelPath;
		long sceneMgrParamValue = (sceneMgr == null ? 0L : sceneMgr.nativeObject.pointer);
		String returnValue = genKmlModelCache_EVString_CSceneManager(this.nativeObject.pointer, modelPathParamValue, sceneMgrParamValue);
		return returnValue;
	}
	public KmlCacheManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public KmlCacheManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static KmlCacheManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		KmlCacheManager obj = null;
 		if(baseObj instanceof KmlCacheManager)
		{
			obj = (KmlCacheManager)baseObj;
		} else {
			obj = new KmlCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CKmlCacheManager");
			obj.increaseCast();
		}

		return obj;
	}
}
