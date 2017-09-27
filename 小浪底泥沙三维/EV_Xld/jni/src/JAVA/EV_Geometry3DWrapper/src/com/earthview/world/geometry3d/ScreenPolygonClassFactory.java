package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenPolygonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenPolygon emptyInstance = new ScreenPolygon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
