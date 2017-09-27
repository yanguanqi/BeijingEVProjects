package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceFactoryEnumeratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceFactoryEnumerator emptyInstance = new DataSourceFactoryEnumerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
