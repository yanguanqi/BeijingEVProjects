package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderQueueGroupClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderQueueGroup emptyInstance = new RenderQueueGroup(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
