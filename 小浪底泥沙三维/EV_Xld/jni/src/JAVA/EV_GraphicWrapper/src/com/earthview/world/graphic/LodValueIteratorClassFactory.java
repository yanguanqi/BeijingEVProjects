package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodValueIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodValueIterator emptyInstance = new LodValueIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
