package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UserObjectBindings extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Graphic::CUserObjectBindings", new UserObjectBindingsClassFactory());
	}

	public UserObjectBindings() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CUserObjectBindings", null);
	}

	native private void clear_void(long pNativeObject);
	public void clear()
	{
		clear_void(this.nativeObject.pointer);
	}
	public UserObjectBindings(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public UserObjectBindings(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static UserObjectBindings fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		UserObjectBindings obj = null;
 		if(baseObj instanceof UserObjectBindings)
		{
			obj = (UserObjectBindings)baseObj;
		} else {
			obj = new UserObjectBindings(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CUserObjectBindings");
			obj.increaseCast();
		}

		return obj;
	}
}
