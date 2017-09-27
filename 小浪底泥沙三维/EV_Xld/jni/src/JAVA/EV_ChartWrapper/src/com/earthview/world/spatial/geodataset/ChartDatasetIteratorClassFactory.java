package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartDatasetIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartDatasetIterator emptyInstance = new ChartDatasetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
