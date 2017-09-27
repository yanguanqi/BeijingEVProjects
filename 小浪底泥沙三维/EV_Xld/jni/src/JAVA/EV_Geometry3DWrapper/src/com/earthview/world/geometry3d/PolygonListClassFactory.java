package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolygonListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PolygonList emptyInstance = new PolygonList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
