package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicModelObjectManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicModelObjectManager emptyInstance = new DynamicModelObjectManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
