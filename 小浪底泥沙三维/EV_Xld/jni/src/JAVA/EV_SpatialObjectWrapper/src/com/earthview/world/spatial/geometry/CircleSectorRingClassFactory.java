package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleSectorRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CircleSectorRing emptyInstance = new CircleSectorRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
