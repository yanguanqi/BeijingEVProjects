package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodStrategyManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodStrategyManager emptyInstance = new LodStrategyManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
