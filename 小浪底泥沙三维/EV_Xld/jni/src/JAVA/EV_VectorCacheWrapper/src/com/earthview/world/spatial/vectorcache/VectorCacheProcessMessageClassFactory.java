package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorCacheProcessMessageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorCacheProcessMessage emptyInstance = new VectorCacheProcessMessage(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
