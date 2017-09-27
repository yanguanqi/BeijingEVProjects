package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SymbolToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SymbolTool emptyInstance = new SymbolTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
