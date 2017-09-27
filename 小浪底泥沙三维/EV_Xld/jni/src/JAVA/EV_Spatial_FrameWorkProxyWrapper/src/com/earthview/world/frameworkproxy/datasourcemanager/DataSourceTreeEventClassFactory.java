package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceTreeEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceTreeEvent emptyInstance = new DataSourceTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
