package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SkeletonSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SkeletonSerializer emptyInstance = new SkeletonSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
