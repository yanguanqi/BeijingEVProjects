package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class AllocatedObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AllocatedObject emptyInstance = new AllocatedObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
