package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartDataset emptyInstance = new ChartDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
