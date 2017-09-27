package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class StatisticsSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StatisticsSymbol emptyInstance = new StatisticsSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
