package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Billboard3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Billboard3DSymbol emptyInstance = new Billboard3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
