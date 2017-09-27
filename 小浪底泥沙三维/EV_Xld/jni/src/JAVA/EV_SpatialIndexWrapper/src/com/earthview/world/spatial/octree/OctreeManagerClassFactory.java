package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreeManager emptyInstance = new OctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
