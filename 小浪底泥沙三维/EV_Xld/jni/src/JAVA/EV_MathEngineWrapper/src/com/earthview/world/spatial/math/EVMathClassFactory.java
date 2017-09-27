package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EVMathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EVMath emptyInstance = new EVMath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
