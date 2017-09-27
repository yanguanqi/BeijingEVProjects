package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BackgroundWorkManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CBackgroundWorkManager", new BackgroundWorkManagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	public static com.earthview.world.geometry3d.BackgroundWorkManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.BackgroundWorkManager __returnValue = new com.earthview.world.geometry3d.BackgroundWorkManager(CreatedWhenConstruct.CWC_NotToCreate, "CBackgroundWorkManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.BackgroundWorkManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CBackgroundWorkManager");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private void init_void(long pNativeObject);
	public void init()
	{
		init_void(this.nativeObject.pointer);
	}
	native private void addReqeust_BackgroundRequest(long pNativeObject, long req);
	public void addReqeust(com.earthview.world.geometry3d.BackgroundWorkQueue.BackgroundRequest req)
	{
		long reqParamValue = (req == null ? 0L : req.nativeObject.pointer);
		addReqeust_BackgroundRequest(this.nativeObject.pointer, reqParamValue);
	}
	native private void abortRequest_CVisibleObject(long pNativeObject, long pObj);
	public void abortRequest(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		abortRequest_CVisibleObject(this.nativeObject.pointer, pObjParamValue);
	}
	native private void syncAbortRequest_CVisibleObject(long pNativeObject, long pObj);
	public void syncAbortRequest(com.earthview.world.geometry3d.VisibleObject pObj)
	{
		long pObjParamValue = (pObj == null ? 0L : pObj.nativeObject.pointer);
		syncAbortRequest_CVisibleObject(this.nativeObject.pointer, pObjParamValue);
	}
	native private long getWorkQuque_void(long pNativeObject);
	public com.earthview.world.core.WorkQueue getWorkQuque()
	{
		long returnValue = getWorkQuque_void(this.nativeObject.pointer);
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
	public BackgroundWorkManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public BackgroundWorkManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static BackgroundWorkManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		BackgroundWorkManager obj = null;
 		if(baseObj instanceof BackgroundWorkManager)
		{
			obj = (BackgroundWorkManager)baseObj;
		} else {
			obj = new BackgroundWorkManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CBackgroundWorkManager");
			obj.increaseCast();
		}

		return obj;
	}
}
