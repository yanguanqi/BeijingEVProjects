package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartDataSourceFactory emptyInstance = new ChartDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
