package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicObjectEventManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicObjectEventManager emptyInstance = new DynamicObjectEventManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
