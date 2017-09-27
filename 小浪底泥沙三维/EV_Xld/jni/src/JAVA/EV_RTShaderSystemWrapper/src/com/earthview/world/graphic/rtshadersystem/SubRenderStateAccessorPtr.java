package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>	EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr;
public class SubRenderStateAccessorPtr extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr", new SubRenderStateAccessorPtrClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public SubRenderStateAccessorPtr() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("SubRenderStateAccessorPtr", null);
	}

	/**
	 * 构造函数
	 * @param rep 
	 */
	public SubRenderStateAccessorPtr(com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessor rep) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer repPtr = new BasePointer(rep);
		list.add("rep", repPtr.get());
		if(rep != null)
		{
		rep.setNoFree(true);
		}
		Create("SubRenderStateAccessorPtr", list);
	}

	/**
	 * 构造函数
	 * @param rep 
	 * @param inFreeMethod 
	 */
	public SubRenderStateAccessorPtr(com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessor rep, com.earthview.world.core.SharedPtrFreeMethod inFreeMethod) {
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
		Create("SubRenderStateAccessorPtr", list);
	}

	/**
	 * 构造函数
	 * @param r 
	 */
	public SubRenderStateAccessorPtr(com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessorPtr r) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rPtr = new BasePointer(r);
		list.add("r", rPtr.get());
		Create("SubRenderStateAccessorPtr", list);
	}

	native private long get_void(long pNativeObject);
	public com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessor get()
	{
		long returnValue = get_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessor __returnValue = new com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessor(CreatedWhenConstruct.CWC_NotToCreate, "CSubRenderStateAccessor");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.rtshadersystem.SubRenderStateAccessor)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubRenderStateAccessor");
		}
		return __returnValue;
	}
	public SubRenderStateAccessorPtr(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public SubRenderStateAccessorPtr(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static SubRenderStateAccessorPtr fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		SubRenderStateAccessorPtr obj = null;
 		if(baseObj instanceof SubRenderStateAccessorPtr)
		{
			obj = (SubRenderStateAccessorPtr)baseObj;
		} else {
			obj = new SubRenderStateAccessorPtr(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "SubRenderStateAccessorPtr");
			obj.increaseCast();
		}

		return obj;
	}
}
