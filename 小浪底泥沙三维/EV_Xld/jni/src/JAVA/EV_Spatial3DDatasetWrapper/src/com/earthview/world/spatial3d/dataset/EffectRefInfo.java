package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 特效资源关系类
 */
public class EffectRefInfo extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectRefInfo", new EffectRefInfoClassFactory());
	}

	/**
	 * 构造函数
	 * @param  
	 */
	public EffectRefInfo() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CEffectRefInfo", null);
	}

	native private long getEffectRefID_void(long pNativeObject);
	/**
	 * 返回特效RefID
	 * @param  
	 * @return 特效RefID
	 */
	public long getEffectRefID()
	{
		long returnValue = getEffectRefID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEffectRefID_ev_uint32(long pNativeObject, long val);
	/**
	 * 设置特效Ref资源ID
	 * @param val 特效RefID
	 */
	public void setEffectRefID(long val)
	{
		long valParamValue = val;
		setEffectRefID_ev_uint32(this.nativeObject.pointer, valParamValue);
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
	native private long getResourceID_void(long pNativeObject);
	/**
	 * 返回资源ID
	 * @param  
	 * @return 资源ID
	 */
	public long getResourceID()
	{
		long returnValue = getResourceID_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setResourceID_ev_uint32(long pNativeObject, long val);
	/**
	 * 设置资源ID
	 * @param val 资源ID
	 */
	public void setResourceID(long val)
	{
		long valParamValue = val;
		setResourceID_ev_uint32(this.nativeObject.pointer, valParamValue);
	}
	public EffectRefInfo(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public EffectRefInfo(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static EffectRefInfo fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		EffectRefInfo obj = null;
 		if(baseObj instanceof EffectRefInfo)
		{
			obj = (EffectRefInfo)baseObj;
		} else {
			obj = new EffectRefInfo(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CEffectRefInfo");
			obj.increaseCast();
		}

		return obj;
	}
}
