package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MathUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MathUtility emptyInstance = new MathUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
