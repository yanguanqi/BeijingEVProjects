package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicDistanceLodStrategyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicDistanceLodStrategy emptyInstance = new DynamicDistanceLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
