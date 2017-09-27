package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Octree emptyInstance = new Octree(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
