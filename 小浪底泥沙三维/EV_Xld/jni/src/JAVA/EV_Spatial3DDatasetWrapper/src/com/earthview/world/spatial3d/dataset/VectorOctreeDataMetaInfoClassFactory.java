package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeDataMetaInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorOctreeDataMetaInfo emptyInstance = new VectorOctreeDataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
