package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipticArcRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipticArcRing emptyInstance = new EllipticArcRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
