package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 用户自定义特效类型类
 */
public class EffectUserTypeInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo", new EffectUserTypeInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectUserTypeInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectUserTypeInfo", null);
	}

	native private String getUserType_void(long pNativeObject);
	/**
	 * 返回用户自定义特效分类编码
	 * @param  
	 * @return 用户自定义特效分类编码
	 */
	public String getUserType()
	{
		String returnValue = getUserType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUserType_EVString(long pNativeObject, String val);
	/**
	 * 设置用户自定义特效分类编码
	 * @param val 用户自定义特效分类编码
	 */
	public void setUserType(String val)
	{
		String valParamValue = val;
		setUserType_EVString(this.nativeObject.pointer, valParamValue);
	}
	native private String getUserTypeName_void(long pNativeObject);
	/**
	 * 返回用户自定义特效分类名字
	 * @param  
	 * @return 用户自定义特效分类名字
	 */
	public String getUserTypeName()
	{
		String returnValue = getUserTypeName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUserTypeName_EVString(long pNativeObject, String val);
	/**
	 * 设置用户自定义特效分类名字
	 * @param val 用户自定义特效分类名字
	 */
	public void setUserTypeName(String val)
	{
		String valParamValue = val;
		setUserTypeName_EVString(this.nativeObject.pointer, valParamValue);
	}
	native private String getUserTypeDesc_void(long pNativeObject);
	/**
	 * 返回用户自定义类型描述
	 * @param  
	 * @return 用户自定义类型描述
	 */
	public String getUserTypeDesc()
	{
		String returnValue = getUserTypeDesc_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setUserTypeDesc_EVString(long pNativeObject, String val);
	/**
	 * 设置用户自定义类型描述
	 * @param val 用户自定义类型描述
	 */
	public void setUserTypeDesc(String val)
	{
		String valParamValue = val;
		setUserTypeDesc_EVString(this.nativeObject.pointer, valParamValue);
	}
	public EffectUserTypeInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectUserTypeInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectUserTypeInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectUserTypeInfo obj = null;
 		if(baseObj instanceof EffectUserTypeInfo)
		{
			obj = (EffectUserTypeInfo)baseObj;
		} else {
			obj = new EffectUserTypeInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectUserTypeInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
