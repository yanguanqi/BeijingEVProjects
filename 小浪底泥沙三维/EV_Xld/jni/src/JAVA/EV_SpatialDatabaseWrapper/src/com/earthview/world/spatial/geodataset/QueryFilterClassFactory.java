package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class QueryFilterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		QueryFilter emptyInstance = new QueryFilter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
