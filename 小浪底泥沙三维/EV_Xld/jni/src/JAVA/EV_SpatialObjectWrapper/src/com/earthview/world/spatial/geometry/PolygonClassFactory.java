package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolygonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Polygon emptyInstance = new Polygon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
