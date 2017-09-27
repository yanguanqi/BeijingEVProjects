package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleObjectsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VisibleObjects emptyInstance = new VisibleObjects(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
