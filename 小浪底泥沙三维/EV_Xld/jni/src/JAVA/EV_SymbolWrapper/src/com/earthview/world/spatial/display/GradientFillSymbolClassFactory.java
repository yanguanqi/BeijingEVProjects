package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GradientFillSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GradientFillSymbol emptyInstance = new GradientFillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
