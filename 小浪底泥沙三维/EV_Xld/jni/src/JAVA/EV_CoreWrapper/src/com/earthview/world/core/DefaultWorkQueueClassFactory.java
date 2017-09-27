package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DefaultWorkQueueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultWorkQueue emptyInstance = new DefaultWorkQueue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
