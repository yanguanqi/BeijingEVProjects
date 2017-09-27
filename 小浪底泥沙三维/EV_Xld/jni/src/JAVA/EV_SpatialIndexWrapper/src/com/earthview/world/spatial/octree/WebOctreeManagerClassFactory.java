package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebOctreeManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebOctreeManager emptyInstance = new WebOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
