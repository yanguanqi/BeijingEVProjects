package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PieStatisticsSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PieStatisticsSymbol emptyInstance = new PieStatisticsSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
