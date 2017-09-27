package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IellipsespheriodClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iellipsespheriod emptyInstance = new Iellipsespheriod(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
