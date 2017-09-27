package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MarkerSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MarkerSymbol emptyInstance = new MarkerSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
