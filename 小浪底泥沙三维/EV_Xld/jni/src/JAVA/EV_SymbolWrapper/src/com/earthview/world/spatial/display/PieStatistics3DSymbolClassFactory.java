package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PieStatistics3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PieStatistics3DSymbol emptyInstance = new PieStatistics3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
