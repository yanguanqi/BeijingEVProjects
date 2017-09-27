package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BaseOctreeManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BaseOctreeManager emptyInstance = new BaseOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
