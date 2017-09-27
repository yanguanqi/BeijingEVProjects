package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CUniformParameter>				EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr;
public class UniformParameterPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr", new UniformParameterPtrClassFactory());
	}

	public UniformParameterPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("UniformParameterPtr", null);
	}

	public UniformParameterPtr(com.earthview.world.graphic.rtshadersystem.UniformParameter rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("UniformParameterPtr", list);
	}

	public UniformParameterPtr(com.earthview.world.graphic.rtshadersystem.UniformParameter rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		BasePointer inFreeMethodPtr = new BasePointer(inFreeMethod);
		list.add("inFreeMethod", inFreeMethodPtr.get());
		Create("UniformParameterPtr", list);
	}

	public UniformParameterPtr(com.earthview.world.graphic.rtshadersystem.UniformParameterPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("UniformParameterPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.UniformParameter get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.UniformParameter __returnValue = new com.earthview.world.graphic.rtshadersystem.UniformParameter(CreatedWhenConstruct.CWC_NotToCreate, "CUniformParameter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.UniformParameter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CUniformParameter");
		}
		return __returnValue;
	}
	native private long OperatorConvertionParameterPtr_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.ParameterPtr OperatorConvertionParameterPtr()
	{
		long returnValue = OperatorConvertionParameterPtr_void(this.nativeObject.pointer);
		com.earthview.world.graphic.rtshadersystem.ParameterPtr __returnValue = new com.earthview.world.graphic.rtshadersystem.ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.ParameterPtr)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ParameterPtr");
		}
		return __returnValue;
	}
	public UniformParameterPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UniformParameterPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UniformParameterPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UniformParameterPtr obj = null;
 		if(baseObj instanceof UniformParameterPtr)
		{
			obj = (UniformParameterPtr)baseObj;
		} else {
			obj = new UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "UniformParameterPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
