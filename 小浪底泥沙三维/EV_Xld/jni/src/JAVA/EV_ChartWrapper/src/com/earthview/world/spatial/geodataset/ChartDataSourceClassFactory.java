package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartDataSource emptyInstance = new ChartDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
