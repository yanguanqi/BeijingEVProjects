package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheProcessInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CacheProcessInfo emptyInstance = new CacheProcessInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
