package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleArcRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CircleArcRing emptyInstance = new CircleArcRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
