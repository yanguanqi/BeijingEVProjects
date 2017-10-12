package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.*;
import com.earthview.world.core.*;

public class DemCacheReaderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DemCacheReader emptyInstance = new DemCacheReader(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
