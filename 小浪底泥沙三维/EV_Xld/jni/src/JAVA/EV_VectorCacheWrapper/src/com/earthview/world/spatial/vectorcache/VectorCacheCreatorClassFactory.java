package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorCacheCreatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorCacheCreator emptyInstance = new VectorCacheCreator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
