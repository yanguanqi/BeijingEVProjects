package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheDatasetDirClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CacheDatasetDir emptyInstance = new CacheDatasetDir(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
