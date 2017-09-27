package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LabelElement extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CLabelElement", new LabelElementClassFactory());
	}

	/**
	 * 默认构造函数
	 */
	public LabelElement() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLabelElement", null);
	}

	native private int getSubElementCounts_void(long pNativeObject);
	/**
	 * 获取子元素个数
	 */
	public int getSubElementCounts()
	{
		int returnValue = getSubElementCounts_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void addSubElement_CSubLabelElement(long pNativeObject, long ref_subElement);
	/**
	 * 添加子元素
	 */
	public void addSubElement(com.earthview.world.spatial.display.SubLabelElement ref_subElement)
	{
		long ref_subElementParamValue = (ref_subElement == null ? 0L : ref_subElement.nativeObject.pointer);
		addSubElement_CSubLabelElement(this.nativeObject.pointer, ref_subElementParamValue);
	}
	native private long getSubElement_ev_int32(long pNativeObject, int index);
	/**
	 * 获取索引处的子元素
	 */
	public com.earthview.world.spatial.display.SubLabelElement getSubElement(int index)
	{
		int indexParamValue = index;
		long returnValue = getSubElement_ev_int32(this.nativeObject.pointer, indexParamValue);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.SubLabelElement __returnValue = new com.earthview.world.spatial.display.SubLabelElement(CreatedWhenConstruct.CWC_NotToCreate, "CSubLabelElement");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.SubLabelElement)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "CSubLabelElement");
		}
		return __returnValue;
	}
	native private boolean getPlaced_void(long pNativeObject);
	/**
	 * 是否显示
	 */
	public boolean getPlaced()
	{
		boolean returnValue = getPlaced_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getFeatureID_void(long pNativeObject);
	/**
	 * 获取关联要素ID
	 */
	public int getFeatureID()
	{
		int returnValue = getFeatureID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getClassID_void(long pNativeObject);
	/**
	 * 获取标识ID
	 */
	public int getClassID()
	{
		int returnValue = getClassID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getLabel_void(long pNativeObject);
	/**
	 * 获取label
	 */
	public StringPointer getLabel()
	{
		long returnValue = getLabel_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setPlaced_ev_bool(long pNativeObject, boolean placed);
	/**
	 * 设置是否显示
	 */
	public void setPlaced(boolean placed)
	{
		boolean placedParamValue = placed;
		setPlaced_ev_bool(this.nativeObject.pointer, placedParamValue);
	}
	native private void setFeatureID_ev_int32(long pNativeObject, int id);
	/**
	 * 设置关联要素ID
	 */
	public void setFeatureID(int id)
	{
		int idParamValue = id;
		setFeatureID_ev_int32(this.nativeObject.pointer, idParamValue);
	}
	native private void setClassID_ev_int32(long pNativeObject, int id);
	/**
	 * 设置标识ID
	 */
	public void setClassID(int id)
	{
		int idParamValue = id;
		setClassID_ev_int32(this.nativeObject.pointer, idParamValue);
	}
	native private void setLabel_EVString(long pNativeObject, String label);
	/**
	 * 设置label
	 */
	public void setLabel(String label)
	{
		String labelParamValue = label;
		setLabel_EVString(this.nativeObject.pointer, labelParamValue);
	}
	public LabelElement(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LabelElement(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LabelElement fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LabelElement obj = null;
 		if(baseObj instanceof LabelElement)
		{
			obj = (LabelElement)baseObj;
		} else {
			obj = new LabelElement(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLabelElement");
			obj.increaseCast();
		}

		return obj;
	}
}
