package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Icon3DSymbolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Icon3DSymbol emptyInstance = new Icon3DSymbol(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
