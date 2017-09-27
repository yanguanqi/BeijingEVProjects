package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipseSpheriodClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipseSpheriod emptyInstance = new EllipseSpheriod(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
