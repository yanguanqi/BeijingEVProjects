package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ThreadFunc extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CThreadFunc", new ThreadFuncClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCThreadFuncProxy", new ThreadFuncClassFactory());
	}

	public ThreadFunc() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCThreadFuncProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.core.ThreadFunc".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void run_void_callback()
	{
		run();
	}

	native private void run_void(long pNativeObject);
	public void run()
	{
		run_void(this.nativeObject.pointer);
	}
	native private void run_void_NoVirtual(long pNativeObject);
	protected void run_NoVirtual()
	{
		run_void_NoVirtual(this.nativeObject.pointer);
	}

	public ThreadFunc(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ThreadFunc(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_run_void(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_run_void(this.nativeObject.pointer, "run_void_callback");
		}
	}
	
	public static ThreadFunc fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ThreadFunc obj = null;
 		if(baseObj instanceof ThreadFunc)
		{
			obj = (ThreadFunc)baseObj;
		} else {
			obj = new ThreadFunc(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CThreadFunc");
			obj.increaseCast();
		}

		return obj;
	}
}
