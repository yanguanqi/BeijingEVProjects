package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class Condition extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CCondition", new ConditionClassFactory());
	}

	public Condition() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CCondition", null);
	}

	native private void ev_wait_CMutex(long pNativeObject, long mtx);
	public void ev_wait(com.earthview.world.core.Mutex mtx)
	{
		long mtxParamValue = mtx.nativeObject.pointer;
		ev_wait_CMutex(this.nativeObject.pointer, mtxParamValue);
	}
	native private void notify_one_void(long pNativeObject);
	public void notify_one()
	{
		notify_one_void(this.nativeObject.pointer);
	}
	native private void notify_all_void(long pNativeObject);
	public void notify_all()
	{
		notify_all_void(this.nativeObject.pointer);
	}
	public Condition(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Condition(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static Condition fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Condition obj = null;
 		if(baseObj instanceof Condition)
		{
			obj = (Condition)baseObj;
		} else {
			obj = new Condition(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CCondition");
			obj.increaseCast();
		}

		return obj;
	}
}
