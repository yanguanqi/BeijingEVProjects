package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CircleRing emptyInstance = new CircleRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
