package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IntersectResPairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IntersectResPair emptyInstance = new IntersectResPair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
