package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionCreateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceOptionCreate emptyInstance = new DataSourceOptionCreate(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
