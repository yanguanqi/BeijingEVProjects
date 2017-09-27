package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DistanceLodStrategyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DistanceLodStrategy emptyInstance = new DistanceLodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
