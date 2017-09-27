package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlaslayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlaslayerfactory emptyInstance = new Evlaslayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
