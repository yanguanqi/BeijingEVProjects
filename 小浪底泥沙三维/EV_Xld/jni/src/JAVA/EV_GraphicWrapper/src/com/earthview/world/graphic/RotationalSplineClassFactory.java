package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationalSplineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationalSpline emptyInstance = new RotationalSpline(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
