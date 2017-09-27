package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderTargetPriorityMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderTargetPriorityMap emptyInstance = new RenderTargetPriorityMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
