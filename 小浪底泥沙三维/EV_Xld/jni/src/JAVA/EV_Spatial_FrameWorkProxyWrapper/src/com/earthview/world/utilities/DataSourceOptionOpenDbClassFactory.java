package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionOpenDbClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceOptionOpenDb emptyInstance = new DataSourceOptionOpenDb(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
