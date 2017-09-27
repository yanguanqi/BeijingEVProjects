package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityDatasetIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityDatasetIterator emptyInstance = new EntityDatasetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
