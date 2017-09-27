package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelEditOperation extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::ModelEditOperation", new ModelEditOperationClassFactory());
	}

	public ModelEditOperation() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelEditOperation", null);
	}

	native private int get_mOperType_void(long pNativeObject);
	public com.earthview.world.spatial3d.dataset.EntityDatasetOperType get_mOperType()
	{
		int jniValue = get_mOperType_void(this.nativeObject.pointer);
		
		return com.earthview.world.spatial3d.dataset.EntityDatasetOperType.toEnum(jniValue);
	}
	
	native private void set_mOperType_EntityDatasetOperType (long pNativeObject, int value);
	public void set_mOperType(com.earthview.world.spatial3d.dataset.EntityDatasetOperType mOperType)
	{
		int mOperTypeParamValue = mOperType.getValue();
		
		set_mOperType_EntityDatasetOperType(this.nativeObject.pointer, mOperTypeParamValue);
	}
	
	native private long get_mpOperValue_void(long pNativeObject);
	public com.earthview.world.spatial.geodataset.Ifeature get_mpOperValue()
	{
		long jniValue = get_mpOperValue_void(this.nativeObject.pointer);
		
		if(jniValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifeature __returnValue = new com.earthview.world.spatial.geodataset.Ifeature(CreatedWhenConstruct.CWC_NotToCreate, "IFeature");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(jniValue);
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
	
	native private void set_mpOperValue_IFeature (long pNativeObject, long value);
	public void set_mpOperValue(com.earthview.world.spatial.geodataset.Ifeature mpOperValue)
	{
		long mpOperValueParamValue = (mpOperValue == null ? 0L : mpOperValue.nativeObject.pointer);
		
		set_mpOperValue_IFeature(this.nativeObject.pointer, mpOperValueParamValue);
	}
	
	public ModelEditOperation(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelEditOperation(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelEditOperation fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelEditOperation obj = null;
 		if(baseObj instanceof ModelEditOperation)
		{
			obj = (ModelEditOperation)baseObj;
		} else {
			obj = new ModelEditOperation(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelEditOperation");
			obj.increaseCast();
		}

		return obj;
	}
}
