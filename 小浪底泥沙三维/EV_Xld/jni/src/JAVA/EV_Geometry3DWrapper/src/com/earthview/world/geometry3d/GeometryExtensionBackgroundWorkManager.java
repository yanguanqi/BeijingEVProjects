package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///扩展对象中的线程
public class GeometryExtensionBackgroundWorkManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager", new GeometryExtensionBackgroundWorkManagerClassFactory());
	}

	native private static long getSingletonPtr_void();
	public static com.earthview.world.geometry3d.GeometryExtensionBackgroundWorkManager getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.geometry3d.GeometryExtensionBackgroundWorkManager __returnValue = new com.earthview.world.geometry3d.GeometryExtensionBackgroundWorkManager(CreatedWhenConstruct.CWC_NotToCreate, "CGeometryExtensionBackgroundWorkManager");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.geometry3d.GeometryExtensionBackgroundWorkManager)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGeometryExtensionBackgroundWorkManager");
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
	public GeometryExtensionBackgroundWorkManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GeometryExtensionBackgroundWorkManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GeometryExtensionBackgroundWorkManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GeometryExtensionBackgroundWorkManager obj = null;
 		if(baseObj instanceof GeometryExtensionBackgroundWorkManager)
		{
			obj = (GeometryExtensionBackgroundWorkManager)baseObj;
		} else {
			obj = new GeometryExtensionBackgroundWorkManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGeometryExtensionBackgroundWorkManager");
			obj.increaseCast();
		}

		return obj;
	}
}
