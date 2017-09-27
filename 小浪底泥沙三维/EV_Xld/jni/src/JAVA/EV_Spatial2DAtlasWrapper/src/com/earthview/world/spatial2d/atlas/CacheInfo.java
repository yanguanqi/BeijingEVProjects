package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存信息类
 */
public class CacheInfo extends com.earthview.world.spatial.atlas.Icacheinfo {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::CCacheInfo", new CacheInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Atlas::JCCacheInfoProxy", new CacheInfoClassFactory());
	}

	native private long getCache_void(long pNativeObject);
	/**
	 * 获取缓存
	 * @param  
	 * @return 图片缓存
	 */
	public com.earthview.world.display.Ibitmap getCache()
	{
		long returnValue = getCache_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}
	native private long getCache_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.display.Ibitmap getCache_NoVirtual()
	{
		long returnValue = getCache_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.display.Ibitmap __returnValue = new com.earthview.world.display.Ibitmap(CreatedWhenConstruct.CWC_NotToCreate, "IBitmap");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.display.Ibitmap)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IBitmap");
		}
		return __returnValue;
	}

	native private long getCacheExtent_void(long pNativeObject);
	/**
	 * 获取缓存的范围
	 * @param  
	 * @return 缓存的范围
	 */
	public com.earthview.world.spatial.geometry.Ienvelope getCacheExtent()
	{
		long returnValue = getCacheExtent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}
	native private long getCacheExtent_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geometry.Ienvelope getCacheExtent_NoVirtual()
	{
		long returnValue = getCacheExtent_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geometry.Ienvelope __returnValue = new com.earthview.world.spatial.geometry.Ienvelope(CreatedWhenConstruct.CWC_NotToCreate, "IEnvelope");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geometry.Ienvelope)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IEnvelope");
		}
		return __returnValue;
	}

	native private boolean isDirty_void(long pNativeObject);
	/**
	 * 检测缓存是否过期
	 * @param  
	 * @return 如果过期,则返回true,反之则否
	 */
	public boolean isDirty()
	{
		boolean returnValue = isDirty_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private boolean isDirty_void_NoVirtual(long pNativeObject);
	protected boolean isDirty_NoVirtual()
	{
		boolean returnValue = isDirty_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void setDirty_void(long pNativeObject);
	/**
	 * 设置缓存过期
	 * @param  
	 */
	public void setDirty()
	{
		setDirty_void(this.nativeObject.pointer);
	}
	native private void setDirty_void_NoVirtual(long pNativeObject);
	protected void setDirty_NoVirtual()
	{
		setDirty_void_NoVirtual(this.nativeObject.pointer);
	}

	native private void lock_void(long pNativeObject);
	public void lock()
	{
		lock_void(this.nativeObject.pointer);
	}
	native private boolean locked_void(long pNativeObject);
	public boolean locked()
	{
		boolean returnValue = locked_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void unLock_void(long pNativeObject);
	public void unLock()
	{
		unLock_void(this.nativeObject.pointer);
	}
	public CacheInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getCache_void(long pNativeObject, String method);
	native protected void register_getCacheExtent_void(long pNativeObject, String method);
	native protected void register_isDirty_void(long pNativeObject, String method);
	native protected void register_setDirty_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getCache_void(this.nativeObject.pointer, "getCache_void_callback");
			this.register_getCacheExtent_void(this.nativeObject.pointer, "getCacheExtent_void_callback");
			this.register_isDirty_void(this.nativeObject.pointer, "isDirty_void_callback");
			this.register_setDirty_void(this.nativeObject.pointer, "setDirty_void_callback");
		}
	}
	
	public static CacheInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheInfo obj = null;
 		if(baseObj instanceof CacheInfo)
		{
			obj = (CacheInfo)baseObj;
		} else {
			obj = new CacheInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCacheInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
