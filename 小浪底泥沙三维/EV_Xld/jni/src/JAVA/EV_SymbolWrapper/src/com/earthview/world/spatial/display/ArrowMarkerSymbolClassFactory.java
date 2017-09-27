package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ArrowMarkerSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ArrowMarkerSymbol emptyInstance = new ArrowMarkerSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
