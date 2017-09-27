package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::ShadowTextureConfigList> EarthView::World::Graphic::ConstShadowTextureConfigIterator;
public class ConstShadowTextureConfigIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::ConstShadowTextureConfigIterator", new ConstShadowTextureConfigIteratorClassFactory());
	}

	public ConstShadowTextureConfigIterator(com.earthview.world.graphic.ShadowTextureConfigList vec) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer vecPtr = new BasePointer(vec);
		list.add("vec", vecPtr.get());
		Create("ConstShadowTextureConfigIterator", list);
	}

	public ConstShadowTextureConfigIterator(com.earthview.world.graphic.ConstShadowTextureConfigIterator rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("ConstShadowTextureConfigIterator", list);
	}

	native private boolean hasMoreElements_void(long pNativeObject);
	public boolean hasMoreElements()
	{
		boolean returnValue = hasMoreElements_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void moveNext_void(long pNativeObject);
	public void moveNext()
	{
		moveNext_void(this.nativeObject.pointer);
	}
	native private long getCurrent_void(long pNativeObject);
	public com.earthview.world.graphic.ShadowTextureConfig getCurrent()
	{
		long returnValue = getCurrent_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ShadowTextureConfig __returnValue = new com.earthview.world.graphic.ShadowTextureConfig(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowTextureConfig)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		}
		return __returnValue;
	}
	native private long next_void(long pNativeObject);
	public com.earthview.world.graphic.ShadowTextureConfig next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ShadowTextureConfig __returnValue = new com.earthview.world.graphic.ShadowTextureConfig(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowTextureConfig)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		}
		return __returnValue;
	}
	native private long getBegin_void(long pNativeObject);
	public com.earthview.world.graphic.ShadowTextureConfig getBegin()
	{
		long returnValue = getBegin_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ShadowTextureConfig __returnValue = new com.earthview.world.graphic.ShadowTextureConfig(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowTextureConfig)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		}
		return __returnValue;
	}
	native private long getEnd_void(long pNativeObject);
	public com.earthview.world.graphic.ShadowTextureConfig getEnd()
	{
		long returnValue = getEnd_void(this.nativeObject.pointer);
		com.earthview.world.graphic.ShadowTextureConfig __returnValue = new com.earthview.world.graphic.ShadowTextureConfig(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.ShadowTextureConfig)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ShadowTextureConfig");
		}
		return __returnValue;
	}
	public ConstShadowTextureConfigIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ConstShadowTextureConfigIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ConstShadowTextureConfigIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ConstShadowTextureConfigIterator obj = null;
 		if(baseObj instanceof ConstShadowTextureConfigIterator)
		{
			obj = (ConstShadowTextureConfigIterator)baseObj;
		} else {
			obj = new ConstShadowTextureConfigIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ConstShadowTextureConfigIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
