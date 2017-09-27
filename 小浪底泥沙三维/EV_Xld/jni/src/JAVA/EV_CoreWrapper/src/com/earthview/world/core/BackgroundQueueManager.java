package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///PURE function
public class BackgroundQueueManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CBackgroundQueueManager", new BackgroundQueueManagerClassFactory());
	}

	public BackgroundQueueManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CBackgroundQueueManager", null);
	}

	native private static long getSingletonPtr_void();
	public static com.earthview.world.core.BackgroundQueueManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.BackgroundQueueManager __returnValue = new com.earthview.world.core.BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate, "CBackgroundQueueManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BackgroundQueueManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBackgroundQueueManager");
		}
		return __returnValue;
	}
	native private static long getSingleton_void();
	public static com.earthview.world.core.BackgroundQueueManager getSingleton()
	{
		long returnValue = getSingleton_void();
		com.earthview.world.core.BackgroundQueueManager __returnValue = new com.earthview.world.core.BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate, "CBackgroundQueueManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BackgroundQueueManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBackgroundQueueManager");
		}
		return __returnValue;
	}
	native private void registerBackgroundQueue_CBackgroundQueue(long pNativeObject, long queue);
	/// </summary>
	/// 注册一个BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void registerBackgroundQueue(com.earthview.world.core.BackgroundQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		registerBackgroundQueue_CBackgroundQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private void unregisterBackgroundQueue_CBackgroundQueue(long pNativeObject, long queue);
	/// </summary>
	/// 卸载一个BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void unregisterBackgroundQueue(com.earthview.world.core.BackgroundQueue queue)
	{
		long queueParamValue = (queue == null ? 0L : queue.nativeObject.pointer);
		unregisterBackgroundQueue_CBackgroundQueue(this.nativeObject.pointer, queueParamValue);
	}
	native private long getBackgroundQueue_EVString(long pNativeObject, String name);
	/// </summary>
	/// 通过名字获取BackgroundQueue
	/// </summary>
	/// <returns>BackgroundQueue实例</returns>
	public com.earthview.world.core.BackgroundQueue getBackgroundQueue(String name)
	{
		String nameParamValue = name;
		long returnValue = getBackgroundQueue_EVString(this.nativeObject.pointer, nameParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.core.BackgroundQueue __returnValue = new com.earthview.world.core.BackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate, "CBackgroundQueue");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.BackgroundQueue)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBackgroundQueue");
		}
		return __returnValue;
	}
	native private long getRegisterBackgroundQueueNames_void(long pNativeObject);
	/// </summary>
	/// 获取已经存在的BackgroundQueue的所有组名
	/// </summary>
	/// <returns>已经存在的BackgroundQueue的所有组名</returns>
	public com.earthview.world.core.StringVector getRegisterBackgroundQueueNames()
	{
		long returnValue = getRegisterBackgroundQueueNames_void(this.nativeObject.pointer);
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
	native private long getRegisterBackgroundGroupNames_void(long pNativeObject);
	/// </summary>
	/// 获取已经存在的BackgroundQueue的所有名称
	/// </summary>
	/// <returns>已经存在的BackgroundQueue的所有名称</returns>
	public com.earthview.world.core.StringVector getRegisterBackgroundGroupNames()
	{
		long returnValue = getRegisterBackgroundGroupNames_void(this.nativeObject.pointer);
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
	native private void clearBackgroundQueues_void(long pNativeObject);
	/// </summary>
	/// 清空BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void clearBackgroundQueues()
	{
		clearBackgroundQueues_void(this.nativeObject.pointer);
	}
	native private void initialiseAllGroups_void(long pNativeObject);
	/// </summary>
	/// 初始化所有BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void initialiseAllGroups()
	{
		initialiseAllGroups_void(this.nativeObject.pointer);
	}
	native private void initialise_EVString(long pNativeObject, String groupName);
	/// </summary>
	/// 初始化组名里得所有BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void initialise(String groupName)
	{
		String groupNameParamValue = groupName;
		initialise_EVString(this.nativeObject.pointer, groupNameParamValue);
	}
	native private void shutdownAllGroups_void(long pNativeObject);
	/// </summary>
	/// 卸载所有BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void shutdownAllGroups()
	{
		shutdownAllGroups_void(this.nativeObject.pointer);
	}
	native private void shutdown_EVString(long pNativeObject, String groupName);
	/// </summary>
	/// 卸载组名里得所有BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void shutdown(String groupName)
	{
		String groupNameParamValue = groupName;
		shutdown_EVString(this.nativeObject.pointer, groupNameParamValue);
	}
	public BackgroundQueueManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BackgroundQueueManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BackgroundQueueManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BackgroundQueueManager obj = null;
 		if(baseObj instanceof BackgroundQueueManager)
		{
			obj = (BackgroundQueueManager)baseObj;
		} else {
			obj = new BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBackgroundQueueManager");
			obj.increaseCast();
		}

		return obj;
	}
}
