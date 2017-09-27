package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class WorkQueueChannelListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WorkQueueChannelListener emptyInstance = new WorkQueueChannelListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
