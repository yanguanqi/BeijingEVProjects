package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TimeRatePairListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TimeRatePairList emptyInstance = new TimeRatePairList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
