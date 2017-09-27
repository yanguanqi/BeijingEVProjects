package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderSystemThread extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CRenderSystemThread", new RenderSystemThreadClassFactory());
	}

	native private static void registerRenderSystemThread_CDefaultWorkQueue(long workQueue);
	public static void registerRenderSystemThread(com.earthview.world.core.DefaultWorkQueue workQueue)
	{
		long workQueueParamValue = (workQueue == null ? 0L : workQueue.nativeObject.pointer);
		registerRenderSystemThread_CDefaultWorkQueue(workQueueParamValue);
	}
	native private static void preExtraThreadsStarted_void();
	public static void preExtraThreadsStarted()
	{
		preExtraThreadsStarted_void();
	}
	native private static void postExtraThreadsStarted_void();
	public static void postExtraThreadsStarted()
	{
		postExtraThreadsStarted_void();
	}
	native private static void registerThread_void();
	public static void registerThread()
	{
		registerThread_void();
	}
	native private static void unregisterThread_void();
	public static void unregisterThread()
	{
		unregisterThread_void();
	}
	native private static void flushRenderSystem_void();
	public static void flushRenderSystem()
	{
		flushRenderSystem_void();
	}
	public RenderSystemThread(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RenderSystemThread(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RenderSystemThread fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RenderSystemThread obj = null;
 		if(baseObj instanceof RenderSystemThread)
		{
			obj = (RenderSystemThread)baseObj;
		} else {
			obj = new RenderSystemThread(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRenderSystemThread");
			obj.increaseCast();
		}

		return obj;
	}
}
