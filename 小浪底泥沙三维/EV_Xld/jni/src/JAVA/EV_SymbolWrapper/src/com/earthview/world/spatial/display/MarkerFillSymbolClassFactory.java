package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MarkerFillSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MarkerFillSymbol emptyInstance = new MarkerFillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
