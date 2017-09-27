package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorOctreeDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorOctreeDataset emptyInstance = new VectorOctreeDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
