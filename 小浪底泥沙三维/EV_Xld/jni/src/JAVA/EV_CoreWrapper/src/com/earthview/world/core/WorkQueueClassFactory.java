package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class WorkQueueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WorkQueue emptyInstance = new WorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
