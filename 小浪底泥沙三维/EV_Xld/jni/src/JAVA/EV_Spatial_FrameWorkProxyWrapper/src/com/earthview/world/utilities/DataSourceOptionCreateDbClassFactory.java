package com.earthview.world.utilities;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceOptionCreateDbClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceOptionCreateDb emptyInstance = new DataSourceOptionCreateDb(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
