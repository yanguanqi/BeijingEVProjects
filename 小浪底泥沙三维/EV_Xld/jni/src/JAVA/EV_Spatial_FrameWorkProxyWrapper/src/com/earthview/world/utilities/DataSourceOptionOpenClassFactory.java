package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionOpenClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceOptionOpen emptyInstance = new DataSourceOptionOpen(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
