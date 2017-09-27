package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceURLStructArrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceURLStructArr emptyInstance = new DataSourceURLStructArr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
