package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceOption emptyInstance = new DataSourceOption(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
