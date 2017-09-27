package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorInstanceIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositorInstanceIterator emptyInstance = new CompositorInstanceIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
