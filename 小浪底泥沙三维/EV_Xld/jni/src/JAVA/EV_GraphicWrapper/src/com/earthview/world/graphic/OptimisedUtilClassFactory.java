package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OptimisedUtilClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OptimisedUtil emptyInstance = new OptimisedUtil(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
