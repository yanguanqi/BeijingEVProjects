package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RouteLayerFactory emptyInstance = new RouteLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
