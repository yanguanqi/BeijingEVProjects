package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 模型属性类设置模型属性
 */
public class ModelProperty extends com.earthview.world.core.StringInterface {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CModelProperty", new ModelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCModelPropertyProxy", new ModelPropertyClassFactory());
	}

	/**
	 * 构造函数
	 * @param nodeCode 模型编号
	 * @param meshId 模型索引
	 * @param ref_mgr 模型特效管理类
	 */
	public ModelProperty(String nodeCode, long meshId, com.earthview.world.spatial3dproxy.ModelEffectDBManager ref_mgr) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		NameValuePairList list = new NameValuePairList();
		BasePointer nodeCodePtr = new BasePointer(nodeCode);
		list.add("nodeCode", nodeCodePtr.get());
		BasePointer meshIdPtr = new BasePointer(meshId);
		list.add("meshId", meshIdPtr.get());
		BasePointer ref_mgrPtr = new BasePointer(ref_mgr);
		list.add("ref_mgr", ref_mgrPtr.get());
		Create("JCModelPropertyProxy", list, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial3dproxy.ModelProperty".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private void setFieldValue_IField_EVString(long pNativeObject, long ref_field, String val);
	/**
	 * 设置字段值
	 * @param field 指向字段的指针
	 * @param val 字段值
	 */
	public void setFieldValue(com.earthview.world.spatial.geodataset.Ifield ref_field, String val)
	{
		long ref_fieldParamValue = (ref_field == null ? 0L : ref_field.nativeObject.pointer);
		String valParamValue = val;
		setFieldValue_IField_EVString(this.nativeObject.pointer, ref_fieldParamValue, valParamValue);
	}
	native private String getFieldValue_IField(long pNativeObject, long field);
	/**
	 * 获取字段值
	 * @param field 指向字段的指针
	 */
	public String getFieldValue(com.earthview.world.spatial.geodataset.Ifield field)
	{
		long fieldParamValue = (field == null ? 0L : field.nativeObject.pointer);
		String returnValue = getFieldValue_IField(this.nativeObject.pointer, fieldParamValue);
		return returnValue;
	}
	public ModelProperty(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public ModelProperty(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	public boolean setParameter(String name, String value)
	{
		return super.setParameter_NoVirtual(name, value);
	}
	public boolean setParameter(String name, boolean readOnly, boolean enable)
	{
		return super.setParameter_NoVirtual(name, readOnly, enable);
	}
	public void setParameterList(com.earthview.world.core.CommonStringPairList paramList)
	{
		super.setParameterList_NoVirtual(paramList);
	}
	public String getParameter(String name)
	{
		return super.getParameter_NoVirtual(name);
	}
	public void copyParametersTo(com.earthview.world.core.StringInterface dest)
	{
		super.copyParametersTo_NoVirtual(dest);
	}
	
	native protected void register_setParameter_EVString_EVString(long pNativeObject, String method);
	native protected void register_setParameter_EVString_ev_bool_ev_bool(long pNativeObject, String method);
	native protected void register_setParameterList_CommonStringPairList(long pNativeObject, String method);
	native protected void register_getParameter_EVString(long pNativeObject, String method);
	native protected void register_copyParametersTo_CStringInterface(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_setParameter_EVString_EVString(this.nativeObject.pointer, "setParameter_EVString_EVString_callback");
			this.register_setParameter_EVString_ev_bool_ev_bool(this.nativeObject.pointer, "setParameter_EVString_ev_bool_ev_bool_callback");
			this.register_setParameterList_CommonStringPairList(this.nativeObject.pointer, "setParameterList_CommonStringPairList_callback");
			this.register_getParameter_EVString(this.nativeObject.pointer, "getParameter_EVString_callback");
			this.register_copyParametersTo_CStringInterface(this.nativeObject.pointer, "copyParametersTo_CStringInterface_callback");
		}
	}
	
	public static ModelProperty fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		ModelProperty obj = null;
 		if(baseObj instanceof ModelProperty)
		{
			obj = (ModelProperty)baseObj;
		} else {
			obj = new ModelProperty(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CModelProperty");
			obj.increaseCast();
		}

		return obj;
	}
}
