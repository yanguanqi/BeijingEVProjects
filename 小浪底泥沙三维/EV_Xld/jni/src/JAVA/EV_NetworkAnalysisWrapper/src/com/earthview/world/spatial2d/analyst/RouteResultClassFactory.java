package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RouteResult emptyInstance = new RouteResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
