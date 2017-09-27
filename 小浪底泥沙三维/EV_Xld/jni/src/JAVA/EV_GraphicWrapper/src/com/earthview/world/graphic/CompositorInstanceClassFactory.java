package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompositorInstanceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompositorInstance emptyInstance = new CompositorInstance(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
