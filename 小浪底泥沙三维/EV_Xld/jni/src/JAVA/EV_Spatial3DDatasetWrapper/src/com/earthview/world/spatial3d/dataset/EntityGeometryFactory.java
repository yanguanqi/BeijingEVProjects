package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityGeometryFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory", new EntityGeometryFactoryClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取EarthView::World::Spatial3D::Dataset::CEntityGeometry工厂对象
	 * @param  
	 * @return 工厂对象
	 */
	public static com.earthview.world.spatial3d.dataset.EntityGeometryFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.EntityGeometryFactory __returnValue = new com.earthview.world.spatial3d.dataset.EntityGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate, "CEntityGeometryFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EntityGeometryFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntityGeometryFactory");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 释放EarthView::World::Spatial3D::Dataset::CEntityGeometry工厂对象
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private long createInstance_void(long pNativeObject);
	/**
	 * 创建一个EarthView::World::Spatial3D::Dataset::CEntityGeometry
	 * @param  
	 * @return 构造的EarthView::World::Spatial3D::Dataset::CEntityGeometry对象
	 */
	public com.earthview.world.spatial3d.dataset.EntityGeometry createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.EntityGeometry __returnValue = new com.earthview.world.spatial3d.dataset.EntityGeometry(CreatedWhenConstruct.CWC_NotToCreate, "CEntityGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.EntityGeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CEntityGeometry");
		}
		return __returnValue;
	}
	native private void releaseInstance_CEntityGeometry(long pNativeObject, long geom);
	/**
	 * 释放一个EarthView::World::Spatial3D::Dataset::CEntityGeometry
	 * @param geom 需要释放的EarthView::World::Spatial3D::Dataset::CEntityGeometry对象
	 */
	public void releaseInstance(com.earthview.world.spatial3d.dataset.EntityGeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		releaseInstance_CEntityGeometry(this.nativeObject.pointer, geomParamValue);
	}
	public EntityGeometryFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EntityGeometryFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EntityGeometryFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EntityGeometryFactory obj = null;
 		if(baseObj instanceof EntityGeometryFactory)
		{
			obj = (EntityGeometryFactory)baseObj;
		} else {
			obj = new EntityGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEntityGeometryFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
