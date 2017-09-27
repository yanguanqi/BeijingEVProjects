package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartFeatureIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartFeatureIterator emptyInstance = new ChartFeatureIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
