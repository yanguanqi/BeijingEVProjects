package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderQueueInvocationListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderQueueInvocationList emptyInstance = new RenderQueueInvocationList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
