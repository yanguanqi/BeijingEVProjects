package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class BackgroundQueue extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CBackgroundQueue", new BackgroundQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCBackgroundQueueProxy", new BackgroundQueueClassFactory());
	}

	public BackgroundQueue() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCBackgroundQueueProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.BackgroundQueue".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void initialise_void_callback()
	{
		initialise();
	}

	native private void initialise_void(long pNativeObject);
	/// </summary>
	/// 初始化这个BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void initialise()
	{
		initialise_void(this.nativeObject.pointer);
	}
	native private void initialise_void_NoVirtual(long pNativeObject);
	protected void initialise_NoVirtual()
	{
		initialise_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  void shutdown_void_callback()
	{
		shutdown();
	}

	native private void shutdown_void(long pNativeObject);
	///PURE function
	/// </summary>
	/// 卸载这个BackgroundQueue
	/// </summary>
	/// <returns>None</returns>
	public void shutdown()
	{
		shutdown_void(this.nativeObject.pointer);
	}
	native private void shutdown_void_NoVirtual(long pNativeObject);
	protected void shutdown_NoVirtual()
	{
		shutdown_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  String getGroupName_void_callback()
	{
		String returnValue = getGroupName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getGroupName_void(long pNativeObject);
	///PURE function
	/// </summary>
	/// 获取BackgroundQueue所在的组
	/// </summary>
	/// <returns>组名</returns>
	public String getGroupName()
	{
		String returnValue = getGroupName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getGroupName_void_NoVirtual(long pNativeObject);
	protected String getGroupName_NoVirtual()
	{
		String returnValue = getGroupName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getName_void_callback()
	{
		String returnValue = getName();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getName_void(long pNativeObject);
	///PURE function
	/// </summary>
	/// 获取BackgroundQueue的名字，唯一标识
	/// </summary>
	/// <returns>BackgroundQueue的名字</returns>
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getName_void_NoVirtual(long pNativeObject);
	protected String getName_NoVirtual()
	{
		String returnValue = getName_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	public BackgroundQueue(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BackgroundQueue(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_initialise_void(long pNativeObject, String method);
	native protected void register_shutdown_void(long pNativeObject, String method);
	native protected void register_getGroupName_void(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_initialise_void(this.nativeObject.pointer, "initialise_void_callback");
			this.register_shutdown_void(this.nativeObject.pointer, "shutdown_void_callback");
			this.register_getGroupName_void(this.nativeObject.pointer, "getGroupName_void_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
		}
	}
	
	public static BackgroundQueue fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BackgroundQueue obj = null;
 		if(baseObj instanceof BackgroundQueue)
		{
			obj = (BackgroundQueue)baseObj;
		} else {
			obj = new BackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBackgroundQueue");
			obj.increaseCast();
		}

		return obj;
	}
}
