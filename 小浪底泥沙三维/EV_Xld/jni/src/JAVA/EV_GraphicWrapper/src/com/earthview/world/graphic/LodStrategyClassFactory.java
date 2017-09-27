package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodStrategyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodStrategy emptyInstance = new LodStrategy(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
