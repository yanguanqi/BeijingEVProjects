package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Photo3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Photo3DSymbol emptyInstance = new Photo3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
