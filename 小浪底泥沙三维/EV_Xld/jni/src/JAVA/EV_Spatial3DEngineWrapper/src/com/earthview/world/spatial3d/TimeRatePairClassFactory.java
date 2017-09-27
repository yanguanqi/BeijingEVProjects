package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TimeRatePairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TimeRatePair emptyInstance = new TimeRatePair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
