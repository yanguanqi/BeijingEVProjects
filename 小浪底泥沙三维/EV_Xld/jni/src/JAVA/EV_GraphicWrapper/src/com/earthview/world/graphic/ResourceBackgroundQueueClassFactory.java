package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceBackgroundQueueClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceBackgroundQueue emptyInstance = new ResourceBackgroundQueue(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
