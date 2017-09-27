package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatabaseDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatabaseDataSource emptyInstance = new DatabaseDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
