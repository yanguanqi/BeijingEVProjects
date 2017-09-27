package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteParamIClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RouteParamI emptyInstance = new RouteParamI(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
