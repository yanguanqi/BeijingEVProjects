package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleLine3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleLine3DSymbol emptyInstance = new SimpleLine3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
