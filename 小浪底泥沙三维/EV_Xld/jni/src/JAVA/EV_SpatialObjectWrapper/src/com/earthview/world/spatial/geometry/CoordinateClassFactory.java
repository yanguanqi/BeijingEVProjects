package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CoordinateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Coordinate emptyInstance = new Coordinate(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
