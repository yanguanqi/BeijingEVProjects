package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存信息基类
 */
public class Icacheinfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::ICacheInfo", new IcacheinfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JICacheInfoProxy", new IcacheinfoClassFactory());
	}

	protected  long getCache_void_callback()
	{
		com.earthview.world.display.Ibitmap returnValue = getCache();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCache_void(long pNativeObject);
	/**
	 * 获取缓存位图
	 * @param  
	 * @return 返回缓存位图
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

	protected  long getCacheExtent_void_callback()
	{
		com.earthview.world.spatial.geometry.Ienvelope returnValue = getCacheExtent();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getCacheExtent_void(long pNativeObject);
	/**
	 * 获取缓存包围盒
	 * @param  
	 * @return 返回包围盒
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

	protected  boolean isDirty_void_callback()
	{
		boolean returnValue = isDirty();
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean isDirty_void(long pNativeObject);
	/**
	 * 是否过时无效
	 * @param  
	 * @return 如果是返回true；否则返回false
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

	protected  void setDirty_void_callback()
	{
		setDirty();
	}

	native private void setDirty_void(long pNativeObject);
	/**
	 * 设置过时无效
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

	public Icacheinfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Icacheinfo(CreatedWhenConstruct cwc, String classNameStr) {
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
	
	public static Icacheinfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Icacheinfo obj = null;
 		if(baseObj instanceof Icacheinfo)
		{
			obj = (Icacheinfo)baseObj;
		} else {
			obj = new Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ICacheInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
