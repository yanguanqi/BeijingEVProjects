package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceGeometryFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory", new ResourceGeometryFactoryClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取工厂单件对象
	 * @param  
	 * @return 工厂单件对象
	 */
	public static com.earthview.world.spatial3d.dataset.ResourceGeometryFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ResourceGeometryFactory __returnValue = new com.earthview.world.spatial3d.dataset.ResourceGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate, "CResourceGeometryFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ResourceGeometryFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceGeometryFactory");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 是否工厂单件对象
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private long createInstance_void(long pNativeObject);
	/**
	 * 创建EarthView::World::Spatial3D::Dataset::CResourceGeometry对象
	 * @param  
	 * @return EarthView::World::Spatial3D::Dataset::CResourceGeometry对象
	 */
	public com.earthview.world.spatial3d.dataset.ResourceGeometry createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.ResourceGeometry __returnValue = new com.earthview.world.spatial3d.dataset.ResourceGeometry(CreatedWhenConstruct.CWC_NotToCreate, "CResourceGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.ResourceGeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CResourceGeometry");
		}
		return __returnValue;
	}
	native private void releaseInstance_CResourceGeometry(long pNativeObject, long geom);
	/**
	 * 释放EarthView::World::Spatial3D::Dataset::CResourceGeometry对象
	 * @param geom 需要释放的对象
	 */
	public void releaseInstance(com.earthview.world.spatial3d.dataset.ResourceGeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		releaseInstance_CResourceGeometry(this.nativeObject.pointer, geomParamValue);
	}
	public ResourceGeometryFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceGeometryFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ResourceGeometryFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceGeometryFactory obj = null;
 		if(baseObj instanceof ResourceGeometryFactory)
		{
			obj = (ResourceGeometryFactory)baseObj;
		} else {
			obj = new ResourceGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceGeometryFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
