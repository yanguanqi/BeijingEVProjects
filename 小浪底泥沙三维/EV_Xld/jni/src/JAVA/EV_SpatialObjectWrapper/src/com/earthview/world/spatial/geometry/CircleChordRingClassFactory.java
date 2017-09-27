package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CircleChordRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CircleChordRing emptyInstance = new CircleChordRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
