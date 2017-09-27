package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceManager emptyInstance = new DataSourceManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
