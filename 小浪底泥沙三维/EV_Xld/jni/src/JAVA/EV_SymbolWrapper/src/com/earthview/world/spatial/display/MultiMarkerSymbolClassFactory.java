package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiMarkerSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiMarkerSymbol emptyInstance = new MultiMarkerSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
