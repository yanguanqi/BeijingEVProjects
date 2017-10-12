package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheFileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CacheFile emptyInstance = new CacheFile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
