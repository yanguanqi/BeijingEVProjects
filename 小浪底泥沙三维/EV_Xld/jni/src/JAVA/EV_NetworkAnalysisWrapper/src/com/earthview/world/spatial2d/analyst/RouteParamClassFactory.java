package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RouteParam emptyInstance = new RouteParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
