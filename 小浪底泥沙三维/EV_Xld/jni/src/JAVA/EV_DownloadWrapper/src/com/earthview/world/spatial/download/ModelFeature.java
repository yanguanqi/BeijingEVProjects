package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

/**
 * 多级LOD模型要素
 */
public class ModelFeature extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Download::ModelFeature", new ModelFeatureClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public ModelFeature() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("ModelFeature", null);
	}

	native private long addValue_EVString(long pNativeObject, String fieldvalue);
	/**
	 * 添加字段值到集合
	 * @param  字段值
	 * @return ev_uint32
	 */
	public long addValue(String fieldvalue)
	{
		String fieldvalueParamValue = fieldvalue;
		long returnValue = addValue_EVString(this.nativeObject.pointer, fieldvalueParamValue);
		return returnValue;
	}
	native private String getValue_EVString(long pNativeObject, String name);
	/**
	 * 根据字段名称获取字段的值
	 * @param name 字段名称
	 * @return ev_string
	 */
	public String getValue(String name)
	{
		String nameParamValue = name;
		String returnValue = getValue_EVString(this.nativeObject.pointer, nameParamValue);
		return returnValue;
	}
	native private void setFields_IFields(long pNativeObject, long ref_fields);
	/**
	 * 设置Feature的字段信息
	 * @param fields 字段集合指针
	 */
	public void setFields(com.earthview.world.spatial.geodataset.Ifields ref_fields)
	{
		long ref_fieldsParamValue = (ref_fields == null ? 0L : ref_fields.nativeObject.pointer);
		setFields_IFields(this.nativeObject.pointer, ref_fieldsParamValue);
	}
	native private long getFields_void(long pNativeObject);
	/**
	 * 返回字段集合
	 * @param  
	 * @return 返回字段集合指针
	 */
	public com.earthview.world.spatial.geodataset.Ifields getFields()
	{
		long returnValue = getFields_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.geodataset.Ifields __returnValue = new com.earthview.world.spatial.geodataset.Ifields(CreatedWhenConstruct.CWC_NotToCreate, "IFields");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.geodataset.Ifields)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "IFields");
		}
		return __returnValue;
	}
	public ModelFeature(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelFeature(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static ModelFeature fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelFeature obj = null;
 		if(baseObj instanceof ModelFeature)
		{
			obj = (ModelFeature)baseObj;
		} else {
			obj = new ModelFeature(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "ModelFeature");
			obj.increaseCast();
		}

		return obj;
	}
}
