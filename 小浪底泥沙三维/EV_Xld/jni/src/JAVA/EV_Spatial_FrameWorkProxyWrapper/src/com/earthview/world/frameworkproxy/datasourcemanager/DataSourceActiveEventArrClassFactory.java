package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceActiveEventArrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceActiveEventArr emptyInstance = new DataSourceActiveEventArr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
