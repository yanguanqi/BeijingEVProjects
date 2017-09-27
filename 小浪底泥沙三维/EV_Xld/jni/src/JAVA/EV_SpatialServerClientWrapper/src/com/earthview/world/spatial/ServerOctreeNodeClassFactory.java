package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerOctreeNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerOctreeNode emptyInstance = new ServerOctreeNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
