package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderQueueInvocationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderQueueInvocation emptyInstance = new RenderQueueInvocation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
