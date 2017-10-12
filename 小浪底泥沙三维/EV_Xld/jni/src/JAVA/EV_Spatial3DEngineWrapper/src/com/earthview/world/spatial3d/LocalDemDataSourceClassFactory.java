package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalDemDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalDemDataSource emptyInstance = new LocalDemDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
