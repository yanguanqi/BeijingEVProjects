package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeManager extends com.earthview.world.core.AllocatedObject {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Octree::COctreeManager", new OctreeManagerClassFactory());
	}

	/**
	 * 
	 * @param  
	 */
	public OctreeManager() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("COctreeManager", null);
	}

	public OctreeManager(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public OctreeManager(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	
	
	
	public static OctreeManager fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		OctreeManager obj = null;
 		if(baseObj instanceof OctreeManager)
		{
			obj = (OctreeManager)baseObj;
		} else {
			obj = new OctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "COctreeManager");
			obj.increaseCast();
		}

		return obj;
	}
}
