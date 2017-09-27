package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelElements extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CLabelElements", new LabelElementsClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public LabelElements() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLabelElements", null);
	}

	native private int getElementCounts_void(long pNativeObject);
	/**
	 * 获取元素个数
	 */
	public int getElementCounts()
	{
		int returnValue = getElementCounts_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addElement_CLabelElement(long pNativeObject, long ref_element);
	/**
	 * 添加元素
	 */
	public void addElement(com.earthview.world.spatial.display.LabelElement ref_element)
	{
		long ref_elementParamValue = (ref_element == null ? 0L : ref_element.nativeObject.pointer);
		addElement_CLabelElement(this.nativeObject.pointer, ref_elementParamValue);
	}
	native private long getElement_ev_int32(long pNativeObject, int index);
	/**
	 * 获取索引处的元素
	 */
	public com.earthview.world.spatial.display.LabelElement getElement(int index)
	{
		int indexParamValue = index;
		long returnValue = getElement_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.LabelElement __returnValue = new com.earthview.world.spatial.display.LabelElement(CreatedWhenConstruct.CWC_NotToCreate, "CLabelElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.LabelElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CLabelElement");
		}
		return __returnValue;
	}
	native private void releaseResources_void(long pNativeObject);
	/**
	 * 释放资源
	 */
	public void releaseResources()
	{
		releaseResources_void(this.nativeObject.pointer);
	}
	public LabelElements(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LabelElements(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LabelElements fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LabelElements obj = null;
 		if(baseObj instanceof LabelElements)
		{
			obj = (LabelElements)baseObj;
		} else {
			obj = new LabelElements(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLabelElements");
			obj.increaseCast();
		}

		return obj;
	}
}
