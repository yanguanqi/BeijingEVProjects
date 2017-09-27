package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ivectorfilefeatureiterator extends com.earthview.world.spatial.geodataset.Ifeatureiterator {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureIterator", new IvectorfilefeatureiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileFeatureIteratorProxy", new IvectorfilefeatureiteratorClassFactory());
	}

	native private long next_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifeature next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}
	native private long next_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifeature next_NoVirtual()
	{
		long returnValue = next_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifeature)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFeature");
		}
		return __returnValue;
	}

	native private long getFields_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifields getFields()
	{
		long returnValue = getFields_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	native private long getFields_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.geodataset.Ifields getFields_NoVirtual()
	{
		long returnValue = getFields_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}

	native private long getField_ev_uint32(long pNativeObject, long index);
	public com.earthview.world.spatial.geodataset.Ifield getField(long index)
	{
		long indexParamValue = index;
		long returnValue = getField_ev_uint32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}
	native private long getField_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected com.earthview.world.spatial.geodataset.Ifield getField_NoVirtual(long index)
	{
		long indexParamValue = index;
		long returnValue = getField_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifield __returnValue = new com.earthview.world.spatial.geodataset.Ifield(CreatedWhenConstruct.CWC_NotToCreate, "IField");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifield)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IField");
		}
		return __returnValue;
	}

	native private int findField_EVString(long pNativeObject, String fieldName);
	public int findField(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}
	native private int findField_EVString_NoVirtual(long pNativeObject, String fieldName);
	protected int findField_NoVirtual(String fieldName)
	{
		String fieldNameParamValue = fieldName;
		int returnValue = findField_EVString_NoVirtual(this.nativeObject.pointer, fieldNameParamValue);
		return returnValue;
	}

	public Ivectorfilefeatureiterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ivectorfilefeatureiterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	native protected void register_next_void(long pNativeObject, String method);
	native protected void register_getFields_void(long pNativeObject, String method);
	native protected void register_getField_ev_uint32(long pNativeObject, String method);
	native protected void register_findField_EVString(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_next_void(this.nativeObject.pointer, "next_void_callback");
			this.register_getFields_void(this.nativeObject.pointer, "getFields_void_callback");
			this.register_getField_ev_uint32(this.nativeObject.pointer, "getField_ev_uint32_callback");
			this.register_findField_EVString(this.nativeObject.pointer, "findField_EVString_callback");
		}
	}
	
	public static Ivectorfilefeatureiterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ivectorfilefeatureiterator obj = null;
 		if(baseObj instanceof Ivectorfilefeatureiterator)
		{
			obj = (Ivectorfilefeatureiterator)baseObj;
		} else {
			obj = new Ivectorfilefeatureiterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IVectorFileFeatureIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
