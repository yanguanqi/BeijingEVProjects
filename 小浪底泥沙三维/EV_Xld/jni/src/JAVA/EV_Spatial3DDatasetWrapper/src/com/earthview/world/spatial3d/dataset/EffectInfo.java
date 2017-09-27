package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效表中的特效记录对象
 */
public class EffectInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectInfo", new EffectInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectInfo", null);
	}

	native private long getEffectID_void(long pNativeObject);
	/**
	 * 返回特效ID
	 * @param  
	 * @return 特效ID
	 */
	public long getEffectID()
	{
		long returnValue = getEffectID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEffectID_ev_uint32(long pNativeObject, long val);
	/**
	 * 设置特效ID
	 * @param val 特效ID
	 */
	public void setEffectID(long val)
	{
		long valParamValue = val;
		setEffectID_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	native private String getName_void(long pNativeObject);
	/**
	 * 返回特效名字
	 * @param  
	 * @return 特效名字
	 */
	public String getName()
	{
		String returnValue = getName_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setName_EVString(long pNativeObject, String val);
	/**
	 * 设置特效名字
	 * @param val 特效名字
	 */
	public void setName(String val)
	{
		String valParamValue = val;
		setName_EVString(this.nativeObject.pointer, valParamValue);
	}
	native private int getType_void(long pNativeObject);
	/**
	 * 返回特效类型
	 * @param  
	 * @return 特效类型
	 */
	public com.earthview.world.spatial3d.dataset.EffectType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial3d.dataset.EffectType.toEnum(returnValue);
	}
	native private void setType_EffectType(long pNativeObject, int val);
	/**
	 * 设置特效类型
	 * @param val 特效类型
	 */
	public void setType(com.earthview.world.spatial3d.dataset.EffectType val)
	{
		int valParamValue = val.getValue();
		setType_EffectType(this.nativeObject.pointer, valParamValue);
	}
	native private String getUserType_void(long pNativeObject);
	/**
	 * 返回用户自定义特效分类编码
	 * @param  
	 * @return 特效分类编码
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
	native private String getContext_void(long pNativeObject);
	/**
	 * 返回特效内容信息
	 * @param  
	 * @return 内容信息
	 */
	public String getContext()
	{
		String returnValue = getContext_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setContext_EVString(long pNativeObject, String val);
	/**
	 * 设置特效内容信息
	 * @param val 内容信息
	 */
	public void setContext(String val)
	{
		String valParamValue = val;
		setContext_EVString(this.nativeObject.pointer, valParamValue);
	}
	public EffectInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectInfo obj = null;
 		if(baseObj instanceof EffectInfo)
		{
			obj = (EffectInfo)baseObj;
		} else {
			obj = new EffectInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
