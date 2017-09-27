package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 矢量图层线程队列管理器管理db库贴地矢量注记、非贴地矢量注记和扩展及网络矢量的注记的线程
 */
public class VectorLayerBackgroundQueueManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager", new VectorLayerBackgroundQueueManagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取单例
	 * @param  
	 */
	public static com.earthview.world.spatial3d.atlas.VectorLayerBackgroundQueueManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.atlas.VectorLayerBackgroundQueueManager __returnValue = new com.earthview.world.spatial3d.atlas.VectorLayerBackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate, "CVectorLayerBackgroundQueueManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.atlas.VectorLayerBackgroundQueueManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CVectorLayerBackgroundQueueManager");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 释放单例
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private long getExtensionWorkQueue_void(long pNativeObject);
	/**
	 * 获取队列
	 */
	public com.earthview.world.core.WorkQueue getExtensionWorkQueue()
	{
		long returnValue = getExtensionWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	native private long getDBLabelWorkQueue_void(long pNativeObject);
	public com.earthview.world.core.WorkQueue getDBLabelWorkQueue()
	{
		long returnValue = getDBLabelWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	native private long getWebOctreeLabelWorkQueue_void(long pNativeObject);
	public com.earthview.world.core.WorkQueue getWebOctreeLabelWorkQueue()
	{
		long returnValue = getWebOctreeLabelWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	native private long getWebLabelWorkQueue_void(long pNativeObject);
	public com.earthview.world.core.WorkQueue getWebLabelWorkQueue()
	{
		long returnValue = getWebLabelWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	native private long getWebExtensionWorkQueue_void(long pNativeObject);
	public com.earthview.world.core.WorkQueue getWebExtensionWorkQueue()
	{
		long returnValue = getWebExtensionWorkQueue_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.WorkQueue __returnValue = new com.earthview.world.core.WorkQueue(CreatedWhenConstruct.CWC_NotToCreate, "CWorkQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.WorkQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CWorkQueue");
		}
		return __returnValue;
	}
	public VectorLayerBackgroundQueueManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public VectorLayerBackgroundQueueManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static VectorLayerBackgroundQueueManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		VectorLayerBackgroundQueueManager obj = null;
 		if(baseObj instanceof VectorLayerBackgroundQueueManager)
		{
			obj = (VectorLayerBackgroundQueueManager)baseObj;
		} else {
			obj = new VectorLayerBackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CVectorLayerBackgroundQueueManager");
			obj.increaseCast();
		}

		return obj;
	}
}
