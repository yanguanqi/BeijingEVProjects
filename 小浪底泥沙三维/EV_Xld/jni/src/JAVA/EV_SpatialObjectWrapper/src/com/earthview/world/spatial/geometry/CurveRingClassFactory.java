package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CurveRingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CurveRing emptyInstance = new CurveRing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
