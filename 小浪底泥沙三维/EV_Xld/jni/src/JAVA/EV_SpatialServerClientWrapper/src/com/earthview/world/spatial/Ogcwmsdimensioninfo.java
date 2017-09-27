package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * OGCWMS其他维度信息类
 */
public class Ogcwmsdimensioninfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::COGCWMSDimensionInfo", new OgcwmsdimensioninfoClassFactory());
	}

	native private long getName_void(long pNativeObject);
	/**
	 * 获取名称
	 * @return 名称
	 */
	public StringPointer getName()
	{
		long returnValue = getName_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setName_EVString(long pNativeObject, String value);
	/**
	 * 设置名称
	 * @param value 名称
	 */
	public void setName(String value)
	{
		String valueParamValue = value;
		setName_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getUnits_void(long pNativeObject);
	/**
	 * 获取单位描述
	 * @return 单位描述
	 */
	public StringPointer getUnits()
	{
		long returnValue = getUnits_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setUnits_EVString(long pNativeObject, String value);
	/**
	 * 设置单位
	 * @param value 单位名称
	 */
	public void setUnits(String value)
	{
		String valueParamValue = value;
		setUnits_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getUnitSymbol_void(long pNativeObject);
	/**
	 * 获取符号描述
	 * @return 符号描述
	 */
	public StringPointer getUnitSymbol()
	{
		long returnValue = getUnitSymbol_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setUnitSymbol_EVString(long pNativeObject, String value);
	/**
	 * 设置符号描述
	 * @param value 符号描述
	 */
	public void setUnitSymbol(String value)
	{
		String valueParamValue = value;
		setUnitSymbol_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getDefaultValue_void(long pNativeObject);
	/**
	 * 获取默认值
	 * @param value 
	 * @return 默认值
	 */
	public StringPointer getDefaultValue()
	{
		long returnValue = getDefaultValue_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setDefaultValue_EVString(long pNativeObject, String value);
	/**
	 * 设置默认值
	 * @param value 默认值
	 */
	public void setDefaultValue(String value)
	{
		String valueParamValue = value;
		setDefaultValue_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getMultipleValue_void(long pNativeObject);
	/**
	 * 获取倍数
	 * @return 倍数
	 */
	public StringPointer getMultipleValue()
	{
		long returnValue = getMultipleValue_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setMultipleValue_EVString(long pNativeObject, String value);
	/**
	 * 设置倍数
	 * @param value 倍数
	 */
	public void setMultipleValue(String value)
	{
		String valueParamValue = value;
		setMultipleValue_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getNearestValue_void(long pNativeObject);
	/**
	 * 获取最临近值
	 * @return 最近值
	 */
	public StringPointer getNearestValue()
	{
		long returnValue = getNearestValue_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setNearestValue_EVString(long pNativeObject, String value);
	/**
	 * 设置最邻近值
	 * @param value 最近值
	 */
	public void setNearestValue(String value)
	{
		String valueParamValue = value;
		setNearestValue_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long getCurrentValue_void(long pNativeObject);
	/**
	 * 获取当前值
	 * @param value 
	 * @return 当前值
	 */
	public StringPointer getCurrentValue()
	{
		long returnValue = getCurrentValue_void(this.nativeObject.pointer);
		StringPointer __returnValue = new StringPointer(new InstancePointer(returnValue));
		return __returnValue;
	}
	native private void setCurrentValue_EVString(long pNativeObject, String value);
	/**
	 * 设置当前值
	 * @param value 当前值
	 */
	public void setCurrentValue(String value)
	{
		String valueParamValue = value;
		setCurrentValue_EVString(this.nativeObject.pointer, valueParamValue);
	}
	native private long ev_clone_void(long pNativeObject);
	/**
	 * 复制
	 * @return 新建对象指针
	 */
	public com.earthview.world.spatial.Ogcwmsdimensioninfo ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.Ogcwmsdimensioninfo __returnValue = new com.earthview.world.spatial.Ogcwmsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate, "COGCWMSDimensionInfo");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.Ogcwmsdimensioninfo)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "COGCWMSDimensionInfo");
		}
		return __returnValue;
	}
	/**
	 * 构造函数
	 */
	public Ogcwmsdimensioninfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COGCWMSDimensionInfo", null);
	}

	public Ogcwmsdimensioninfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Ogcwmsdimensioninfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Ogcwmsdimensioninfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Ogcwmsdimensioninfo obj = null;
 		if(baseObj instanceof Ogcwmsdimensioninfo)
		{
			obj = (Ogcwmsdimensioninfo)baseObj;
		} else {
			obj = new Ogcwmsdimensioninfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COGCWMSDimensionInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
