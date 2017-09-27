package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BarStatistics3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BarStatistics3DSymbol emptyInstance = new BarStatistics3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
