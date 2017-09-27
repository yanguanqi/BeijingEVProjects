package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorInstancesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositorInstances emptyInstance = new CompositorInstances(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
