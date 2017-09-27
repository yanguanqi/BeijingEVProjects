package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeRaySceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreeRaySceneQuery emptyInstance = new OctreeRaySceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
