package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuSharedParametersUsage extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CGpuSharedParametersUsage", new GpuSharedParametersUsageClassFactory());
	}

	//// Construct usage
	public GpuSharedParametersUsage(com.earthview.world.graphic.GpuSharedParametersPtr sharedParams, com.earthview.world.graphic.GpuProgramParameters ref_params) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer sharedParamsPtr = new BasePointer(sharedParams);
		list.add("sharedParams", sharedParamsPtr.get());
		BasePointer ref_paramsPtr = new BasePointer(ref_params);
		list.add("ref_params", ref_paramsPtr.get());
		Create("CGpuSharedParametersUsage", list);
	}

	public GpuSharedParametersUsage() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CGpuSharedParametersUsage", null);
	}

	native private void _copySharedParamsToTargetParams_void(long pNativeObject);
	public void _copySharedParamsToTargetParams()
	{
		_copySharedParamsToTargetParams_void(this.nativeObject.pointer);
	}
	native private long getName_void(long pNativeObject);
	//// Get the name of the shared parameter set
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private long getSharedParams_void(long pNativeObject);
	public com.earthview.world.graphic.GpuSharedParametersPtr getSharedParams()
	{
		long returnValue = getSharedParams_void(this.nativeObject.pointer);
		com.earthview.world.graphic.GpuSharedParametersPtr __returnValue = new com.earthview.world.graphic.GpuSharedParametersPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuSharedParametersPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "GpuSharedParametersPtr");
		}
		return __returnValue;
	}
	native private long getTargetParams_void(long pNativeObject);
	public com.earthview.world.graphic.GpuProgramParameters getTargetParams()
	{
		long returnValue = getTargetParams_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.GpuProgramParameters __returnValue = new com.earthview.world.graphic.GpuProgramParameters(CreatedWhenConstruct.CWC_NotToCreate, "CGpuProgramParameters");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.GpuProgramParameters)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CGpuProgramParameters");
		}
		return __returnValue;
	}
	public GpuSharedParametersUsage(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public GpuSharedParametersUsage(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static GpuSharedParametersUsage fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		GpuSharedParametersUsage obj = null;
 		if(baseObj instanceof GpuSharedParametersUsage)
		{
			obj = (GpuSharedParametersUsage)baseObj;
		} else {
			obj = new GpuSharedParametersUsage(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CGpuSharedParametersUsage");
			obj.increaseCast();
		}

		return obj;
	}
}
