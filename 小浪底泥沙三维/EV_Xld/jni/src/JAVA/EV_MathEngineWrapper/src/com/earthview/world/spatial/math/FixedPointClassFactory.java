package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FixedPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FixedPoint emptyInstance = new FixedPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
