package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RealListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RealList emptyInstance = new RealList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
