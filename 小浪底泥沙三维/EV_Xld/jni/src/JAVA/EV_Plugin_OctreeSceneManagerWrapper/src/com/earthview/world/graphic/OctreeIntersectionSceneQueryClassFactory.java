package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeIntersectionSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreeIntersectionSceneQuery emptyInstance = new OctreeIntersectionSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
