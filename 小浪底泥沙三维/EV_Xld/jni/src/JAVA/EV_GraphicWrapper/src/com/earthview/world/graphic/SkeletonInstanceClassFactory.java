package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkeletonInstanceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SkeletonInstance emptyInstance = new SkeletonInstance(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
