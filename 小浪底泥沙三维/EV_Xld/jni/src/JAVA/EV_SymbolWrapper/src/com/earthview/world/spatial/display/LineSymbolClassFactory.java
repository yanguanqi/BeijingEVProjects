package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LineSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LineSymbol emptyInstance = new LineSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
