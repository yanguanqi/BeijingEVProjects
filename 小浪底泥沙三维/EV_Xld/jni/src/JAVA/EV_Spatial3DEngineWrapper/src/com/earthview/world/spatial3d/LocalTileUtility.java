package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalTileUtility extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::CLocalTileUtility", new LocalTileUtilityClassFactory());
	}

	public LocalTileUtility() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("CLocalTileUtility", null);
	}

	public LocalTileUtility(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public LocalTileUtility(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static LocalTileUtility fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		LocalTileUtility obj = null;
 		if(baseObj instanceof LocalTileUtility)
		{
			obj = (LocalTileUtility)baseObj;
		} else {
			obj = new LocalTileUtility(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CLocalTileUtility");
			obj.increaseCast();
		}

		return obj;
	}
}
