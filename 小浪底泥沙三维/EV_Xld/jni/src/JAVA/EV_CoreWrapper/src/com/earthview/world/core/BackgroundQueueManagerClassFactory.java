package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class BackgroundQueueManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BackgroundQueueManager emptyInstance = new BackgroundQueueManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
