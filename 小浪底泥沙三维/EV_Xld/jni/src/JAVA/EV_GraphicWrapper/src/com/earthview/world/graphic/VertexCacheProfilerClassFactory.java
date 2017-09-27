package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexCacheProfilerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VertexCacheProfiler emptyInstance = new VertexCacheProfiler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
