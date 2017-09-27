package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshTemplateGeometryFactory extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory", new MeshTemplateGeometryFactoryClassFactory());
	}

	native private static long getSingletonPtr_void();
	/**
	 * 获取工厂单件对象
	 * @param  
	 * @return 工程单件对象
	 */
	public static com.earthview.world.spatial3d.dataset.MeshTemplateGeometryFactory getSingletonPtr()
	{
		long returnValue = getSingletonPtr_void();
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.MeshTemplateGeometryFactory __returnValue = new com.earthview.world.spatial3d.dataset.MeshTemplateGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate, "CMeshTemplateGeometryFactory");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshTemplateGeometryFactory)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshTemplateGeometryFactory");
		}
		return __returnValue;
	}
	native private static void releaseSingleton_void();
	/**
	 * 释放工程单件对象
	 * @param  
	 */
	public static void releaseSingleton()
	{
		releaseSingleton_void();
	}
	native private long createInstance_void(long pNativeObject);
	/**
	 * 创建一个EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象
	 * @param  
	 * @return 创建的EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象
	 */
	public com.earthview.world.spatial3d.dataset.MeshTemplateGeometry createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial3d.dataset.MeshTemplateGeometry __returnValue = new com.earthview.world.spatial3d.dataset.MeshTemplateGeometry(CreatedWhenConstruct.CWC_NotToCreate, "CMeshTemplateGeometry");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial3d.dataset.MeshTemplateGeometry)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CMeshTemplateGeometry");
		}
		return __returnValue;
	}
	native private void releaseInstance_CMeshTemplateGeometry(long pNativeObject, long geom);
	/**
	 * 释放EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象
	 * @param geom 需要释放的对象
	 */
	public void releaseInstance(com.earthview.world.spatial3d.dataset.MeshTemplateGeometry geom)
	{
		long geomParamValue = (geom == null ? 0L : geom.nativeObject.pointer);
		releaseInstance_CMeshTemplateGeometry(this.nativeObject.pointer, geomParamValue);
	}
	public MeshTemplateGeometryFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MeshTemplateGeometryFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static MeshTemplateGeometryFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MeshTemplateGeometryFactory obj = null;
 		if(baseObj instanceof MeshTemplateGeometryFactory)
		{
			obj = (MeshTemplateGeometryFactory)baseObj;
		} else {
			obj = new MeshTemplateGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMeshTemplateGeometryFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
