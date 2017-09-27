package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreePublishListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorOctreePublishListener emptyInstance = new VectorOctreePublishListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
