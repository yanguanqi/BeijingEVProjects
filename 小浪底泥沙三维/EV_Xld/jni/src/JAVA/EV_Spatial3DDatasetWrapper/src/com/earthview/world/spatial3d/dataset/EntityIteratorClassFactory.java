package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityIterator emptyInstance = new EntityIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
