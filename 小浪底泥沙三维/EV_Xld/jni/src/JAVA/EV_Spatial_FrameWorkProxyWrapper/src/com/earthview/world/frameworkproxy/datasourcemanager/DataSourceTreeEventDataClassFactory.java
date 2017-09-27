package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceTreeEventDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceTreeEventData emptyInstance = new DataSourceTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
