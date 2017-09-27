package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BilBuilderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BilBuilder emptyInstance = new BilBuilder(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
