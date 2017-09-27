package com.earthview.world.spatial3d.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialCalculatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialCalculator emptyInstance = new SpatialCalculator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
