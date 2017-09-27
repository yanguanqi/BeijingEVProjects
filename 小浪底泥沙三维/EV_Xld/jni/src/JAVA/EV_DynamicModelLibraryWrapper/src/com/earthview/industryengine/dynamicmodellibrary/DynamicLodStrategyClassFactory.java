package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicLodStrategyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicLodStrategy emptyInstance = new DynamicLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
