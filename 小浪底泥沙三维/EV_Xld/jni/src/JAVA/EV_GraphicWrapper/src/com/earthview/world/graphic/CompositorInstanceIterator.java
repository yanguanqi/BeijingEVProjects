package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorInstanceIterator extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CompositorInstanceIterator", new CompositorInstanceIteratorClassFactory());
	}

	public CompositorInstanceIterator(com.earthview.world.graphic.CompositorInstances lst) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer lstPtr = new BasePointer(lst);
		list.add("lst", lstPtr.get());
		Create("CompositorInstanceIterator", list);
	}

	public CompositorInstanceIterator(com.earthview.world.graphic.CompositorInstanceIterator rhs) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer rhsPtr = new BasePointer(rhs);
		list.add("rhs", rhsPtr.get());
		Create("CompositorInstanceIterator", list);
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
	public com.earthview.world.graphic.CompositorInstance getCurrent()
	{
		long returnValue = getCurrent_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private long next_void(long pNativeObject);
	public com.earthview.world.graphic.CompositorInstance next()
	{
		long returnValue = next_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private long getBegin_void(long pNativeObject);
	public com.earthview.world.graphic.CompositorInstance getBegin()
	{
		long returnValue = getBegin_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	native private long getEnd_void(long pNativeObject);
	public com.earthview.world.graphic.CompositorInstance getEnd()
	{
		long returnValue = getEnd_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.graphic.CompositorInstance __returnValue = new com.earthview.world.graphic.CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate, "CCompositorInstance");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.graphic.CompositorInstance)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CCompositorInstance");
		}
		return __returnValue;
	}
	public CompositorInstanceIterator(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CompositorInstanceIterator(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CompositorInstanceIterator fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CompositorInstanceIterator obj = null;
 		if(baseObj instanceof CompositorInstanceIterator)
		{
			obj = (CompositorInstanceIterator)baseObj;
		} else {
			obj = new CompositorInstanceIterator(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CompositorInstanceIterator");
			obj.increaseCast();
		}

		return obj;
	}
}
