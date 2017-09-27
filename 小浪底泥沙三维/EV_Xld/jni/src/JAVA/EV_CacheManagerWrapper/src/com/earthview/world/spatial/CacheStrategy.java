package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheStrategy extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CacheStrategy", new CacheStrategyClassFactory());
	}

	public CacheStrategy() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CacheStrategy", null);
	}

	native private int getType_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public com.earthview.world.spatial.CacheBaseType getType()
	{
		int returnValue = getType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.CacheBaseType.toEnum(returnValue);
	}
	native private void setType_CacheBaseType(long pNativeObject, int type);
	/**
	 * 
	 * @param  
	 */
	public void setType(com.earthview.world.spatial.CacheBaseType type)
	{
		int typeParamValue = type.getValue();
		setType_CacheBaseType(this.nativeObject.pointer, typeParamValue);
	}
	native private int getLimitedValue_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public int getLimitedValue()
	{
		int returnValue = getLimitedValue_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setLimitedValue_ev_int32(long pNativeObject, int limitValue);
	/**
	 * 
	 * @param  
	 */
	public void setLimitedValue(int limitValue)
	{
		int limitValueParamValue = limitValue;
		setLimitedValue_ev_int32(this.nativeObject.pointer, limitValueParamValue);
	}
	native private boolean getEnabled_void(long pNativeObject);
	/**
	 * 
	 * @param  
	 */
	public boolean getEnabled()
	{
		boolean returnValue = getEnabled_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setEnabled_ev_bool(long pNativeObject, boolean enable);
	/**
	 * 
	 * @param  
	 */
	public void setEnabled(boolean enable)
	{
		boolean enableParamValue = enable;
		setEnabled_ev_bool(this.nativeObject.pointer, enableParamValue);
	}
	public CacheStrategy(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public CacheStrategy(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static CacheStrategy fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		CacheStrategy obj = null;
 		if(baseObj instanceof CacheStrategy)
		{
			obj = (CacheStrategy)baseObj;
		} else {
			obj = new CacheStrategy(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CacheStrategy");
			obj.increaseCast();
		}

		return obj;
	}
}
