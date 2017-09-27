package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TimeRateListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TimeRateList emptyInstance = new TimeRateList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
