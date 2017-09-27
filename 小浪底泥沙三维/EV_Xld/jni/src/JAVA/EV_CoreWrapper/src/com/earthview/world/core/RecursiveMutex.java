package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RecursiveMutex extends com.earthview.world.core.Mutex {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Core::CRecursiveMutex", new RecursiveMutexClassFactory());
	}

	public RecursiveMutex() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CRecursiveMutex", null);
	}

	public RecursiveMutex(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public RecursiveMutex(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static RecursiveMutex fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		RecursiveMutex obj = null;
 		if(baseObj instanceof RecursiveMutex)
		{
			obj = (RecursiveMutex)baseObj;
		} else {
			obj = new RecursiveMutex(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CRecursiveMutex");
			obj.increaseCast();
		}

		return obj;
	}
}
