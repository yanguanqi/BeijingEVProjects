package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Statistics3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Statistics3DSymbol emptyInstance = new Statistics3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
