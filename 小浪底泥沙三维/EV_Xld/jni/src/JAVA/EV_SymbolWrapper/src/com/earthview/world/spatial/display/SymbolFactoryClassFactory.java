package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SymbolFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SymbolFactory emptyInstance = new SymbolFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
