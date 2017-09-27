package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StackedStatistics3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StackedStatistics3DSymbol emptyInstance = new StackedStatistics3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
