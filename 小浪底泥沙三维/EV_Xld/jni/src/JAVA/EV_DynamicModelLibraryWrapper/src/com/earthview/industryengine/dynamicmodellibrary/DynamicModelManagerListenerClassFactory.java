package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicModelManagerListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicModelManagerListener emptyInstance = new DynamicModelManagerListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
