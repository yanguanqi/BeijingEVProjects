package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiSymbol emptyInstance = new MultiSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
