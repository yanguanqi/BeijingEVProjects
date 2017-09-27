package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipticChordRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipticChordRing emptyInstance = new EllipticChordRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
