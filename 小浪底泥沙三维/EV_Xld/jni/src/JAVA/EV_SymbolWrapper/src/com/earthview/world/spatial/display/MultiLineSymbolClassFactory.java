package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiLineSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiLineSymbol emptyInstance = new MultiLineSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
