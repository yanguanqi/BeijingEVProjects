package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleSplineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleSpline emptyInstance = new SimpleSpline(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
