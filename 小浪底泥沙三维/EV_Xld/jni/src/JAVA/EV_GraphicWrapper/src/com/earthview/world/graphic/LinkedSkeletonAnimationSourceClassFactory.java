package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinkedSkeletonAnimationSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LinkedSkeletonAnimationSource emptyInstance = new LinkedSkeletonAnimationSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
