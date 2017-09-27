package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TriangleRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TriangleRing emptyInstance = new TriangleRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
