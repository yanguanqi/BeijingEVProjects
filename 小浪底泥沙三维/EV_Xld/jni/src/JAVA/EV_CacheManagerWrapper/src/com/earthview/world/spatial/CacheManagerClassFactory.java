package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CacheManager emptyInstance = new CacheManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
