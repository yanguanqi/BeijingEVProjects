package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheStrategyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CacheStrategy emptyInstance = new CacheStrategy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
