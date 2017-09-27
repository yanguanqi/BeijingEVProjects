package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Model3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Model3DSymbol emptyInstance = new Model3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
