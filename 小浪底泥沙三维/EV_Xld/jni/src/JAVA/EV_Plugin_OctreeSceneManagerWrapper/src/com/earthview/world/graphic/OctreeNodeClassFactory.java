package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreeNode emptyInstance = new OctreeNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
