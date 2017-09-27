package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Guid extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::GUID", new GuidClassFactory());
	}

	public Guid() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("GUID", null);
	}

	native private static String NewGuid_void();
	/**
	 * 获取一个新的guid
	 * @param  
	 */
	public static String NewGuid()
	{
		String returnValue = NewGuid_void();
		return returnValue;
	}
	native private static String getUserGuid_void();
	/**
	 * 获取用户guid
	 * @param  
	 */
	public static String getUserGuid()
	{
		String returnValue = getUserGuid_void();
		return returnValue;
	}
	native private static String getUserGuidWithUserName_void();
	/**
	 * 获取带有用户名称的guid
	 * @param  
	 */
	public static String getUserGuidWithUserName()
	{
		String returnValue = getUserGuidWithUserName_void();
		return returnValue;
	}
	public Guid(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Guid(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Guid fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Guid obj = null;
 		if(baseObj instanceof Guid)
		{
			obj = (Guid)baseObj;
		} else {
			obj = new Guid(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "GUID");
			obj.increaseCast();
		}

		return obj;
	}
}
