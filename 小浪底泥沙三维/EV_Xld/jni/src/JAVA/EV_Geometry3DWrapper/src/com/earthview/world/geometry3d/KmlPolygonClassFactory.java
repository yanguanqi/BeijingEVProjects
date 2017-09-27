package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlPolygonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlPolygon emptyInstance = new KmlPolygon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
