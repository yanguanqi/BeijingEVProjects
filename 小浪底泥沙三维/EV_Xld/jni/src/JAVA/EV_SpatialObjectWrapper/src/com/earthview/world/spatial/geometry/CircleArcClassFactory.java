package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleArcClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CircleArc emptyInstance = new CircleArc(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
