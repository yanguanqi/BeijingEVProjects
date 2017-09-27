package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class BackgroundQueueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BackgroundQueue emptyInstance = new BackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
