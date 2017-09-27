package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class AllocatedObject extends com.earthview.world.core.BaseObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CAllocatedObject", new AllocatedObjectClassFactory());
	}

	public AllocatedObject() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CAllocatedObject", null);
	}

	public AllocatedObject(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public AllocatedObject(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static AllocatedObject fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		AllocatedObject obj = null;
 		if(baseObj instanceof AllocatedObject)
		{
			obj = (AllocatedObject)baseObj;
		} else {
			obj = new AllocatedObject(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CAllocatedObject");
			obj.increaseCast();
		}

		return obj;
	}
}
