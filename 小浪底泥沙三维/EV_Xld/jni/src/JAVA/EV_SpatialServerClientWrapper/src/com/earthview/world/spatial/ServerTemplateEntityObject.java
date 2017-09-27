package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的实体对象类
 */
public class ServerTemplateEntityObject extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CServerTemplateEntityObject", new ServerTemplateEntityObjectClassFactory());
	}

	/**
	 * 构造函数
	 */
	public ServerTemplateEntityObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CServerTemplateEntityObject", null);
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
	public com.earthview.world.spatial.ServerTemplateMeshObject getMeshObjectRef()
	{
		long returnValue = getMeshObjectRef_void(this.nativeObject.pointer);
		com.earthview.world.spatial.ServerTemplateMeshObject __returnValue = new com.earthview.world.spatial.ServerTemplateMeshObject(CreatedWhenConstruct.CWC_NotToCreate, "CServerTemplateMeshObject");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerTemplateMeshObject)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerTemplateMeshObject");
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
	public com.earthview.world.spatial.ServerTemplateModelResource getModelResourceRef(long index)
	{
		long indexParamValue = index;
		long returnValue = getModelResourceRef_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.ServerTemplateModelResource __returnValue = new com.earthview.world.spatial.ServerTemplateModelResource(CreatedWhenConstruct.CWC_NotToCreate, "CServerTemplateModelResource");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.ServerTemplateModelResource)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CServerTemplateModelResource");
		}
		return __returnValue;
	}
	public ServerTemplateEntityObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ServerTemplateEntityObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ServerTemplateEntityObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ServerTemplateEntityObject obj = null;
 		if(baseObj instanceof ServerTemplateEntityObject)
		{
			obj = (ServerTemplateEntityObject)baseObj;
		} else {
			obj = new ServerTemplateEntityObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CServerTemplateEntityObject");
			obj.increaseCast();
		}

		return obj;
	}
}
