package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FillSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FillSymbol emptyInstance = new FillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
