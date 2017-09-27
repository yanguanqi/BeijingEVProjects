package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovablePointCollectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovablePointCollection emptyInstance = new MovablePointCollection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
