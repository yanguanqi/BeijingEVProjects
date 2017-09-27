package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的实体对象类
 */
public class ServerEntityObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerEntityObject", new ServerEntityObjectClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ServerEntityObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerEntityObject", null);
	}

	native private String getDatasetName_void(long pNativeObject);
	/**
	 * 获取数据名称
	 * @return 数据名称
	 */
	public String getDatasetName()
	{
		String returnValue = getDatasetName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getEntityID_void(long pNativeObject);
	/**
	 * 获取对应的ID号
	 * @return ID号
	 */
	public int getEntityID()
	{
		int returnValue = getEntityID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getMeshObjectRef_void(long pNativeObject);
	/**
	 * 获取网格信息
	 * @return 网格对象指针
	 */
	public com.earthview.world.spatial.ServerMeshObject getMeshObjectRef()
	{
		long returnValue = getMeshObjectRef_void(this.nativeObject.pointer);
		com.earthview.world.spatial.ServerMeshObject __returnValue = new com.earthview.world.spatial.ServerMeshObject(CreatedWhenConstruct.CWC_NotToCreate, "CServerMeshObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerMeshObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerMeshObject");
		}
		return __returnValue;
	}
	native private long getModelResourceCount_void(long pNativeObject);
	/**
	 * 获取资源数目
	 * @return 资源数目
	 */
	public long getModelResourceCount()
	{
		long returnValue = getModelResourceCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getModelResourceRef_ev_uint32(long pNativeObject, long index);
	/**
	 * 获取指定索引的资源信息
	 * @param index 索引
	 * @return 指定的资源对象指针
	 */
	public com.earthview.world.spatial.ServerModelResource getModelResourceRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getModelResourceRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerModelResource __returnValue = new com.earthview.world.spatial.ServerModelResource(CreatedWhenConstruct.CWC_NotToCreate, "CServerModelResource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerModelResource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerModelResource");
		}
		return __returnValue;
	}
	public ServerEntityObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerEntityObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerEntityObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerEntityObject obj = null;
 		if(baseObj instanceof ServerEntityObject)
		{
			obj = (ServerEntityObject)baseObj;
		} else {
			obj = new ServerEntityObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerEntityObject");
			obj.increaseCast();
		}

		return obj;
	}
}
