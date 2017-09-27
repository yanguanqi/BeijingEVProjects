package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleFillSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleFillSymbol emptyInstance = new SimpleFillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
