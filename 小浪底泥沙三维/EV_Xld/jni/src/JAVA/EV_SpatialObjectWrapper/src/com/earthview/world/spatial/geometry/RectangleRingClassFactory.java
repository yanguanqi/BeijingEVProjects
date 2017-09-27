package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RectangleRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RectangleRing emptyInstance = new RectangleRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
