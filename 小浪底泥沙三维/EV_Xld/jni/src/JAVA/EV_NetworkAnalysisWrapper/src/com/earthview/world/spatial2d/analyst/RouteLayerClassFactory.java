package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RouteLayer emptyInstance = new RouteLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
