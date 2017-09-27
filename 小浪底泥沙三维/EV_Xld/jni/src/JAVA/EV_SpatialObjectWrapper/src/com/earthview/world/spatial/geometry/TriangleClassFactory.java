package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TriangleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Triangle emptyInstance = new Triangle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
