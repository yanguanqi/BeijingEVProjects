package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositorPtr emptyInstance = new CompositorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
