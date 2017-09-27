package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DefaultWorkQueueBaseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultWorkQueueBase emptyInstance = new DefaultWorkQueueBase(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
