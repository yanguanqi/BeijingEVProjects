package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicPixelLodStrategyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicPixelLodStrategy emptyInstance = new DynamicPixelLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
