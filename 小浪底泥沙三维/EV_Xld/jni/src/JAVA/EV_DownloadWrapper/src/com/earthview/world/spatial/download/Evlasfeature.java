package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

/**
 * 点云要素
 */
public class Evlasfeature extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::EVlasFeature", new EvlasfeatureClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public Evlasfeature() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("EVlasFeature", null);
	}

	native private String getName_void(long pNativeObject);
	/**
	 * 获取要素名称
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getValue_void(long pNativeObject);
	/**
	 * 获取要素值
	 */
	public String getValue()
	{
		String returnValue = getValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String name);
	/**
	 * 设置要素名称
	 */
	public void setName(String name)
	{
		String nameParamValue = name;
		setName_EVString(this.nativeObject.pointer, nameParamValue);
	}
	native private void setValue_EVString(long pNativeObject, String value);
	/**
	 * 设置要素值
	 */
	public void setValue(String value)
	{
		String valueParamValue = value;
		setValue_EVString(this.nativeObject.pointer, valueParamValue);
	}
	public Evlasfeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Evlasfeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Evlasfeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Evlasfeature obj = null;
 		if(baseObj instanceof Evlasfeature)
		{
			obj = (Evlasfeature)baseObj;
		} else {
			obj = new Evlasfeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "EVlasFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
