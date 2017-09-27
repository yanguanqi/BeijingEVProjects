package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceServerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceServerFactory emptyInstance = new DataSourceServerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
