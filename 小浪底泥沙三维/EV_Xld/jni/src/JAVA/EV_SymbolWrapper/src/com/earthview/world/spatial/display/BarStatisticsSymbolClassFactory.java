package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BarStatisticsSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BarStatisticsSymbol emptyInstance = new BarStatisticsSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
