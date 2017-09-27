package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtslayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtslayerfactory emptyInstance = new Wmtslayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
