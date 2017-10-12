package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalDemDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalDemDataSourceFactory emptyInstance = new LocalDemDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
