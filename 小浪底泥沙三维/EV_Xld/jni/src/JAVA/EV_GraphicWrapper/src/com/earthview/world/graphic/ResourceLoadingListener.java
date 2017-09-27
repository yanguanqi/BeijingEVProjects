package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceLoadingListener extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CResourceLoadingListener", new ResourceLoadingListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCResourceLoadingListenerProxy", new ResourceLoadingListenerClassFactory());
	}

	public ResourceLoadingListener() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCResourceLoadingListenerProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ResourceLoadingListener".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  long resourceLoading_EVString_EVString_CResource_callback(String name, String group, long resource)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Resource resourceParamValue = (resource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resourceParamValue != null)
		{
		resourceParamValue.setDelegate(true);
		resourceParamValue.setInstancePointer(new InstancePointer(resource));
		IClassFactory resourceParamValueClassFactory = GlobalClassFactoryMap.get(resourceParamValue.getCppInstanceTypeName());
		if (resourceParamValueClassFactory != null)
		{
			resourceParamValue.setDelegate(true);
			resourceParamValue = (com.earthview.world.graphic.Resource)resourceParamValueClassFactory.create();
			resourceParamValue.setDelegate(true);
			resourceParamValue.setInstancePointer(new InstancePointer(resource));
		}
		}
		com.earthview.world.core.DataStreamPtr returnValue = resourceLoading(nameParamValue, groupParamValue, resourceParamValue);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long resourceLoading_EVString_EVString_CResource(long pNativeObject, String name, String group, long resource);
	public com.earthview.world.core.DataStreamPtr resourceLoading(String name, String group, com.earthview.world.graphic.Resource resource)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		long returnValue = resourceLoading_EVString_EVString_CResource(this.nativeObject.pointer, nameParamValue, groupParamValue, resourceParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}
	native private long resourceLoading_EVString_EVString_CResource_NoVirtual(long pNativeObject, String name, String group, long resource);
	protected com.earthview.world.core.DataStreamPtr resourceLoading_NoVirtual(String name, String group, com.earthview.world.graphic.Resource resource)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		long returnValue = resourceLoading_EVString_EVString_CResource_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, resourceParamValue);
		com.earthview.world.core.DataStreamPtr __returnValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.DataStreamPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "DataStreamPtr");
		}
		return __returnValue;
	}

	protected  void resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback(String name, String group, long resource, long dataStream)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		com.earthview.world.graphic.Resource resourceParamValue = (resource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resourceParamValue != null)
		{
		resourceParamValue.setDelegate(true);
		resourceParamValue.setInstancePointer(new InstancePointer(resource));
		IClassFactory resourceParamValueClassFactory = GlobalClassFactoryMap.get(resourceParamValue.getCppInstanceTypeName());
		if (resourceParamValueClassFactory != null)
		{
			resourceParamValue.setDelegate(true);
			resourceParamValue = (com.earthview.world.graphic.Resource)resourceParamValueClassFactory.create();
			resourceParamValue.setDelegate(true);
			resourceParamValue.setInstancePointer(new InstancePointer(resource));
		}
		}
		com.earthview.world.core.DataStreamPtr dataStreamParamValue = new com.earthview.world.core.DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		dataStreamParamValue.setDelegate(true);
		dataStreamParamValue.setInstancePointer(new InstancePointer(dataStream));
		IClassFactory dataStreamParamValueClassFactory = GlobalClassFactoryMap.get(dataStreamParamValue.getCppInstanceTypeName());
		if (dataStreamParamValueClassFactory != null)
		{
			dataStreamParamValue.setDelegate(true);
			dataStreamParamValue = (com.earthview.world.core.DataStreamPtr)dataStreamParamValueClassFactory.create();
			dataStreamParamValue.setDelegate(true);
			dataStreamParamValue.setInstancePointer(new InstancePointer(dataStream));
		}
		resourceStreamOpened(nameParamValue, groupParamValue, resourceParamValue, dataStreamParamValue);
	}

	native private void resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr(long pNativeObject, String name, String group, long resource, long dataStream);
	public void resourceStreamOpened(String name, String group, com.earthview.world.graphic.Resource resource, com.earthview.world.core.DataStreamPtr dataStream)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		long dataStreamParamValue = dataStream.nativeObject.pointer;
		resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr(this.nativeObject.pointer, nameParamValue, groupParamValue, resourceParamValue, dataStreamParamValue);
	}
	native private void resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_NoVirtual(long pNativeObject, String name, String group, long resource, long dataStream);
	protected void resourceStreamOpened_NoVirtual(String name, String group, com.earthview.world.graphic.Resource resource, com.earthview.world.core.DataStreamPtr dataStream)
	{
		String nameParamValue = name;
		String groupParamValue = group;
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		long dataStreamParamValue = dataStream.nativeObject.pointer;
		resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_NoVirtual(this.nativeObject.pointer, nameParamValue, groupParamValue, resourceParamValue, dataStreamParamValue);
	}

	protected  boolean resourceCollision_CResource_CResourceManager_callback(long resource, long resourceManager)
	{
		com.earthview.world.graphic.Resource resourceParamValue = (resource == 0L ? null : new com.earthview.world.graphic.Resource(CreatedWhenConstruct.CWC_NotToCreate));
		if(resourceParamValue != null)
		{
		resourceParamValue.setDelegate(true);
		resourceParamValue.setInstancePointer(new InstancePointer(resource));
		IClassFactory resourceParamValueClassFactory = GlobalClassFactoryMap.get(resourceParamValue.getCppInstanceTypeName());
		if (resourceParamValueClassFactory != null)
		{
			resourceParamValue.setDelegate(true);
			resourceParamValue = (com.earthview.world.graphic.Resource)resourceParamValueClassFactory.create();
			resourceParamValue.setDelegate(true);
			resourceParamValue.setInstancePointer(new InstancePointer(resource));
		}
		}
		com.earthview.world.graphic.ResourceManager resourceManagerParamValue = (resourceManager == 0L ? null : new com.earthview.world.graphic.ResourceManager(CreatedWhenConstruct.CWC_NotToCreate));
		if(resourceManagerParamValue != null)
		{
		resourceManagerParamValue.setDelegate(true);
		resourceManagerParamValue.setInstancePointer(new InstancePointer(resourceManager));
		IClassFactory resourceManagerParamValueClassFactory = GlobalClassFactoryMap.get(resourceManagerParamValue.getCppInstanceTypeName());
		if (resourceManagerParamValueClassFactory != null)
		{
			resourceManagerParamValue.setDelegate(true);
			resourceManagerParamValue = (com.earthview.world.graphic.ResourceManager)resourceManagerParamValueClassFactory.create();
			resourceManagerParamValue.setDelegate(true);
			resourceManagerParamValue.setInstancePointer(new InstancePointer(resourceManager));
		}
		}
		boolean returnValue = resourceCollision(resourceParamValue, resourceManagerParamValue);
		boolean __returnValue = returnValue;
		return __returnValue;
	}

	native private boolean resourceCollision_CResource_CResourceManager(long pNativeObject, long resource, long resourceManager);
	public boolean resourceCollision(com.earthview.world.graphic.Resource resource, com.earthview.world.graphic.ResourceManager resourceManager)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		long resourceManagerParamValue = (resourceManager == null ? 0L : resourceManager.nativeObject.pointer);
		boolean returnValue = resourceCollision_CResource_CResourceManager(this.nativeObject.pointer, resourceParamValue, resourceManagerParamValue);
		return returnValue;
	}
	native private boolean resourceCollision_CResource_CResourceManager_NoVirtual(long pNativeObject, long resource, long resourceManager);
	protected boolean resourceCollision_NoVirtual(com.earthview.world.graphic.Resource resource, com.earthview.world.graphic.ResourceManager resourceManager)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		long resourceManagerParamValue = (resourceManager == null ? 0L : resourceManager.nativeObject.pointer);
		boolean returnValue = resourceCollision_CResource_CResourceManager_NoVirtual(this.nativeObject.pointer, resourceParamValue, resourceManagerParamValue);
		return returnValue;
	}

	public ResourceLoadingListener(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ResourceLoadingListener(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_resourceLoading_EVString_EVString_CResource(long pNativeObject, String method);
	native protected void register_resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr(long pNativeObject, String method);
	native protected void register_resourceCollision_CResource_CResourceManager(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_resourceLoading_EVString_EVString_CResource(this.nativeObject.pointer, "resourceLoading_EVString_EVString_CResource_callback");
			this.register_resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr(this.nativeObject.pointer, "resourceStreamOpened_EVString_EVString_CResource_DataStreamPtr_callback");
			this.register_resourceCollision_CResource_CResourceManager(this.nativeObject.pointer, "resourceCollision_CResource_CResourceManager_callback");
		}
	}
	
	public static ResourceLoadingListener fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ResourceLoadingListener obj = null;
 		if(baseObj instanceof ResourceLoadingListener)
		{
			obj = (ResourceLoadingListener)baseObj;
		} else {
			obj = new ResourceLoadingListener(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CResourceLoadingListener");
			obj.increaseCast();
		}

		return obj;
	}
}
