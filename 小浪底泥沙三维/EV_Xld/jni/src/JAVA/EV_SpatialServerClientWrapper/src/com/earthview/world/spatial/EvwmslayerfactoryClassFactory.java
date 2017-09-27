package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmslayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmslayerfactory emptyInstance = new Evwmslayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
