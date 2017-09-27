package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FltSerializerFactory extends com.earthview.world.graphic.ModelSerializerFactory {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CFltSerializerFactory", new FltSerializerFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Graphic::JCFltSerializerFactoryProxy", new FltSerializerFactoryClassFactory());
	}

	public FltSerializerFactory() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCFltSerializerFactoryProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.graphic.FltSerializerFactory".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
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

	protected  void destroyInstance_CFltSerializer_callback(long pSerializer)
	{
		com.earthview.world.graphic.FltSerializer pSerializerParamValue = (pSerializer == 0L ? null : new com.earthview.world.graphic.FltSerializer(CreatedWhenConstruct.CWC_NotToCreate));
		if(pSerializerParamValue != null)
		{
		pSerializerParamValue.setDelegate(true);
		pSerializerParamValue.setInstancePointer(new InstancePointer(pSerializer));
		IClassFactory pSerializerParamValueClassFactory = GlobalClassFactoryMap.get(pSerializerParamValue.getCppInstanceTypeName());
		if (pSerializerParamValueClassFactory != null)
		{
			pSerializerParamValue.setDelegate(true);
			pSerializerParamValue = (com.earthview.world.graphic.FltSerializer)pSerializerParamValueClassFactory.create();
			pSerializerParamValue.setDelegate(true);
			pSerializerParamValue.setInstancePointer(new InstancePointer(pSerializer));
		}
		}
		destroyInstance(pSerializerParamValue);
	}

	native private void destroyInstance_CFltSerializer(long pNativeObject, long pSerializer);
	public void destroyInstance(com.earthview.world.graphic.FltSerializer pSerializer)
	{
		long pSerializerParamValue = (pSerializer == null ? 0L : pSerializer.nativeObject.pointer);
		destroyInstance_CFltSerializer(this.nativeObject.pointer, pSerializerParamValue);
	}
	native private void destroyInstance_CFltSerializer_NoVirtual(long pNativeObject, long pSerializer);
	protected void destroyInstance_NoVirtual(com.earthview.world.graphic.FltSerializer pSerializer)
	{
		long pSerializerParamValue = (pSerializer == null ? 0L : pSerializer.nativeObject.pointer);
		destroyInstance_CFltSerializer_NoVirtual(this.nativeObject.pointer, pSerializerParamValue);
	}

	public FltSerializerFactory(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public FltSerializerFactory(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public void destroyInstance(com.earthview.world.graphic.ModelSerializer pSerializer)
	{
		super.destroyInstance_NoVirtual(pSerializer);
	}
	
	native protected void register_destroyInstance_CFltSerializer(long pNativeObject, String method);
	native protected void register_getFileExtension_void(long pNativeObject, String method);
	native protected void register_createInstance_void(long pNativeObject, String method);
	native protected void register_destroyInstance_CModelSerializer(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_destroyInstance_CFltSerializer(this.nativeObject.pointer, "destroyInstance_CFltSerializer_callback");
			this.register_getFileExtension_void(this.nativeObject.pointer, "getFileExtension_void_callback");
			this.register_createInstance_void(this.nativeObject.pointer, "createInstance_void_callback");
			this.register_destroyInstance_CModelSerializer(this.nativeObject.pointer, "destroyInstance_CModelSerializer_callback");
		}
	}
	
	public static FltSerializerFactory fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		FltSerializerFactory obj = null;
 		if(baseObj instanceof FltSerializerFactory)
		{
			obj = (FltSerializerFactory)baseObj;
		} else {
			obj = new FltSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CFltSerializerFactory");
			obj.increaseCast();
		}

		return obj;
	}
}
