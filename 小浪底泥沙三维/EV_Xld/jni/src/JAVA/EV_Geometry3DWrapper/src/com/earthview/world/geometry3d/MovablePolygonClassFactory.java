package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovablePolygonClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovablePolygon emptyInstance = new MovablePolygon(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
