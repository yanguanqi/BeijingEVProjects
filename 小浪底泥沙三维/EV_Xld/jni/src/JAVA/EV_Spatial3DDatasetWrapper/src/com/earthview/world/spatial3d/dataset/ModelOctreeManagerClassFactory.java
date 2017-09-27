package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelOctreeManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelOctreeManager emptyInstance = new ModelOctreeManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
