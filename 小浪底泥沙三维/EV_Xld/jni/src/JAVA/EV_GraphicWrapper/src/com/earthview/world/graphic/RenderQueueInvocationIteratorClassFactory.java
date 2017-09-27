package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderQueueInvocationIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderQueueInvocationIterator emptyInstance = new RenderQueueInvocationIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
