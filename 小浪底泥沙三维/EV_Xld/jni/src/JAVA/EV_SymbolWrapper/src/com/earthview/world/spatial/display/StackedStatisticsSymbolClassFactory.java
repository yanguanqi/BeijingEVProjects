package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StackedStatisticsSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StackedStatisticsSymbol emptyInstance = new StackedStatisticsSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
