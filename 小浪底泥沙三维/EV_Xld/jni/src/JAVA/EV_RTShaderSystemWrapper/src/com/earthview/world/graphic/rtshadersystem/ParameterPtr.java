package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CParameter>					EarthView::World::Graphic::RTShaderSystem::ParameterPtr;
public class ParameterPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::ParameterPtr", new ParameterPtrClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public ParameterPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ParameterPtr", null);
	}

	/**
	 * 构造函数
	 * @param rep 
	 */
	public ParameterPtr(com.earthview.world.graphic.rtshadersystem.Parameter rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("ParameterPtr", list);
	}

	/**
	 * 构造函数
	 * @param rep 
	 * @param inFreeMethod 
	 */
	public ParameterPtr(com.earthview.world.graphic.rtshadersystem.Parameter rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("ParameterPtr", list);
	}

	/**
	 * 构造函数
	 * @param r 
	 */
	public ParameterPtr(com.earthview.world.graphic.rtshadersystem.ParameterPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("ParameterPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.Parameter get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.Parameter __returnValue = new com.earthview.world.graphic.rtshadersystem.Parameter(CreatedWhenConstruct.CWC_NotToCreate, "CParameter");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.Parameter)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CParameter");
		}
		return __returnValue;
	}
	public ParameterPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ParameterPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ParameterPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ParameterPtr obj = null;
 		if(baseObj instanceof ParameterPtr)
		{
			obj = (ParameterPtr)baseObj;
		} else {
			obj = new ParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ParameterPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
