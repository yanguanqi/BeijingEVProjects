package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkeletonPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SkeletonPtr emptyInstance = new SkeletonPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
