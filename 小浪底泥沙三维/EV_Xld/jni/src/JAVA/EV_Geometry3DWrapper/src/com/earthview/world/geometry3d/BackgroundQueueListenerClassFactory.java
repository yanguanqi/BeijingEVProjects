package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BackgroundQueueListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BackgroundQueueListener emptyInstance = new BackgroundQueueListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
