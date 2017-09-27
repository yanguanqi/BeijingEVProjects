package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ManualResourceLoader extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CManualResourceLoader", new ManualResourceLoaderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCManualResourceLoaderProxy", new ManualResourceLoaderClassFactory());
	}

	public ManualResourceLoader() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCManualResourceLoaderProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ManualResourceLoader".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  void prepareResource_CResource_callback(long resource)
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
		prepareResource(resourceParamValue);
	}

	native private void prepareResource_CResource(long pNativeObject, long resource);
	public void prepareResource(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		prepareResource_CResource(this.nativeObject.pointer, resourceParamValue);
	}
	native private void prepareResource_CResource_NoVirtual(long pNativeObject, long resource);
	protected void prepareResource_NoVirtual(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		prepareResource_CResource_NoVirtual(this.nativeObject.pointer, resourceParamValue);
	}

	protected  void loadResource_CResource_callback(long resource)
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
		loadResource(resourceParamValue);
	}

	native private void loadResource_CResource(long pNativeObject, long resource);
	public void loadResource(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		loadResource_CResource(this.nativeObject.pointer, resourceParamValue);
	}
	native private void loadResource_CResource_NoVirtual(long pNativeObject, long resource);
	protected void loadResource_NoVirtual(com.earthview.world.graphic.Resource resource)
	{
		long resourceParamValue = (resource == null ? 0L : resource.nativeObject.pointer);
		loadResource_CResource_NoVirtual(this.nativeObject.pointer, resourceParamValue);
	}

	public ManualResourceLoader(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ManualResourceLoader(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_prepareResource_CResource(long pNativeObject, String method);
	native protected void register_loadResource_CResource(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_prepareResource_CResource(this.nativeObject.pointer, "prepareResource_CResource_callback");
			this.register_loadResource_CResource(this.nativeObject.pointer, "loadResource_CResource_callback");
		}
	}
	
	public static ManualResourceLoader fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ManualResourceLoader obj = null;
 		if(baseObj instanceof ManualResourceLoader)
		{
			obj = (ManualResourceLoader)baseObj;
		} else {
			obj = new ManualResourceLoader(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CManualResourceLoader");
			obj.increaseCast();
		}

		return obj;
	}
}
