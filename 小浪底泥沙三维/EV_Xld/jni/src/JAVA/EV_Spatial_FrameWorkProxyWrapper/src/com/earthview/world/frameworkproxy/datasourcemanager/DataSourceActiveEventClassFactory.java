package com.earthview.world.frameworkproxy.datasourcemanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceActiveEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceActiveEvent emptyInstance = new DataSourceActiveEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
