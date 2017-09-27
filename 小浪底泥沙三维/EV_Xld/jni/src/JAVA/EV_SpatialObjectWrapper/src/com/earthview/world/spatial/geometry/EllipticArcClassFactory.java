package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipticArcClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipticArc emptyInstance = new EllipticArc(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
