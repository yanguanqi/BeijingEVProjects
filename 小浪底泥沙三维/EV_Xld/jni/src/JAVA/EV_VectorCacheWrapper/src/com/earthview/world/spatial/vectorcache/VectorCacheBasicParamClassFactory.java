package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorCacheBasicParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorCacheBasicParam emptyInstance = new VectorCacheBasicParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
