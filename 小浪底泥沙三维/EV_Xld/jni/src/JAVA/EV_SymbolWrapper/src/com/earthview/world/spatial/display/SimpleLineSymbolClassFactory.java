package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleLineSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleLineSymbol emptyInstance = new SimpleLineSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
