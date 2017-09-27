package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipticSectorRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipticSectorRing emptyInstance = new EllipticSectorRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
