package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeCachePublisherClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorOctreeCachePublisher emptyInstance = new VectorOctreeCachePublisher(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
