package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceEventObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceEventObject emptyInstance = new DataSourceEventObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
