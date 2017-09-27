package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSerializerFactory extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CModelSerializerFactory", new ModelSerializerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCModelSerializerFactoryProxy", new ModelSerializerFactoryClassFactory());
	}

	public ModelSerializerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCModelSerializerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.ModelSerializerFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	protected  String getFileExtension_void_callback()
	{
		String returnValue = getFileExtension();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFileExtension_void(long pNativeObject);
	public String getFileExtension()
	{
		String returnValue = getFileExtension_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getFileExtension_void_NoVirtual(long pNativeObject);
	protected String getFileExtension_NoVirtual()
	{
		String returnValue = getFileExtension_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  long createInstance_void_callback()
	{
		com.earthview.world.graphic.ModelSerializer returnValue = createInstance();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long createInstance_void(long pNativeObject);
	public com.earthview.world.graphic.ModelSerializer createInstance()
	{
		long returnValue = createInstance_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ModelSerializer __returnValue = new com.earthview.world.graphic.ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate, "CModelSerializer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ModelSerializer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelSerializer");
		}
		return __returnValue;
	}
	native private long createInstance_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.graphic.ModelSerializer createInstance_NoVirtual()
	{
		long returnValue = createInstance_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.ModelSerializer __returnValue = new com.earthview.world.graphic.ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate, "CModelSerializer");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ModelSerializer)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CModelSerializer");
		}
		return __returnValue;
	}

	protected  void destroyInstance_CModelSerializer_callback(long pSerializer)
	{
		com.earthview.world.graphic.ModelSerializer pSerializerParamValue = (pSerializer == 0L ? null : new com.earthview.world.graphic.ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSerializerParamValue != null)
		{
		pSerializerParamValue.setDelegate(true);
		pSerializerParamValue.setInstancePointer(new InstancePointer(pSerializer));
		IClassFactory pSerializerParamValueClassFactory = GlobalClassFactoryMap.get(pSerializerParamValue.getCppInstanceTypeName());
		if (pSerializerParamValueClassFactory != null)
		{
			pSerializerParamValue.setDelegate(true);
			pSerializerParamValue = (com.earthview.world.graphic.ModelSerializer)pSerializerParamValueClassFactory.create();
			pSerializerParamValue.setDelegate(true);
			pSerializerParamValue.setInstancePointer(new InstancePointer(pSerializer));
		}
		}
		destroyInstance(pSerializerParamValue);
	}

	native private void destroyInstance_CModelSerializer(long pNativeObject, long pSerializer);
	public void destroyInstance(com.earthview.world.graphic.ModelSerializer pSerializer)
	{
		long pSerializerParamValue = (pSerializer == null ? 0L : pSerializer.nativeObject.pointer);
		destroyInstance_CModelSerializer(this.nativeObject.pointer, pSerializerParamValue);
	}
	native private void destroyInstance_CModelSerializer_NoVirtual(long pNativeObject, long pSerializer);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.ModelSerializer pSerializer)
	{
		long pSerializerParamValue = (pSerializer == null ? 0L : pSerializer.nativeObject.pointer);
		destroyInstance_CModelSerializer_NoVirtual(this.nativeObject.pointer, pSerializerParamValue);
	}

	public ModelSerializerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelSerializerFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_getFileExtension_void(long pNativeObject, String method);
	native protected void register_createInstance_void(long pNativeObject, String method);
	native protected void register_destroyInstance_CModelSerializer(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getFileExtension_void(this.nativeObject.pointer, "getFileExtension_void_callback");
			this.register_createInstance_void(this.nativeObject.pointer, "createInstance_void_callback");
			this.register_destroyInstance_CModelSerializer(this.nativeObject.pointer, "destroyInstance_CModelSerializer_callback");
		}
	}
	
	public static ModelSerializerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelSerializerFactory obj = null;
 		if(baseObj instanceof ModelSerializerFactory)
		{
			obj = (ModelSerializerFactory)baseObj;
		} else {
			obj = new ModelSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelSerializerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
