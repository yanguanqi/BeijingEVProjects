package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmtslayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmtslayerfactory emptyInstance = new Evwmtslayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
