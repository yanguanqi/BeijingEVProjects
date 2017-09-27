package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartQueryFilterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartQueryFilter emptyInstance = new ChartQueryFilter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
